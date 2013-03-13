/*
 * Software License Agreement (BSD License)
 *
 *  Technical Aspects of Multimodal Systems (TAMS) - http://tams-www.informatik.uni-hamburg.de/
 *
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of TAMS, nor the names of its contributors may
 *     be used to endorse or promote products derived from this software
 *     without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 * Author : Junhao Xiao
 * Email  : junhao.xiao@ieee.org, xiao@informatik.uni-hamburg.de
 *
 */

#ifndef INTENSITY_HISTOGRAM_H_
#define INTENSITY_HISTOGRAM_H_

//STL
#include <vector>
//OpenCV
#include <opencv/highgui.h>
#include <opencv/cv.hpp>
//tams
#include "common/planar_patch.h"

namespace tams
{
  class PlanarPatchIntensityHistogram
  {
    public:
      /** \brief Empty constructor. */
      PlanarPatchIntensityHistogram();

      /** \brief Empty deconstructor. */
      ~PlanarPatchIntensityHistogram();

      /** \brief Get the intensity histogram. */
      void getHistogram(std::vector<double> &histogram)
      {
        if (!histogram.empty ())
          histogram.clear ();

        histogram = histogram_;
      }

      /** */
      void getNormalizedHistogram(std::vector<double> &normalized_histogram)
      {
        if (!normalized_histogram.empty ())
          normalized_histogram.clear ();

        normalized_histogram = normalized_histogram_;
      }

    private:
      cv::Mat *img;
      std::vector<double> histogram_;
      std::vector<double> normalized_histogram_;

  };
}
#endif // INTENSITY_HISTOGRAM_H

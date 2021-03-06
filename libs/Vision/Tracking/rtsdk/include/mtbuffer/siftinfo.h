#pragma once

#include <vector>
#include "cameraparameter.h"
#include "framematch.h"
#include "../utility/floattype.h"

extern "C" {
#include "../klt/pyramid.h"
}

//////////////////////////////////////////////////////////////////////////
// libraries.
#include "../klt/kltlib.h"
#include "boostthreadlib.h"
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
/// \ingroup Buffer
/// \brief Sift feature information structure.
///
/// The detected sift feature information.
//////////////////////////////////////////////////////////////////////////
class sift_info
{
public:
	sift_info()
	{
		_tracked = false;
		_PMSolved = false;
		_current_secne = -1;
	}
    
	~sift_info()
	{
	}

	//////////////////////////////////////////////////////////////////////////
	/// \brief Whether the frame is tracked.
	//////////////////////////////////////////////////////////////////////////
	bool _tracked;

	//////////////////////////////////////////////////////////////////////////
	/// \brief Whether the Projective Matrix has been solved.
	//////////////////////////////////////////////////////////////////////////
	bool _PMSolved;

	//////////////////////////////////////////////////////////////////////////
	/// \brief The tracked camera parameters. SOLVER_FLOAT is the float type for solver.
	//////////////////////////////////////////////////////////////////////////
	camera_parameter<SOLVER_FLOAT> camera;

	//////////////////////////////////////////////////////////////////////////
	/// \brief Point matches.
	//////////////////////////////////////////////////////////////////////////
	std::vector<frame_match> _matches;

	std::vector<int> _keyframes;

	int _current_secne;
};
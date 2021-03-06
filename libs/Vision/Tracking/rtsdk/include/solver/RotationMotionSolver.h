#pragma once

//////////////////////////////////////////////////////////////////////////
#include "../mtbuffer/videoframe.h"
#include "../mtbuffer/framesample.h"
//////////////////////////////////////////////////////////////////////////

#include "others/misc/dllexp.h"

#include "motionsolver.h"

//////////////////////////////////////////////////////////////////////////
/// \ingroup Solver
/// \brief The motion solver.
//////////////////////////////////////////////////////////////////////////
class DLL_EXPORT CRotationMotionSolver: public CMotionSolver
{
public:
	CRotationMotionSolver(videobuffer* inbuf, videobuffer* outbuf,
		resampler_buffer* r_inbuf, resampler_buffer* r_outbuf);

	CRotationMotionSolver();

	virtual ~CRotationMotionSolver();


	//////////////////////////////////////////////////////////////////////////
	virtual bool ComputePM(CVideoFrame &frame);
};

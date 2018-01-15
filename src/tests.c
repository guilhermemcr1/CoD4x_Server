#include "q_shared.h"
#include "qcommon.h"
#include "qcommon_io.h"
#include "msg.h"
#include "server.h"

extern byte* archivedEntityFields[];
/*
void MSG_TestDelta(snapshotInfo_t* snapInfo, int time, archivedEntity_t* baseline, archivedEntity_t *to, int refent)
{
	msg_t msg;
	byte databuf[0x20000];
	archivedEntity_t rto;
	memset(&rto, 0, sizeof(rto));

	MSG_Init(&msg, databuf, sizeof(databuf));

	msg.lastRefEntity = refent;

        if ( MSG_WriteDeltaArchivedEntity(snapInfo, &msg, time, baseline, to, 0) == 0)
	{
		return;
	}

	msg.lastRefEntity = refent;
	msg.bit = 0;
        int newnum = MSG_ReadEntityIndex(&msg, 10);

        MSG_ReadDeltaArchivedEntity( &msg, time, baseline, &rto, newnum);

	to->s.lerp.eFlags &= MASK_EFLAGS;

	int lc = MSG_WriteDelta_LastChangedField(&rto, to, &archivedEntityFields, 69);

	assert(msg.cursize == msg.readcount);
	assert(!msg.overflowed);

	bool equal = lc == -1;
	assert(equal);
}
*/

/*
void MSG_TestReadEntity()
{
	msg_t msg;
	byte databuf[0x20000];
	archivedEntity_t rto;
	archivedEntity_t baseline;
	memset(&rto, 0, sizeof(rto));
	memset(&baseline, 0, sizeof(baseline));

	byte* filedata;

	MSG_Init(&msg, databuf, sizeof(databuf));

	msg.lastRefEntity = 394;
	int len = FS_ReadFile("msg_dump.bin", (void**)&filedata);

	if(len > 0){
		MSG_WriteData(&msg, filedata, len);
	}else{
		Com_Printf(0,"Empty/Ivalid file\n");
		return;
	}


	msg.bit = 0;

        int newnum = MSG_ReadEntityIndex(&msg, 10);

        MSG_ReadDeltaArchivedEntity( &msg, 0, &baseline, &rto, newnum);

	Com_Printf(0,"Entity %d\n", newnum);

	assert(msg.cursize == msg.readcount);
	assert(!msg.overflowed);
}
*/
/*
void MSG_TestReadEntity()
{
	archivedEntity_t baseline;
	archivedEntity_t *to;
	snapshotInfo_t snapInfo;

	memset(&baseline, 0, sizeof(baseline));
	memset(&snapInfo, 0, sizeof(snapInfo));

	snapInfo.archived = true;

	int len = FS_ReadFile("entity_to.bin", (void**)&to);

	if(len < 1){
		Com_Printf(0,"Empty/Ivalid file\n");
		return;
	}

	MSG_TestDelta(&snapInfo, 0, &baseline, to, -1);

}

*/
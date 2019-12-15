#ifndef OPCBATCHDEF_H
#define OPCBATCHDEF_H


// OPC Batch Component Category Description
#define OPC_BATCHSERVER_CAT_DESC L"OPC Batch Server Version 1.0"

// Define the various BAtch Enumeration Sets
//
//   Custom Enumeration Set IDs start at 100
//   Custom Enumeration Values for any of the defined Enumeration
//     sets may be appended.  These custom enumeration values start
//     at 100.
//
//   The enumeration values and corresponding localized string 
//     representation are returned via the IOPCEnumerationSets
//     interface methods.


// OPC Batch Enumeration Sets
#define OPCB_ENUM_PHYS				0
#define OPCB_ENUM_PROC				1
#define OPCB_ENUM_STATE				2
#define OPCB_ENUM_MODE				3
#define OPCB_ENUM_PARAM				4


// OPC Batch Physical Model Level Enumeration
#define OPCB_PHYS_ENTERPRISE		0
#define OPCB_PHYS_SITE				1
#define OPCB_PHYS_AREA				2
#define OPCB_PHYS_PROCESSCELL		3
#define OPCB_PHYS_UNIT				4
#define OPCB_PHYS_EQUIPMENTMODULE	5
#define OPCB_PHYS_CONTROLMODULE		6
#define OPCB_PHYS_EPE				7

// OPC Batch Procedural Model Level Enumeration
#define OPCB_PROC_PROCEDURE			0
#define OPCB_PROC_UNITPROCEDURE		1
#define OPCB_PROC_OPERATION			2
#define OPCB_PROC_PHASE				3

// OPC Batch IEC 61512-1State Index Enumeration
#define OPCB_STATE_IDLE				0
#define OPCB_STATE_RUNNING			1
#define OPCB_STATE_COMPLETE			2
#define OPCB_STATE_PAUSING			3
#define OPCB_STATE_PAUSED			4
#define OPCB_STATE_HOLDING			5
#define OPCB_STATE_HELD				6
#define OPCB_STATE_RESTARTING		7
#define OPCB_STATE_STOPPING			8
#define OPCB_STATE_STOPPED			9
#define OPCB_STATE_ABORTING			10
#define OPCB_STATE_ABORTED			11
#define OPCB_STATE_UNKNOWN			12

// OPC Batch IEC 61512-1Mode Index Enumeration
#define OPCB_MODE_AUTOMATIC			0
#define OPCB_MODE_SEMIAUTOMATIC		1
#define OPCB_MODE_MANUAL			2
#define OPCB_MODE_UNKNOWN			3

// OPC Batch Parameter Type Enumeration
#define OPCB_PARAM_PROCESSINPUT		0
#define OPCB_PARAM_PROCESSPARAMETER	1
#define OPCB_PARAM_PROCESSOUTPUT	2

#endif
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00271f50; name: FUN_00271f50
 */


void FUN_00271f50(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
                    /* try { // try from 00271f94 to 00271f9b has its CatchHandler @ 0027221c */
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x70))(*(long **)PTR_DAT_047cbb08,param_1 + 6);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
                    /* try { // try from 00271fa4 to 00271fab has its CatchHandler @ 002721fc */
  auVar1 = FUN_0038dd60(1);
  *(undefined1 (*) [16])(param_1 + 0x12) = auVar1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 **)(param_1 + 0x26) = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined4 **)(param_1 + 0x34) = param_1 + 0x36;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 **)(param_1 + 0x42) = param_1 + 0x44;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0xffff;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x56] = 4;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x181) = 0;
  *(undefined8 *)((long)param_1 + 0x179) = 0;
                    /* try { // try from 00272058 to 0027205f has its CatchHandler @ 00272080 */
  (**(code **)(*DAT_047ee700 + 0x10))(DAT_047ee700,param_1);
  return;
}



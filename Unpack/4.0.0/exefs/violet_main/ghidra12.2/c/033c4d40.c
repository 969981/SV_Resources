/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033c4d40; name: FUN_033c4d40
 */


void FUN_033c4d40(float param_1,float *param_2,long param_3,long *param_4,undefined8 *param_5)

{
  char cVar1;
  float fVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  
  *(long **)(param_2 + 0xe8) = param_4;
  cVar1 = *(char *)(param_3 + 0x24);
  *param_2 = param_1;
  param_2[1] = 1.0 / param_1;
  fVar5 = 1.0;
  if (cVar1 != '\0') {
    fVar5 = 4.0;
  }
  param_2[2] = fVar5 * param_1;
  param_2[3] = 1.0 / (fVar5 * param_1);
  *(char *)(param_2 + 5) = cVar1;
  fVar5 = (float)NEON_fminnm(param_1 * 0.5,0x469c4000);
  param_2[4] = fVar5;
  uVar4 = *param_5;
  param_2[0xe7] = *(float *)(param_5 + 1);
  *(undefined8 *)(param_2 + 0xe5) = uVar4;
  if (((uint)uVar4 & 0xff | 0x10) != 0x90) {
    *(undefined1 *)(param_2 + 0xe5) = 0x80;
    *(undefined2 *)(param_2 + 0xe6) = 0x30;
  }
  fVar5 = *(float *)(param_3 + 0x18);
  param_2[0x9c] = fVar5;
  if (2 < (int)fVar5 - 1U) {
    fVar5 = 0.0;
  }
  plVar3 = (long *)(**(code **)(*param_4 + 0x10))(param_4);
  fVar2 = (float)(**(code **)(*plVar3 + 0xe0))();
  param_2[0xa0] = fVar2;
  param_2[0xe0] = fVar5;
  if (fVar5 == 4.2039e-45) {
    param_2[0xc4] = 0.0;
    param_2[0xc5] = 0.0;
    param_2[0xc0] = 0.63741463;
    param_2[0xc1] = 0.63741463;
    param_2[0xc2] = 0.63741463;
    param_2[0xc3] = 0.63741463;
    param_2[0xc6] = 0.0;
    param_2[199] = -0.3373453;
    param_2[0xcc] = 0.0;
    param_2[0xcd] = -0.3373453;
    param_2[0xce] = -0.108207285;
    param_2[0xcf] = -0.03670226;
    param_2[0xd0] = -1.1480863;
    param_2[0xd1] = -0.94870037;
    param_2[0xd2] = -0.863181;
    param_2[0xd3] = -0.8140605;
    param_2[0xd4] = 0.51157457;
    param_2[0xd5] = 0.6506824;
    param_2[0xd6] = 0.67456084;
    param_2[0xd7] = 0.66331327;
    param_2[0xd8] = 1.2719209;
    param_2[0xd9] = 1.3185973;
    param_2[0xda] = 1.2966111;
    param_2[0xdb] = 1.2546815;
    param_2[200] = 0.0;
    param_2[0xc9] = 0.0;
    param_2[0xdc] = -0.29918557;
    param_2[0xdd] = -0.3805404;
    param_2[0xca] = -0.3373453;
    param_2[0xcb] = -0.108207285;
    param_2[0xde] = -0.39450526;
    param_2[0xdf] = -0.3879273;
  }
  else if (fVar5 == 2.8026e-45) {
    param_2[0xb7] = 0.049999952;
    param_2[0xb8] = -0.995;
  }
  else if (fVar5 == 1.4013e-45) {
    memset(param_2 + 0xa4,0,0x48);
    param_2[0xa3] = -251.32742 / (float)(int)param_1 + 1.0;
  }
  FUN_033c6b68(param_2[2],*param_2 * 0.375,0,0x3f800000,param_2 + 0x34,3);
  FUN_033c6b68(param_2[2],*param_2 * 0.375,0,0x3f800000,param_2 + 0x58,3);
  FUN_033c6b68(param_2[2],*param_2 * 0.375,0,0x3f800000,param_2 + 0x7c,3);
  return;
}



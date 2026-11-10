/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349c2c4; name: FUN_0349c2c4
 */


void FUN_0349c2c4(float param_1,float param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long *plVar1;
  float local_38;
  float fStack_34;
  
  local_38 = *(float *)(param_3 + 0x3f8) * param_1 * DAT_047c3890;
  fStack_34 = DAT_047c3894 * param_2 * *(float *)(param_3 + 0x3fc);
  FUN_0349c38c();
  if (*(long *)(param_3 + 0xb0) != 0) {
    FUN_0349b838(param_3,param_4,param_5,param_6,&local_38);
  }
  plVar1 = *(long **)(param_3 + 0x3f0);
  if (*(char *)(param_3 + 0x471) == '\0') {
    (**(code **)(*plVar1 + 0x68))(local_38,fStack_34,plVar1,param_4);
  }
  else {
    (**(code **)(*plVar1 + 0x70))(local_38,fStack_34,plVar1,param_4,param_5,param_6);
  }
  return;
}



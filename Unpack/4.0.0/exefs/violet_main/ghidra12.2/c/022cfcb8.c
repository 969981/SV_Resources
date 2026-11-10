/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022cfcb8; name: FUN_022cfcb8
 */


undefined1  [16] FUN_022cfcb8(double param_1,double param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float local_1c;
  float fStack_18;
  undefined4 local_14;
  
  fStack_18 = (float)param_1;
  local_1c = (float)param_2;
  puVar1 = PTR_LAB_047de0c8;
  if (DAT_048463c0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_14 = param_4;
  fVar2 = (float)FUN_022d0b08(param_3,puVar1,0,&local_14,&fStack_18,&local_1c);
  auVar3._0_8_ = (double)fVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022d502c; name: FUN_022d502c
 */


undefined1  [16] FUN_022d502c(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = &LAB_02b81734;
  if (DAT_048463f8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_18 = param_3;
  local_14 = param_2;
  fVar2 = (float)FUN_022d72b0(param_1,puVar1,0,&local_14,&local_18);
  auVar3._0_8_ = (double)fVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



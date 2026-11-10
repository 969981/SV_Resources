/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025d7cc4; name: FUN_025d7cc4
 */


void FUN_025d7cc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_60 [64];
  
  puVar1 = PTR_LAB_047dffb0;
  if (DAT_048537c8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_025dacc8(auStack_60,param_2,puVar1,0);
  FUN_025dad60(param_1,auStack_60);
  FUN_00f43db0(auStack_60);
  return;
}



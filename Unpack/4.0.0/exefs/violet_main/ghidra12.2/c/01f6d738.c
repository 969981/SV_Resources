/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6d738; name: FUN_01f6d738
 */


long FUN_01f6d738(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_019b511c();
  uVar2 = FUN_01f6d84c(param_1);
  FUN_01f6d940(&DAT_0483a578,uVar2);
  lVar1 = 0;
  if (DAT_0483a578 != 0) {
    lVar1 = DAT_0483a578 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_0483a578;
}



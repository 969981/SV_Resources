/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008063a8; name: FUN_008063a8
 */


void FUN_008063a8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047d1720 + 0x50;
  param_1[-1] = (long)(PTR_DAT_047d1720 + 0x10);
  lVar2 = param_1[0x10];
  *param_1 = (long)puVar1;
  if (lVar2 != 0) {
    FUN_008010c0(lVar2);
    FUN_007bfaa0(lVar2);
    param_1[0x10] = 0;
  }
  FUN_007a53c8(param_1 + -1);
  return;
}



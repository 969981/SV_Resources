/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c3a5c; name: FUN_007c3a5c
 */


void FUN_007c3a5c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047d1070 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  if (*(long *)PTR_DAT_047d0fc0 != 0) {
    lVar2 = FUN_007c3d34(*(long *)PTR_DAT_047d0fc0,param_1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_007c2ba8(lVar2,param_1);
      return;
    }
  }
  return;
}



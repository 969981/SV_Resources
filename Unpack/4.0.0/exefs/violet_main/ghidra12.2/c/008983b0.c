/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008983b0; name: FUN_008983b0
 */


undefined8 FUN_008983b0(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 1 || *(int *)PTR_DAT_047d2288 < iVar1) {
    return 0;
  }
  return *(undefined8 *)(*param_1 + (long)(iVar1 + -1) * 8);
}



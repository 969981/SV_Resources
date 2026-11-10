/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f98fc; name: FUN_001f98fc
 */


undefined8 FUN_001f98fc(long param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = ((long)param_2 - (long)param_3) + (long)*(int *)(param_1 + 0xbc);
  iVar2 = (int)lVar1;
  if (lVar1 == iVar2) {
    *(int *)(param_1 + 0xbc) = iVar2;
    return 0;
  }
  return 0xffffffff;
}



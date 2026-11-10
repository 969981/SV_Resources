/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033a5208; name: FUN_033a5208
 */


void FUN_033a5208(long *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_033a527c();
  if ((int)param_1[1] == iVar2) {
    iVar1 = iVar2 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar2) {
      FUN_031d32c4(param_1,PTR_PTR_047d1a50,(long)iVar1);
      iVar2 = (int)param_1[1];
    }
    *(undefined8 *)(*param_1 + (long)iVar2 * 8) = *param_2;
    *(int *)(param_1 + 1) = iVar1;
  }
  return;
}



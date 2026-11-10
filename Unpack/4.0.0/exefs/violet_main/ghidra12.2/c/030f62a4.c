/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f62a4; name: FUN_030f62a4
 */


void FUN_030f62a4(long *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_030f6318();
  if ((int)param_1[1] == iVar2) {
    iVar1 = iVar2 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar2) {
      FUN_030bb7b8(param_1,PTR_PTR_047d1a50,(long)iVar1);
      iVar2 = (int)param_1[1];
    }
    *(undefined4 *)(*param_1 + (long)iVar2 * 4) = *param_2;
    *(int *)(param_1 + 1) = iVar1;
  }
  return;
}



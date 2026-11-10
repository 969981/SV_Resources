/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e3af4c; name: FUN_02e3af4c
 */


bool FUN_02e3af4c(long param_1,int *param_2,int param_3)

{
  ushort *puVar1;
  ulong uVar2;
  int iVar3;
  
  puVar1 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar1 < 7) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    if ((ulong)puVar1[3] != 0) {
      iVar3 = *(int *)((long)param_2 + (ulong)puVar1[3]);
    }
  }
  if (iVar3 != param_3) {
    return false;
  }
  if (*puVar1 < 9) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((ulong)puVar1[4] != 0) {
      uVar2 = (ulong)*(uint *)((long)param_2 + (ulong)puVar1[4]);
    }
  }
  return *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x210) + 8) + 1U == uVar2;
}



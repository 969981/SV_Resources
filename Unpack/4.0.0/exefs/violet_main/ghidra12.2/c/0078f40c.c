/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078f40c; name: FUN_0078f40c
 */


void FUN_0078f40c(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_3 & 1) != 0) {
    FUN_0078f870(*(undefined8 *)(param_1 + 0x88));
    return;
  }
  lVar1 = (long)*(int *)(param_1 + 0x14);
  if (*(long *)(param_1 + 8) != param_1) {
    lVar2 = *(long *)(param_1 + 8) - lVar1;
    do {
      if (*(ulong *)(lVar2 + 0x10) <= *(ulong *)(param_2 + 0x10)) {
        FUN_0078f9e0(param_1,lVar2 + lVar1,lVar1 + param_2);
        return;
      }
      lVar2 = *(long *)(lVar2 + lVar1 + 8) - lVar1;
    } while (lVar2 != param_1 - lVar1);
  }
  FUN_0078f9e0(param_1,param_1,lVar1 + param_2);
  return;
}



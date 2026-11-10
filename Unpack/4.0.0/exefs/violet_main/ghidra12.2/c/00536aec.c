/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00536aec; name: FUN_00536aec
 */


void FUN_00536aec(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + 8);
  if ((uVar2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar1 = FUN_00264e54();
    }
    else {
      lVar1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar1,(uVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  return;
}



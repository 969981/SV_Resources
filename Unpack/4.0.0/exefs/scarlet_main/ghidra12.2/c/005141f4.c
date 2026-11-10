/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005141f4; name: FUN_005141f4
 */


void FUN_005141f4(long param_1,long param_2)

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
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  return;
}



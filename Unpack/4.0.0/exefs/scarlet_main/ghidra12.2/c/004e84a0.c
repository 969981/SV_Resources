/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e84a0; name: FUN_004e84a0
 */


void FUN_004e84a0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    if ((*(ulong *)(param_2 + 8) & 1) == 0) {
      lVar2 = FUN_00264e54();
    }
    else {
      lVar2 = (*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar2,(uVar3 & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    }
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | uVar1;
  }
  return;
}



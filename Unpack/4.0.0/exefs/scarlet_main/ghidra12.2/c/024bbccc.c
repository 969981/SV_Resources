/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024bbccc; name: FUN_024bbccc
 */


void FUN_024bbccc(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_3 + 8);
  uVar2 = *(ulong *)(param_2 + 8);
  uVar1 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  if (uVar1 != 0) {
    FUN_024a5bc0(*(undefined8 *)(param_1 + 0x18),uVar1);
    uVar2 = *(ulong *)(param_2 + 8);
    uVar3 = *(ulong *)(param_3 + 8);
  }
  uVar3 = uVar3 & (uVar2 ^ 0xffffffffffffffff);
  if (uVar3 != 0) {
    FUN_024a5bc0(*(undefined8 *)(param_1 + 0x30),uVar3);
    uVar2 = *(ulong *)(param_2 + 8);
  }
  if (uVar2 != 0) {
    FUN_024a5bc0(*(undefined8 *)(param_1 + 0x48),uVar2);
  }
  if ((*(int *)(param_2 + 0x10) != 0) || (*(int *)(param_2 + 0x14) != 0)) {
    FUN_024a5d6c(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_2 + 0x10),
                 *(undefined8 *)(param_2 + 8));
  }
  if ((*(int *)(param_2 + 0x18) == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
    return;
  }
  FUN_024a5d6c(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x18),
               *(undefined8 *)(param_2 + 8));
  return;
}



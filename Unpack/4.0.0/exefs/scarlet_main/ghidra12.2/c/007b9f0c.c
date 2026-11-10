/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b9f0c; name: FUN_007b9f0c
 */


undefined8 FUN_007b9f0c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int local_60 [4];
  undefined1 auStack_50 [32];
  
  uVar4 = FUN_0079d9d8();
  if (((uVar4 & 1) != 0) && (**(long **)(param_1 + 0x88) != 0)) {
    uVar1 = *(int *)(param_2 + 0x44) + *(int *)(param_2 + 0x20) + *(int *)(param_2 + 0x48);
    FUN_00796584(auStack_50);
    iVar2 = *(int *)(param_2 + 0x1c);
    uVar3 = FUN_00796620(auStack_50);
    if (((iVar2 - uVar1 <= uVar3) &&
        ((FUN_007966e4(local_60,auStack_50,
                       *(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x18) + (ulong)uVar1,
                       *(int *)(param_2 + 0x1c) - uVar1), local_60[0] == 0 &&
         (uVar4 = FUN_00796784(auStack_50), (uVar4 & 1) != 0)))) &&
       (((uVar4 = FUN_0079c0a0(param_1), (uVar4 & 1) == 0 &&
         (uVar4 = FUN_0079c92c(param_1), (uVar4 & 1) == 0)) ||
        (uVar4 = FUN_007967e8(auStack_50,param_1 + 0xb8), (uVar4 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



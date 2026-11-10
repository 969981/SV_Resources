/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ed530; name: FUN_003ed530
 */


void FUN_003ed530(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      return;
    }
    uVar3 = *(int *)(param_1 + 0x28) - 1;
    *(uint *)(param_1 + 0x28) = uVar3;
    uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
    uVar3 = *(uint *)(param_1 + 0x30);
    iVar5 = uVar3 - uVar2;
    if (uVar2 <= uVar3 && iVar5 != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1 - iVar5;
      if (iVar5 != 0) {
        uVar6 = iVar1 - 1U & 0xf;
        iVar5 = uVar2 - uVar3;
        do {
          while (uVar6 == 0) {
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x180);
            uVar6 = 0xf;
            bVar4 = iVar5 == -1;
            iVar5 = iVar5 + 1;
            if (bVar4) goto LAB_003ed5b0;
          }
          uVar6 = uVar6 - 1;
          bVar4 = iVar5 != -1;
          iVar5 = iVar5 + 1;
        } while (bVar4);
      }
    }
LAB_003ed5b0:
    *(uint *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



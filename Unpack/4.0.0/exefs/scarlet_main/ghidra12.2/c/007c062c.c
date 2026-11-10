/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c062c; name: FUN_007c062c
 */


long FUN_007c062c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  FUN_007bfda8((ulong *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0x104),PTR_LAB_047d1000);
  if (*(int *)(param_1 + 0xe8) < 1) {
    uVar2 = 0;
    if (0 < *(int *)(param_1 + 0x100)) goto LAB_007c0678;
LAB_007c06a4:
    if (uVar2 == 0) goto LAB_007c0700;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0xd8);
    if (uVar2 != 0) {
      uVar2 = uVar2 - (long)*(int *)(param_1 + 0xec);
    }
    if (*(int *)(param_1 + 0x100) < 1) goto LAB_007c06a4;
LAB_007c0678:
    uVar3 = *(ulong *)(param_1 + 0xf0);
    if (uVar3 != 0) {
      uVar3 = uVar3 - (long)*(int *)(param_1 + 0x104);
    }
    if (uVar2 <= uVar3) goto LAB_007c0700;
  }
  lVar4 = uVar2 - *(long *)(param_1 + 0x30);
  FUN_007bfd58((long)*(int *)(param_1 + 0xec) + uVar2);
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
  lVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x48))
                    (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),lVar4);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x38) = lVar4;
    return lVar4;
  }
LAB_007c0700:
  return *(long *)(param_1 + 0x38);
}



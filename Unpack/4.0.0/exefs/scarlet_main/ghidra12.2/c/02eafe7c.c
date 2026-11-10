/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eafe7c; name: FUN_02eafe7c
 */


undefined8 FUN_02eafe7c(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  puVar3 = PTR_DAT_047d19f0;
  if (0 < *(int *)(param_1 + 0x30)) {
    uVar8 = 0;
    plVar1 = (long *)(param_1 + 0x38);
    do {
      lVar4 = *(long *)(param_1 + 0x28 + uVar8 * 8 + *(long *)(param_1 + 0x28));
      if (lVar4 != 0) {
        uVar5 = (**(code **)(*(long *)puVar3 + (ulong)*(byte *)(lVar4 + 0x18) * 0x40 + 0x4030))();
        uVar6 = uVar8 >> 5 & 0x7ffffff;
        uVar7 = 1 << (ulong)((uint)uVar8 & 0x1f);
        if ((uVar5 & 1) == 0) {
          lVar4 = *plVar1 + (long)plVar1;
          uVar7 = *(uint *)(lVar4 + uVar6 * 4) & (uVar7 ^ 0xffffffff);
        }
        else {
          lVar4 = *plVar1 + (long)plVar1;
          uVar7 = *(uint *)(lVar4 + uVar6 * 4) | uVar7;
        }
        *(uint *)(lVar4 + uVar6 * 4) = uVar7;
      }
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)*(int *)(param_1 + 0x30));
  }
  uVar7 = (-2 << (ulong)(*(int *)(param_1 + 0x48) - 1U & 0x1f) | 1U) ^ 0xfffffffe;
  lVar4 = (long)*(int *)(param_1 + 0x40);
  do {
    if (lVar4 < 1) {
      return 0;
    }
    uVar2 = *(uint *)(param_1 + 0x38 + lVar4 * 4 + *(long *)(param_1 + 0x38) + -4) & uVar7;
    uVar7 = 0xffffffff;
    lVar4 = lVar4 + -1;
  } while (uVar2 == 0);
  return 1;
}



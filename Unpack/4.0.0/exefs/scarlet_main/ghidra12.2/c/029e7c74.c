/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e7c74; name: FUN_029e7c74
 */


undefined4 FUN_029e7c74(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  FUN_0157190c(param_1,param_3,4);
  if (param_3 != 0) {
    uVar8 = param_3;
    do {
      uVar8 = uVar8 - 1;
      iVar2 = *(int *)(param_2 + uVar8 * 4);
      if (*(ulong *)(param_1 + 0x48) < 4) {
        *(undefined8 *)(param_1 + 0x48) = 4;
      }
      lVar1 = *(long *)(param_1 + 0x30);
      uVar3 = -((*(int *)(param_1 + 0x20) - (int)lVar1) + *(int *)(param_1 + 0x28));
      uVar7 = (ulong)uVar3 & 3;
      if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < uVar7) {
        FUN_0157184c(param_1,uVar7);
        puVar5 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar7);
        *(undefined1 **)(param_1 + 0x30) = puVar5;
LAB_029e7d44:
        *puVar5 = 0;
        if ((uVar7 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar7 != 2)) {
          uVar6 = 2;
          do {
            *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar6) = 0;
            uVar6 = uVar6 + 1;
          } while (uVar7 != uVar6);
        }
      }
      else {
        puVar5 = (undefined1 *)(lVar1 - uVar7);
        *(undefined1 **)(param_1 + 0x30) = puVar5;
        if ((uVar3 & 3) != 0) goto LAB_029e7d44;
      }
      FUN_015713f8(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                            *(int *)(param_1 + 0x28)) - iVar2) + 4);
    } while (uVar8 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar4 = FUN_015713f8(param_1,param_3 & 0xffffffff);
  return uVar4;
}



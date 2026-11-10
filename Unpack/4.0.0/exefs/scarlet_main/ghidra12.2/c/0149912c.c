/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0149912c; name: FUN_0149912c
 */


void FUN_0149912c(long *param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  
  lVar3 = (**(code **)(*param_1 + 0x98))();
  param_1[8] = lVar3;
  lVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
  param_1[9] = lVar3;
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_01499294(param_1);
  if (param_1[8] == 0) {
    uVar4 = 0;
    if (param_1[9] != 0) {
      uVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
      uVar2 = (**(code **)(*param_1 + 0x88))(param_1);
      uVar5 = 0;
      uVar4 = 0;
      if ((uVar1 != 0) && (uVar2 != 0)) {
        uVar6 = 0;
        uVar5 = 1;
        uVar4 = 0;
        do {
          plVar8 = *(long **)(param_1[9] + uVar6 * 8);
          iVar7 = (int)uVar4;
          uVar9 = (ulong)uVar2;
          do {
            if (*plVar8 == 0) goto LAB_01499228;
            uVar4 = (ulong)((int)uVar4 + 1);
            uVar9 = uVar9 - 1;
            plVar8 = plVar8 + 0x2e;
          } while (uVar9 != 0);
          uVar6 = uVar6 + 1;
          uVar4 = (ulong)(iVar7 + uVar2);
        } while (uVar6 != uVar1);
        uVar5 = 0;
        uVar4 = (ulong)(uVar2 * ((ushort)(uVar1 - 1) + 1));
      }
      goto LAB_01499228;
    }
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (uVar2 == 0) {
      uVar4 = 0;
    }
    else {
      plVar8 = (long *)param_1[8];
      uVar6 = 0;
      uVar4 = (ulong)uVar2;
      do {
        if (*plVar8 == 0) {
          uVar5 = 1;
          uVar4 = uVar6 & 0xffffffff;
          goto LAB_01499228;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 0x2e;
      } while (uVar4 != uVar6);
    }
  }
  uVar5 = 0;
LAB_01499228:
  param_1[10] = uVar5 | uVar4 << 0x20;
  return;
}



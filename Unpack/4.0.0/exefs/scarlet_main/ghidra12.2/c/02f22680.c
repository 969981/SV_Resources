/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f22680; name: FUN_02f22680
 */


void FUN_02f22680(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)*param_1;
  if (1 < (int)param_1[1]) {
    lVar9 = ((long *)*param_1)[1];
    uVar7 = *(undefined8 *)(lVar8 + 0x4e0);
    FUN_031c2be4(lVar9 + 0x530,uVar7);
    FUN_031c2be4(lVar9 + 0x630,uVar7);
    if (2 < (int)param_1[1]) {
      lVar9 = 2;
      do {
        lVar10 = *(long *)(*param_1 + lVar9 * 8);
        uVar7 = *(undefined8 *)(lVar8 + 0x4e0);
        FUN_031c2be4(lVar10 + 0x530,uVar7);
        FUN_031c2be4(lVar10 + 0x630,uVar7);
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)param_1[1]);
    }
  }
  FUN_031c2be4(param_1 + 0xa8,*(undefined8 *)(lVar8 + 0x4e0));
  uVar7 = *(undefined8 *)(lVar8 + 0x4e0);
  FUN_031c2be4(lVar8 + 0x530,uVar7);
  FUN_031c2be4(lVar8 + 0x630,uVar7);
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (ulong)uVar1;
  if (uVar1 != 0) {
    uVar2 = uVar5 & 3;
    if (uVar5 - 1 < 3) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      plVar6 = param_1 + 0x24;
      do {
        iVar3 = (int)uVar4;
        *(int *)((long)plVar6 + -0xc) = iVar3 + 1;
        *(int *)(plVar6 + -1) = iVar3 + 2;
        uVar4 = uVar4 + 4;
        *(int *)((long)plVar6 + -4) = iVar3 + 3;
        *(int *)plVar6 = (int)uVar4;
        plVar6 = plVar6 + 2;
      } while ((uVar5 & 0xfffffffc) != uVar4);
    }
    if ((uVar1 & 3) != 0) {
      do {
        *(int *)((long)param_1 + uVar4 * 4 + 0x114) = (int)(uVar4 + 1);
        uVar2 = uVar2 - 1;
        uVar4 = uVar4 + 1;
      } while (uVar2 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0xa2) = 0x1ff;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03499b7c; name: FUN_03499b7c
 */


void FUN_03499b7c(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  uVar3 = *(uint *)(param_1 + 0x23);
  if (uVar3 != 0) {
    iVar6 = 0;
    do {
      uVar1 = iVar6 + (uVar3 >> 1);
      uVar8 = *(ulong *)(param_1[0x22] +
                        (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
      if (uVar8 == param_2) {
        plVar10 = (long *)(param_1[0x22] + (long)(int)uVar1 * 0x10);
        iVar6 = (int)plVar10[1];
        iVar2 = iVar6 + -1;
        if (iVar6 != 0 && iVar2 != 0) {
          *(int *)(plVar10 + 1) = iVar2;
          return;
        }
        uVar8 = (**(code **)(*param_1 + 0x268))(param_1);
        if ((uVar8 & 1) == 0) {
          lVar4 = *plVar10;
          if (lVar4 != 0) {
            *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
          }
          lVar9 = *param_3;
          *param_3 = lVar4;
          if ((lVar9 != 0) &&
             (iVar6 = *(int *)(lVar9 + 0x10) + -1, *(int *)(lVar9 + 0x10) = iVar6, iVar6 == 0)) {
            FUN_034783fc(lVar9);
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar9);
          }
        }
        lVar4 = *plVar10;
        iVar6 = *(int *)(lVar4 + 0x10) + -1;
        *(int *)(lVar4 + 0x10) = iVar6;
        if (iVar6 == 0) {
          FUN_034783fc(lVar4);
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar4);
        }
        uVar3 = *(uint *)(param_1 + 0x23);
        plVar5 = (long *)(param_1[0x22] + (ulong)uVar3 * 0x10 + -0x10);
        if (plVar10 < plVar5) {
          do {
            plVar7 = plVar10 + 2;
            *plVar10 = *plVar7;
            *(int *)(plVar10 + 1) = (int)plVar10[3];
            plVar10 = plVar7;
          } while (plVar7 < plVar5);
          uVar3 = *(uint *)(param_1 + 0x23);
        }
        *(uint *)(param_1 + 0x23) = uVar3 - 1;
        return;
      }
      if (uVar8 < param_2) {
        iVar6 = uVar1 + 1;
      }
      uVar3 = uVar3 - (uVar8 < param_2) >> 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f6cfc; name: FUN_030f6cfc
 */


void FUN_030f6cfc(long *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long local_50;
  undefined8 local_48;
  
  puVar5 = PTR_PTR_047d1a50;
  uVar2 = *(uint *)(param_1 + 1);
  if (param_2 < 9) {
    param_2 = 8;
  }
  local_50 = 0;
  local_48 = -0x8000000000000000;
  if (param_1 == &local_50) {
    uVar9 = *(uint *)((long)param_1 + 0xc);
    lVar12 = local_48;
    uVar6 = uVar2;
  }
  else {
    puVar1 = PTR_PTR_047d1a50 + 0x20;
    FUN_0309d15c(&local_50,puVar1);
    FUN_0309d15c(param_1,puVar1);
    lVar10 = *param_1;
    *param_1 = local_50;
    lVar12 = param_1[1];
    *(uint *)(param_1 + 1) = (uint)local_48;
    *(uint *)((long)param_1 + 0xc) = local_48._4_4_;
    uVar9 = local_48._4_4_;
    local_50 = lVar10;
    uVar6 = (uint)local_48;
  }
  local_48 = lVar12;
  uVar9 = uVar9 & 0x7fffffff;
  if ((int)uVar9 < param_2) {
    FUN_0309d1cc(param_1,puVar5 + 0x20,param_2);
    uVar6 = *(uint *)(param_1 + 1);
    uVar9 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  }
  uVar9 = uVar9 | uVar9 >> 1;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 - (uVar9 >> 1);
  if (uVar6 != uVar9) {
    *(uint *)(param_1 + 1) = uVar9;
  }
  if (0 < (int)uVar9) {
    uVar13 = (ulong)uVar9;
    uVar8 = uVar13 & 3;
    if (uVar13 - 1 < 3) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        *(undefined4 *)(*param_1 + uVar11 * 4) = 0xffffffff;
        *(undefined4 *)(*param_1 + uVar11 * 4 + 4) = 0xffffffff;
        *(undefined4 *)(*param_1 + uVar11 * 4 + 8) = 0xffffffff;
        lVar12 = uVar11 * 4;
        uVar11 = uVar11 + 4;
        *(undefined4 *)(*param_1 + lVar12 + 0xc) = 0xffffffff;
      } while ((uVar13 & 0xfffffffc) != uVar11);
    }
    if ((uVar9 & 3) != 0) {
      lVar12 = uVar11 << 2;
      do {
        *(undefined4 *)(*param_1 + lVar12) = 0xffffffff;
        uVar8 = uVar8 - 1;
        lVar12 = lVar12 + 4;
      } while (uVar8 != 0);
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (0 < (int)uVar2) {
    uVar8 = 0;
    do {
      iVar3 = *(int *)(local_50 + uVar8 * 4);
      if (iVar3 != -1) {
        iVar7 = (int)param_1[1];
        if (iVar7 <= (int)param_1[2] * 2) {
          FUN_030f6cfc(param_1,iVar7 << 1);
          iVar7 = (int)param_1[1];
        }
        uVar9 = (iVar3 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar3 * -0x61c8864f & 0xff00ffU) << 8;
        uVar9 = iVar7 - 1U & (uVar9 >> 0x10 | uVar9 << 0x10);
        lVar12 = *param_1;
        piVar14 = (int *)(lVar12 + (long)(int)uVar9 * 4);
        if (*piVar14 == -1) {
          iVar7 = 1;
        }
        else if (*piVar14 == iVar3) {
          iVar7 = 0;
        }
        else {
          do {
            uVar9 = uVar9 + 1 & iVar7 - 1U;
            iVar4 = *(int *)(lVar12 + (long)(int)uVar9 * 4);
            if (iVar4 == -1) {
              iVar7 = 1;
              goto LAB_030f6f10;
            }
          } while (iVar4 != iVar3);
          iVar7 = 0;
LAB_030f6f10:
          piVar14 = (int *)(lVar12 + (long)(int)uVar9 * 4);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar7;
        *piVar14 = iVar3;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar2);
  }
  lVar12 = local_48;
  uVar8 = (ulong)local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_50 != 0)) {
    plVar15 = (long *)(puVar5 + 0x20);
    (**(code **)(*plVar15 + 0x20))(plVar15,local_50,uVar8 << 2);
  }
  return;
}



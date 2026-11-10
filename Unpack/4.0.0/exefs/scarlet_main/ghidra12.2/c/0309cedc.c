/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0309cedc; name: FUN_0309cedc
 */


undefined8 FUN_0309cedc(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long local_50;
  undefined8 local_48;
  
  puVar4 = PTR_PTR_047d1a50;
  uVar1 = *(uint *)(param_1 + 1);
  if (param_2 < 9) {
    param_2 = 8;
  }
  local_50 = 0;
  local_48 = -0x8000000000000000;
  if (param_1 == &local_50) {
    uVar8 = *(uint *)((long)param_1 + 0xc);
    lVar11 = local_48;
    uVar5 = uVar1;
  }
  else {
    FUN_0309d15c(&local_50,PTR_PTR_047d1a50);
    FUN_0309d15c(param_1,puVar4);
    lVar9 = *param_1;
    *param_1 = local_50;
    lVar11 = param_1[1];
    *(uint *)(param_1 + 1) = (uint)local_48;
    *(uint *)((long)param_1 + 0xc) = local_48._4_4_;
    uVar8 = local_48._4_4_;
    local_50 = lVar9;
    uVar5 = (uint)local_48;
  }
  local_48 = lVar11;
  uVar8 = uVar8 & 0x7fffffff;
  if ((int)uVar8 < param_2) {
    FUN_0309d1cc(param_1,PTR_PTR_047d1a50,param_2);
    uVar5 = *(uint *)(param_1 + 1);
    uVar8 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  }
  uVar8 = uVar8 | uVar8 >> 1;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 - (uVar8 >> 1);
  if (uVar5 != uVar8) {
    *(uint *)(param_1 + 1) = uVar8;
  }
  if (0 < (int)uVar8) {
    uVar12 = (ulong)uVar8;
    uVar7 = uVar12 & 3;
    if (uVar12 - 1 < 3) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        *(undefined4 *)(*param_1 + uVar10 * 4) = 0xffffffff;
        *(undefined4 *)(*param_1 + uVar10 * 4 + 4) = 0xffffffff;
        *(undefined4 *)(*param_1 + uVar10 * 4 + 8) = 0xffffffff;
        lVar11 = uVar10 * 4;
        uVar10 = uVar10 + 4;
        *(undefined4 *)(*param_1 + lVar11 + 0xc) = 0xffffffff;
      } while ((uVar12 & 0xfffffffc) != uVar10);
    }
    if ((uVar8 & 3) != 0) {
      lVar11 = uVar10 << 2;
      do {
        *(undefined4 *)(*param_1 + lVar11) = 0xffffffff;
        uVar7 = uVar7 - 1;
        lVar11 = lVar11 + 4;
      } while (uVar7 != 0);
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
      iVar2 = *(int *)(local_50 + uVar7 * 4);
      if (iVar2 != -1) {
        iVar6 = (int)param_1[1];
        if (iVar6 <= (int)param_1[2] * 2) {
          FUN_0309cedc(param_1,iVar6 << 1);
          iVar6 = (int)param_1[1];
        }
        uVar8 = (iVar2 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar2 * -0x61c8864f & 0xff00ffU) << 8;
        uVar8 = iVar6 - 1U & (uVar8 >> 0x10 | uVar8 << 0x10);
        lVar11 = *param_1;
        piVar13 = (int *)(lVar11 + (long)(int)uVar8 * 4);
        if (*piVar13 == -1) {
          iVar6 = 1;
        }
        else if (*piVar13 == iVar2) {
          iVar6 = 0;
        }
        else {
          do {
            uVar8 = uVar8 + 1 & iVar6 - 1U;
            iVar3 = *(int *)(lVar11 + (long)(int)uVar8 * 4);
            if (iVar3 == -1) {
              iVar6 = 1;
              goto LAB_0309d0f0;
            }
          } while (iVar3 != iVar2);
          iVar6 = 0;
LAB_0309d0f0:
          piVar13 = (int *)(lVar11 + (long)(int)uVar8 * 4);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar6;
        *piVar13 = iVar2;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar1);
  }
  lVar11 = local_48;
  uVar7 = (ulong)local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_50 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_50,uVar7 << 2);
  }
  return 0;
}



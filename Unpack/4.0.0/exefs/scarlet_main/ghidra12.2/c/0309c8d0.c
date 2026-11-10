/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0309c8d0; name: FUN_0309c8d0
 */


void FUN_0309c8d0(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long local_50;
  undefined8 local_48;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (param_2 < 9) {
    param_2 = 8;
  }
  local_50 = 0;
  local_48 = -0x8000000000000000;
  if (param_1 == &local_50) {
    uVar7 = *(uint *)((long)param_1 + 0xc);
    lVar10 = local_48;
    uVar4 = uVar1;
  }
  else {
    FUN_0309cb34(&local_50);
    FUN_0309cb34(param_1);
    lVar8 = *param_1;
    *param_1 = local_50;
    lVar10 = param_1[1];
    *(uint *)(param_1 + 1) = (uint)local_48;
    *(uint *)((long)param_1 + 0xc) = local_48._4_4_;
    uVar7 = local_48._4_4_;
    local_50 = lVar8;
    uVar4 = (uint)local_48;
  }
  local_48 = lVar10;
  uVar7 = uVar7 & 0x7fffffff;
  if ((int)uVar7 < param_2) {
    FUN_0309cba4(param_1,param_2);
    uVar4 = *(uint *)(param_1 + 1);
    uVar7 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  }
  uVar7 = uVar7 | uVar7 >> 1;
  uVar7 = uVar7 | uVar7 >> 2;
  uVar7 = uVar7 | uVar7 >> 4;
  uVar7 = uVar7 | uVar7 >> 8;
  uVar7 = uVar7 | uVar7 >> 0x10;
  uVar7 = uVar7 - (uVar7 >> 1);
  if (uVar4 != uVar7) {
    *(uint *)(param_1 + 1) = uVar7;
  }
  if (0 < (int)uVar7) {
    uVar11 = (ulong)uVar7;
    uVar6 = uVar11 & 3;
    if (uVar11 - 1 < 3) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        *(undefined4 *)(*param_1 + uVar9 * 4) = 0xffffffff;
        *(undefined4 *)(*param_1 + uVar9 * 4 + 4) = 0xffffffff;
        *(undefined4 *)(*param_1 + uVar9 * 4 + 8) = 0xffffffff;
        lVar10 = uVar9 * 4;
        uVar9 = uVar9 + 4;
        *(undefined4 *)(*param_1 + lVar10 + 0xc) = 0xffffffff;
      } while ((uVar11 & 0xfffffffc) != uVar9);
    }
    if ((uVar7 & 3) != 0) {
      lVar10 = uVar9 << 2;
      do {
        *(undefined4 *)(*param_1 + lVar10) = 0xffffffff;
        uVar6 = uVar6 - 1;
        lVar10 = lVar10 + 4;
      } while (uVar6 != 0);
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      iVar2 = *(int *)(local_50 + uVar6 * 4);
      if (iVar2 != -1) {
        iVar5 = (int)param_1[1];
        if (iVar5 <= (int)param_1[2] * 2) {
          FUN_0309c8d0(param_1,iVar5 << 1);
          iVar5 = (int)param_1[1];
        }
        uVar7 = (iVar2 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar2 * -0x61c8864f & 0xff00ffU) << 8;
        uVar7 = iVar5 - 1U & (uVar7 >> 0x10 | uVar7 << 0x10);
        lVar10 = *param_1;
        piVar12 = (int *)(lVar10 + (long)(int)uVar7 * 4);
        if (*piVar12 == -1) {
          iVar5 = 1;
        }
        else if (*piVar12 == iVar2) {
          iVar5 = 0;
        }
        else {
          do {
            uVar7 = uVar7 + 1 & iVar5 - 1U;
            iVar3 = *(int *)(lVar10 + (long)(int)uVar7 * 4);
            if (iVar3 == -1) {
              iVar5 = 1;
              goto LAB_0309cacc;
            }
          } while (iVar3 != iVar2);
          iVar5 = 0;
LAB_0309cacc:
          piVar12 = (int *)(lVar10 + (long)(int)uVar7 * 4);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar5;
        *piVar12 = iVar2;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar1);
  }
  lVar10 = local_48;
  uVar6 = (ulong)local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_50 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_50,uVar6 << 2);
  }
  return;
}



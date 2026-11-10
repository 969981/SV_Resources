/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0335fdec; name: FUN_0335fdec
 */


void FUN_0335fdec(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long local_50;
  undefined8 local_48;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (param_2 < 9) {
    param_2 = 8;
  }
  local_50 = 0;
  local_48 = -0x8000000000000000;
  if (param_1 == &local_50) {
    uVar5 = *(uint *)((long)param_1 + 0xc);
    lVar8 = local_48;
    uVar2 = uVar1;
  }
  else {
    FUN_03360070(&local_50);
    FUN_03360070(param_1);
    lVar6 = *param_1;
    *param_1 = local_50;
    lVar8 = param_1[1];
    *(uint *)(param_1 + 1) = (uint)local_48;
    *(uint *)((long)param_1 + 0xc) = local_48._4_4_;
    uVar5 = local_48._4_4_;
    local_50 = lVar6;
    uVar2 = (uint)local_48;
  }
  local_48 = lVar8;
  uVar5 = uVar5 & 0x7fffffff;
  if ((int)uVar5 < param_2) {
    FUN_033600e0(param_1,param_2);
    uVar2 = *(uint *)(param_1 + 1);
    uVar5 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  }
  uVar5 = uVar5 | uVar5 >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 - (uVar5 >> 1);
  if (uVar2 != uVar5) {
    *(uint *)(param_1 + 1) = uVar5;
  }
  if (0 < (int)uVar5) {
    uVar9 = (ulong)uVar5;
    uVar4 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0xffffffffffffffff;
        *(undefined8 *)(*param_1 + uVar7 * 8 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(*param_1 + uVar7 * 8 + 0x10) = 0xffffffffffffffff;
        lVar8 = uVar7 * 8;
        uVar7 = uVar7 + 4;
        *(undefined8 *)(*param_1 + lVar8 + 0x18) = 0xffffffffffffffff;
      } while ((uVar9 & 0xfffffffc) != uVar7);
    }
    if ((uVar5 & 3) != 0) {
      lVar8 = uVar7 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar8) = 0xffffffffffffffff;
        uVar4 = uVar4 - 1;
        lVar8 = lVar8 + 8;
      } while (uVar4 != 0);
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      lVar8 = *(long *)(local_50 + uVar4 * 8);
      if (lVar8 != -1) {
        iVar3 = (int)param_1[1];
        if (iVar3 <= (int)param_1[2] * 2) {
          FUN_0335fdec(param_1,iVar3 << 1);
          iVar3 = (int)param_1[1];
        }
        uVar5 = (int)lVar8 * -0x61c8864f;
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar2 = uVar5 >> 0x10 | uVar5 << 0x10;
        uVar5 = (int)((ulong)lVar8 >> 0x20) * -0x61c8864f;
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        uVar5 = iVar3 - 1U & (uVar2 + (uVar2 >> 2) + uVar5 * 0x40 + 0x9e3779b9 ^ uVar5);
        lVar6 = *param_1;
        plVar11 = (long *)(lVar6 + (long)(int)uVar5 * 8);
        if (*plVar11 == -1) {
          iVar3 = 1;
        }
        else if (*plVar11 == lVar8) {
          iVar3 = 0;
        }
        else {
          do {
            uVar5 = uVar5 + 1 & iVar3 - 1U;
            lVar10 = *(long *)(lVar6 + (long)(int)uVar5 * 8);
            if (lVar10 == -1) {
              iVar3 = 1;
              goto LAB_03360008;
            }
          } while (lVar10 != lVar8);
          iVar3 = 0;
LAB_03360008:
          plVar11 = (long *)(lVar6 + (long)(int)uVar5 * 8);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar3;
        *plVar11 = lVar8;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  lVar8 = local_48;
  uVar4 = (ulong)local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_50 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_50,uVar4 << 3);
  }
  return;
}



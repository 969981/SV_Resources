/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eaf394; name: FUN_02eaf394
 */


undefined8 FUN_02eaf394(long *param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long local_50;
  undefined8 local_48;
  
  puVar2 = PTR_PTR_047d1a50;
  uVar1 = *(uint *)(param_1 + 1);
  if (param_2 < 9) {
    param_2 = 8;
  }
  local_50 = 0;
  local_48 = -0x8000000000000000;
  if (param_1 == &local_50) {
    uVar6 = *(uint *)((long)param_1 + 0xc);
    lVar9 = local_48;
    uVar3 = uVar1;
  }
  else {
    FUN_02eaf634(&local_50,PTR_PTR_047d1a50);
    FUN_02eaf634(param_1,puVar2);
    lVar7 = *param_1;
    *param_1 = local_50;
    lVar9 = param_1[1];
    *(uint *)(param_1 + 1) = (uint)local_48;
    *(uint *)((long)param_1 + 0xc) = local_48._4_4_;
    uVar6 = local_48._4_4_;
    local_50 = lVar7;
    uVar3 = (uint)local_48;
  }
  local_48 = lVar9;
  uVar6 = uVar6 & 0x7fffffff;
  if ((int)uVar6 < param_2) {
    FUN_02eaf6a4(param_1,PTR_PTR_047d1a50,param_2);
    uVar3 = *(uint *)(param_1 + 1);
    uVar6 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  }
  uVar6 = uVar6 | uVar6 >> 1;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 - (uVar6 >> 1);
  if (uVar3 != uVar6) {
    *(uint *)(param_1 + 1) = uVar6;
  }
  if (0 < (int)uVar6) {
    uVar10 = (ulong)uVar6;
    uVar5 = uVar10 & 3;
    if (uVar10 - 1 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0xffffffffffffffff;
        *(undefined8 *)(*param_1 + uVar8 * 8 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(*param_1 + uVar8 * 8 + 0x10) = 0xffffffffffffffff;
        lVar9 = uVar8 * 8;
        uVar8 = uVar8 + 4;
        *(undefined8 *)(*param_1 + lVar9 + 0x18) = 0xffffffffffffffff;
      } while ((uVar10 & 0xfffffffc) != uVar8);
    }
    if ((uVar6 & 3) != 0) {
      lVar9 = uVar8 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar9) = 0xffffffffffffffff;
        uVar5 = uVar5 - 1;
        lVar9 = lVar9 + 8;
      } while (uVar5 != 0);
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      lVar9 = *(long *)(local_50 + uVar5 * 8);
      if (lVar9 != -1) {
        iVar4 = (int)param_1[1];
        if (iVar4 <= (int)param_1[2] * 2) {
          FUN_02eaf394(param_1,iVar4 << 1);
          iVar4 = (int)param_1[1];
        }
        uVar6 = (int)lVar9 * -0x61c8864f;
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        uVar3 = uVar6 >> 0x10 | uVar6 << 0x10;
        uVar6 = (int)((ulong)lVar9 >> 0x20) * -0x61c8864f;
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
        uVar6 = iVar4 - 1U & (uVar3 + (uVar3 >> 2) + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6);
        lVar7 = *param_1;
        plVar12 = (long *)(lVar7 + (long)(int)uVar6 * 8);
        if (*plVar12 == -1) {
          iVar4 = 1;
        }
        else if (*plVar12 == lVar9) {
          iVar4 = 0;
        }
        else {
          do {
            uVar6 = uVar6 + 1 & iVar4 - 1U;
            lVar11 = *(long *)(lVar7 + (long)(int)uVar6 * 8);
            if (lVar11 == -1) {
              iVar4 = 1;
              goto LAB_02eaf5c8;
            }
          } while (lVar11 != lVar9);
          iVar4 = 0;
LAB_02eaf5c8:
          plVar12 = (long *)(lVar7 + (long)(int)uVar6 * 8);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar4;
        *plVar12 = lVar9;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  lVar9 = local_48;
  uVar5 = (ulong)local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar9) && (local_50 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_50,uVar5 << 3);
  }
  return 0;
}



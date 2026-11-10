/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0323683c; name: FUN_0323683c
 */


void FUN_0323683c(long *param_1,long *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  local_98 = 0;
  local_90 = 0x8000000000000000;
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar8;
  }
  local_88 = *(long *)(*(long *)(lVar8 + 0x3d0) + 0x10);
  if (*(long *)(local_88 + 8) != 0) {
    local_88 = 0;
  }
  local_78 = -(ulong)((param_3 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
             (ulong)(param_3 << 1) << 2;
  local_70 = local_78;
  if (local_88 == 0) {
    lVar5 = (**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
  }
  else {
    local_68 = local_78 + 0x3f & 0xffffffffffffffc0;
    if (local_68 <= *(ulong *)(local_88 + 0x28)) {
      lVar5 = *(long *)(local_88 + 0x38);
      if (local_68 + lVar5 <= *(ulong *)(local_88 + 0x40)) {
        *(ulong *)(local_88 + 0x38) = local_68 + lVar5;
        goto LAB_0323690c;
      }
    }
    lVar5 = FUN_031cf3b4(local_88,&local_68);
  }
LAB_0323690c:
  local_90._4_4_ = param_3 << 1 | 0x80000000;
  local_98 = lVar5;
  local_80 = lVar5;
  if (0 < (int)param_3) {
    iVar7 = 0;
    iVar10 = param_3 + 1;
    do {
      iVar2 = *(int *)(*param_2 + 0x14);
      if (iVar2 != -1) {
        iVar1 = iVar7 + 1;
        if ((int)(local_90._4_4_ & 0x7fffffff) <= iVar7) {
          FUN_0323e2cc(&local_98,(long)iVar1);
          lVar5 = local_98;
          iVar7 = (int)local_90;
        }
        *(int *)(lVar5 + (long)iVar7 * 4) = iVar2;
        iVar7 = iVar1;
        local_90._0_4_ = iVar1;
      }
      iVar10 = iVar10 + -1;
      param_2 = (long *)((long)param_2 + (long)param_4);
    } while (1 < iVar10);
    while (iVar7 != 0) {
      lVar5 = (long)*(int *)(local_98 + ((long)iVar7 + -1) * 4);
      local_90._0_4_ = (int)((long)iVar7 + -1);
      lVar8 = *param_1;
      iVar7 = (int)local_90;
      if (*(int *)(*(long *)(lVar8 + lVar5 * 0x18) + 0x10) == 0) {
        *(undefined4 *)(*(long *)(*param_1 + lVar5 * 0x18) + 0x10) = 1;
        iVar10 = *(int *)(lVar8 + lVar5 * 0x18 + 8);
        if (iVar10 != -1) {
          lVar9 = (long)(int)local_90;
          do {
            lVar11 = param_1[3];
            uVar3 = *(undefined4 *)(lVar11 + (long)iVar10 * 0x14 + 4);
            iVar7 = (int)lVar9;
            if ((long)((ulong)local_90._4_4_ & 0x7fffffff) <= lVar9) {
              FUN_0323e2cc(&local_98,lVar9 + 1);
              iVar7 = (int)local_90;
            }
            *(undefined4 *)(local_98 + (long)iVar7 * 4) = uVar3;
            local_90._0_4_ = (int)lVar9 + 1;
            iVar10 = *(int *)(lVar11 + (long)iVar10 * 0x14 + 0xc);
            lVar9 = lVar9 + 1;
          } while (iVar10 != -1);
        }
        for (iVar10 = *(int *)(lVar8 + lVar5 * 0x18 + 0xc); iVar7 = (int)local_90, iVar10 != -1;
            iVar10 = *(int *)(lVar5 + (long)iVar10 * 0x14 + 8)) {
          lVar5 = param_1[3];
          iVar7 = *(int *)(lVar5 + (long)iVar10 * 0x14);
          if (((iVar7 != -1) &&
              (lVar8 = (long)iVar7, *(int *)(*(long *)(*param_1 + lVar8 * 0x18) + 0x10) == 0)) &&
             (uVar6 = (**(code **)(**(long **)(*(long *)(*param_1 + lVar8 * 0x18) + 0x58) + 0x30))()
             , (uVar6 & 1) != 0)) {
            lVar9 = *param_1;
            iVar2 = *(int *)(lVar9 + lVar8 * 0x18 + 8);
            if (iVar2 == -1) {
LAB_03236b00:
              lVar8 = (long)(int)local_90;
              if ((int)(local_90._4_4_ & 0x7fffffff) <= (int)local_90) {
                FUN_0323e2cc(&local_98,lVar8 + 1);
              }
              *(int *)(local_98 + (long)(int)local_90 * 4) = iVar7;
              local_90._0_4_ = (int)(lVar8 + 1);
            }
            else {
              while( true ) {
                if (*(int *)(*(long *)(lVar9 + (long)*(int *)(param_1[3] + (long)iVar2 * 0x14 + 4) *
                                               0x18) + 0x10) == 0) break;
                iVar2 = *(int *)(param_1[3] + (long)iVar2 * 0x14 + 0xc);
                if (iVar2 == -1) goto LAB_03236b00;
                lVar9 = *param_1;
              }
            }
          }
        }
      }
    }
  }
  lVar5 = local_98;
  if (local_80 == local_98) {
    local_90._0_4_ = 0;
  }
  if (local_88 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_03236c14;
  }
  uVar6 = local_78 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(local_88 + 0x28) < uVar6) || (*(long *)(local_88 + 0x38) != uVar6 + local_80)) {
    if (local_80 == 0) goto LAB_03236c14;
    if (*(ulong *)(local_88 + 0x28) < uVar6 + 0x40) {
      *(int *)(*(long *)(local_88 + 0x30) + 0x20) = *(int *)(*(long *)(local_88 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_88 + 0x10) + 0x18))
                (*(long **)(local_88 + 0x10),local_80 - *(int *)(local_80 + -4),uVar6 + 0x44);
      goto LAB_03236c14;
    }
    if (*(long *)(local_88 + 0x38) != uVar6 + local_80) {
      FUN_031cf778();
      goto LAB_03236c14;
    }
    *(long *)(local_88 + 0x38) = local_80;
  }
  else {
    *(long *)(local_88 + 0x38) = local_80;
    if (*(long *)(local_88 + 0x48) != local_80) goto LAB_03236c14;
  }
  FUN_031cf578();
LAB_03236c14:
  uVar4 = local_90._4_4_;
  uVar6 = (ulong)local_90._4_4_;
  local_90 = uVar6 << 0x20;
  if ((lVar5 != 0) && (-1 < (int)uVar4)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar5,uVar6 << 2);
  }
  return;
}



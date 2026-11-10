/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a5ee00; name: FUN_00a5ee00
 */


bool FUN_00a5ee00(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined *local_108;
  long lStack_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  undefined *local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  ushort local_70;
  undefined2 local_6e;
  
  switch(((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    plVar9 = param_2 + -3;
    lVar14 = *plVar9;
    local_a0 = param_2[-2];
    lStack_98 = param_2[-1];
    local_c0 = *param_1;
    lStack_b8 = param_1[1];
    local_b0 = param_1[2];
    lStack_a8 = lVar14;
    FUN_00a65480(&lStack_a8,*(undefined4 *)*param_3);
    puVar1 = PTR_DAT_047d8ee0 + 0x10;
    local_88._0_4_ = CONCAT22(extraout_var,(short)lVar14);
    local_90 = puVar1;
    uVar6 = FUN_016a02ac(&local_90);
    uVar3 = (ushort)local_c0;
    FUN_00a65480(&local_c0,*(undefined4 *)*param_3);
    local_88._0_4_ = CONCAT22(extraout_var_00,uVar3);
    local_90 = puVar1;
    uVar7 = FUN_016a02ac(&local_90);
    if (uVar7 <= uVar6) {
      if ((uint)uVar3 <= ((uint)lVar14 & 0xffff)) {
        return true;
      }
      if (uVar6 != uVar7) {
        return true;
      }
    }
    lVar14 = *param_1;
    lVar17 = param_1[1];
    lVar12 = param_1[2];
    lVar11 = param_2[-1];
    lVar10 = *plVar9;
    param_1[1] = param_2[-2];
    param_1[2] = lVar11;
    *param_1 = lVar10;
    param_2[-2] = lVar17;
    param_2[-1] = lVar12;
    *plVar9 = lVar14;
    break;
  case 3:
    FUN_00a5e2a0(param_1,param_1 + 3,param_2 + -3,param_3);
    break;
  case 4:
    FUN_00a5e720(param_1,param_1 + 3,param_1 + 6,param_2 + -3,param_3);
    break;
  case 5:
    FUN_00a5ea20(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3,param_3);
    break;
  default:
    FUN_00a5e2a0(param_1,param_1 + 3,param_1 + 6,param_3);
    if (param_1 + 9 != param_2) {
      lVar14 = 0;
      iVar15 = 0;
      puVar1 = PTR_DAT_047d8ee0 + 0x10;
      plVar9 = param_1 + 9;
      plVar13 = param_1 + 6;
      do {
        plVar8 = plVar9;
        lStack_c8 = plVar8[2];
        lVar17 = *plVar8;
        local_d0 = plVar8[1];
        lStack_e0 = plVar13[2];
        local_f0 = *plVar13;
        local_e8 = plVar13[1];
        local_d8 = lVar17;
        FUN_00a65480(&local_d8,*(undefined4 *)*param_3);
        local_88._0_2_ = (undefined2)lVar17;
        local_90 = puVar1;
        local_88._2_2_ = extraout_var_01;
        uVar6 = FUN_016a02ac(&local_90);
        uVar3 = (ushort)local_f0;
        FUN_00a65480(&local_f0,*(undefined4 *)*param_3);
        local_88._0_4_ = CONCAT22(extraout_var_02,uVar3);
        local_90 = puVar1;
        uVar7 = FUN_016a02ac(&local_90);
        if ((uVar6 < uVar7) || ((((uint)lVar17 & 0xffff) < (uint)uVar3 && (uVar6 == uVar7)))) {
          local_90 = (undefined *)*plVar8;
          local_88 = plVar8[1];
          local_80 = plVar8[2];
          lVar17 = plVar13[2];
          lVar11 = *plVar13;
          plVar8[1] = plVar13[1];
          plVar8[2] = lVar17;
          *plVar8 = lVar11;
          plVar9 = param_1;
          if (plVar13 != param_1) {
            lVar17 = lVar14;
            do {
              puVar4 = local_90;
              local_108 = local_90;
              lStack_100 = local_88;
              local_f8 = local_80;
              puVar16 = (undefined8 *)((long)param_1 + lVar17 + 0x18);
              local_120 = *puVar16;
              local_118 = *(undefined8 *)((long)param_1 + lVar17 + 0x20);
              uStack_110 = *(undefined8 *)((long)param_1 + lVar17 + 0x28);
              FUN_00a65480(&local_108,*(undefined4 *)*param_3);
              local_70 = (ushort)puVar4;
              puVar2 = PTR_DAT_047d8ee0 + 0x10;
              local_78 = puVar2;
              local_6e = extraout_var_03;
              uVar6 = FUN_016a02ac(&local_78);
              uVar3 = (ushort)local_120;
              FUN_00a65480(&local_120,*(undefined4 *)*param_3);
              local_70 = uVar3;
              local_78 = puVar2;
              local_6e = extraout_var_04;
              uVar7 = FUN_016a02ac(&local_78);
              if ((uVar7 <= uVar6) && (((uint)uVar3 <= ((uint)puVar4 & 0xffff) || (uVar6 != uVar7)))
                 ) {
                plVar9 = (long *)((long)param_1 + lVar17 + 0x30);
                break;
              }
              bVar5 = lVar17 != -0x18;
              *(undefined8 *)((long)param_1 + lVar17 + 0x30) = *puVar16;
              *(undefined8 *)((long)param_1 + lVar17 + 0x38) =
                   *(undefined8 *)((long)param_1 + lVar17 + 0x20);
              *(undefined8 *)((long)param_1 + lVar17 + 0x40) =
                   *(undefined8 *)((long)param_1 + lVar17 + 0x28);
              lVar17 = lVar17 + -0x18;
            } while (bVar5);
          }
          iVar15 = iVar15 + 1;
          *plVar9 = (long)local_90;
          plVar9[1] = local_88;
          plVar9[2] = local_80;
          if (iVar15 == 8) {
            return plVar8 + 3 == param_2;
          }
        }
        lVar14 = lVar14 + 0x18;
        plVar9 = plVar8 + 3;
        plVar13 = plVar8;
      } while (plVar8 + 3 != param_2);
    }
  }
  return true;
}



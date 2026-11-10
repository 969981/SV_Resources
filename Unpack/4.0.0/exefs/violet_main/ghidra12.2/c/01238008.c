/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01238008; name: FUN_01238008
 */


long FUN_01238008(ulong *param_1,undefined8 *param_2,undefined2 *param_3,undefined2 *param_4,
                 undefined4 *param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  ulong *local_90;
  long *local_88;
  long *plStack_80;
  long *local_78;
  long *local_70;
  ulong *local_68;
  
  puVar10 = (ulong *)param_1[1];
  puVar11 = (ulong *)param_1[2];
  lVar6 = (long)puVar11 - (long)puVar10;
  uVar17 = 0;
  if (lVar6 != 0) {
    uVar17 = lVar6 * 0x10 - 1;
  }
  uVar1 = param_1[8];
  uVar9 = param_1[9] + uVar1;
  if (uVar17 == uVar9) {
    if (uVar1 < 0x80) {
      uVar17 = lVar6 >> 3;
      lVar6 = (long)param_1[3] - *param_1;
      if (uVar17 < (ulong)(lVar6 >> 3)) {
        if ((ulong *)param_1[3] == puVar11) {
          local_88 = (long *)(**(code **)(*(long *)param_1[10] + 0x10))
                                       ((long *)param_1[10],0x1000,0x10);
          if (local_88 == (long *)0x0) {
            (**(code **)(*(long *)param_1[10] + 0xe8))();
          }
          FUN_020daa80(param_1,&local_88);
          puVar10 = (ulong *)param_1[1];
          goto LAB_0123833c;
        }
        local_88 = (long *)(**(code **)(*(long *)param_1[10] + 0x10))
                                     ((long *)param_1[10],0x1000,0x10);
        if (local_88 == (long *)0x0) {
          (**(code **)(*(long *)param_1[10] + 0xe8))();
        }
        FUN_020da7fc(param_1,&local_88);
      }
      else {
        uVar9 = lVar6 >> 2;
        if (lVar6 == 0) {
          uVar9 = 1;
        }
        puVar10 = param_1 + 4;
        local_98 = (long *)0x0;
        local_90 = puVar10;
        plVar7 = (long *)(**(code **)(*(long *)param_1[4] + 0x10))
                                   ((long *)param_1[4],uVar9 << 3,0x10);
        if (plVar7 == (long *)0x0) {
          (**(code **)(*(long *)*puVar10 + 0xe8))();
        }
        plVar16 = plVar7 + uVar17;
        plVar12 = plVar7 + uVar9;
        local_b0 = plVar7;
        local_a8 = plVar16;
        local_a0 = plVar16;
        local_98 = plVar12;
        lVar6 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,0x10);
        if (lVar6 == 0) {
          (**(code **)(*(long *)param_1[10] + 0xe8))();
        }
        if (uVar17 == uVar9) {
          if (plVar16 < plVar7 || (long)plVar16 - (long)plVar7 == 0) {
            lVar13 = (long)plVar12 - (long)plVar7;
            uVar17 = lVar13 >> 2;
            if (lVar13 == 0) {
              uVar17 = 1;
            }
            local_70 = (long *)0x0;
            local_68 = puVar10;
            local_88 = (long *)(**(code **)(*(long *)*puVar10 + 0x10))
                                         ((long *)*puVar10,uVar17 << 3,0x10);
            if (local_88 == (long *)0x0) {
              (**(code **)(*(long *)*puVar10 + 0xe8))((long *)*puVar10);
            }
            plStack_80 = local_88 + (uVar17 >> 2);
            local_70 = local_88 + uVar17;
            local_78 = plStack_80;
            FUN_020dad14(&local_88,plVar16,plVar16);
            plVar15 = local_78;
            local_b0 = local_88;
            local_a8 = plStack_80;
            local_a0 = local_78;
            local_98 = local_70;
            local_88 = plVar7;
            plStack_80 = plVar16;
            local_78 = plVar16;
            local_70 = plVar12;
            if (plVar7 != (long *)0x0) {
              plVar16 = (long *)*local_68;
              uVar17 = (**(code **)(*plVar16 + 0xf8))(plVar16);
              if (((uVar17 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                (**(code **)(*plVar16 + 0x18))(plVar16,plVar7,lVar13,0x10);
              }
              else {
                FUN_00c48fe8(plVar16,plVar7,lVar13,0x10);
              }
            }
          }
          else {
            lVar13 = (long)plVar16 - (long)plVar7 >> 3;
            uVar17 = lVar13 + 2;
            if (-1 < lVar13 + 1) {
              uVar17 = lVar13 + 1;
            }
            plVar15 = (long *)((long)plVar16 + (uVar17 & 0x3ffffffffffffffe) * -4);
            local_a8 = plVar15;
            local_a0 = plVar15;
          }
        }
        else {
          plVar15 = plVar16;
        }
        uVar17 = *puVar10;
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 == 0) {
          *plVar15 = lVar6;
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_0123862c;
          *(ulong *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          *plVar15 = lVar6;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        local_a0 = local_a0 + 1;
        plVar7 = (long *)param_1[2];
        plVar16 = plVar7;
        if (plVar7 != (long *)param_1[1]) {
          do {
            plVar16 = plVar16 + -1;
            FUN_0123863c(&local_b0,plVar16);
          } while (plVar16 != (long *)param_1[1]);
          plVar7 = (long *)param_1[2];
        }
        plVar15 = (long *)*param_1;
        *param_1 = (ulong)local_b0;
        param_1[1] = (ulong)local_a8;
        param_1[2] = (ulong)local_a0;
        plVar12 = (long *)param_1[3];
        param_1[3] = (ulong)local_98;
        local_a0 = plVar7;
        if (plVar16 != plVar7) {
          local_a0 = plVar7 + ((ulong)((long)plVar7 + (-8 - (long)plVar16)) >> 3 ^
                              0xffffffffffffffff);
        }
        local_b0 = plVar15;
        local_a8 = plVar16;
        local_98 = plVar12;
        if (plVar15 != (long *)0x0) {
          plVar7 = (long *)*local_90;
          uVar17 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((uVar17 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,plVar15,(long)plVar12 - (long)plVar15,0x10);
          }
          else {
            FUN_00c48fe8(plVar7,plVar15,(long)plVar12 - (long)plVar15,0x10);
          }
        }
      }
    }
    else {
      param_1[8] = uVar1 - 0x80;
LAB_0123833c:
      local_88 = (long *)*puVar10;
      param_1[1] = (ulong)(puVar10 + 1);
      FUN_01238904(param_1,&local_88);
    }
    uVar9 = param_1[8] + param_1[9];
    puVar10 = (ulong *)param_1[1];
    puVar11 = (ulong *)param_1[2];
  }
  if (puVar11 == puVar10) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    puVar14 = (undefined8 *)
              (*(long *)((long)puVar10 + (uVar9 >> 4 & 0xffffffffffffff8)) + (uVar9 & 0x7f) * 0x20);
  }
  uVar17 = param_1[10];
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_0123862c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(ulong *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar17;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  uVar3 = *param_3;
  uVar4 = *param_4;
  uVar2 = *param_5;
  puVar14[1] = param_2[1];
  *puVar14 = *param_2;
  *(undefined2 *)(puVar14 + 2) = uVar3;
  *(undefined2 *)((long)puVar14 + 0x12) = uVar4;
  *(undefined4 *)((long)puVar14 + 0x14) = uVar2;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  uVar17 = param_1[8] + param_1[9] + 1;
  param_1[9] = param_1[9] + 1;
  plVar7 = (long *)(param_1[1] + (uVar17 >> 4 & 0xffffffffffffff8));
  lVar13 = *plVar7;
  lVar6 = 0;
  if (param_1[2] != param_1[1]) {
    lVar6 = lVar13 + (uVar17 & 0x7f) * 0x20;
  }
  if (lVar6 == lVar13) {
    lVar6 = plVar7[-1] + 0x1000;
  }
  return lVar6 + -0x20;
}



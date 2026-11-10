/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d28e08; name: FUN_00d28e08
 */


long FUN_00d28e08(ulong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  size_t sVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *__dest;
  void *__src;
  undefined8 uVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  void *pvVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  ulong *local_68;
  
  puVar7 = (ulong *)param_1[1];
  puVar10 = (ulong *)param_1[2];
  uVar14 = (long)puVar10 - (long)puVar7 >> 3;
  uVar16 = 0;
  if ((long)puVar10 - (long)puVar7 != 0) {
    uVar16 = uVar14 * 0x38 - 1;
  }
  uVar1 = param_1[8];
  uVar5 = param_1[9] + uVar1;
  if (uVar16 == uVar5) {
    if (uVar1 < 0x38) {
      lVar4 = (long)param_1[3] - *param_1;
      if (uVar14 < (ulong)(lVar4 >> 3)) {
        if ((ulong *)param_1[3] == puVar10) {
          local_88 = (long *)(**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xfc0,8)
          ;
          if (local_88 == (long *)0x0) {
            (**(code **)(*(long *)param_1[10] + 0xe8))();
          }
          FUN_00d29c70(param_1,&local_88);
          puVar7 = (ulong *)param_1[1];
          goto LAB_00d29280;
        }
        lVar4 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xfc0,8);
        if (lVar4 == 0) {
          (**(code **)(*(long *)param_1[10] + 0xe8))();
        }
        plVar19 = (long *)param_1[2];
        if (plVar19 == (long *)param_1[3]) {
          pvVar17 = (void *)*param_1;
          __src = (void *)param_1[1];
          if (__src < pvVar17 || (long)__src - (long)pvVar17 == 0) {
            local_70 = (long *)0x0;
            lVar13 = (long)param_1[3] - (long)pvVar17;
            uVar16 = lVar13 >> 2;
            if (lVar13 == 0) {
              uVar16 = 1;
            }
            local_68 = param_1 + 4;
            local_88 = (long *)(**(code **)(*(long *)param_1[4] + 0x10))
                                         ((long *)param_1[4],uVar16 << 3,8);
            if (local_88 == (long *)0x0) {
              (**(code **)(*(long *)param_1[4] + 0xe8))();
            }
            local_80 = local_88 + (uVar16 >> 2);
            local_70 = local_88 + uVar16;
            local_78 = local_80;
            FUN_02752fec(&local_88,param_1[1],param_1[2]);
            plVar19 = (long *)*param_1;
            plVar20 = (long *)param_1[1];
            plVar12 = (long *)param_1[2];
            *param_1 = (ulong)local_88;
            param_1[1] = (ulong)local_80;
            param_1[2] = (ulong)local_78;
            plVar9 = (long *)param_1[3];
            param_1[3] = (ulong)local_70;
            local_78 = plVar12;
            if ((long)plVar12 - (long)plVar20 != 0) {
              local_78 = plVar12 + (((long)plVar12 - (long)plVar20) - 8U >> 3 ^ 0xffffffffffffffff);
            }
            local_88 = plVar19;
            local_80 = plVar20;
            local_70 = plVar9;
            if (plVar19 != (long *)0x0) {
              plVar20 = (long *)*local_68;
              uVar16 = (**(code **)(*plVar20 + 0xf8))(plVar20);
              if (((uVar16 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
                (**(code **)(*plVar20 + 0x18))(plVar20,plVar19,(long)plVar9 - (long)plVar19,8);
              }
              else {
                FUN_00c48fe8(plVar20,plVar19,(long)plVar9 - (long)plVar19,8);
              }
            }
            plVar19 = (long *)param_1[2];
          }
          else {
            lVar8 = (long)__src - (long)pvVar17 >> 3;
            lVar13 = lVar8 + 2;
            if (-1 < lVar8 + 1) {
              lVar13 = lVar8 + 1;
            }
            sVar2 = (long)plVar19 - (long)__src;
            pvVar17 = (void *)((long)__src + (lVar13 >> 1) * -8);
            if (sVar2 != 0) {
              memmove(pvVar17,__src,sVar2);
              __src = (void *)param_1[1];
            }
            plVar19 = (long *)((long)pvVar17 + sVar2);
            param_1[1] = (ulong)((long)__src + (lVar13 >> 1) * -8);
            param_1[2] = (ulong)plVar19;
          }
        }
        uVar16 = param_1[4];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 == 0) {
          *plVar19 = lVar4;
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00d29824;
          *(ulong *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar16;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          *plVar19 = lVar4;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        param_1[2] = param_1[2] + 8;
      }
      else {
        uVar16 = lVar4 >> 2;
        puVar7 = param_1 + 4;
        if (lVar4 == 0) {
          uVar16 = 1;
        }
        plVar19 = (long *)(**(code **)(*(long *)*puVar7 + 0x10))((long *)*puVar7,uVar16 << 3,8);
        if (plVar19 == (long *)0x0) {
          (**(code **)(*(long *)*puVar7 + 0xe8))();
        }
        plVar20 = plVar19 + uVar16;
        plVar9 = plVar19 + uVar14;
        lVar4 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xfc0,8);
        if (lVar4 == 0) {
          (**(code **)(*(long *)param_1[10] + 0xe8))();
        }
        if (uVar14 == uVar16) {
          if (plVar19 <= plVar9 && (long)plVar9 - (long)plVar19 != 0) {
            lVar13 = (long)plVar9 - (long)plVar19 >> 3;
            uVar16 = lVar13 + 2;
            if (-1 < lVar13 + 1) {
              uVar16 = lVar13 + 1;
            }
            plVar18 = (long *)((long)plVar9 + (uVar16 & 0x3ffffffffffffffe) * -4);
            goto LAB_00d290a4;
          }
          local_70 = (long *)0x0;
          lVar13 = (long)plVar20 - (long)plVar19;
          uVar16 = lVar13 >> 2;
          if (lVar13 == 0) {
            uVar16 = 1;
          }
          local_68 = puVar7;
          local_88 = (long *)(**(code **)(*(long *)*puVar7 + 0x10))((long *)*puVar7,uVar16 << 3,8);
          if (local_88 == (long *)0x0) {
            (**(code **)(*(long *)*puVar7 + 0xe8))();
          }
          local_80 = local_88 + (uVar16 >> 2);
          local_70 = local_88 + uVar16;
          local_78 = local_80;
          FUN_02752fec(&local_88,plVar9,plVar9);
          local_90 = local_78;
          plVar18 = local_80;
          plVar12 = local_88;
          local_98 = local_70;
          local_88 = plVar19;
          local_80 = plVar9;
          local_78 = plVar9;
          local_70 = plVar20;
          if (plVar19 != (long *)0x0) {
            plVar20 = (long *)*local_68;
            uVar16 = (**(code **)(*plVar20 + 0xf8))(plVar20);
            if (((uVar16 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
              (**(code **)(*plVar20 + 0x18))(plVar20,plVar19,lVar13,8);
            }
            else {
              FUN_00c48fe8(plVar20,plVar19,lVar13,8);
            }
          }
        }
        else {
          plVar18 = plVar9;
LAB_00d290a4:
          plVar12 = plVar19;
          local_90 = plVar18;
          local_98 = plVar20;
        }
        uVar16 = *puVar7;
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 == 0) {
          *local_90 = lVar4;
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00d29824;
          *(ulong *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar16;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          *local_90 = lVar4;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        local_90 = local_90 + 1;
        for (uVar16 = param_1[2]; uVar16 != param_1[1]; uVar16 = uVar16 - 8) {
          plVar19 = plVar12;
          __dest = plVar18;
          if (plVar18 == plVar12) {
            if (local_90 < local_98) {
              lVar4 = (long)local_98 - (long)local_90 >> 3;
              uVar14 = lVar4 + 2;
              if (-1 < lVar4 + 1) {
                uVar14 = lVar4 + 1;
              }
              sVar2 = (long)local_90 - (long)plVar18;
              local_90 = (long *)((long)local_90 + (uVar14 & 0x3ffffffffffffffe) * 4);
              __dest = local_90;
              if (sVar2 != 0) {
                __dest = (long *)((long)local_90 - sVar2);
                memmove(__dest,plVar18,sVar2);
              }
            }
            else {
              lVar13 = (long)local_98 - (long)plVar12;
              local_70 = (long *)0x0;
              lVar4 = lVar13 >> 2;
              if (lVar13 == 0) {
                lVar4 = 1;
              }
              local_68 = puVar7;
              plVar19 = (long *)(**(code **)(*(long *)*puVar7 + 0x10))((long *)*puVar7,lVar4 << 3,8)
              ;
              if (plVar19 == (long *)0x0) {
                (**(code **)(*(long *)*puVar7 + 0xe8))();
              }
              local_80 = plVar19 + (lVar4 + 3U >> 2);
              local_70 = plVar19 + lVar4;
              local_88 = plVar19;
              local_78 = local_80;
              FUN_02752fec(&local_88,plVar18,local_90);
              plVar9 = local_70;
              plVar20 = local_78;
              __dest = local_80;
              plVar19 = local_88;
              local_78 = local_90;
              local_70 = local_98;
              if ((long)local_90 - (long)plVar18 != 0) {
                local_78 = local_90 +
                           (((long)local_90 - (long)plVar18) - 8U >> 3 ^ 0xffffffffffffffff);
              }
              local_88 = plVar12;
              local_80 = plVar18;
              if (plVar12 != (long *)0x0) {
                plVar18 = (long *)*local_68;
                uVar14 = (**(code **)(*plVar18 + 0xf8))(plVar18);
                if (((uVar14 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                  (**(code **)(*plVar18 + 0x18))(plVar18,plVar12,lVar13,8);
                }
                else {
                  FUN_00c48fe8(plVar18,plVar12,lVar13,8);
                }
              }
              local_98 = plVar9;
              local_90 = plVar20;
            }
          }
          uVar14 = *puVar7;
          plVar18 = __dest + -1;
          if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar4 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar4 == 0) {
            *plVar18 = *(long *)(uVar16 - 8);
          }
          else {
            if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00d29824;
            *(ulong *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar14;
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
            *plVar18 = *(long *)(uVar16 - 8);
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
          }
          plVar12 = plVar19;
        }
        uVar14 = *param_1;
        *param_1 = (ulong)plVar12;
        param_1[1] = (ulong)plVar18;
        uVar16 = param_1[3];
        param_1[2] = (ulong)local_90;
        param_1[3] = (ulong)local_98;
        if (uVar14 != 0) {
          plVar19 = (long *)*puVar7;
          uVar5 = (**(code **)(*plVar19 + 0xf8))(plVar19);
          if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar19 + 0x18))(plVar19,uVar14,uVar16 - uVar14,8);
          }
          else {
            FUN_00c48fe8(plVar19,uVar14,uVar16 - uVar14,8);
          }
        }
      }
    }
    else {
      param_1[8] = uVar1 - 0x38;
LAB_00d29280:
      local_88 = (long *)*puVar7;
      param_1[1] = (ulong)(puVar7 + 1);
      FUN_00d299f4(param_1,&local_88);
    }
    uVar5 = param_1[8] + param_1[9];
    puVar7 = (ulong *)param_1[1];
    puVar10 = (ulong *)param_1[2];
  }
  if (puVar10 == puVar7) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    puVar15 = (undefined8 *)(puVar7[uVar5 / 0x38] + (uVar5 % 0x38) * 0x48);
  }
  uVar16 = param_1[10];
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    uVar6 = *param_2;
    uVar11 = *param_3;
    *puVar15 = 0;
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar15[6] = uVar6;
    puVar15[7] = uVar11;
    *(undefined4 *)(puVar15 + 8) = 0xffffffff;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00d29824:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(ulong *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar16;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    uVar6 = *param_2;
    uVar11 = *param_3;
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = 0;
    puVar15[6] = uVar6;
    puVar15[7] = uVar11;
    *(undefined4 *)(puVar15 + 8) = 0xffffffff;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  uVar16 = param_1[8] + param_1[9] + 1;
  param_1[9] = param_1[9] + 1;
  plVar19 = (long *)(param_1[1] + (uVar16 / 0x38) * 8);
  lVar13 = *plVar19;
  lVar4 = 0;
  if (param_1[2] != param_1[1]) {
    lVar4 = lVar13 + (uVar16 % 0x38) * 0x48;
  }
  if (lVar4 == lVar13) {
    lVar4 = plVar19[-1] + 0xfc0;
  }
  return lVar4 + -0x48;
}



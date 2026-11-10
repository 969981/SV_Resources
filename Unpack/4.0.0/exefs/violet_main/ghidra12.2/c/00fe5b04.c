/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fe5b04; name: FUN_00fe5b04
 */


void FUN_00fe5b04(ulong *param_1,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  size_t sVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *__dest;
  void *__src;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long *plVar12;
  ulong *puVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  void *pvVar20;
  long *plVar21;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  ulong *local_68;
  
  if (DAT_0485942c != '\x01') {
    return;
  }
  puVar10 = param_1 + 0x10;
  puVar9 = (ulong *)*puVar10;
  if (puVar9 != (ulong *)0x0) {
    puVar13 = puVar10;
    do {
      lVar5 = 0x10;
      if (param_2 <= puVar9[4]) {
        lVar5 = 8;
        puVar13 = puVar9;
      }
      puVar9 = *(ulong **)((long)puVar9 + lVar5);
    } while (puVar9 != (ulong *)0x0);
    if (puVar13 != puVar10) {
      puVar9 = puVar10;
      if (puVar13[4] <= param_2) {
        puVar9 = puVar13;
      }
      if (puVar9 != puVar10) {
        *(undefined4 *)(puVar9 + 5) = param_3;
        *(undefined4 *)((long)puVar9 + 0x2c) = param_4;
        return;
      }
    }
  }
  puVar10 = (ulong *)param_1[0x15];
  if ((puVar10 == (ulong *)0x0) || (puVar10 == param_1 + 0x15)) {
    puVar10 = (ulong *)param_1[1];
    puVar9 = (ulong *)param_1[2];
    uVar16 = (long)puVar9 - (long)puVar10 >> 3;
    uVar19 = 0;
    if ((long)puVar9 - (long)puVar10 != 0) {
      uVar19 = uVar16 * 0x38 - 1;
    }
    uVar1 = param_1[8];
    uVar15 = param_1[9] + uVar1;
    if (uVar19 == uVar15) {
      if (uVar1 < 0x38) {
        lVar5 = (long)param_1[3] - *param_1;
        if (uVar16 < (ulong)(lVar5 >> 3)) {
          if ((ulong *)param_1[3] == puVar9) {
            local_88 = (long *)(**(code **)(*(long *)param_1[10] + 0x10))
                                         ((long *)param_1[10],0xfc0,8);
            if (local_88 == (long *)0x0) {
              (**(code **)(*(long *)param_1[10] + 0xe8))();
            }
            FUN_00fe6968(param_1,&local_88);
            puVar10 = (ulong *)param_1[1];
            goto LAB_00fe60e8;
          }
          lVar5 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xfc0,8);
          if (lVar5 == 0) {
            (**(code **)(*(long *)param_1[10] + 0xe8))();
          }
          plVar14 = (long *)param_1[2];
          if (plVar14 == (long *)param_1[3]) {
            pvVar20 = (void *)*param_1;
            __src = (void *)param_1[1];
            if (__src < pvVar20 || (long)__src - (long)pvVar20 == 0) {
              local_70 = (long *)0x0;
              lVar6 = (long)param_1[3] - (long)pvVar20;
              uVar19 = lVar6 >> 2;
              if (lVar6 == 0) {
                uVar19 = 1;
              }
              local_68 = param_1 + 4;
              local_88 = (long *)(**(code **)(*(long *)param_1[4] + 0x10))
                                           ((long *)param_1[4],uVar19 << 3,8);
              if (local_88 == (long *)0x0) {
                (**(code **)(*(long *)param_1[4] + 0xe8))();
              }
              local_80 = local_88 + (uVar19 >> 2);
              local_70 = local_88 + uVar19;
              local_78 = local_80;
              FUN_026f7828(&local_88,param_1[1],param_1[2]);
              plVar14 = (long *)*param_1;
              plVar21 = (long *)param_1[1];
              plVar12 = (long *)param_1[2];
              *param_1 = (ulong)local_88;
              param_1[1] = (ulong)local_80;
              param_1[2] = (ulong)local_78;
              plVar8 = (long *)param_1[3];
              param_1[3] = (ulong)local_70;
              local_78 = plVar12;
              if ((long)plVar12 - (long)plVar21 != 0) {
                local_78 = plVar12 + (((long)plVar12 - (long)plVar21) - 8U >> 3 ^ 0xffffffffffffffff
                                     );
              }
              local_88 = plVar14;
              local_80 = plVar21;
              local_70 = plVar8;
              if (plVar14 != (long *)0x0) {
                plVar21 = (long *)*local_68;
                uVar19 = (**(code **)(*plVar21 + 0xf8))(plVar21);
                if (((uVar19 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
                  (**(code **)(*plVar21 + 0x18))(plVar21,plVar14,(long)plVar8 - (long)plVar14,8);
                }
                else {
                  FUN_00c48fe8(plVar21,plVar14,(long)plVar8 - (long)plVar14,8);
                }
              }
              plVar14 = (long *)param_1[2];
            }
            else {
              lVar7 = (long)__src - (long)pvVar20 >> 3;
              lVar6 = lVar7 + 2;
              if (-1 < lVar7 + 1) {
                lVar6 = lVar7 + 1;
              }
              sVar2 = (long)plVar14 - (long)__src;
              pvVar20 = (void *)((long)__src + (lVar6 >> 1) * -8);
              if (sVar2 != 0) {
                memmove(pvVar20,__src,sVar2);
                __src = (void *)param_1[1];
              }
              plVar14 = (long *)((long)pvVar20 + sVar2);
              param_1[1] = (ulong)((long)__src + (lVar6 >> 1) * -8);
              param_1[2] = (ulong)plVar14;
            }
          }
          uVar19 = param_1[4];
          if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar6 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar6 == 0) {
            *plVar14 = lVar5;
          }
          else {
            if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00fe66c8;
            *(ulong *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar19;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            *plVar14 = lVar5;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          }
          param_1[2] = param_1[2] + 8;
        }
        else {
          uVar19 = lVar5 >> 2;
          if (lVar5 == 0) {
            uVar19 = 1;
          }
          puVar10 = param_1 + 4;
          plVar14 = (long *)(**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,uVar19 << 3,8);
          if (plVar14 == (long *)0x0) {
            (**(code **)(*(long *)*puVar10 + 0xe8))();
          }
          plVar21 = plVar14 + uVar19;
          plVar8 = plVar14 + uVar16;
          lVar5 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xfc0,8);
          if (lVar5 == 0) {
            (**(code **)(*(long *)param_1[10] + 0xe8))();
          }
          if (uVar16 == uVar19) {
            if (plVar14 <= plVar8 && (long)plVar8 - (long)plVar14 != 0) {
              lVar6 = (long)plVar8 - (long)plVar14 >> 3;
              uVar19 = lVar6 + 2;
              if (-1 < lVar6 + 1) {
                uVar19 = lVar6 + 1;
              }
              plVar12 = (long *)((long)plVar8 + (uVar19 & 0x3ffffffffffffffe) * -4);
              goto LAB_00fe5f28;
            }
            lVar6 = (long)plVar21 - (long)plVar14;
            uVar19 = lVar6 >> 2;
            if (lVar6 == 0) {
              uVar19 = 1;
            }
            local_70 = (long *)0x0;
            local_68 = puVar10;
            local_88 = (long *)(**(code **)(*(long *)*puVar10 + 0x10))
                                         ((long *)*puVar10,uVar19 << 3,8);
            if (local_88 == (long *)0x0) {
              (**(code **)(*(long *)*puVar10 + 0xe8))();
            }
            local_80 = local_88 + (uVar19 >> 2);
            local_70 = local_88 + uVar19;
            local_78 = local_80;
            FUN_026f7828(&local_88,plVar8,plVar8);
            local_98 = local_78;
            plVar12 = local_80;
            plVar18 = local_88;
            local_a0 = local_70;
            local_88 = plVar14;
            local_80 = plVar8;
            local_78 = plVar8;
            local_70 = plVar21;
            if (plVar14 != (long *)0x0) {
              plVar21 = (long *)*local_68;
              uVar19 = (**(code **)(*plVar21 + 0xf8))(plVar21);
              if (((uVar19 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                (**(code **)(*plVar21 + 0x18))(plVar21,plVar14,lVar6,8);
              }
              else {
                FUN_00c48fe8(plVar21,plVar14,lVar6,8);
              }
            }
          }
          else {
            plVar12 = plVar8;
LAB_00fe5f28:
            plVar18 = plVar14;
            local_98 = plVar12;
            local_a0 = plVar21;
          }
          uVar19 = *puVar10;
          if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar6 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar6 == 0) {
            *local_98 = lVar5;
          }
          else {
            if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00fe66c8;
            *(ulong *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar19;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            *local_98 = lVar5;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          }
          local_98 = local_98 + 1;
          for (uVar19 = param_1[2]; uVar19 != param_1[1]; uVar19 = uVar19 - 8) {
            plVar14 = plVar18;
            __dest = plVar12;
            if (plVar12 == plVar18) {
              if (local_98 < local_a0) {
                lVar5 = (long)local_a0 - (long)local_98 >> 3;
                uVar16 = lVar5 + 2;
                if (-1 < lVar5 + 1) {
                  uVar16 = lVar5 + 1;
                }
                sVar2 = (long)local_98 - (long)plVar12;
                local_98 = (long *)((long)local_98 + (uVar16 & 0x3ffffffffffffffe) * 4);
                __dest = local_98;
                if (sVar2 != 0) {
                  __dest = (long *)((long)local_98 - sVar2);
                  memmove(__dest,plVar12,sVar2);
                }
              }
              else {
                lVar6 = (long)local_a0 - (long)plVar18;
                lVar5 = lVar6 >> 2;
                if (lVar6 == 0) {
                  lVar5 = 1;
                }
                local_70 = (long *)0x0;
                local_68 = puVar10;
                plVar14 = (long *)(**(code **)(*(long *)*puVar10 + 0x10))
                                            ((long *)*puVar10,lVar5 << 3,8);
                if (plVar14 == (long *)0x0) {
                  (**(code **)(*(long *)*puVar10 + 0xe8))();
                }
                local_80 = plVar14 + (lVar5 + 3U >> 2);
                local_70 = plVar14 + lVar5;
                local_88 = plVar14;
                local_78 = local_80;
                FUN_026f7828(&local_88,plVar12,local_98);
                plVar8 = local_70;
                plVar21 = local_78;
                __dest = local_80;
                plVar14 = local_88;
                local_78 = local_98;
                local_70 = local_a0;
                if ((long)local_98 - (long)plVar12 != 0) {
                  local_78 = local_98 +
                             (((long)local_98 - (long)plVar12) - 8U >> 3 ^ 0xffffffffffffffff);
                }
                local_88 = plVar18;
                local_80 = plVar12;
                if (plVar18 != (long *)0x0) {
                  plVar12 = (long *)*local_68;
                  uVar16 = (**(code **)(*plVar12 + 0xf8))(plVar12);
                  if (((uVar16 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1))
                  {
                    (**(code **)(*plVar12 + 0x18))(plVar12,plVar18,lVar6,8);
                  }
                  else {
                    FUN_00c48fe8(plVar12,plVar18,lVar6,8);
                  }
                }
                local_a0 = plVar8;
                local_98 = plVar21;
              }
            }
            plVar12 = __dest + -1;
            uVar16 = *puVar10;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar5 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar5 == 0) {
              *plVar12 = *(long *)(uVar19 - 8);
            }
            else {
              if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00fe66c8;
              *(ulong *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar16;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
              *plVar12 = *(long *)(uVar19 - 8);
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            }
            plVar18 = plVar14;
          }
          uVar16 = *param_1;
          *param_1 = (ulong)plVar18;
          param_1[1] = (ulong)plVar12;
          uVar19 = param_1[3];
          param_1[2] = (ulong)local_98;
          param_1[3] = (ulong)local_a0;
          if (uVar16 != 0) {
            plVar14 = (long *)*puVar10;
            uVar15 = (**(code **)(*plVar14 + 0xf8))(plVar14);
            if (((uVar15 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
              (**(code **)(*plVar14 + 0x18))(plVar14,uVar16,uVar19 - uVar16,8);
            }
            else {
              FUN_00c48fe8(plVar14,uVar16,uVar19 - uVar16,8);
            }
          }
        }
      }
      else {
        param_1[8] = uVar1 - 0x38;
LAB_00fe60e8:
        local_88 = (long *)*puVar10;
        param_1[1] = (ulong)(puVar10 + 1);
        FUN_00fe66ec(param_1,&local_88);
      }
      uVar15 = param_1[8] + param_1[9];
      puVar10 = (ulong *)param_1[1];
      puVar9 = (ulong *)param_1[2];
    }
    if (puVar9 == puVar10) {
      puVar17 = (undefined8 *)0x0;
    }
    else {
      puVar17 = (undefined8 *)(puVar10[uVar15 / 0x38] + (uVar15 % 0x38) * 0x48);
    }
    uVar19 = param_1[10];
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00fe66c8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(ulong *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar19;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    puVar17[3] = 0;
    puVar17[4] = 0;
    *puVar17 = 0;
    puVar17[6] = param_2;
    *(undefined4 *)(puVar17 + 7) = param_3;
    *(undefined4 *)((long)puVar17 + 0x3c) = param_4;
    *(undefined4 *)(puVar17 + 8) = 0xffffffff;
    puVar17[1] = 0;
    puVar17[2] = 0;
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    uVar19 = param_1[8] + param_1[9];
    param_1[9] = param_1[9] + 1;
    uVar19 = *(long *)(param_1[1] + (uVar19 / 0x38) * 8) + (uVar19 % 0x38) * 0x48;
  }
  else {
    uVar19 = param_1[0x16];
    *(ulong *)(uVar19 + 0x30) = param_2;
    *(undefined4 *)(uVar19 + 0x38) = param_3;
    *(undefined4 *)(uVar19 + 0x3c) = param_4;
    plVar21 = (long *)param_1[0x16];
    lVar5 = *plVar21;
    plVar14 = (long *)plVar21[1];
    *plVar14 = lVar5;
    *(long **)(lVar5 + 8) = plVar14;
    param_1[0x14] = param_1[0x14] - 1;
    *plVar21 = 0;
    plVar21[1] = 0;
  }
  puVar10 = param_1 + 0x10;
  if ((ulong *)*puVar10 == (ulong *)0x0) {
LAB_00fe5d8c:
    param_1[0x12] = uVar19 + 0x10;
    param_1[0x10] = uVar19 + 0x10;
    puVar11 = puVar10;
  }
  else {
    uVar16 = *(ulong *)(uVar19 + 0x30);
    puVar9 = (ulong *)0x0;
    puVar13 = (ulong *)*puVar10;
    do {
      puVar11 = puVar13;
      uVar15 = puVar11[4];
      if (uVar15 <= uVar16) {
        puVar9 = puVar11;
      }
      lVar5 = 8;
      if (uVar15 <= uVar16) {
        lVar5 = 0x10;
      }
      puVar13 = *(ulong **)((long)puVar11 + lVar5);
    } while (*(ulong **)((long)puVar11 + lVar5) != (ulong *)0x0);
    if ((puVar9 != (ulong *)0x0) && (uVar16 <= puVar9[4])) {
      return;
    }
    uVar1 = uVar19 + 0x10;
    if (uVar15 <= uVar16) {
      uVar16 = puVar11[2];
      if (uVar16 == 0) {
        plVar14 = (long *)*puVar11;
        if ((puVar11 == (ulong *)plVar14[2]) &&
           (plVar21 = (long *)*plVar14, plVar14 == (long *)((long *)*plVar14)[2])) {
          do {
            bVar3 = plVar21 == (long *)((long *)*plVar21)[2];
            plVar21 = (long *)*plVar21;
          } while (bVar3);
        }
      }
      else {
        do {
          uVar16 = *(ulong *)(uVar16 + 8);
        } while (uVar16 != 0);
      }
      if (puVar10 != puVar11) {
        puVar11[2] = uVar1;
        if ((ulong *)param_1[0x12] == puVar11) {
          param_1[0x12] = uVar1;
        }
        goto LAB_00fe5d9c;
      }
      goto LAB_00fe5d8c;
    }
    if (puVar10 == puVar11) goto LAB_00fe5d8c;
    puVar11[1] = uVar1;
    if ((ulong *)param_1[0x11] != puVar11) goto LAB_00fe5d9c;
  }
  param_1[0x11] = uVar19 + 0x10;
LAB_00fe5d9c:
  *(ulong **)(uVar19 + 0x10) = puVar11;
  *(undefined8 *)(uVar19 + 0x18) = 0;
  *(undefined8 *)(uVar19 + 0x20) = 0;
  FUN_00d287fc();
  param_1[0xf] = param_1[0xf] + 1;
  return;
}



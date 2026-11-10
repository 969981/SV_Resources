/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0170c7f8; name: FUN_0170c7f8
 */


void FUN_0170c7f8(ulong *param_1,undefined8 *param_2)

{
  long *plVar1;
  size_t __n;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *__src;
  long *plVar15;
  long *plVar16;
  long *local_a0;
  long *local_90;
  long *local_88;
  long *plStack_80;
  long *local_78;
  long *local_70;
  ulong *local_68;
  
  puVar11 = (ulong *)param_1[1];
  puVar12 = (ulong *)param_1[2];
  lVar4 = (long)puVar12 - (long)puVar11;
  uVar14 = 0;
  if (lVar4 != 0) {
    uVar14 = lVar4 * 0x40 - 1;
  }
  uVar7 = param_1[8];
  uVar10 = param_1[9] + uVar7;
  if (uVar14 == uVar10) {
    if (uVar7 < 0x200) {
      uVar14 = lVar4 >> 3;
      lVar4 = (long)param_1[3] - *param_1;
      if (uVar14 < (ulong)(lVar4 >> 3)) {
        if ((ulong *)param_1[3] == puVar12) {
          local_88 = (long *)(**(code **)(*(long *)param_1[10] + 0x10))
                                       ((long *)param_1[10],0x1000,8);
          if (local_88 == (long *)0x0) {
            (**(code **)(*(long *)param_1[10] + 0xe8))();
          }
          FUN_0170d490(param_1,&local_88);
          puVar11 = (ulong *)param_1[1];
          goto LAB_0170c8f0;
        }
        local_88 = (long *)(**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
        if (local_88 == (long *)0x0) {
          (**(code **)(*(long *)param_1[10] + 0xe8))();
        }
        FUN_0170d214(param_1,&local_88);
      }
      else {
        uVar10 = lVar4 >> 2;
        if (lVar4 == 0) {
          uVar10 = 1;
        }
        puVar11 = param_1 + 4;
        plVar5 = (long *)(**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,uVar10 << 3,8);
        if (plVar5 == (long *)0x0) {
          (**(code **)(*(long *)*puVar11 + 0xe8))();
        }
        plVar16 = plVar5 + uVar14;
        plVar1 = plVar5 + uVar10;
        lVar4 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
        if (lVar4 == 0) {
          (**(code **)(*(long *)param_1[10] + 0xe8))();
        }
        local_a0 = plVar1;
        local_90 = plVar5;
        if (uVar14 == uVar10) {
          if (plVar16 < plVar5 || (long)plVar16 - (long)plVar5 == 0) {
            lVar6 = (long)plVar1 - (long)plVar5;
            uVar14 = lVar6 >> 2;
            if (lVar6 == 0) {
              uVar14 = 1;
            }
            local_70 = (long *)0x0;
            local_68 = puVar11;
            local_88 = (long *)(**(code **)(*(long *)*puVar11 + 0x10))
                                         ((long *)*puVar11,uVar14 << 3,8);
            if (local_88 == (long *)0x0) {
              (**(code **)(*(long *)*puVar11 + 0xe8))();
            }
            plStack_80 = local_88 + (uVar14 >> 2);
            local_70 = local_88 + uVar14;
            local_78 = plStack_80;
            FUN_0170d71c(&local_88,plVar16,plVar16);
            plVar15 = local_78;
            __src = plStack_80;
            local_90 = local_88;
            local_a0 = local_70;
            local_88 = plVar5;
            plStack_80 = plVar16;
            local_78 = plVar16;
            local_70 = plVar1;
            if (plVar5 != (long *)0x0) {
              plVar16 = (long *)*local_68;
              uVar14 = (**(code **)(*plVar16 + 0xf8))(plVar16);
              if (((uVar14 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                (**(code **)(*plVar16 + 0x18))(plVar16,plVar5,lVar6,8);
              }
              else {
                FUN_00c48fe8(plVar16,plVar5,lVar6,8);
              }
            }
          }
          else {
            lVar6 = (long)plVar16 - (long)plVar5 >> 3;
            uVar14 = lVar6 + 2;
            if (-1 < lVar6 + 1) {
              uVar14 = lVar6 + 1;
            }
            __src = (long *)((long)plVar16 + (uVar14 & 0x3ffffffffffffffe) * -4);
            plVar15 = __src;
          }
        }
        else {
          __src = plVar16;
          plVar15 = plVar16;
        }
        uVar14 = *puVar11;
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          *plVar15 = lVar4;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0170cf40;
          *(ulong *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          *plVar15 = lVar4;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        uVar14 = param_1[2];
        plVar15 = plVar15 + 1;
        plVar5 = plVar15;
        if (uVar14 != param_1[1]) {
          do {
            plVar16 = __src;
            plVar15 = plVar5;
            if (__src == local_90) {
              if (plVar5 < local_a0) {
                lVar4 = (long)local_a0 - (long)plVar5 >> 3;
                uVar10 = lVar4 + 2;
                if (-1 < lVar4 + 1) {
                  uVar10 = lVar4 + 1;
                }
                __n = (long)plVar5 - (long)__src;
                plVar15 = (long *)((long)plVar5 + (uVar10 & 0x3ffffffffffffffe) * 4);
                plVar16 = plVar15;
                if (__n != 0) {
                  plVar16 = (long *)((long)plVar15 - __n);
                  memmove(plVar16,__src,__n);
                }
              }
              else {
                lVar6 = (long)local_a0 - (long)local_90;
                lVar4 = lVar6 >> 2;
                if (lVar6 == 0) {
                  lVar4 = 1;
                }
                local_70 = (long *)0x0;
                local_68 = puVar11;
                plVar16 = (long *)(**(code **)(*(long *)*puVar11 + 0x10))
                                            ((long *)*puVar11,lVar4 << 3,8);
                if (plVar16 == (long *)0x0) {
                  (**(code **)(*(long *)*puVar11 + 0xe8))();
                }
                plStack_80 = plVar16 + (lVar4 + 3U >> 2);
                local_70 = plVar16 + lVar4;
                local_88 = plVar16;
                local_78 = plStack_80;
                FUN_0170d71c(&local_88,__src,plVar5);
                plVar2 = local_70;
                plVar15 = local_78;
                plVar16 = plStack_80;
                plVar1 = local_88;
                local_88 = local_90;
                local_70 = local_a0;
                local_78 = plVar5;
                if ((long)plVar5 - (long)__src != 0) {
                  local_78 = plVar5 + (((long)plVar5 - (long)__src) - 8U >> 3 ^ 0xffffffffffffffff);
                }
                plStack_80 = __src;
                if (local_90 != (long *)0x0) {
                  plVar5 = (long *)*local_68;
                  uVar10 = (**(code **)(*plVar5 + 0xf8))(plVar5);
                  if (((uVar10 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1))
                  {
                    (**(code **)(*plVar5 + 0x18))(plVar5,local_90,lVar6,8);
                  }
                  else {
                    FUN_00c48fe8(plVar5,local_90,lVar6,8);
                  }
                }
                local_90 = plVar1;
                local_a0 = plVar2;
              }
            }
            uVar10 = *puVar11;
            __src = plVar16 + -1;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar4 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar4 == 0) {
              *__src = *(long *)(uVar14 - 8);
            }
            else {
              if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0170cf40;
              *(ulong *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar10;
              *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
              *__src = *(long *)(uVar14 - 8);
              *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
            }
            uVar14 = uVar14 - 8;
            plVar5 = plVar15;
          } while (uVar14 != param_1[1]);
        }
        uVar10 = *param_1;
        *param_1 = (ulong)local_90;
        param_1[1] = (ulong)__src;
        uVar14 = param_1[3];
        param_1[2] = (ulong)plVar15;
        param_1[3] = (ulong)local_a0;
        if (uVar10 != 0) {
          plVar5 = (long *)*puVar11;
          uVar7 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          if (((uVar7 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar5 + 0x18))(plVar5,uVar10,uVar14 - uVar10,8);
          }
          else {
            FUN_00c48fe8(plVar5,uVar10,uVar14 - uVar10,8);
          }
        }
      }
    }
    else {
      param_1[8] = uVar7 - 0x200;
LAB_0170c8f0:
      local_88 = (long *)*puVar11;
      param_1[1] = (ulong)(puVar11 + 1);
      FUN_0170cf9c(param_1,&local_88);
    }
    uVar10 = param_1[8] + param_1[9];
    puVar11 = (ulong *)param_1[1];
    puVar12 = (ulong *)param_1[2];
  }
  if (puVar12 == puVar11) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar13 = (undefined8 *)
              (*(long *)((long)puVar11 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8);
  }
  uVar14 = param_1[10];
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    uVar9 = *param_2;
    *param_2 = 0;
    *puVar13 = uVar9;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_0170cf40:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(ulong *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar14;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    uVar9 = *param_2;
    *param_2 = 0;
    *puVar13 = uVar9;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  param_1[9] = param_1[9] + 1;
  return;
}



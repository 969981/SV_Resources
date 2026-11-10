/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c8b7ec; name: FUN_00c8b7ec
 */


void FUN_00c8b7ec(ulong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  size_t __n;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *__dest;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *__src;
  long *plVar16;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  ulong *local_68;
  
  puVar11 = (ulong *)param_1[1];
  puVar12 = (ulong *)param_1[2];
  lVar3 = (long)puVar12 - (long)puVar11;
  uVar15 = 0;
  if (lVar3 != 0) {
    uVar15 = lVar3 * 8 - 1;
  }
  uVar6 = param_1[8];
  uVar10 = param_1[9] + uVar6;
  if (uVar15 == uVar10) {
    if (uVar6 < 0x40) {
      uVar15 = lVar3 >> 3;
      lVar3 = (long)param_1[3] - *param_1;
      if (uVar15 < (ulong)(lVar3 >> 3)) {
        if ((ulong *)param_1[3] == puVar12) {
          local_88 = (long *)(**(code **)(*(long *)param_1[10] + 0x10))
                                       ((long *)param_1[10],0x1000,8);
          if (local_88 == (long *)0x0) {
            (**(code **)(*(long *)param_1[10] + 0xe8))();
          }
          FUN_00c8c520(param_1,&local_88);
          puVar11 = (ulong *)param_1[1];
          goto LAB_00c8bbd0;
        }
        local_88 = (long *)(**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
        if (local_88 == (long *)0x0) {
          (**(code **)(*(long *)param_1[10] + 0xe8))();
        }
        FUN_00c8c028(param_1,&local_88);
      }
      else {
        uVar10 = lVar3 >> 2;
        if (lVar3 == 0) {
          uVar10 = 1;
        }
        puVar11 = param_1 + 4;
        plVar4 = (long *)(**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,uVar10 << 3,8);
        if (plVar4 == (long *)0x0) {
          (**(code **)(*(long *)*puVar11 + 0xe8))();
        }
        plVar7 = plVar4 + uVar15;
        plVar1 = plVar4 + uVar10;
        lVar3 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
        if (lVar3 == 0) {
          (**(code **)(*(long *)param_1[10] + 0xe8))();
        }
        local_a0 = plVar1;
        local_98 = plVar4;
        if (uVar15 == uVar10) {
          if (plVar7 < plVar4 || (long)plVar7 - (long)plVar4 == 0) {
            lVar5 = (long)plVar1 - (long)plVar4;
            uVar15 = lVar5 >> 2;
            if (lVar5 == 0) {
              uVar15 = 1;
            }
            local_70 = (long *)0x0;
            local_68 = puVar11;
            local_88 = (long *)(**(code **)(*(long *)*puVar11 + 0x10))
                                         ((long *)*puVar11,uVar15 << 3,8);
            if (local_88 == (long *)0x0) {
              (**(code **)(*(long *)*puVar11 + 0xe8))();
            }
            local_80 = local_88 + (uVar15 >> 2);
            local_70 = local_88 + uVar15;
            local_78 = local_80;
            FUN_02711478(&local_88,plVar7,plVar7);
            local_a0 = local_70;
            plVar16 = local_78;
            __src = local_80;
            local_98 = local_88;
            local_88 = plVar4;
            local_80 = plVar7;
            local_78 = plVar7;
            local_70 = plVar1;
            if (plVar4 != (long *)0x0) {
              plVar7 = (long *)*local_68;
              uVar15 = (**(code **)(*plVar7 + 0xf8))(plVar7);
              if (((uVar15 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                (**(code **)(*plVar7 + 0x18))(plVar7,plVar4,lVar5,8);
              }
              else {
                FUN_00c48fe8(plVar7,plVar4,lVar5,8);
              }
            }
          }
          else {
            lVar5 = (long)plVar7 - (long)plVar4 >> 3;
            uVar15 = lVar5 + 2;
            if (-1 < lVar5 + 1) {
              uVar15 = lVar5 + 1;
            }
            __src = (long *)((long)plVar7 + (uVar15 & 0x3ffffffffffffffe) * -4);
            plVar16 = __src;
          }
        }
        else {
          __src = plVar7;
          plVar16 = plVar7;
        }
        uVar15 = *puVar11;
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          *plVar16 = lVar3;
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00c8bf98;
          *(ulong *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar15;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          *plVar16 = lVar3;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        uVar15 = param_1[2];
        plVar16 = plVar16 + 1;
        plVar4 = plVar16;
        if (uVar15 != param_1[1]) {
          do {
            __dest = __src;
            plVar16 = plVar4;
            if (__src == local_98) {
              if (plVar4 < local_a0) {
                lVar3 = (long)local_a0 - (long)plVar4 >> 3;
                uVar10 = lVar3 + 2;
                if (-1 < lVar3 + 1) {
                  uVar10 = lVar3 + 1;
                }
                __n = (long)plVar4 - (long)__src;
                plVar16 = (long *)((long)plVar4 + (uVar10 & 0x3ffffffffffffffe) * 4);
                __dest = plVar16;
                if (__n != 0) {
                  __dest = (long *)((long)plVar16 - __n);
                  memmove(__dest,__src,__n);
                }
              }
              else {
                lVar5 = (long)local_a0 - (long)local_98;
                lVar3 = lVar5 >> 2;
                if (lVar5 == 0) {
                  lVar3 = 1;
                }
                local_70 = (long *)0x0;
                local_68 = puVar11;
                plVar7 = (long *)(**(code **)(*(long *)*puVar11 + 0x10))
                                           ((long *)*puVar11,lVar3 << 3,8);
                if (plVar7 == (long *)0x0) {
                  (**(code **)(*(long *)*puVar11 + 0xe8))();
                }
                local_80 = plVar7 + (lVar3 + 3U >> 2);
                local_70 = plVar7 + lVar3;
                local_88 = plVar7;
                local_78 = local_80;
                FUN_02711478(&local_88,__src,plVar4);
                plVar1 = local_70;
                plVar16 = local_78;
                __dest = local_80;
                plVar7 = local_88;
                local_88 = local_98;
                local_70 = local_a0;
                local_78 = plVar4;
                if ((long)plVar4 - (long)__src != 0) {
                  local_78 = plVar4 + (((long)plVar4 - (long)__src) - 8U >> 3 ^ 0xffffffffffffffff);
                }
                local_80 = __src;
                if (local_98 != (long *)0x0) {
                  plVar4 = (long *)*local_68;
                  uVar10 = (**(code **)(*plVar4 + 0xf8))(plVar4);
                  if (((uVar10 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1))
                  {
                    (**(code **)(*plVar4 + 0x18))(plVar4,local_98,lVar5,8);
                  }
                  else {
                    FUN_00c48fe8(plVar4,local_98,lVar5,8);
                  }
                }
                local_a0 = plVar1;
                local_98 = plVar7;
              }
            }
            __src = __dest + -1;
            uVar10 = *puVar11;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar3 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar3 == 0) {
              *__src = *(long *)(uVar15 - 8);
            }
            else {
              if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00c8bf98;
              *(ulong *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar10;
              *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
              *__src = *(long *)(uVar15 - 8);
              *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
            }
            uVar15 = uVar15 - 8;
            plVar4 = plVar16;
          } while (uVar15 != param_1[1]);
        }
        uVar10 = *param_1;
        *param_1 = (ulong)local_98;
        param_1[1] = (ulong)__src;
        uVar15 = param_1[3];
        param_1[2] = (ulong)plVar16;
        param_1[3] = (ulong)local_a0;
        if (uVar10 != 0) {
          plVar4 = (long *)*puVar11;
          uVar6 = (**(code **)(*plVar4 + 0xf8))(plVar4);
          if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
            (**(code **)(*plVar4 + 0x18))(plVar4,uVar10,uVar15 - uVar10,8);
          }
          else {
            FUN_00c48fe8(plVar4,uVar10,uVar15 - uVar10,8);
          }
        }
      }
    }
    else {
      param_1[8] = uVar6 - 0x40;
LAB_00c8bbd0:
      local_88 = (long *)*puVar11;
      param_1[1] = (ulong)(puVar11 + 1);
      FUN_00c8c2a4(param_1,&local_88);
    }
    uVar10 = param_1[8] + param_1[9];
    puVar11 = (ulong *)param_1[1];
    puVar12 = (ulong *)param_1[2];
  }
  if (puVar12 == puVar11) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    puVar14 = (undefined8 *)
              (*(long *)((long)puVar11 + (uVar10 >> 3 & 0x1ffffffffffffff8)) +
              (uVar10 & 0x3f) * 0x40);
  }
  uVar15 = param_1[10];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    uVar9 = *param_2;
    uVar13 = *param_3;
    *puVar14 = 0;
    puVar14[3] = 0;
    puVar14[4] = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar14[6] = uVar9;
    puVar14[7] = uVar13;
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00c8bf98:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(ulong *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar15;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    uVar9 = *param_2;
    uVar13 = *param_3;
    puVar14[3] = 0;
    puVar14[4] = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    puVar14[6] = uVar9;
    puVar14[7] = uVar13;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  param_1[9] = param_1[9] + 1;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f5de3c; name: FUN_00f5de3c
 */


void FUN_00f5de3c(int *param_1,long param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ushort uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  void *pvVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *local_90;
  ulong local_80;
  ulong local_78;
  void *local_70;
  undefined8 local_68;
  
  lVar8 = (long)*param_1;
  uVar6 = *(ushort *)((long)param_1 - lVar8);
  if (uVar6 < 5) {
    return;
  }
  uVar9 = (ulong)((ushort *)((long)param_1 - lVar8))[2];
  if (uVar9 != 0) {
    puVar1 = (uint *)((long)param_1 + uVar9);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    uVar2 = *puVar1;
    uVar9 = (ulong)uVar2;
    if (uVar2 < 0x17) {
      local_80 = CONCAT71(local_80._1_7_,(char)(uVar2 << 1));
      pvVar15 = (void *)((ulong)&local_80 | 1);
      if (uVar2 != 0) goto LAB_00f5deb0;
    }
    else {
      uVar10 = uVar9 + 0x10 & 0x1fffffff0;
      lVar8 = tpidr_el0;
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar4 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      pvVar15 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar10,8);
      local_80 = uVar10 | 1;
      local_78 = uVar9;
      local_70 = pvVar15;
LAB_00f5deb0:
      memcpy(pvVar15,puVar1 + 1,uVar9);
    }
    *(undefined1 *)((long)pvVar15 + uVar9) = 0;
    FUN_00d44104(&local_68,&local_80);
    plVar4 = *(long **)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    pvVar15 = local_70;
    *(undefined8 *)(param_2 + 8) = local_68;
    if (((local_80 & 1) != 0) && (local_70 != (void *)0x0)) {
      lVar8 = tpidr_el0;
      plVar4 = *(long **)(lVar8 + 0x30);
      if (plVar4 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar4 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,pvVar15,0,8);
      }
      else {
        FUN_00c48fe8(plVar4,pvVar15,0,8);
      }
    }
    lVar8 = (long)*param_1;
    uVar6 = *(ushort *)((long)param_1 - lVar8);
  }
  lVar8 = -lVar8;
  if (uVar6 < 7) {
    return;
  }
  uVar9 = (ulong)*(ushort *)((long)param_1 + lVar8 + 6);
  if (uVar9 == 0) goto LAB_00f5df88;
  puVar1 = (uint *)((long)param_1 + uVar9);
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  uVar2 = *puVar1;
  uVar9 = (ulong)uVar2;
  if (uVar2 < 0x17) {
    local_80 = CONCAT71(local_80._1_7_,(char)(uVar2 << 1));
    pvVar15 = (void *)((ulong)&local_80 | 1);
    if (uVar2 != 0) goto LAB_00f5df3c;
  }
  else {
    uVar10 = uVar9 + 0x10 & 0x1fffffff0;
    lVar8 = tpidr_el0;
    plVar4 = *(long **)(lVar8 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    pvVar15 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar10,8);
    local_80 = uVar10 | 1;
    local_78 = uVar9;
    local_70 = pvVar15;
LAB_00f5df3c:
    memcpy(pvVar15,puVar1 + 1,uVar9);
  }
  *(undefined1 *)((long)pvVar15 + uVar9) = 0;
  FUN_00d44104(&local_68,&local_80);
  plVar4 = *(long **)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  pvVar15 = local_70;
  *(undefined8 *)(param_2 + 0x18) = local_68;
  if (((local_80 & 1) != 0) && (local_70 != (void *)0x0)) {
    lVar8 = tpidr_el0;
    plVar4 = *(long **)(lVar8 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar9 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,pvVar15,0,8);
    }
    else {
      FUN_00c48fe8(plVar4,pvVar15,0,8);
    }
  }
  lVar8 = -(long)*param_1;
  uVar6 = *(ushort *)((long)param_1 - (long)*param_1);
LAB_00f5df88:
  if ((8 < uVar6) && (uVar9 = (ulong)*(ushort *)((long)param_1 + lVar8 + 8), uVar9 != 0)) {
    puVar1 = (uint *)((long)param_1 + uVar9);
    plVar4 = (long *)(param_2 + 0x20);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    puVar17 = *(undefined8 **)(param_2 + 0x28);
    uVar9 = (ulong)*puVar1;
    uVar10 = (long)puVar17 - *plVar4 >> 3;
    if (uVar10 < uVar9) {
      FUN_00f5ea6c(plVar4,uVar9 - uVar10);
    }
    else if (uVar10 != uVar9) {
      puVar12 = (undefined8 *)(*plVar4 + uVar9 * 8);
      if (puVar12 != puVar17) {
        lVar8 = tpidr_el0;
        do {
          puVar17 = puVar17 + -1;
          puVar11 = (undefined8 *)*puVar17;
          *puVar17 = 0;
          if (puVar11 != (undefined8 *)0x0) {
            puVar13 = (undefined8 *)*puVar11;
            if (puVar13 != (undefined8 *)0x0) {
              puVar16 = (undefined8 *)puVar11[1];
              if (puVar16 == puVar13) {
                puVar16 = puVar13;
              }
              else {
                do {
                  puVar16 = puVar16 + -1;
                  puVar14 = (undefined8 *)*puVar16;
                  *puVar16 = 0;
                  if (puVar14 != (undefined8 *)0x0) {
                    FUN_00d44bc8(puVar14 + 2);
                    *puVar14 = &PTR_LAB_045a0398;
                    if ((long *)puVar14[1] != (long *)0x0) {
                      (**(code **)(*(long *)puVar14[1] + 0x20))();
                    }
                    local_90 = *(long **)(lVar8 + 0x30);
                    if (local_90 == (long *)0x0) {
                      if (((DAT_04859438 & 1) == 0) &&
                         (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                        DAT_04859430 = DAT_04859418;
                        __cxa_guard_release(&DAT_04859438);
                      }
                      local_90 = DAT_04859430;
                      *(long **)(lVar8 + 0x30) = DAT_04859430;
                    }
                    uVar9 = (**(code **)(*local_90 + 0xf8))();
                    if (((uVar9 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)
                       ) {
                      (**(code **)(*local_90 + 0x18))(local_90,puVar14,0,8);
                    }
                    else {
                      FUN_00c48fe8(local_90,puVar14,0,8);
                    }
                  }
                } while (puVar13 != puVar16);
                puVar16 = (undefined8 *)*puVar11;
              }
              puVar11[1] = puVar13;
              if (puVar16 != (undefined8 *)0x0) {
                plVar7 = *(long **)(lVar8 + 0x30);
                if (plVar7 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar7 = DAT_04859430;
                  *(long **)(lVar8 + 0x30) = DAT_04859430;
                }
                uVar9 = (**(code **)(*plVar7 + 0xf8))(plVar7);
                if (((uVar9 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                  (**(code **)(*plVar7 + 0x18))(plVar7,puVar16,0,8);
                }
                else {
                  FUN_00c48fe8(plVar7,puVar16,0,8);
                }
              }
            }
            plVar7 = *(long **)(lVar8 + 0x30);
            if (plVar7 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar7 = DAT_04859430;
              *(long **)(lVar8 + 0x30) = DAT_04859430;
            }
            uVar9 = (**(code **)(*plVar7 + 0xf8))(plVar7);
            if (((uVar9 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
              (**(code **)(*plVar7 + 0x18))(plVar7,puVar11,0,8);
            }
            else {
              FUN_00c48fe8(plVar7,puVar11,0,8);
            }
          }
        } while (puVar17 != puVar12);
      }
      *(undefined8 **)(param_2 + 0x28) = puVar12;
    }
    if (*puVar1 != 0) {
      uVar9 = 0;
      lVar8 = tpidr_el0;
      do {
        uVar2 = puVar1[uVar9 + 1];
        plVar7 = *(long **)(lVar8 + 0x30);
        if (plVar7 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar7 = DAT_04859430;
          *(long **)(lVar8 + 0x30) = DAT_04859430;
        }
        puVar17 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x18,8);
        *puVar17 = 0;
        puVar17[1] = 0;
        puVar17[2] = 0;
        FUN_00d43b60((long)(puVar1 + uVar9 + 1) + (ulong)uVar2,puVar17,param_3);
        puVar12 = *(undefined8 **)(*plVar4 + uVar9 * 8);
        *(undefined8 **)(*plVar4 + uVar9 * 8) = puVar17;
        if (puVar12 != (undefined8 *)0x0) {
          puVar17 = (undefined8 *)*puVar12;
          if (puVar17 != (undefined8 *)0x0) {
            puVar11 = (undefined8 *)puVar12[1];
            if (puVar11 == puVar17) {
              puVar11 = puVar17;
            }
            else {
              do {
                puVar11 = puVar11 + -1;
                puVar13 = (undefined8 *)*puVar11;
                *puVar11 = 0;
                if (puVar13 != (undefined8 *)0x0) {
                  FUN_00d44bc8(puVar13 + 2);
                  *puVar13 = &PTR_LAB_045a0398;
                  if ((long *)puVar13[1] != (long *)0x0) {
                    (**(code **)(*(long *)puVar13[1] + 0x20))();
                  }
                  plVar7 = *(long **)(lVar8 + 0x30);
                  if (plVar7 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar7 = DAT_04859430;
                    *(long **)(lVar8 + 0x30) = DAT_04859430;
                  }
                  uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
                  if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1))
                  {
                    (**(code **)(*plVar7 + 0x18))(plVar7,puVar13,0,8);
                  }
                  else {
                    FUN_00c48fe8(plVar7,puVar13,0,8);
                  }
                }
              } while (puVar17 != puVar11);
              puVar11 = (undefined8 *)*puVar12;
            }
            puVar12[1] = puVar17;
            if (puVar11 != (undefined8 *)0x0) {
              plVar7 = *(long **)(lVar8 + 0x30);
              if (plVar7 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar7 = DAT_04859430;
                *(long **)(lVar8 + 0x30) = DAT_04859430;
              }
              uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
              if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                (**(code **)(*plVar7 + 0x18))(plVar7,puVar11,0,8);
              }
              else {
                FUN_00c48fe8(plVar7,puVar11,0,8);
              }
            }
          }
          plVar7 = *(long **)(lVar8 + 0x30);
          if (plVar7 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar7 = DAT_04859430;
            *(long **)(lVar8 + 0x30) = DAT_04859430;
          }
          uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,puVar12,0,8);
          }
          else {
            FUN_00c48fe8(plVar7,puVar12,0,8);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *puVar1);
    }
  }
  return;
}



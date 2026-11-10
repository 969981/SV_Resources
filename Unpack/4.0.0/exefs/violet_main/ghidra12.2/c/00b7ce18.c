/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b7ce18; name: FUN_00b7ce18
 */


undefined8 * FUN_00b7ce18(long param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  size_t __n;
  ulong uVar18;
  void *pvVar19;
  ulong local_b0;
  size_t local_a8;
  void *local_a0;
  undefined8 *local_98;
  byte local_90 [16];
  ulong local_80;
  undefined8 *local_78;
  undefined1 *puStack_70;
  ulong local_68;
  
  uVar13 = *(ulong *)(param_1 + 0xa8);
  uVar9 = (long)param_2 * 0xffff + (long)(int)param_3;
  if (uVar13 != 0) {
    uVar10 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar18 = uVar13 - 1 & uVar9;
    }
    else {
      uVar18 = uVar9;
      if (uVar13 <= uVar9) {
        uVar18 = 0;
        if (uVar13 != 0) {
          uVar18 = uVar9 / uVar13;
        }
        uVar18 = uVar9 - uVar18 * uVar13;
      }
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0xa0) + uVar18 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (uVar9 == plVar14[1]) {
            if (((undefined8 *)plVar14[2] == param_2) && (*(uint *)(plVar14 + 3) == param_3))
            goto LAB_00b7cf60;
          }
          else if ((plVar14[1] & uVar13 - 1) != uVar18) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar14[1];
          if (uVar9 == uVar10) {
            if (((undefined8 *)plVar14[2] == param_2) && (*(uint *)(plVar14 + 3) == param_3))
            goto LAB_00b7cf60;
          }
          else {
            if (uVar13 <= uVar10) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar10 / uVar13;
              }
              uVar10 = uVar10 - uVar4 * uVar13;
            }
            if (uVar10 != uVar18) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_00b7cf68:
  lVar1 = param_1 + 0x120;
  FUN_00bb1344(lVar1);
  uVar13 = *(ulong *)(param_1 + 0xd0);
  plVar14 = (long *)(param_1 + 200);
  if (uVar13 != 0) {
    uVar10 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar18 = uVar13 - 1 & uVar9;
    }
    else {
      uVar18 = uVar9;
      if (uVar13 <= uVar9) {
        uVar18 = 0;
        if (uVar13 != 0) {
          uVar18 = uVar9 / uVar13;
        }
        uVar18 = uVar9 - uVar18 * uVar13;
      }
    }
    plVar15 = *(long **)(*plVar14 + uVar18 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar15[1] == uVar9) {
            if (((undefined8 *)plVar15[2] == param_2) && (*(uint *)(plVar15 + 3) == param_3))
            goto LAB_00b7d198;
          }
          else if ((plVar15[1] & uVar13 - 1) != uVar18) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar15[1];
          if (uVar10 == uVar9) {
            if (((undefined8 *)plVar15[2] == param_2) && (*(uint *)(plVar15 + 3) == param_3))
            goto LAB_00b7d198;
          }
          else {
            if (uVar13 <= uVar10) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar10 / uVar13;
              }
              uVar10 = uVar10 - uVar4 * uVar13;
            }
            if (uVar10 != uVar18) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  FUN_00bb14b8(lVar1);
LAB_00b7d088:
  FUN_00bb1344(lVar1);
  uVar13 = *(ulong *)(param_1 + 0xd0);
  if (uVar13 != 0) {
    uVar10 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar18 = uVar13 - 1 & uVar9;
    }
    else {
      uVar18 = uVar9;
      if (uVar13 <= uVar9) {
        uVar18 = 0;
        if (uVar13 != 0) {
          uVar18 = uVar9 / uVar13;
        }
        uVar18 = uVar9 - uVar18 * uVar13;
      }
    }
    plVar15 = *(long **)(*plVar14 + uVar18 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar15[1] == uVar9) {
            if (((undefined8 *)plVar15[2] == param_2) && (*(uint *)(plVar15 + 3) == param_3))
            goto LAB_00b7d1ac;
          }
          else if ((plVar15[1] & uVar13 - 1) != uVar18) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar15[1];
          if (uVar10 == uVar9) {
            if (((undefined8 *)plVar15[2] == param_2) && (*(uint *)(plVar15 + 3) == param_3))
            goto LAB_00b7d1ac;
          }
          else {
            if (uVar13 <= uVar10) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar10 / uVar13;
              }
              uVar10 = uVar10 - uVar4 * uVar13;
            }
            if (uVar10 != uVar18) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_00b7d1b4:
  pbVar11 = (byte *)*param_2;
  if ((*pbVar11 & 1) == 0) {
    pbVar11 = pbVar11 + 1;
  }
  else {
    pbVar11 = *(byte **)(pbVar11 + 0x10);
  }
  FUN_00c0e030(local_90,"UNKNOWN_ENUM_VALUE_%s_%d",pbVar11,(undefined1 *)(ulong)param_3);
  if (DAT_0483a688 != 2) {
    local_68 = local_68 & 0xffffffffffffff00;
    local_78 = (undefined8 *)(PTR_DAT_047daba0 + 0x10);
    puStack_70 = &LAB_00ba6670;
    if (DAT_0483a688 != 2) {
      do {
        lVar12 = DAT_0483a688;
        if (DAT_0483a688 != 0) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(0x483a688,0x10);
        if (bVar3) {
          DAT_0483a688 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      DataMemoryBarrier(2,3);
      if (lVar12 == 0) {
        (**(code **)(PTR_DAT_047daba0 + 0x20))(&local_78);
        DAT_0483a688 = 2;
      }
      else {
        while (lVar12 == 1) {
          sched_yield();
          lVar12 = DAT_0483a688;
        }
      }
    }
  }
  uVar17 = *(undefined8 *)(DAT_0483a678 + 0x20);
  puVar16 = (undefined8 *)FUN_00b7a704(uVar17,0x28);
  local_98 = puVar16;
  uVar7 = FUN_00b7a414(uVar17,local_90);
  *puVar16 = uVar7;
  pbVar11 = (byte *)param_2[1];
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  if ((*pbVar11 & 1) == 0) {
    __n = (size_t)(*pbVar11 >> 1);
    pbVar11 = pbVar11 + 1;
  }
  else {
    __n = *(size_t *)(pbVar11 + 8);
    pbVar11 = *(byte **)(pbVar11 + 0x10);
  }
  if (0xffffffffffffffef < __n + 1) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n + 1 < 0x17) {
    local_b0 = (ulong)(byte)((int)__n << 1);
    pvVar19 = (void *)((ulong)&local_b0 | 1);
    if (__n != 0) goto LAB_00b7d35c;
  }
  else {
    uVar9 = __n + 0x11 & 0xfffffffffffffff0;
    lVar12 = tpidr_el0;
    plVar15 = *(long **)(lVar12 + 0x30);
    if (plVar15 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar15 = DAT_04859430;
      *(long **)(lVar12 + 0x30) = DAT_04859430;
    }
    pvVar19 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar9,8);
    local_b0 = uVar9 | 1;
    local_a8 = __n;
    local_a0 = pvVar19;
LAB_00b7d35c:
    memcpy(pvVar19,pbVar11,__n);
  }
  *(undefined1 *)((long)pvVar19 + __n) = 0;
  std::string::append((char *)&local_b0,0x3bdface);
  uVar9 = (ulong)local_90 | 1;
  if ((local_90[0] & 1) != 0) {
    uVar9 = local_80;
  }
  puVar8 = (ulong *)std::string::append((char *)&local_b0,uVar9);
  puStack_70 = (undefined1 *)puVar8[1];
  local_68 = puVar8[2];
  local_78 = (undefined8 *)*puVar8;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  uVar7 = FUN_00b7a414(uVar17,&local_78);
  uVar9 = local_68;
  puVar16[1] = uVar7;
  if ((((ulong)local_78 & 1) != 0) && (local_68 != 0)) {
    lVar12 = tpidr_el0;
    plVar15 = *(long **)(lVar12 + 0x30);
    if (plVar15 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar15 = DAT_04859430;
      *(long **)(lVar12 + 0x30) = DAT_04859430;
    }
    uVar13 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,uVar9,0,8);
    }
    else {
      FUN_00c48fe8(plVar15,uVar9,0,8);
    }
  }
  pvVar19 = local_a0;
  if (((local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
    lVar12 = tpidr_el0;
    plVar15 = *(long **)(lVar12 + 0x30);
    if (plVar15 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar15 = DAT_04859430;
      *(long **)(lVar12 + 0x30) = DAT_04859430;
    }
    uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,pvVar19,0,8);
    }
    else {
      FUN_00c48fe8(plVar15,pvVar19,0,8);
    }
  }
  *(uint *)(puVar16 + 2) = param_3;
  puVar16[3] = param_2;
  puVar5 = PTR_DAT_047dabe8;
  lVar12 = *(long *)PTR_DAT_047dabe8;
  if (lVar12 == 0) {
    FUN_00bb5d70();
    lVar12 = *(long *)puVar5;
  }
  puVar16[4] = lVar12;
  local_78 = param_2;
  puStack_70 = (undefined1 *)(ulong)param_3;
  FUN_00b7a090(plVar14,&local_78,&local_98);
  if (((local_90[0] & 1) != 0) && (local_80 != 0)) {
    lVar12 = tpidr_el0;
    plVar14 = *(long **)(lVar12 + 0x30);
    if (plVar14 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar14 = DAT_04859430;
      *(long **)(lVar12 + 0x30) = DAT_04859430;
    }
    uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,local_80,0,8);
    }
    else {
      FUN_00c48fe8(plVar14,local_80,0,8);
    }
  }
LAB_00b7d428:
  FUN_00bb14b8(lVar1);
  return puVar16;
LAB_00b7cf60:
  if ((undefined8 *)plVar14[4] != (undefined8 *)0x0) {
    return (undefined8 *)plVar14[4];
  }
  goto LAB_00b7cf68;
LAB_00b7d198:
  puVar16 = (undefined8 *)plVar15[4];
  FUN_00bb14b8(lVar1);
  if (puVar16 != (undefined8 *)0x0) {
    return puVar16;
  }
  goto LAB_00b7d088;
LAB_00b7d1ac:
  puVar16 = (undefined8 *)plVar15[4];
  if (puVar16 != (undefined8 *)0x0) goto LAB_00b7d428;
  goto LAB_00b7d1b4;
}



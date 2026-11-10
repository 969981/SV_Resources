/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00efe6d0; name: FUN_00efe6d0
 */


void FUN_00efe6d0(int *param_1,ulong *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  ulong *__src;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  void *pvVar24;
  uint *puVar25;
  undefined8 *puVar26;
  uint *puVar27;
  ulong uVar28;
  uint *puVar29;
  long lVar30;
  int *local_88;
  ulong local_78;
  ulong local_70;
  void *local_68;
  
  lVar15 = (long)*param_1;
  uVar5 = *(ushort *)((long)param_1 - lVar15);
  lVar6 = tpidr_el0;
  if (uVar5 < 5) goto LAB_00efe88c;
  uVar18 = (ulong)((ushort *)((long)param_1 - lVar15))[2];
  if (uVar18 == 0) goto LAB_00efe784;
  puVar29 = (uint *)((long)param_1 + uVar18);
  puVar29 = (uint *)((long)puVar29 + (ulong)*puVar29);
  uVar4 = *puVar29;
  uVar18 = (ulong)uVar4;
  if (uVar4 < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)(uVar4 << 1));
    pvVar24 = (void *)((ulong)&local_78 | 1);
    if (uVar4 != 0) goto LAB_00efe748;
  }
  else {
    uVar21 = uVar18 + 0x10 & 0x1fffffff0;
    plVar12 = *(long **)(lVar6 + 0x30);
    if (plVar12 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar12 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    pvVar24 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,uVar21,8);
    local_78 = uVar21 | 1;
    local_70 = uVar18;
    local_68 = pvVar24;
LAB_00efe748:
    memcpy(pvVar24,puVar29 + 1,uVar18);
  }
  *(undefined1 *)((long)pvVar24 + uVar18) = 0;
  if (((*param_2 & 1) != 0) && (uVar18 = param_2[2], uVar18 != 0)) {
    plVar12 = *(long **)(lVar6 + 0x30);
    if (plVar12 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar12 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    uVar21 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar21 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,uVar18,0,8);
    }
    else {
      FUN_00c48fe8(plVar12,uVar18,0,8);
    }
  }
  param_2[1] = local_70;
  param_2[2] = (ulong)local_68;
  *param_2 = local_78;
  lVar15 = (long)*param_1;
  uVar5 = *(ushort *)((long)param_1 - lVar15);
LAB_00efe784:
  if (uVar5 < 7) goto LAB_00efe88c;
  puVar29 = (uint *)(ulong)*(ushort *)((long)param_1 + (6 - lVar15));
  if (puVar29 == (uint *)0x0) goto LAB_00efe88c;
  puVar27 = (uint *)((long)param_1 + (long)puVar29);
  uVar28 = (ulong)*puVar27;
  __src = (ulong *)param_2[3];
  pvVar24 = (void *)param_2[4];
  uVar21 = (long)pvVar24 - (long)__src;
  uVar18 = (ulong)*(uint *)((long)puVar27 + uVar28);
  local_88 = param_1;
  if (uVar21 < uVar18) {
    uVar23 = uVar18 - uVar21;
    if (param_2[5] - (long)pvVar24 < uVar23) {
      uVar11 = param_2[5] - (long)__src;
      uVar16 = uVar11 * 2;
      uVar3 = uVar18;
      if (uVar18 <= uVar16) {
        uVar3 = uVar16;
      }
      if (0x3ffffffffffffffe < uVar11) {
        uVar3 = 0x7fffffffffffffff;
      }
      if (uVar3 == 0) {
        pvVar24 = (void *)0x0;
      }
      else {
        plVar12 = *(long **)(lVar6 + 0x30);
        if (plVar12 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar12 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,uVar3,8);
      }
      memset((void *)((long)pvVar24 + uVar21),0,uVar23);
      if (0 < (long)uVar21) {
        memcpy(pvVar24,__src,uVar21);
      }
      param_2[3] = (ulong)pvVar24;
      param_2[4] = (long)pvVar24 + uVar18;
      param_2[5] = (long)pvVar24 + uVar3;
      if (__src != (ulong *)0x0) {
        plVar12 = *(long **)(lVar6 + 0x30);
        if (plVar12 == (long *)0x0) goto LAB_00eff018;
        goto LAB_00efed58;
      }
    }
    else {
      pvVar10 = pvVar24;
      if (uVar23 != 0) {
        pvVar10 = (void *)((long)pvVar24 + uVar23);
        memset(pvVar24,0,uVar23);
      }
      param_2[4] = (ulong)pvVar10;
    }
  }
  else if (uVar21 != uVar18) {
    param_2[4] = (ulong)((long)__src + uVar18);
  }
  while( true ) {
    param_1 = local_88;
    if (*(int *)((long)puVar27 + uVar28) != 0) {
      uVar18 = 0;
      do {
        *(undefined1 *)(param_2[3] + uVar18) =
             *(undefined1 *)((long)local_88 + (long)((long)puVar29 + uVar18 + uVar28 + 4));
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(uint *)((long)puVar27 + uVar28));
    }
LAB_00efe88c:
    if (*(ushort *)((long)param_1 - (long)*param_1) < 9) {
      return;
    }
    uVar18 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4];
    if (uVar18 == 0) {
      return;
    }
    puVar1 = (uint *)((long)param_1 + uVar18);
    uVar28 = (ulong)*puVar1;
    __src = param_2 + 6;
    uVar21 = *__src;
    pvVar24 = (void *)param_2[7];
    puVar25 = (uint *)(ulong)*(uint *)((long)puVar1 + uVar28);
    puVar29 = (uint *)((long)((long)pvVar24 - uVar21) >> 3);
    if (puVar25 <= puVar29) {
      if (puVar25 < puVar29) {
        FUN_00f012f0(__src,uVar21 + (long)puVar25 * 8);
      }
      goto LAB_00efe8d4;
    }
    uVar23 = (long)puVar25 - (long)puVar29;
    if (uVar23 <= (ulong)((long)(param_2[8] - (long)pvVar24) >> 3)) break;
    lVar15 = param_2[8] - uVar21;
    puVar17 = (uint *)(lVar15 >> 2);
    puVar27 = puVar25;
    if (puVar25 <= puVar17) {
      puVar27 = puVar17;
    }
    if (0xffffffffffffffe < (ulong)(lVar15 >> 3)) {
      puVar27 = (uint *)&DAT_1fffffffffffffff;
    }
    if (puVar27 == (uint *)0x0) {
      lVar15 = 0;
      goto LAB_00efea18;
    }
    if ((ulong)puVar27 >> 0x3d == 0) {
      plVar12 = *(long **)(lVar6 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      lVar15 = (**(code **)(*plVar12 + 0x10))(plVar12,(long)puVar27 << 3,8);
LAB_00efea18:
      puVar13 = (undefined8 *)(lVar15 + (long)puVar29 * 8);
      puVar2 = (undefined8 *)(lVar15 + (long)puVar25 * 8);
      *puVar13 = 0;
      if (puVar2 != puVar13 + 1) {
        puVar13[1] = 0;
        if (puVar2 != puVar13 + 2) {
          puVar13[2] = 0;
          if (puVar2 != puVar13 + 3) {
            puVar13[3] = 0;
            if (puVar2 != puVar13 + 4) {
              puVar13[4] = 0;
              if (puVar2 != puVar13 + 5) {
                lVar30 = (long)puVar25 * 8 + (long)puVar29 * -8 + -0x28;
                puVar19 = puVar13 + 5;
                do {
                  lVar30 = lVar30 + -8;
                  *puVar19 = 0;
                  puVar19 = puVar19 + 1;
                } while (lVar30 != 0);
              }
            }
          }
        }
      }
      puVar19 = (undefined8 *)param_2[6];
      if ((undefined8 *)param_2[7] == puVar19) {
        puVar26 = puVar19;
      }
      else {
        puVar26 = (undefined8 *)param_2[7] + -1;
        uVar20 = *puVar26;
        *puVar26 = 0;
        puVar13 = puVar13 + -1;
        *puVar13 = uVar20;
        while (puVar26 != puVar19) {
          puVar26 = puVar26 + -1;
          uVar20 = *puVar26;
          *puVar26 = 0;
          puVar13 = puVar13 + -1;
          *puVar13 = uVar20;
        }
        puVar19 = (undefined8 *)param_2[6];
        puVar26 = (undefined8 *)param_2[7];
      }
      param_2[6] = (ulong)puVar13;
      param_2[7] = (ulong)puVar2;
      param_2[8] = lVar15 + (long)puVar27 * 8;
      while (puVar26 != puVar19) {
        puVar26 = puVar26 + -1;
        pbVar22 = (byte *)*puVar26;
        *puVar26 = 0;
        if (pbVar22 != (byte *)0x0) {
          FUN_00f0012c(pbVar22 + 0x30);
          lVar15 = *(long *)(pbVar22 + 0x18);
          if (lVar15 != 0) {
            *(long *)(pbVar22 + 0x20) = lVar15;
            plVar12 = *(long **)(lVar6 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar6 + 0x30) = DAT_04859430;
            }
            uVar21 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar21 & 1) == 0) || (lVar30 = FUN_00c4e600(), *(int *)(lVar30 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,lVar15,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,lVar15,0,8);
            }
          }
          if (((*pbVar22 & 1) != 0) && (lVar15 = *(long *)(pbVar22 + 0x10), lVar15 != 0)) {
            plVar12 = *(long **)(lVar6 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar6 + 0x30) = DAT_04859430;
            }
            uVar21 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar21 & 1) == 0) || (lVar30 = FUN_00c4e600(), *(int *)(lVar30 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,lVar15,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,lVar15,0,8);
            }
          }
          plVar12 = *(long **)(lVar6 + 0x30);
          if (plVar12 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar12 = DAT_04859430;
            *(long **)(lVar6 + 0x30) = DAT_04859430;
          }
          uVar21 = (**(code **)(*plVar12 + 0xf8))(plVar12);
          if (((uVar21 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,pbVar22,0,8);
          }
          else {
            FUN_00c48fe8(plVar12,pbVar22,0,8);
          }
        }
      }
      if (puVar19 != (undefined8 *)0x0) {
        plVar12 = *(long **)(lVar6 + 0x30);
        if (plVar12 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar12 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        uVar21 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar21 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,puVar19,0,8);
        }
        else {
          FUN_00c48fe8(plVar12,puVar19,0,8);
        }
      }
LAB_00efe8d4:
      if (*(int *)((long)puVar1 + uVar28) != 0) {
        lVar30 = 0;
        lVar15 = 0;
        uVar21 = 0;
        lVar7 = uVar28 + uVar18 + 4;
        do {
          uVar4 = *(uint *)((long)param_1 + uVar21 * 4 + lVar7);
          plVar12 = *(long **)(lVar6 + 0x30);
          if (plVar12 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar12 = DAT_04859430;
            *(long **)(lVar6 + 0x30) = DAT_04859430;
          }
          pvVar24 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0x48,8);
          memset(pvVar24,0,0x48);
          FUN_00efe6d0((long)param_1 + lVar30 + (ulong)uVar4 + lVar7,pvVar24);
          pbVar22 = *(byte **)(*__src + lVar15);
          *(void **)(*__src + lVar15) = pvVar24;
          if (pbVar22 != (byte *)0x0) {
            FUN_00f0012c(pbVar22 + 0x30);
            lVar14 = *(long *)(pbVar22 + 0x18);
            if (lVar14 != 0) {
              *(long *)(pbVar22 + 0x20) = lVar14;
              plVar12 = *(long **)(lVar6 + 0x30);
              if (plVar12 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar12 = DAT_04859430;
                *(long **)(lVar6 + 0x30) = DAT_04859430;
              }
              uVar18 = (**(code **)(*plVar12 + 0xf8))(plVar12);
              if (((uVar18 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                (**(code **)(*plVar12 + 0x18))(plVar12,lVar14,0,8);
              }
              else {
                FUN_00c48fe8(plVar12,lVar14,0,8);
              }
            }
            if (((*pbVar22 & 1) != 0) && (lVar14 = *(long *)(pbVar22 + 0x10), lVar14 != 0)) {
              plVar12 = *(long **)(lVar6 + 0x30);
              if (plVar12 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar12 = DAT_04859430;
                *(long **)(lVar6 + 0x30) = DAT_04859430;
              }
              uVar18 = (**(code **)(*plVar12 + 0xf8))(plVar12);
              if (((uVar18 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                (**(code **)(*plVar12 + 0x18))(plVar12,lVar14,0,8);
              }
              else {
                FUN_00c48fe8(plVar12,lVar14,0,8);
              }
            }
            plVar12 = *(long **)(lVar6 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar6 + 0x30) = DAT_04859430;
            }
            uVar18 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar18 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,pbVar22,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,pbVar22,0,8);
            }
          }
          uVar21 = uVar21 + 1;
          lVar15 = lVar15 + 8;
          lVar30 = lVar30 + 4;
        } while (uVar21 < *(uint *)((long)puVar1 + uVar28));
      }
      return;
    }
    FUN_021d6690();
LAB_00eff018:
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar12 = DAT_04859430;
    *(long **)(lVar6 + 0x30) = DAT_04859430;
LAB_00efed58:
    uVar18 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar18 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,__src,0,8);
    }
    else {
      FUN_00c48fe8(plVar12,__src,0,8);
    }
  }
  pvVar10 = pvVar24;
  if (uVar23 != 0) {
    pvVar10 = (void *)((long)pvVar24 + uVar23 * 8);
    memset(pvVar24,0,uVar23 * 8);
  }
  param_2[7] = (ulong)pvVar10;
  goto LAB_00efe8d4;
}



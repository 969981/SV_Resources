/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e71f78; name: FUN_00e71f78
 */


void FUN_00e71f78(long param_1)

{
  long *plVar1;
  LightEventType *pLVar2;
  ulong uVar3;
  short *psVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  byte bVar9;
  short sVar10;
  char cVar11;
  size_t __n;
  int iVar12;
  long *plVar13;
  bool bVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  ulong uVar18;
  short sVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  undefined1 *puVar24;
  byte *pbVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  void *pvVar29;
  undefined8 *puVar30;
  void *pvVar31;
  undefined8 local_70;
  ulong uStack_68;
  
  if (((*PTR_DAT_047d4df8 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar15 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar15;
  if (*(char *)(lVar15 + 0xb2d0) != '\0') {
    return;
  }
  plVar22 = (long *)(param_1 + 0x250);
  uVar26 = *(undefined8 *)(param_1 + 8);
  lVar20 = *plVar22;
  lVar15 = nn::os::GetCurrentThread();
  if (lVar15 != lVar20) {
    lVar15 = nn::os::GetCurrentThread();
LAB_00e71ff0:
    if (*plVar22 == 0) goto code_r0x00e71ff8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 600));
    do {
      if (*plVar22 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 600));
          while (*plVar22 == 0) {
            cVar11 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar14) {
              *plVar22 = lVar15;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') {
              bVar14 = false;
              goto LAB_00e72000;
            }
          }
        } while( true );
      }
      cVar11 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar14) {
        *plVar22 = lVar15;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar14 = false;
    goto LAB_00e72000;
  }
  plVar22 = (long *)0x0;
  bVar14 = true;
LAB_00e72000:
  puVar21 = *(undefined8 **)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x268) = 0;
  puVar30 = *(undefined8 **)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0x1fffffffffffffff;
  lVar15 = *(long *)(param_1 + 0x278);
  plVar23 = *(long **)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = uVar26;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  if (!bVar14) {
    *plVar22 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar22 + 1));
  }
  if (puVar30 != puVar21) {
    FUN_00f505cc(*puVar21,1);
    puVar7 = puVar21;
    while (puVar7 = puVar7 + 1, puVar7 != puVar30) {
      FUN_00f505cc(*puVar7,1);
    }
  }
  if (puVar21 != (undefined8 *)0x0) {
    lVar15 = lVar15 - (long)puVar21;
    uVar28 = (**(code **)(*plVar23 + 0xf8))(plVar23);
    if (((uVar28 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
      (**(code **)(*plVar23 + 0x18))(plVar23,puVar21,lVar15,8);
    }
    else {
      FUN_00c48fe8(plVar23,puVar21,lVar15,8);
    }
  }
  plVar22 = (long *)(param_1 + 0x2a0);
  lVar15 = nn::os::GetCurrentThread();
  do {
    if (*plVar22 != 0) {
      ClearExclusiveLocal();
      return;
    }
    cVar11 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar14) {
      *plVar22 = lVar15;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  puVar21 = *(undefined8 **)(param_1 + 0x1b0);
  puVar30 = *(undefined8 **)(param_1 + 0x1b8);
  if (puVar21 != puVar30) {
    lVar15 = *(long *)(param_1 + 0x148);
    do {
      local_70 = *puVar21;
      pvVar31 = (void *)FUN_00e74d60(*(undefined8 *)(param_1 + 0x140),lVar15,&local_70,param_1);
      lVar15 = *(long *)(param_1 + 0x148);
      if (lVar15 - (long)pvVar31 != 0) {
        pvVar29 = (void *)((long)pvVar31 + (lVar15 - (long)pvVar31));
        __n = lVar15 - (long)pvVar29;
        if (__n != 0) {
          memmove(pvVar31,pvVar29,__n);
        }
        lVar15 = (long)pvVar31 + __n;
        *(long *)(param_1 + 0x148) = lVar15;
      }
      puVar21 = puVar21 + 1;
    } while (puVar30 != puVar21);
    puVar21 = *(undefined8 **)(param_1 + 0x1b0);
  }
  puVar30 = *(undefined8 **)(param_1 + 0x178);
  puVar7 = *(undefined8 **)(param_1 + 0x180);
  *(undefined8 **)(param_1 + 0x1b8) = puVar21;
  if (puVar30 != puVar7) {
    plVar22 = (long *)(param_1 + 0x120);
    pLVar2 = (LightEventType *)(param_1 + 0x130);
    do {
      uVar26 = *puVar30;
      lVar15 = nn::os::GetCurrentThread();
LAB_00e7246c:
      if (*plVar22 == 0 && *(long *)(param_1 + 0x128) == 0) goto code_r0x00e72478;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent(pLVar2);
      do {
        if (*plVar22 != 0 || *(long *)(param_1 + 0x128) != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar2);
            while (*plVar22 == 0 && *(long *)(param_1 + 0x128) == 0) {
              cVar11 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar14) {
                *plVar22 = lVar15;
                *(undefined8 *)(param_1 + 0x128) = 0;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_00e72480;
            }
          } while( true );
        }
        cVar11 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar14) {
          *plVar22 = lVar15;
          *(undefined8 *)(param_1 + 0x128) = 0;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_00e72480:
      if (*(long *)(param_1 + 0x108) == 0) {
        bVar9 = *(byte *)(param_1 + 0xc2);
        *(byte *)(param_1 + 0xc2) = bVar9 + 1;
      }
      else {
        lVar15 = *(long *)(param_1 + 0x108) + -1;
        bVar9 = *(byte *)(param_1 + lVar15 + 200);
        *(long *)(param_1 + 0x108) = lVar15;
      }
      *(ulong *)(param_1 + 0x110) =
           1L << ((ulong)bVar9 - (ulong)*(byte *)(param_1 + 0xc0) & 0x3f) |
           *(ulong *)(param_1 + 0x110);
      *(char *)(param_1 + 0xc3) = *(char *)(param_1 + 0xc3) + '\x01';
      do {
        lVar15 = *plVar22;
        lVar20 = *(long *)(param_1 + 0x128);
        cVar11 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar14) {
          *plVar22 = lVar15;
          *(long *)(param_1 + 0x128) = lVar20;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      do {
        lVar17 = *plVar22;
        lVar6 = *(long *)(param_1 + 0x128);
        if (lVar17 != lVar15 || lVar6 != lVar20) {
          bVar14 = false;
          ClearExclusiveLocal();
          goto LAB_00e7253c;
        }
        cVar11 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar14) {
          *plVar22 = 0;
          *(long *)(param_1 + 0x124) = lVar20;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      bVar14 = true;
LAB_00e7253c:
      if (!bVar14) {
        do {
          lVar15 = *plVar22;
          lVar20 = *(long *)(param_1 + 0x128);
          if (lVar15 != lVar17 || lVar20 != lVar6) {
            bVar14 = false;
            ClearExclusiveLocal();
            goto joined_r0x00e72bc4;
          }
          cVar11 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar14) {
            *plVar22 = 0;
            *(long *)(param_1 + 0x124) = lVar6;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        bVar14 = true;
joined_r0x00e72bc4:
        if (!bVar14) {
          do {
            lVar17 = *plVar22;
            lVar6 = *(long *)(param_1 + 0x128);
            if (lVar17 != lVar15 || lVar6 != lVar20) {
              bVar14 = false;
              ClearExclusiveLocal();
              lVar15 = lVar17;
              lVar20 = lVar6;
              goto joined_r0x00e72bc4;
            }
            cVar11 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar14) {
              *plVar22 = 0;
              *(long *)(param_1 + 0x124) = lVar20;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          bVar14 = true;
          lVar15 = lVar17;
          lVar20 = lVar6;
          goto joined_r0x00e72bc4;
        }
      }
      nn::os::SignalLightEvent(pLVar2);
      pbVar16 = *(byte **)(param_1 + 0x148);
      if (pbVar16 < *(byte **)(param_1 + 0x150)) {
        uVar27 = *(undefined8 *)(param_1 + 0x158);
        if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar15 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar15 == 0) {
          *pbVar16 = bVar9;
          *(undefined8 *)(pbVar16 + 8) = uVar26;
          pbVar16[0x10] = 0;
          pbVar16[0x20] = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_00e72c24;
          *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar27;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
          *pbVar16 = bVar9;
          *(undefined8 *)(pbVar16 + 8) = uVar26;
          pbVar16[0x10] = 0;
          pbVar16[0x20] = 0;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
        }
        *(byte **)(param_1 + 0x148) = pbVar16 + 0x30;
      }
      else {
        lVar15 = (long)pbVar16 - *(long *)(param_1 + 0x140) >> 4;
        uVar28 = *(ulong *)(param_1 + 0x160);
        if (0x7ffffffffffffffe < uVar28) {
          uVar28 = 0x7fffffffffffffff;
        }
        uVar3 = lVar15 * -0x5555555555555555 + 1;
        if (uVar28 < uVar3) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar20 = (long)*(byte **)(param_1 + 0x150) - *(long *)(param_1 + 0x140) >> 4;
        uVar18 = lVar20 * 0x5555555555555556;
        if (uVar3 <= uVar18) {
          uVar3 = uVar18;
        }
        if (uVar28 >> 1 <= (ulong)(lVar20 * -0x5555555555555555)) {
          uVar3 = uVar28;
        }
        if (uVar3 == 0) {
          lVar20 = 0;
        }
        else {
          lVar20 = (**(code **)(**(long **)(param_1 + 0x158) + 0x10))
                             (*(long **)(param_1 + 0x158),uVar3 * 0x30,0x10);
          if (lVar20 == 0) {
            (**(code **)(**(long **)(param_1 + 0x158) + 0xe8))();
          }
        }
        pbVar16 = (byte *)(lVar20 + lVar15 * 0x10);
        uVar27 = *(undefined8 *)(param_1 + 0x158);
        if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar17 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar17 == 0) {
          *pbVar16 = bVar9;
          lVar15 = lVar20 + lVar15 * 0x10;
          *(undefined8 *)(lVar15 + 8) = uVar26;
          *(undefined1 *)(lVar15 + 0x10) = 0;
          *(undefined1 *)(lVar15 + 0x20) = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_00e72c24;
          *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar27;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
          *pbVar16 = bVar9;
          lVar15 = lVar20 + lVar15 * 0x10;
          *(undefined8 *)(lVar15 + 8) = uVar26;
          *(undefined1 *)(lVar15 + 0x10) = 0;
          *(undefined1 *)(lVar15 + 0x20) = 0;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
        }
        pvVar31 = *(void **)(param_1 + 0x140);
        pvVar29 = *(void **)(param_1 + 0x148);
        pbVar25 = pbVar16;
        if (pvVar29 != pvVar31) {
          do {
            uVar26 = *(undefined8 *)(param_1 + 0x158);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            pbVar25 = pbVar25 + -0x30;
            pvVar29 = (void *)((long)pvVar29 + -0x30);
            lVar15 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar15 == 0) {
              memcpy(pbVar25,pvVar29,0x30);
            }
            else {
              if (0xf < *(ulong *)(lVar15 + 0x80)) {
LAB_00e72c24:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar26;
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
              memcpy(pbVar25,pvVar29,0x30);
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
            }
          } while (pvVar31 != pvVar29);
          pvVar31 = *(void **)(param_1 + 0x140);
        }
        *(byte **)(param_1 + 0x140) = pbVar25;
        *(byte **)(param_1 + 0x148) = pbVar16 + 0x30;
        lVar15 = *(long *)(param_1 + 0x150);
        *(ulong *)(param_1 + 0x150) = lVar20 + uVar3 * 0x30;
        if (pvVar31 != (void *)0x0) {
          plVar23 = *(long **)(param_1 + 0x158);
          lVar15 = lVar15 - (long)pvVar31;
          uVar28 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar28 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,pvVar31,lVar15,0x10);
          }
          else {
            FUN_00c48fe8(plVar23,pvVar31,lVar15,0x10);
          }
        }
      }
      puVar30 = puVar30 + 1;
      if (puVar30 == puVar7) {
        puVar30 = *(undefined8 **)(param_1 + 0x178);
        break;
      }
    } while( true );
  }
  puVar24 = *(undefined1 **)(param_1 + 0x140);
  puVar8 = *(undefined1 **)(param_1 + 0x148);
  *(undefined8 **)(param_1 + 0x180) = puVar30;
  if (puVar24 != puVar8) {
LAB_00e72098:
    DAT_048418e8 = *(long *)(puVar24 + 8);
    if (*(char *)(DAT_048418e8 + 0xd0) == '\0') {
      lVar15 = *(long *)(DAT_048418e8 + 0xe0);
      uVar26 = 0;
      uVar28 = 0;
      if (lVar15 != 0) {
        uVar26 = 0;
        uVar28 = 0;
        if (*(short *)(lVar15 + 0x1a) != 0) {
          psVar4 = (short *)(lVar15 + 0x1a);
          sVar19 = *(short *)(lVar15 + 0x1a);
LAB_00e72348:
          sVar10 = *psVar4;
          if (sVar10 == sVar19) {
            cVar11 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(psVar4,0x10);
            if (bVar14) {
              *psVar4 = sVar19 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 != '\0') goto LAB_00e7236c;
            bVar14 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00e7236c:
            bVar14 = false;
          }
          if (!bVar14) goto code_r0x00e72374;
          lVar15 = *(long *)(lVar15 + 0x10);
          uVar26 = 0;
          uVar28 = 0;
          if (lVar15 != 0) {
            plVar22 = (long *)(lVar15 + -0x28);
            lVar20 = (**(code **)(*(long *)(lVar15 + -0x28) + 0x68))(plVar22);
            uVar26 = *(undefined8 *)(lVar20 + 0x30);
            lVar15 = *(long *)(lVar15 + 8);
            psVar4 = (short *)(lVar15 + 0x1a);
            uVar28 = *(ulong *)(lVar20 + 0x38) & 0xffffffff;
            do {
              sVar19 = *psVar4;
              cVar11 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(psVar4,0x10);
              if (bVar14) {
                *psVar4 = sVar19 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (sVar19 == 1) {
              *(undefined8 *)(lVar15 + 0x10) = 0;
              (**(code **)(*plVar22 + 0x50))(plVar22);
            }
            else if (sVar19 == 0) goto LAB_00e7225c;
          }
        }
      }
    }
    else {
      uVar28 = *(ulong *)(DAT_048418e8 + 200);
      uVar26 = *(undefined8 *)(DAT_048418e8 + 0xc0);
    }
    goto LAB_00e720ac;
  }
LAB_00e720f0:
  uVar26 = *(undefined8 *)(param_1 + 8);
  lVar15 = tpidr_el0;
  if (*(long *)(lVar15 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar15 + 0x30) = DAT_04859430;
  }
  local_70 = *(undefined8 *)(lVar15 + 0x30);
  uStack_68 = *(ulong *)(lVar15 + 0x38);
  *(undefined8 *)(lVar15 + 0x30) = uVar26;
  *(undefined2 *)(lVar15 + 0x38) = 1;
  lVar20 = *(long *)(param_1 + 0x78);
  uVar28 = *(ulong *)(param_1 + 0xb0);
  uVar18 = (*(long *)(param_1 + 0x80) - lVar20 >> 3) * -0x3333333333333333;
  uVar3 = uVar18;
  if (uVar28 + 100 <= uVar18) {
    uVar3 = uVar28 + 100;
  }
  if (uVar28 < uVar3) {
    do {
      lVar20 = *(long *)(lVar20 + uVar28 * 0x28 + 8);
      if (lVar20 != 0) {
        plVar22 = *(long **)(lVar20 + 0x50);
        plVar23 = *(long **)(lVar20 + 0x58);
        if (plVar22 != plVar23) {
          if ((*(long *)(*plVar22 + 0x40) != 0) &&
             (*(short *)(*(long *)(*plVar22 + 0x40) + 0x1a) != 0)) {
            do {
              plVar22 = plVar22 + 1;
              if (plVar23 == plVar22) {
                plVar22 = plVar23;
                goto LAB_00e721e8;
              }
              if (*(long *)(*plVar22 + 0x40) == 0) goto LAB_00e721e8;
            } while (*(short *)(*(long *)(*plVar22 + 0x40) + 0x1a) != 0);
          }
        }
LAB_00e721e8:
        if ((plVar22 != plVar23) && (plVar22 + 1 != plVar23)) {
          lVar17 = *(long *)(plVar22[1] + 0x40);
          if ((lVar17 == 0) || (*(short *)(lVar17 + 0x1a) == 0)) {
            plVar13 = plVar22;
          }
          else {
            FUN_00e74cbc(plVar22);
            plVar13 = plVar22 + 1;
          }
          plVar1 = plVar22 + 2;
          plVar22 = plVar13;
          for (; plVar1 != plVar23; plVar1 = plVar1 + 1) {
            if ((*(long *)(*plVar1 + 0x40) != 0) &&
               (*(short *)(*(long *)(*plVar1 + 0x40) + 0x1a) != 0)) {
              FUN_00e74cbc(plVar22,plVar1);
              plVar22 = plVar22 + 1;
            }
          }
        }
        plVar23 = *(long **)(lVar20 + 0x58);
        lVar17 = (long)plVar23 - (long)plVar22;
        if (lVar17 != 0) {
          plVar13 = (long *)((long)plVar22 + lVar17);
          if (plVar13 != plVar23) {
            FUN_00e74cbc(plVar22,plVar13);
            plVar22 = plVar22 + 1;
            if (plVar13 + 1 != plVar23) {
              do {
                FUN_00e74cbc(plVar22,plVar22 + (lVar17 >> 3));
                plVar22 = plVar22 + 1;
              } while (plVar23 + -(lVar17 >> 3) != plVar22);
            }
            plVar23 = *(long **)(lVar20 + 0x58);
          }
          while (plVar23 != plVar22) {
            plVar23 = plVar23 + -1;
            plVar13 = (long *)*plVar23;
            if (plVar13 != (long *)0x0) {
              lVar17 = plVar13[6];
              psVar4 = (short *)(lVar17 + 0x1a);
              do {
                sVar19 = *psVar4;
                cVar11 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(psVar4,0x10);
                if (bVar14) {
                  *psVar4 = sVar19 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (sVar19 == 1) {
                *(undefined8 *)(lVar17 + 0x10) = 0;
                (**(code **)(*plVar13 + 0x50))();
              }
              else if (sVar19 == 0) {
LAB_00e7225c:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
          }
          *(long **)(lVar20 + 0x58) = plVar22;
        }
      }
      uVar28 = uVar28 + 1;
      if (uVar28 == uVar3) goto LAB_00e722b0;
      lVar20 = *(long *)(param_1 + 0x78);
    } while( true );
  }
LAB_00e722c0:
  if (uVar3 == uVar18) {
    lVar20 = 0;
  }
  else {
    lVar20 = *(long *)(param_1 + 0xb0) + 100;
  }
  *(long *)(param_1 + 0xb0) = lVar20;
  *(undefined8 *)(lVar15 + 0x30) = local_70;
  *(undefined2 *)(lVar15 + 0x38) = (undefined2)uStack_68;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a8));
  return;
code_r0x00e71ff8:
  cVar11 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar14) {
    *plVar22 = lVar15;
    cVar11 = ExclusiveMonitorsStatus();
  }
  bVar14 = false;
  if (cVar11 == '\0') goto LAB_00e72000;
  goto LAB_00e71ff0;
code_r0x00e72478:
  cVar11 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar14) {
    *plVar22 = lVar15;
    *(undefined8 *)(param_1 + 0x128) = 0;
    cVar11 = ExclusiveMonitorsStatus();
  }
  if (cVar11 == '\0') goto LAB_00e72480;
  goto LAB_00e7246c;
code_r0x00e72374:
  sVar19 = sVar10;
  if (sVar10 == 0) goto code_r0x00e7237c;
  goto LAB_00e72348;
code_r0x00e7237c:
  uVar26 = 0;
  uVar28 = 0;
LAB_00e720ac:
  puVar5 = (undefined1 *)0x0;
  if (puVar24[0x20] != '\0') {
    puVar5 = puVar24 + 0x10;
  }
  local_70 = uVar26;
  uStack_68 = uVar28;
  FUN_00e72c64(param_1,*puVar24,*(undefined8 *)(puVar24 + 8),&local_70,puVar5);
  *(undefined8 *)(puVar24 + 0x10) = local_70;
  *(ulong *)(puVar24 + 0x18) = uStack_68;
  if (puVar24[0x20] == '\0') {
    puVar24[0x20] = 1;
  }
  puVar24 = puVar24 + 0x30;
  if (puVar24 == puVar8) goto LAB_00e720f0;
  goto LAB_00e72098;
LAB_00e722b0:
  uVar18 = (*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 3) * -0x3333333333333333;
  goto LAB_00e722c0;
}



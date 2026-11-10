/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012e5eec; name: FUN_012e5eec
 */


void FUN_012e5eec(long param_1,int *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long *plVar17;
  uint *puVar18;
  ulong uVar19;
  ushort *puVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  undefined1 *puVar25;
  long lVar26;
  undefined8 uVar27;
  long *plVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  float fVar31;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xb) ||
     (uVar15 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar15 == 0)) {
    return;
  }
  puVar18 = (uint *)((long)param_2 + uVar15);
  plVar1 = (long *)(param_1 + 0x10);
  puVar4 = (undefined1 *)((long)puVar18 + (ulong)*puVar18);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x18) == 0) {
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar11;
      *(undefined8 *)(param_1 + 0x18) = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') goto LAB_012e5f5c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x20));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x18) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x20));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x18) == 0) {
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar14) {
            *plVar1 = lVar11;
            *(undefined8 *)(param_1 + 0x18) = 0;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_012e5f5c;
        }
      } while( true );
    }
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar11;
      *(undefined8 *)(param_1 + 0x18) = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_012e5f5c:
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    puVar18 = (uint *)0x0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    puVar18 = (uint *)0x0;
    if (uVar15 != 0) {
      puVar18 = (uint *)((long)param_2 + uVar15);
      puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18);
    }
  }
  uVar7 = *puVar18;
  if (uVar7 != 0) {
    uVar15 = 0;
    plVar2 = (long *)(param_1 + 0x2c8);
    plVar3 = (long *)(param_1 + 0x2f8);
    lVar11 = (long)puVar18 + 9;
    puVar25 = puVar4;
    do {
      puVar5 = (uint *)(puVar4 + uVar15 * 4 + 4);
      piVar6 = (int *)((long)puVar5 + (ulong)*puVar5);
      puVar20 = (ushort *)((long)piVar6 - (long)*piVar6);
      if (*puVar20 < 5) {
        lVar26 = 0;
LAB_012e60c8:
        lVar24 = 0;
      }
      else {
        if ((ulong)puVar20[2] == 0) {
          lVar26 = 0;
        }
        else {
          lVar26 = *(long *)((long)piVar6 + (ulong)puVar20[2]);
        }
        if ((*puVar20 < 7) || ((ulong)puVar20[3] == 0)) goto LAB_012e60c8;
        lVar24 = *(long *)((long)piVar6 + (ulong)puVar20[3]);
      }
      uVar21 = (ulong)puVar18[uVar15 + 1];
      bVar8 = *(byte *)((long)(puVar18 + uVar15 + 1) + uVar21 + 4);
      puVar30 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        puVar30 = &DAT_cbf29ce484222645;
        pbVar22 = (byte *)(lVar11 + uVar21);
        do {
          puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar8 != 0);
      }
      puVar29 = *(undefined1 **)(param_1 + 0x2d0);
      if (puVar29 == (undefined1 *)0x0) {
LAB_012e610c:
        plVar28 = (long *)(**(code **)(**(long **)(param_1 + 0x300) + 0x10))
                                    (*(long **)(param_1 + 0x300),0x30,8);
        if (plVar28 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x300) + 0xe8))();
        }
        uVar27 = *(undefined8 *)(param_1 + 0x300);
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 == 0) {
          plVar28[2] = (long)puVar30;
          plVar28[3] = 0;
          plVar28[4] = 0;
          plVar28[5] = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar27;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          plVar28[2] = (long)puVar30;
          plVar28[3] = 0;
          plVar28[4] = 0;
          plVar28[5] = 0;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        *plVar28 = 0;
        plVar28[1] = (long)puVar30;
        fVar31 = (float)(*(long *)(param_1 + 800) + 1);
        if ((puVar29 == (undefined1 *)0x0) ||
           (*(float *)(param_1 + 0x328) * (float)puVar29 < fVar31)) {
          uVar21 = (ulong)(puVar29 < (undefined1 *)0x3 ||
                          ((ulong)puVar29 & (ulong)(puVar29 + -1)) != 0) | (long)puVar29 << 1;
          uVar23 = (ulong)(fVar31 / *(float *)(param_1 + 0x328));
          if (uVar23 <= uVar21) {
            uVar23 = uVar21;
          }
          if (uVar23 - 1 == 0) {
            uVar23 = 2;
          }
          else if ((uVar23 & uVar23 - 1) != 0) {
            uVar23 = std::__next_prime(uVar23);
          }
          uVar21 = *(ulong *)(param_1 + 0x2d0);
          if (uVar21 < uVar23) {
            uVar13 = uVar23;
LAB_012e62d0:
            FUN_012e6598(plVar2,uVar13);
          }
          else if (uVar23 < uVar21) {
            uVar13 = (ulong)((float)*(ulong *)(param_1 + 800) / *(float *)(param_1 + 0x328));
            if ((uVar21 < 3) ||
               (uVar19 = uVar21 - (uVar21 >> 1 & 0x5555555555555555),
               uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333),
               1 < (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar13 = std::__next_prime(uVar13);
            }
            else if (1 < uVar13) {
              uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
            }
            if (uVar13 <= uVar23) {
              uVar13 = uVar23;
            }
            if (uVar13 < uVar21) goto LAB_012e62d0;
          }
          puVar29 = *(undefined1 **)(param_1 + 0x2d0);
          if (((ulong)puVar29 & (ulong)(puVar29 + -1)) == 0) {
            puVar25 = (undefined1 *)((ulong)(puVar29 + -1) & (ulong)puVar30);
          }
          else if (puVar30 < puVar29) {
            puVar25 = puVar30;
          }
          else {
            uVar21 = 0;
            if (puVar29 != (undefined1 *)0x0) {
              uVar21 = (ulong)puVar30 / (ulong)puVar29;
            }
            puVar25 = puVar30 + -(uVar21 * (long)puVar29);
          }
        }
        plVar17 = *(long **)(*plVar2 + (long)puVar25 * 8);
        if (plVar17 == (long *)0x0) {
          *plVar28 = *plVar3;
          *plVar3 = (long)plVar28;
          *(long **)(*plVar2 + (long)puVar25 * 8) = plVar3;
          if (*plVar28 != 0) {
            puVar30 = *(undefined1 **)(*plVar28 + 8);
            if (((ulong)puVar29 & (ulong)(puVar29 + -1)) == 0) {
              puVar30 = (undefined1 *)((ulong)puVar30 & (ulong)(puVar29 + -1));
            }
            else if (puVar29 <= puVar30) {
              uVar21 = 0;
              if (puVar29 != (undefined1 *)0x0) {
                uVar21 = (ulong)puVar30 / (ulong)puVar29;
              }
              puVar30 = puVar30 + -(uVar21 * (long)puVar29);
            }
            plVar17 = (long *)(*plVar2 + (long)puVar30 * 8);
            goto LAB_012e6240;
          }
        }
        else {
          *plVar28 = *plVar17;
LAB_012e6240:
          *plVar17 = (long)plVar28;
        }
        *(long *)(param_1 + 800) = *(long *)(param_1 + 800) + 1;
      }
      else {
        puVar16 = puVar29 + -1;
        if (((ulong)puVar29 & (ulong)puVar16) == 0) {
          puVar25 = (undefined1 *)((ulong)puVar16 & (ulong)puVar30);
          plVar28 = *(long **)(*plVar2 + (long)puVar25 * 8);
          if (plVar28 == (long *)0x0) goto LAB_012e610c;
          do {
            plVar28 = (long *)*plVar28;
            if ((plVar28 == (long *)0x0) ||
               ((undefined1 *)plVar28[1] != puVar30 &&
                (undefined1 *)((ulong)plVar28[1] & (ulong)puVar16) != puVar25)) goto LAB_012e610c;
          } while ((undefined1 *)plVar28[2] != puVar30);
        }
        else {
          puVar25 = puVar30;
          if (puVar29 <= puVar30) {
            uVar21 = 0;
            if (puVar29 != (undefined1 *)0x0) {
              uVar21 = (ulong)puVar30 / (ulong)puVar29;
            }
            puVar25 = puVar30 + -(uVar21 * (long)puVar29);
          }
          plVar28 = *(long **)(*plVar2 + (long)puVar25 * 8);
          if (plVar28 == (long *)0x0) goto LAB_012e610c;
          do {
            plVar28 = (long *)*plVar28;
            if (plVar28 == (long *)0x0) goto LAB_012e610c;
            puVar16 = (undefined1 *)plVar28[1];
            if (puVar16 != puVar30) {
              if (puVar29 <= puVar16) {
                uVar21 = 0;
                if (puVar29 != (undefined1 *)0x0) {
                  uVar21 = (ulong)puVar16 / (ulong)puVar29;
                }
                puVar16 = puVar16 + -(uVar21 * (long)puVar29);
              }
              if (puVar16 != puVar25) goto LAB_012e610c;
            }
          } while ((undefined1 *)plVar28[2] != puVar30);
        }
      }
      plVar28[3] = lVar26;
      plVar28[4] = lVar24;
      uVar15 = uVar15 + 1;
      lVar11 = lVar11 + 4;
      plVar28[5] = 0;
    } while (uVar15 != uVar7);
  }
  do {
    lVar11 = *plVar1;
    lVar26 = *(long *)(param_1 + 0x18);
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x18) = lVar26;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    lVar24 = *plVar1;
    lVar12 = *(long *)(param_1 + 0x18);
    if (lVar24 != lVar11 || lVar12 != lVar26) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto LAB_012e639c;
    }
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x14) = lVar26;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar14 = true;
LAB_012e639c:
  if (!bVar14) {
    do {
      lVar11 = *plVar1;
      lVar26 = *(long *)(param_1 + 0x18);
      if (lVar11 != lVar24 || lVar26 != lVar12) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto joined_r0x012e654c;
      }
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x14) = lVar12;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar14 = true;
joined_r0x012e654c:
    if (!bVar14) {
      do {
        lVar24 = *plVar1;
        lVar12 = *(long *)(param_1 + 0x18);
        if (lVar24 != lVar11 || lVar12 != lVar26) {
          bVar14 = false;
          ClearExclusiveLocal();
          lVar11 = lVar24;
          lVar26 = lVar12;
          goto joined_r0x012e654c;
        }
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x14) = lVar26;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      bVar14 = true;
      lVar11 = lVar24;
      lVar26 = lVar12;
      goto joined_r0x012e654c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x20));
  return;
}



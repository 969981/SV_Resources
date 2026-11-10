/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011a6f34; name: FUN_011a6f34
 */


void FUN_011a6f34(long param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  int *piVar3;
  short *psVar4;
  LightEventType *pLVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  char cVar11;
  bool bVar12;
  size_t sVar13;
  unkuint9 Var14;
  undefined4 uVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  bool bVar20;
  long *plVar21;
  ulong *puVar22;
  long *plVar23;
  undefined1 *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  short sVar31;
  long *plVar32;
  long lVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  ulong local_68;
  
  if (*(char *)(param_1 + 0x550) != '\0') {
    return;
  }
  plVar1 = (long *)(param_1 + 0x290);
  lVar17 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x298) == 0) {
    cVar11 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar20) {
      *plVar1 = lVar17;
      *(undefined8 *)(param_1 + 0x298) = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
    if (cVar11 == '\0') goto LAB_011a6f84;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a0));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x298) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a0));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x298) == 0) {
          cVar11 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar20) {
            *plVar1 = lVar17;
            *(undefined8 *)(param_1 + 0x298) = 0;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 == '\0') goto LAB_011a6f84;
        }
      } while( true );
    }
    cVar11 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar20) {
      *plVar1 = lVar17;
      *(undefined8 *)(param_1 + 0x298) = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
LAB_011a6f84:
  plVar21 = *(long **)(param_1 + 0x2b0);
  lVar17 = *(long *)(param_1 + 0x2e8);
  if ((lVar17 != 0) && (*plVar21 != param_2)) {
    plVar18 = plVar21 + lVar17 * 4;
    lVar17 = lVar17 * 0x20;
    do {
      lVar17 = lVar17 + -0x20;
      if (lVar17 == 0) {
        plVar21 = plVar18;
        break;
      }
      plVar23 = plVar21 + 4;
      plVar32 = plVar21 + 4;
      plVar21 = plVar23;
    } while (*plVar32 != param_2);
  }
  uVar34 = plVar21[3];
  lVar17 = *(long *)(param_1 + 0x348);
  puVar24 = (undefined1 *)(lVar17 + uVar34 * 0x130);
  *puVar24 = 1;
  *(undefined8 *)(puVar24 + 0xa0) = 0;
  *(undefined8 *)(puVar24 + 0xa8) = 0;
  *(undefined4 *)(puVar24 + 0xb0) = 0;
  *(undefined8 *)(puVar24 + 0xc0) = 0;
  *(undefined8 *)(puVar24 + 200) = 0;
  puVar24[0xf1] = 0;
  *(undefined8 *)(puVar24 + 0xd0) = 0;
  *(undefined8 *)(puVar24 + 0xd8) = 0;
  *(undefined8 *)(puVar24 + 0xe0) = 0;
  *(undefined8 *)(puVar24 + 0xe8) = 0;
  if (*(long *)(puVar24 + 0x70) != *(long *)(puVar24 + 0x68)) {
    *(long *)(puVar24 + 0x70) = *(long *)(puVar24 + 0x68);
  }
  uVar36 = *(ulong *)(lVar17 + uVar34 * 0x130 + 0x20);
  if (uVar36 < *(ulong *)(param_1 + 0x4a0)) {
    lVar33 = *(long *)(*(long *)(param_1 + 0x3f8) + uVar36 * 8);
    FUN_011a8234(*(undefined8 *)(lVar33 + 0x68),*(undefined4 *)(lVar33 + 0x60));
    uVar15 = FUN_011b1c00(*(undefined8 *)(lVar33 + 0x68));
    *(undefined4 *)(lVar33 + 0x60) = uVar15;
    *(undefined1 *)(lVar33 + 0x2c) = 0;
    *(undefined8 *)(lVar33 + 0x30) = 0;
    *(undefined8 *)(lVar33 + 0x38) = 0;
    *(undefined8 *)(lVar33 + 0x40) = 0;
    *(undefined8 *)(lVar33 + 0x48) = 0;
    *(undefined8 *)(lVar33 + 0x50) = 0;
    *(undefined8 *)(lVar33 + 0x58) = 0;
    local_68 = uVar36;
    if ((*(ulong *)(param_1 + 0x438) <= uVar36) ||
       ((*(ulong *)(*(long *)(param_1 + 0x430) + (uVar36 >> 3 & 0x1ffffffffffffff8)) >>
         (uVar36 & 0x3f) & 1) == 0)) {
      uVar25 = *(long *)(param_1 + 0x4a0) - 1;
      if (uVar25 == uVar36) {
        do {
          *(ulong *)(param_1 + 0x4a0) = uVar25;
          if ((uVar25 == 0) || (uVar25 = uVar25 - 1, *(ulong *)(param_1 + 0x438) <= uVar25)) break;
        } while ((*(ulong *)(*(long *)(param_1 + 0x430) + (uVar25 >> 3 & 0x1ffffffffffffff8)) >>
                  (uVar25 & 0x3f) & 1) != 0);
      }
      plVar21 = (long *)(param_1 + 0x468);
      puVar22 = *(ulong **)(param_1 + 0x468);
      lVar33 = *(long *)(param_1 + 0x470) - (long)puVar22;
      if (lVar33 == 0) {
LAB_011a7724:
        FUN_0103bd9c(plVar21,&local_68);
      }
      else if (lVar33 == 8) {
        if (uVar36 < *puVar22) goto LAB_011a7724;
        FUN_00c6e61c(plVar21,1);
        ((undefined8 *)*plVar21)[1] = *(undefined8 *)*plVar21;
        *(ulong *)*plVar21 = uVar36;
      }
      else {
        uVar25 = lVar33 >> 3;
        if (lVar33 == -8) {
          *(ulong **)(param_1 + 0x470) = puVar22;
LAB_011a70c0:
          uVar26 = 0;
          uVar28 = uVar25;
          uVar27 = uVar25;
          do {
            Var14 = (unkuint9)uVar27;
            uVar6 = uVar26 + (long)((float)(unkint9)Var14 * 0.5);
            uVar7 = uVar6;
            uVar27 = uVar28 - uVar6;
            if (puVar22[uVar6] <= uVar36) {
              uVar7 = uVar26;
              uVar28 = uVar6;
              uVar27 = (long)((float)(unkint9)Var14 * 0.5);
            }
            uVar26 = uVar7;
          } while (2 < uVar27);
          if (uVar7 <= uVar28 && uVar28 < uVar25) {
            while (puVar22[uVar28] <= uVar36) {
              uVar28 = uVar28 - 1;
              if ((uVar28 < uVar7) || (uVar25 <= uVar28)) goto LAB_011a7180;
            }
            uVar28 = uVar28 + 1;
          }
LAB_011a7180:
          if (uVar28 != uVar25) {
            if (uVar28 < uVar25 && uVar7 <= uVar28) {
              uVar7 = uVar28;
            }
            if (uVar7 + 1 < uVar25 + 1) {
              memmove(puVar22 + uVar7 + 1,puVar22 + uVar7,(uVar25 - uVar7) * 8);
            }
            uVar25 = uVar7;
          }
        }
        else {
          FUN_00c6e61c(plVar21,1);
          if (2 < uVar25) {
            puVar22 = (ulong *)*plVar21;
            goto LAB_011a70c0;
          }
        }
        *(ulong *)(*plVar21 + uVar25 * 8) = uVar36;
      }
      if (*(ulong *)(param_1 + 0x438) <= uVar36) {
        FUN_00d7684c((long *)(param_1 + 0x430),uVar36 + 1,0);
      }
      lVar33 = *(long *)(param_1 + 0x430);
      uVar25 = uVar36 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar33 + uVar25) = *(ulong *)(lVar33 + uVar25) | 1L << (uVar36 & 0x3f);
    }
  }
  lVar33 = lVar17 + uVar34 * 0x130;
  plVar21 = *(long **)(lVar33 + 0x110);
  *(undefined8 *)(lVar33 + 0x110) = 0;
  if (plVar21 != (long *)0x0) {
    plVar18 = plVar21 + 5;
    do {
      lVar33 = *plVar18;
      iVar16 = (int)lVar33 + -1;
      cVar11 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar20) {
        *(int *)plVar18 = iVar16;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar21 + 0x10))();
    }
    else if ((int)lVar33 == 0) goto LAB_011a7608;
  }
  lVar33 = lVar17 + uVar34 * 0x130;
  plVar21 = *(long **)(lVar33 + 0x118);
  *(undefined8 *)(lVar33 + 0x118) = 0;
  if (plVar21 != (long *)0x0) {
    plVar18 = plVar21 + 5;
    do {
      lVar33 = *plVar18;
      iVar16 = (int)lVar33 + -1;
      cVar11 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar20) {
        *(int *)plVar18 = iVar16;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar21 + 0x10))();
    }
    else if ((int)lVar33 == 0) goto LAB_011a7608;
  }
  plVar21 = (long *)(lVar17 + uVar34 * 0x130 + 0x10);
  if (*plVar21 != 0) {
    lVar33 = *(long *)(lVar17 + uVar34 * 0x130 + 0x48);
    if ((lVar33 != 0) && (*(short *)(lVar33 + 0x1a) != 0)) {
      psVar4 = (short *)(lVar33 + 0x1a);
      sVar31 = *(short *)(lVar33 + 0x1a);
LAB_011a7f68:
      sVar10 = *psVar4;
      if (sVar10 == sVar31) {
        cVar11 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar20) {
          *psVar4 = sVar31 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
        if (cVar11 != '\0') goto LAB_011a7f8c;
        bVar20 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_011a7f8c:
        bVar20 = false;
      }
      if (!bVar20) goto code_r0x011a7f94;
      if (*(long *)(lVar33 + 0x10) == 0) goto LAB_011a7888;
      plVar18 = (long *)(*(long *)(lVar33 + 0x10) + -8);
      do {
        lVar33 = *plVar1;
        lVar37 = *(long *)(param_1 + 0x298);
        cVar11 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar20) {
          *plVar1 = lVar33;
          *(long *)(param_1 + 0x298) = lVar37;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      do {
        lVar8 = *plVar1;
        lVar9 = *(long *)(param_1 + 0x298);
        if (lVar8 != lVar33 || lVar9 != lVar37) {
          bVar20 = false;
          ClearExclusiveLocal();
          goto LAB_011a7ff4;
        }
        cVar11 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar20) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x294) = lVar37;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      bVar20 = true;
LAB_011a7ff4:
      if (!bVar20) {
        do {
          lVar33 = *plVar1;
          lVar37 = *(long *)(param_1 + 0x298);
          if (lVar33 != lVar8 || lVar37 != lVar9) {
            bVar20 = false;
            ClearExclusiveLocal();
            goto joined_r0x011a81ec;
          }
          cVar11 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar20) {
            *plVar1 = 0;
            *(long *)(param_1 + 0x294) = lVar9;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        bVar20 = true;
joined_r0x011a81ec:
        if (!bVar20) {
          do {
            lVar8 = *plVar1;
            lVar9 = *(long *)(param_1 + 0x298);
            if (lVar8 != lVar33 || lVar9 != lVar37) {
              bVar20 = false;
              ClearExclusiveLocal();
              lVar33 = lVar8;
              lVar37 = lVar9;
              goto joined_r0x011a81ec;
            }
            cVar11 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar20) {
              *plVar1 = 0;
              *(long *)(param_1 + 0x294) = lVar37;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          bVar20 = true;
          lVar33 = lVar8;
          lVar37 = lVar9;
          goto joined_r0x011a81ec;
        }
      }
      pLVar5 = (LightEventType *)(param_1 + 0x2a0);
      nn::os::SignalLightEvent(pLVar5);
      plVar32 = (long *)(param_1 + 0x2f0);
      lVar37 = *plVar32;
      lVar33 = nn::os::GetCurrentThread();
      if (lVar33 != lVar37) {
        lVar33 = nn::os::GetCurrentThread();
LAB_011a8024:
        if (*plVar32 == 0) goto code_r0x011a802c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
        do {
          if (*plVar32 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
              while (*plVar32 == 0) {
                cVar11 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                if (bVar20) {
                  *plVar32 = lVar33;
                  cVar11 = ExclusiveMonitorsStatus();
                }
                if (cVar11 == '\0') goto LAB_011a8034;
              }
            } while( true );
          }
          cVar11 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar20) {
            *plVar32 = lVar33;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
LAB_011a8034:
        bVar20 = false;
        goto LAB_011a8038;
      }
      plVar32 = (long *)0x0;
      bVar20 = true;
LAB_011a8038:
      lVar33 = nn::os::GetCurrentThread();
      while (*plVar1 == 0 && *(long *)(param_1 + 0x298) == 0) {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar33;
          *(undefined8 *)(param_1 + 0x298) = 0;
          cVar11 = ExclusiveMonitorsStatus();
        }
        if (cVar11 == '\0') goto LAB_011a805c;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent(pLVar5);
      do {
        if (*plVar1 != 0 || *(long *)(param_1 + 0x298) != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar5);
            while (*plVar1 == 0 && *(long *)(param_1 + 0x298) == 0) {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar12) {
                *plVar1 = lVar33;
                *(undefined8 *)(param_1 + 0x298) = 0;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_011a805c;
            }
          } while( true );
        }
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar33;
          *(undefined8 *)(param_1 + 0x298) = 0;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_011a805c:
      local_68 = 0;
      FUN_019517a4(*(undefined8 *)(lVar17 + uVar34 * 0x130 + 0x120),&local_68);
      if (!bVar20) {
        *plVar32 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar32 + 1));
      }
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
LAB_011a7888:
    uVar36 = *(ulong *)(param_1 + 0x1c8);
    if (uVar36 == 0) {
      uVar25 = 0;
    }
    else {
      puVar22 = *(ulong **)(param_1 + 0x120);
      uVar25 = 0;
      do {
        if (((*(ulong *)(param_1 + 0x160) <= uVar25) ||
            ((*(ulong *)(*(long *)(param_1 + 0x158) + (uVar25 >> 3 & 0x1ffffffffffffff8)) >>
              (uVar25 & 0x3f) & 1) == 0)) && (*puVar22 == uVar34)) goto LAB_011a78e0;
        uVar25 = uVar25 + 1;
        puVar22 = puVar22 + 0xe;
      } while (uVar36 != uVar25);
      uVar25 = uVar36;
    }
LAB_011a78e0:
    plVar18 = *(long **)(param_1 + 0xf8);
    iVar16 = (int)uVar25;
    if (plVar18 != (long *)0x0) {
      lVar33 = plVar18[6];
      if (*(long *)(lVar33 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar4 = (short *)(lVar33 + 0x1a);
      do {
        sVar31 = *psVar4;
        cVar11 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar20) {
          *psVar4 = sVar31 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar31 == 0) {
        uVar19 = (**(code **)**(undefined8 **)(lVar33 + 0x10))();
        *(undefined8 *)(lVar33 + 8) = uVar19;
        *(undefined4 *)(lVar33 + 0x1c) = 0xfffffffe;
      }
      else if (sVar31 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      nn::os::AcquireSemaphore((SemaphoreType *)(plVar18 + 0x87));
      lVar33 = (long)iVar16;
      lVar37 = *(long *)plVar18[0x80];
      plVar32 = *(long **)(lVar37 + 0x3b0);
      plVar23 = *(long **)(lVar37 + 0x3b8);
      if ((plVar32 == plVar23) || (*plVar32 == lVar33)) {
LAB_011a7974:
        if (plVar32 != plVar23) {
          plVar30 = plVar32 + 1;
          if (plVar30 != plVar23) {
            uVar36 = (long)plVar23 + (-0x10 - (long)plVar32);
            plVar29 = plVar32;
            if (((uint)uVar36 >> 3 & 1) == 0) {
              if (*plVar30 != lVar33) {
                plVar29 = plVar32 + 1;
                *plVar32 = *plVar30;
              }
              plVar30 = plVar32 + 2;
            }
            if (7 < uVar36) {
              do {
                plVar32 = plVar29;
                if (*plVar30 != lVar33) {
                  plVar32 = plVar29 + 1;
                  *plVar29 = *plVar30;
                }
                plVar29 = plVar32;
                if (plVar30[1] != lVar33) {
                  plVar29 = plVar32 + 1;
                  *plVar32 = plVar30[1];
                }
                plVar30 = plVar30 + 2;
              } while (plVar30 != plVar23);
            }
            plVar23 = *(long **)(lVar37 + 0x3b8);
            plVar32 = plVar29;
          }
        }
      }
      else {
        plVar30 = plVar32;
        while (plVar23 + -1 != plVar30) {
          plVar32 = plVar30 + 1;
          plVar29 = plVar30 + 1;
          plVar30 = plVar32;
          if (*plVar29 == lVar33) goto LAB_011a7974;
        }
        plVar32 = plVar23;
      }
      sVar13 = (long)plVar23 - (long)(plVar32 + 1);
      if (sVar13 != 0) {
        memmove(plVar32,plVar32 + 1,sVar13);
      }
      *(size_t *)(lVar37 + 0x3b8) = (long)plVar32 + sVar13;
      nn::os::ReleaseSemaphore((SemaphoreType *)(plVar18 + 0x87));
      lVar33 = plVar18[6];
      psVar4 = (short *)(lVar33 + 0x1a);
      do {
        sVar31 = *psVar4;
        cVar11 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar20) {
          *psVar4 = sVar31 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar31 == 1) {
        *(undefined8 *)(lVar33 + 0x10) = 0;
        (**(code **)(*plVar18 + 0x50))(plVar18);
      }
      else if (sVar31 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar35 = (uint)*plVar21;
    if ((uVar35 >> 2 & 1) != 0) {
      if (((uVar35 >> 3 & 1) != 0) && (*(long *)(param_1 + 0x1d8) != 0)) {
        lVar33 = (long)iVar16;
        lVar37 = *(long *)(*(long *)(**(long **)(param_1 + 0x1f0) + 0x400) +
                          (*(long **)(param_1 + 0x1f0))[2] * 8);
        plVar18 = *(long **)(lVar37 + 0x3b0);
        plVar32 = *(long **)(lVar37 + 0x3b8);
        if ((plVar18 == plVar32) || (*plVar18 == lVar33)) {
LAB_011a7c18:
          if (plVar18 != plVar32) {
            plVar23 = plVar18 + 1;
            if (plVar23 != plVar32) {
              uVar36 = (long)plVar32 + (-0x10 - (long)plVar18);
              plVar30 = plVar18;
              if (((uint)uVar36 >> 3 & 1) == 0) {
                if (*plVar23 != lVar33) {
                  plVar30 = plVar18 + 1;
                  *plVar18 = *plVar23;
                }
                plVar23 = plVar18 + 2;
              }
              if (7 < uVar36) {
                do {
                  plVar18 = plVar30;
                  if (*plVar23 != lVar33) {
                    plVar18 = plVar30 + 1;
                    *plVar30 = *plVar23;
                  }
                  plVar30 = plVar18;
                  if (plVar23[1] != lVar33) {
                    plVar30 = plVar18 + 1;
                    *plVar18 = plVar23[1];
                  }
                  plVar23 = plVar23 + 2;
                } while (plVar23 != plVar32);
              }
              plVar32 = *(long **)(lVar37 + 0x3b8);
              plVar18 = plVar30;
            }
          }
        }
        else {
          plVar23 = plVar18;
          while (plVar32 + -1 != plVar23) {
            plVar18 = plVar23 + 1;
            plVar30 = plVar23 + 1;
            plVar23 = plVar18;
            if (*plVar30 == lVar33) goto LAB_011a7c18;
          }
          plVar18 = plVar32;
        }
        sVar13 = (long)plVar32 - (long)(plVar18 + 1);
        if (sVar13 != 0) {
          memmove(plVar18,plVar18 + 1,sVar13);
        }
        *(size_t *)(lVar37 + 0x3b8) = (long)plVar18 + sVar13;
      }
      if (*(long *)(param_1 + 0x1d0) != 0) {
        lVar33 = (long)iVar16;
        lVar37 = *(long *)(*(long *)(**(long **)(param_1 + 0x1e8) + 0x400) +
                          (*(long **)(param_1 + 0x1e8))[2] * 8);
        plVar18 = *(long **)(lVar37 + 0x3b0);
        plVar32 = *(long **)(lVar37 + 0x3b8);
        if ((plVar18 == plVar32) || (*plVar18 == lVar33)) {
LAB_011a7d08:
          if (plVar18 != plVar32) {
            plVar23 = plVar18 + 1;
            if (plVar23 != plVar32) {
              uVar36 = (long)plVar32 + (-0x10 - (long)plVar18);
              plVar30 = plVar18;
              if (((uint)uVar36 >> 3 & 1) == 0) {
                if (*plVar23 != lVar33) {
                  plVar30 = plVar18 + 1;
                  *plVar18 = *plVar23;
                }
                plVar23 = plVar18 + 2;
              }
              if (7 < uVar36) {
                do {
                  plVar18 = plVar30;
                  if (*plVar23 != lVar33) {
                    plVar18 = plVar30 + 1;
                    *plVar30 = *plVar23;
                  }
                  plVar30 = plVar18;
                  if (plVar23[1] != lVar33) {
                    plVar30 = plVar18 + 1;
                    *plVar18 = plVar23[1];
                  }
                  plVar23 = plVar23 + 2;
                } while (plVar23 != plVar32);
              }
              plVar32 = *(long **)(lVar37 + 0x3b8);
              plVar18 = plVar30;
            }
          }
        }
        else {
          plVar23 = plVar18;
          while (plVar32 + -1 != plVar23) {
            plVar18 = plVar23 + 1;
            plVar30 = plVar23 + 1;
            plVar23 = plVar18;
            if (*plVar30 == lVar33) goto LAB_011a7d08;
          }
          plVar18 = plVar32;
        }
        sVar13 = (long)plVar32 - (long)(plVar18 + 1);
        if (sVar13 != 0) {
          memmove(plVar18,plVar18 + 1,sVar13);
        }
        *(size_t *)(lVar37 + 0x3b8) = (long)plVar18 + sVar13;
      }
    }
    if (((uVar35 >> 3 & 1) != 0) && (*(long *)(param_1 + 0x1e0) != 0)) {
      lVar33 = (long)iVar16;
      lVar37 = *(long *)(*(long *)(**(long **)(param_1 + 0x1f8) + 0x400) +
                        (*(long **)(param_1 + 0x1f8))[2] * 8);
      plVar18 = *(long **)(lVar37 + 0x3b0);
      plVar32 = *(long **)(lVar37 + 0x3b8);
      if ((plVar18 == plVar32) || (*plVar18 == lVar33)) {
LAB_011a7aa4:
        if (plVar18 != plVar32) {
          plVar23 = plVar18 + 1;
          if (plVar23 != plVar32) {
            uVar36 = (long)plVar32 + (-0x10 - (long)plVar18);
            plVar30 = plVar18;
            if (((uint)uVar36 >> 3 & 1) == 0) {
              if (*plVar23 != lVar33) {
                plVar30 = plVar18 + 1;
                *plVar18 = *plVar23;
              }
              plVar23 = plVar18 + 2;
            }
            if (7 < uVar36) {
              do {
                plVar18 = plVar30;
                if (*plVar23 != lVar33) {
                  plVar18 = plVar30 + 1;
                  *plVar30 = *plVar23;
                }
                plVar30 = plVar18;
                if (plVar23[1] != lVar33) {
                  plVar30 = plVar18 + 1;
                  *plVar18 = plVar23[1];
                }
                plVar23 = plVar23 + 2;
              } while (plVar23 != plVar32);
            }
            plVar32 = *(long **)(lVar37 + 0x3b8);
            plVar18 = plVar30;
          }
        }
      }
      else {
        plVar23 = plVar18;
        while (plVar32 + -1 != plVar23) {
          plVar18 = plVar23 + 1;
          plVar30 = plVar23 + 1;
          plVar23 = plVar18;
          if (*plVar30 == lVar33) goto LAB_011a7aa4;
        }
        plVar18 = plVar32;
      }
      sVar13 = (long)plVar32 - (long)(plVar18 + 1);
      if (sVar13 != 0) {
        memmove(plVar18,plVar18 + 1,sVar13);
      }
      *(size_t *)(lVar37 + 0x3b8) = (long)plVar18 + sVar13;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x120) + (long)iVar16 * 0x70) = 0xffffffffffffffff;
    *(undefined1 *)(*(long *)(param_1 + 0x120) + (long)iVar16 * 0x70 + 0x60) = 1;
    if ((ulong)(long)iVar16 < *(ulong *)(param_1 + 0x1c8)) {
      lVar33 = *(long *)(param_1 + 0x120) + (long)iVar16 * 0x70;
      plVar18 = *(long **)(lVar33 + 8);
      *(undefined8 *)(lVar33 + 8) = 0;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x18))();
      }
      FUN_028c4c00((long *)(param_1 + 0x120),(long)iVar16);
    }
  }
  lVar33 = lVar17 + uVar34 * 0x130;
  plVar18 = *(long **)(lVar33 + 0x120);
  *(undefined8 *)(lVar33 + 0x120) = 0;
  if (plVar18 != (long *)0x0) {
    plVar32 = plVar18 + 5;
    do {
      lVar33 = *plVar32;
      iVar16 = (int)lVar33 + -1;
      cVar11 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar20) {
        *(int *)plVar32 = iVar16;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
    else if ((int)lVar33 == 0) goto LAB_011a7608;
  }
  lVar17 = lVar17 + uVar34 * 0x130;
  *plVar21 = 0;
  *(undefined1 *)(lVar17 + 0x18) = 1;
  *(undefined8 *)(lVar17 + 0x28) = 0;
  *(undefined4 *)(lVar17 + 0x128) = 0;
  *(undefined1 *)(lVar17 + 300) = 0;
  plVar21 = *(long **)(param_1 + 0x2b0);
  uVar36 = *(ulong *)(param_1 + 0x2e8);
  if ((uVar36 == 0) || (*plVar21 == param_2)) {
    plVar18 = plVar21;
  }
  else {
    lVar17 = uVar36 * 0x20;
    plVar32 = plVar21;
    do {
      lVar17 = lVar17 + -0x20;
      if (lVar17 == 0) {
        plVar18 = plVar21 + uVar36 * 4;
        break;
      }
      plVar18 = plVar32 + 4;
      plVar23 = plVar32 + 4;
      plVar32 = plVar18;
    } while (*plVar23 != param_2);
  }
  if (plVar21 + uVar36 * 4 != plVar18) {
    uVar25 = (long)plVar18 - (long)plVar21 >> 5;
    if (uVar36 <= uVar25) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("index < m_end","erase",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/game/culling/culling_system.h"
                 ,0x391,"FlatHashTable::erase iterator out of bounds");
    }
    uVar28 = uVar25 + 1;
    if (uVar28 < (ulong)(*(long *)(param_1 + 0x2b8) - (long)plVar21 >> 5)) {
      memmove(plVar21 + uVar25 * 4,plVar21 + uVar28 * 4,(uVar36 - uVar28) * 0x20);
      uVar36 = *(ulong *)(param_1 + 0x2e8);
    }
    *(ulong *)(param_1 + 0x2e8) = uVar36 - 1;
  }
  if (uVar34 < *(ulong *)(param_1 + 0x3f0)) {
    lVar33 = *(long *)(param_1 + 0x348);
    lVar17 = lVar33 + uVar34 * 0x130;
    puVar22 = *(ulong **)(lVar17 + 0x48);
    *(undefined8 *)(lVar17 + 0x48) = 0;
    if (puVar22 != (ulong *)0x0) {
      puVar2 = puVar22 + 3;
      do {
        sVar31 = (short)*puVar2;
        cVar11 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar20) {
          *(short *)puVar2 = sVar31 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar31 == 1) {
        piVar3 = (int *)((long)puVar22 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar11 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar20) {
            *piVar3 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_68 = *puVar22;
          FUN_00c44438(lVar17 + 0x8040,&local_68);
        }
      }
      else if (sVar31 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar17 = lVar33 + uVar34 * 0x130;
    *(undefined8 *)(lVar17 + 0x50) = 0;
    plVar21 = *(long **)(lVar17 + 0x110);
    *(undefined8 *)(lVar17 + 0x110) = 0;
    if (plVar21 != (long *)0x0) {
      plVar18 = plVar21 + 5;
      do {
        lVar17 = *plVar18;
        iVar16 = (int)lVar17 + -1;
        cVar11 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar20) {
          *(int *)plVar18 = iVar16;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar16 == 0) {
        (**(code **)(*plVar21 + 0x10))();
      }
      else if ((int)lVar17 == 0) goto LAB_011a7608;
    }
    lVar17 = lVar33 + uVar34 * 0x130;
    plVar21 = *(long **)(lVar17 + 0x118);
    *(undefined8 *)(lVar17 + 0x118) = 0;
    if (plVar21 != (long *)0x0) {
      plVar18 = plVar21 + 5;
      do {
        lVar17 = *plVar18;
        iVar16 = (int)lVar17 + -1;
        cVar11 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar20) {
          *(int *)plVar18 = iVar16;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar16 == 0) {
        (**(code **)(*plVar21 + 0x10))();
      }
      else if ((int)lVar17 == 0) goto LAB_011a7608;
    }
    lVar33 = lVar33 + uVar34 * 0x130;
    plVar21 = *(long **)(lVar33 + 0x120);
    *(undefined8 *)(lVar33 + 0x120) = 0;
    if (plVar21 != (long *)0x0) {
      plVar18 = plVar21 + 5;
      do {
        lVar17 = *plVar18;
        iVar16 = (int)lVar17 + -1;
        cVar11 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar20) {
          *(int *)plVar18 = iVar16;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar16 == 0) {
        (**(code **)(*plVar21 + 0x10))();
      }
      else if ((int)lVar17 == 0) {
LAB_011a7608:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    local_68 = uVar34;
    if ((*(ulong *)(param_1 + 0x388) <= uVar34) ||
       ((*(ulong *)(*(long *)(param_1 + 0x380) + (uVar34 >> 3 & 0x1ffffffffffffff8)) >>
         (uVar34 & 0x3f) & 1) == 0)) {
      uVar36 = *(long *)(param_1 + 0x3f0) - 1;
      if (uVar36 == uVar34) {
        do {
          *(ulong *)(param_1 + 0x3f0) = uVar36;
          if ((uVar36 == 0) || (uVar36 = uVar36 - 1, *(ulong *)(param_1 + 0x388) <= uVar36)) break;
        } while ((*(ulong *)(*(long *)(param_1 + 0x380) + (uVar36 >> 3 & 0x1ffffffffffffff8)) >>
                  (uVar36 & 0x3f) & 1) != 0);
      }
      plVar21 = (long *)(param_1 + 0x3b8);
      puVar22 = *(ulong **)(param_1 + 0x3b8);
      lVar17 = *(long *)(param_1 + 0x3c0) - (long)puVar22;
      if (lVar17 == 0) {
LAB_011a7740:
        FUN_0103bd9c(plVar21,&local_68);
      }
      else if (lVar17 == 8) {
        if (uVar34 < *puVar22) goto LAB_011a7740;
        FUN_00c6e61c(plVar21,1);
        ((undefined8 *)*plVar21)[1] = *(undefined8 *)*plVar21;
        *(ulong *)*plVar21 = uVar34;
      }
      else {
        uVar36 = lVar17 >> 3;
        if (lVar17 == -8) {
          *(ulong **)(param_1 + 0x3c0) = puVar22;
LAB_011a73d8:
          uVar27 = 0;
          uVar25 = uVar36;
          uVar28 = uVar36;
          do {
            Var14 = (unkuint9)uVar28;
            uVar26 = uVar27 + (long)((float)(unkint9)Var14 * 0.5);
            uVar6 = uVar26;
            uVar28 = uVar25 - uVar26;
            if (puVar22[uVar26] <= uVar34) {
              uVar6 = uVar27;
              uVar25 = uVar26;
              uVar28 = (long)((float)(unkint9)Var14 * 0.5);
            }
            uVar27 = uVar6;
          } while (2 < uVar28);
          if (uVar6 <= uVar25 && uVar25 < uVar36) {
            while (puVar22[uVar25] <= uVar34) {
              uVar25 = uVar25 - 1;
              if ((uVar25 < uVar6) || (uVar36 <= uVar25)) goto LAB_011a744c;
            }
            uVar25 = uVar25 + 1;
          }
LAB_011a744c:
          if (uVar25 != uVar36) {
            if (uVar25 < uVar36 && uVar6 <= uVar25) {
              uVar6 = uVar25;
            }
            if (uVar6 + 1 < uVar36 + 1) {
              memmove(puVar22 + uVar6 + 1,puVar22 + uVar6,(uVar36 - uVar6) * 8);
            }
            uVar36 = uVar6;
          }
        }
        else {
          FUN_00c6e61c(plVar21,1);
          if (2 < uVar36) {
            puVar22 = (ulong *)*plVar21;
            goto LAB_011a73d8;
          }
        }
        *(ulong *)(*plVar21 + uVar36 * 8) = uVar34;
      }
      if (*(ulong *)(param_1 + 0x388) <= uVar34) {
        FUN_00d7684c((long *)(param_1 + 0x380),uVar34 + 1,0);
      }
      lVar17 = *(long *)(param_1 + 0x380);
      uVar36 = uVar34 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar17 + uVar36) = *(ulong *)(lVar17 + uVar36) | 1L << (uVar34 & 0x3f);
    }
  }
  do {
    lVar17 = *plVar1;
    lVar33 = *(long *)(param_1 + 0x298);
    cVar11 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar20) {
      *plVar1 = lVar17;
      *(long *)(param_1 + 0x298) = lVar33;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  do {
    lVar37 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x298);
    if (lVar37 != lVar17 || lVar8 != lVar33) {
      bVar20 = false;
      ClearExclusiveLocal();
      goto LAB_011a74f0;
    }
    cVar11 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar20) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x294) = lVar33;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  bVar20 = true;
LAB_011a74f0:
  if (!bVar20) {
    do {
      lVar17 = *plVar1;
      lVar33 = *(long *)(param_1 + 0x298);
      if (lVar17 != lVar37 || lVar33 != lVar8) {
        bVar20 = false;
        ClearExclusiveLocal();
        goto joined_r0x011a7e48;
      }
      cVar11 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar20) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x294) = lVar8;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar20 = true;
joined_r0x011a7e48:
    if (!bVar20) {
      do {
        lVar37 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x298);
        if (lVar37 != lVar17 || lVar8 != lVar33) {
          bVar20 = false;
          ClearExclusiveLocal();
          lVar17 = lVar37;
          lVar33 = lVar8;
          goto joined_r0x011a7e48;
        }
        cVar11 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar20) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x294) = lVar33;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      bVar20 = true;
      lVar17 = lVar37;
      lVar33 = lVar8;
      goto joined_r0x011a7e48;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a0));
  return;
code_r0x011a7f94:
  sVar31 = sVar10;
  if (sVar10 == 0) goto LAB_011a7888;
  goto LAB_011a7f68;
code_r0x011a802c:
  cVar11 = '\x01';
  bVar20 = (bool)ExclusiveMonitorPass(plVar32,0x10);
  if (bVar20) {
    *plVar32 = lVar33;
    cVar11 = ExclusiveMonitorsStatus();
  }
  if (cVar11 == '\0') goto LAB_011a8034;
  goto LAB_011a8024;
}



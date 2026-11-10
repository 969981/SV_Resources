/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dc1c28; name: FUN_00dc1c28
 */


void FUN_00dc1c28(long param_1)

{
  undefined1 (*pauVar1) [16];
  short *psVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  LightEventType *pLVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  char cVar10;
  undefined1 (*pauVar11) [16];
  int iVar12;
  long *plVar13;
  long lVar14;
  bool bVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  short sVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (((DAT_048417e8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_048417e8), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,&DAT_0459d868,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048417e8);
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x130) + 0x30);
  if (plVar13 != (long *)0x0) {
    plVar5 = plVar13 + 5;
    do {
      lVar16 = *plVar5;
      cVar10 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar15) {
        *(int *)plVar5 = (int)lVar16 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if ((int)lVar16 == -1) {
LAB_00dc214c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar16 = *(long *)(param_1 + 0x180);
  if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar16 + 0x1a);
    sVar25 = *(short *)(lVar16 + 0x1a);
    do {
      sVar9 = *psVar2;
      if (sVar9 == sVar25) {
        cVar10 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar15) {
          *psVar2 = sVar25 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
        if (cVar10 != '\0') goto LAB_00dc1d50;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00dc1d50:
        bVar15 = false;
      }
      if (bVar15) {
        lVar16 = *(long *)(lVar16 + 0x10);
        if (lVar16 != 0) {
          if (*(int *)(lVar16 + 0x100) != 2) {
            lVar20 = *(long *)(lVar16 + 0x70);
            psVar2 = (short *)(lVar20 + 0x1a);
            do {
              sVar25 = *psVar2;
              cVar10 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar15) {
                *psVar2 = sVar25 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            goto LAB_00dc2080;
          }
          pauVar1 = (undefined1 (*) [16])(plVar13 + 0x2a);
          pauVar11 = (undefined1 (*) [16])(plVar13 + 0x2c);
          auVar28 = NEON_ext(*pauVar1,*pauVar1,8,1);
          auVar29 = NEON_ext(*pauVar11,*pauVar11,8,1);
          local_70 = CONCAT44(auVar28._0_4_,(int)*(undefined8 *)*pauVar1);
          uStack_68 = CONCAT44(auVar29._0_4_,(int)*(undefined8 *)*pauVar11);
          lVar17 = *(long *)(lVar16 + 0x108);
          lVar20 = *(long *)(lVar17 + 0x70);
          lVar8 = *(long *)(lVar17 + 0x78);
          if (lVar20 == lVar8) goto LAB_00dc2068;
          lVar17 = *(long *)(lVar17 + 0x30);
          goto LAB_00dc1db8;
        }
        break;
      }
      sVar25 = sVar9;
    } while (sVar9 != 0);
  }
LAB_00dc1c8c:
  if (plVar13 != (long *)0x0) {
    plVar5 = plVar13 + 5;
    do {
      lVar16 = *plVar5;
      iVar12 = (int)lVar16 + -1;
      cVar10 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar15) {
        *(int *)plVar5 = iVar12;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
    else if ((int)lVar16 == 0) {
LAB_00dc2174:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_00dc1db8:
  uVar26 = *(ulong *)(lVar20 + 8);
  uVar27 = uVar26 >> 0x37;
  lVar4 = lVar17 + uVar27 * 0x20;
  plVar5 = (long *)(lVar4 + 0xd050);
  lVar14 = nn::os::GetCurrentThread();
  do {
    lVar18 = *plVar5;
    lVar21 = *(long *)(lVar4 + 0xd058);
    cVar10 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar15) {
      *plVar5 = lVar18;
      *(long *)(lVar4 + 0xd058) = lVar21;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  pLVar6 = (LightEventType *)(lVar4 + 0xd060);
LAB_00dc1de8:
  while ((lVar18 != 0 && (lVar14 != lVar18))) {
    nn::os::WaitLightEvent(pLVar6);
    do {
      lVar18 = *plVar5;
      lVar21 = *(long *)(lVar4 + 0xd058);
      cVar10 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar15) {
        *plVar5 = lVar18;
        *(long *)(lVar4 + 0xd058) = lVar21;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  do {
    lVar7 = *plVar5;
    if (lVar7 != lVar18 || *(long *)(lVar4 + 0xd058) != lVar21) {
      bVar15 = false;
      ClearExclusiveLocal();
      goto LAB_00dc1e24;
    }
    cVar10 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar15) {
      *plVar5 = lVar18;
      *(long *)(lVar4 + 0xd054) = lVar21 + 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  bVar15 = true;
LAB_00dc1e24:
  if (!bVar15) {
    lVar18 = lVar7;
    lVar21 = *(long *)(lVar4 + 0xd058);
    goto LAB_00dc1de8;
  }
  uVar19 = *(ulong *)(lVar17 + uVar27 * 0x68 + 0x50);
  if (uVar19 != 0) {
    uVar22 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar23 = uVar19 - 1 & uVar26;
    }
    else {
      uVar23 = uVar26;
      if (uVar19 <= uVar26) {
        uVar23 = 0;
        if (uVar19 != 0) {
          uVar23 = uVar26 / uVar19;
        }
        uVar23 = uVar26 - uVar23 * uVar19;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar17 + uVar27 * 0x68 + 0x48) + uVar23 * 8);
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar24[1] == uVar26) {
            if (plVar24[2] == uVar26) goto LAB_00dc1f08;
          }
          else if ((plVar24[1] & uVar19 - 1) != uVar23) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar27 = plVar24[1];
          if (uVar27 == uVar26) {
            if (plVar24[2] == uVar26) goto LAB_00dc1f08;
          }
          else {
            if (uVar19 <= uVar27) {
              uVar22 = 0;
              if (uVar19 != 0) {
                uVar22 = uVar27 / uVar19;
              }
              uVar27 = uVar27 - uVar22 * uVar19;
            }
            if (uVar27 != uVar23) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
  goto LAB_00dc1f60;
LAB_00dc1f08:
  plVar24 = (long *)plVar24[4];
  if (plVar24 == (long *)0x0) {
LAB_00dc1f60:
    do {
      lVar14 = *plVar5;
      lVar18 = *(long *)(lVar4 + 0xd058);
      cVar10 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar15) {
        *plVar5 = lVar14;
        *(long *)(lVar4 + 0xd058) = lVar18;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    do {
      lVar21 = *plVar5;
      lVar7 = *(long *)(lVar4 + 0xd058);
      if (lVar21 != lVar14 || lVar7 != lVar18) {
        bVar15 = false;
        ClearExclusiveLocal();
        goto joined_r0x00dc210c;
      }
      cVar10 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar15) {
        *plVar5 = lVar14;
        *(long *)(lVar4 + 0xd054) = lVar18 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    bVar15 = true;
joined_r0x00dc210c:
    if (!bVar15) {
      do {
        lVar14 = *plVar5;
        lVar18 = *(long *)(lVar4 + 0xd058);
        if (lVar14 != lVar21 || lVar18 != lVar7) {
          bVar15 = false;
          ClearExclusiveLocal();
          lVar21 = lVar14;
          lVar7 = lVar18;
          goto joined_r0x00dc210c;
        }
        cVar10 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar15) {
          *plVar5 = lVar21;
          *(long *)(lVar4 + 0xd054) = lVar7 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      bVar15 = true;
      lVar21 = lVar14;
      lVar7 = lVar18;
      goto joined_r0x00dc210c;
    }
    nn::os::SignalLightEvent(pLVar6);
  }
  else {
    plVar3 = plVar24 + 5;
    do {
      lVar14 = *plVar3;
      cVar10 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar15) {
        *(int *)plVar3 = (int)lVar14 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if ((int)lVar14 == -1) goto LAB_00dc214c;
    do {
      lVar14 = *plVar5;
      lVar18 = *(long *)(lVar4 + 0xd058);
      cVar10 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar15) {
        *plVar5 = lVar14;
        *(long *)(lVar4 + 0xd058) = lVar18;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    do {
      lVar21 = *plVar5;
      lVar7 = *(long *)(lVar4 + 0xd058);
      if (lVar21 != lVar14 || lVar7 != lVar18) {
        bVar15 = false;
        ClearExclusiveLocal();
        goto joined_r0x00dc1f78;
      }
      cVar10 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar15) {
        *plVar5 = lVar14;
        *(long *)(lVar4 + 0xd054) = lVar18 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    bVar15 = true;
joined_r0x00dc1f78:
    if (!bVar15) {
      do {
        lVar14 = *plVar5;
        lVar18 = *(long *)(lVar4 + 0xd058);
        if (lVar14 != lVar21 || lVar18 != lVar7) {
          bVar15 = false;
          ClearExclusiveLocal();
          lVar21 = lVar14;
          lVar7 = lVar18;
          goto joined_r0x00dc1f78;
        }
        cVar10 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar15) {
          *plVar5 = lVar21;
          *(long *)(lVar4 + 0xd054) = lVar7 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      bVar15 = true;
      lVar21 = lVar14;
      lVar7 = lVar18;
      goto joined_r0x00dc1f78;
    }
    nn::os::SignalLightEvent(pLVar6);
    FUN_01925908(plVar24,&DAT_0459d868,&local_70);
    do {
      lVar4 = *plVar3;
      iVar12 = (int)lVar4 + -1;
      cVar10 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar15) {
        *(int *)plVar3 = iVar12;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
    else if ((int)lVar4 == 0) goto LAB_00dc2174;
  }
  lVar20 = lVar20 + 0x28;
  if (lVar20 == lVar8) goto LAB_00dc2068;
  goto LAB_00dc1db8;
LAB_00dc2068:
  lVar20 = *(long *)(lVar16 + 0x70);
  psVar2 = (short *)(lVar20 + 0x1a);
  do {
    sVar25 = *psVar2;
    cVar10 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar15) {
      *psVar2 = sVar25 + -1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
LAB_00dc2080:
  if (sVar25 == 1) {
    *(undefined8 *)(lVar20 + 0x10) = 0;
    (**(code **)(*(long *)(lVar16 + -0x28) + 0x50))();
  }
  else if (sVar25 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_00dc1c8c;
}



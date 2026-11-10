/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00daa390; name: FUN_00daa390
 */


byte FUN_00daa390(long param_1,ulong param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  short *psVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  byte bVar20;
  long *plVar21;
  byte bVar22;
  long *plVar23;
  short sVar24;
  long lVar25;
  undefined8 *puVar26;
  long *plVar27;
  long *plVar28;
  undefined8 *puVar29;
  undefined8 *local_a0;
  undefined *puStack_98;
  long *local_90;
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70 [2];
  undefined8 local_48;
  
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  bVar20 = 0;
  if (param_2 == 0) goto LAB_00daa454;
  if (((*PTR_DAT_047d8c00 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar17 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar17;
  lVar25 = *(long *)(lVar17 + 0x70);
  pMVar1 = (MutexType *)(lVar25 + 0x120);
  nn::os::LockMutex(pMVar1);
  lVar17 = *(long *)(lVar25 + 0x210);
  if (lVar17 == 0) {
LAB_00daa4a0:
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    lVar18 = lVar25 + 0x210;
    do {
      bVar11 = *(ulong *)(lVar17 + 0x20) < param_2;
      if (!bVar11) {
        lVar18 = lVar17;
      }
      lVar17 = *(long *)(lVar17 + (ulong)bVar11 * 8);
    } while (lVar17 != 0);
    if ((lVar18 == lVar25 + 0x210) || (param_2 < *(ulong *)(lVar18 + 0x20))) goto LAB_00daa4a0;
    FUN_00d0a71c(&local_80,lVar18 + 0x28);
    nn::os::UnlockMutex(pMVar1);
    puVar29 = local_80;
    if ((local_80 != (undefined8 *)0x0) && (sVar24 = *(short *)((long)local_80 + 0x1a), sVar24 != 0)
       ) {
      puVar26 = (undefined8 *)local_80[1];
      if (((*PTR_DAT_047d6520 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar13 != 0)) {
        uVar15 = FUN_0151c130();
        *(undefined8 *)PTR_DAT_047d6528 = uVar15;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      if (puVar26 != (undefined8 *)0x0) {
        psVar3 = (short *)((long)puVar29 + 0x1a);
        do {
          if (puVar26 == (undefined8 *)PTR_DAT_047d6528) goto LAB_00daa554;
          puVar26 = (undefined8 *)*puVar26;
          bVar20 = 0;
        } while (puVar26 != (undefined8 *)0x0);
        goto LAB_00daa454;
      }
    }
  }
LAB_00daa450:
  bVar20 = 0;
LAB_00daa454:
  puVar29 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    psVar3 = (short *)(local_80 + 3);
    do {
      sVar24 = *psVar3;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar11) {
        *psVar3 = sVar24 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar24 == 1) {
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_a0 = (undefined8 *)*puVar29;
        FUN_00c44438(lVar17 + 0x8040,&local_a0);
      }
    }
    else if (sVar24 == 0) {
LAB_00dab068:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return bVar20;
LAB_00daa554:
  sVar5 = *psVar3;
  if (sVar5 == sVar24) {
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar11) {
      *psVar3 = sVar24 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_00daa578;
    bVar11 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00daa578:
    bVar11 = false;
  }
  if (!bVar11) goto code_r0x00daa580;
  lVar17 = puVar29[2];
  if (lVar17 == 0) goto LAB_00daa450;
  plVar27 = (long *)(lVar17 + -0x28);
  local_a0 = (undefined8 *)&DAT_f60ecfd9ef7531d5;
  puStack_98 = &DAT_03befc36;
  local_90 = (long *)0x4;
  local_88 = (long *)0x0;
  uVar14 = FUN_00cb86ec(plVar27,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if ((uVar14 & 1) != 0) goto LAB_00daa67c;
  lVar25 = *(long *)(lVar17 + 8);
  if (*(long *)(lVar25 + 0x10) == 0) goto LAB_00daae08;
  psVar3 = (short *)(lVar25 + 0x1a);
  do {
    sVar24 = *psVar3;
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar11) {
      *psVar3 = sVar24 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar24 == 0) {
    uVar15 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
    *(undefined8 *)(lVar25 + 8) = uVar15;
    *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
  }
  else if (sVar24 == -1) goto LAB_00daae28;
  uVar14 = FUN_02a238f8(plVar27);
  lVar25 = *(long *)(lVar17 + 8);
  psVar3 = (short *)(lVar25 + 0x1a);
  do {
    sVar24 = *psVar3;
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar11) {
      *psVar3 = sVar24 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar24 != 1) {
    if (sVar24 == 0) goto LAB_00daa7a8;
    if ((uVar14 & 1) == 0) goto LAB_00daa710;
LAB_00daa67c:
    bVar20 = 1;
    goto LAB_00daa784;
  }
  *(undefined8 *)(lVar25 + 0x10) = 0;
  (**(code **)(*plVar27 + 0x50))(plVar27);
  if ((uVar14 & 1) != 0) goto LAB_00daa67c;
LAB_00daa710:
  FUN_014a34f8(&local_a0,plVar27);
  puVar29 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    if (*(short *)((long)local_a0 + 0x1a) != 0) {
      psVar3 = (short *)((long)local_a0 + 0x1a);
      sVar24 = *(short *)((long)local_a0 + 0x1a);
      do {
        sVar5 = *psVar3;
        if (sVar5 == sVar24) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar11) {
            *psVar3 = sVar24 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00daab1c;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00daab1c:
          bVar11 = false;
        }
        if (bVar11) {
          plVar21 = (long *)0x0;
          if (local_a0[2] != 0) {
            plVar21 = (long *)(local_a0[2] + -0x28);
          }
          goto LAB_00daab44;
        }
        sVar24 = sVar5;
        if (sVar5 == 0) break;
      } while( true );
    }
    plVar21 = (long *)0x0;
LAB_00daab44:
    psVar3 = (short *)(local_a0 + 3);
    do {
      sVar24 = *psVar3;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar11) {
        *psVar3 = sVar24 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar24 == 1) {
      piVar2 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar25 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar25;
        local_70[0] = (undefined8 *)*puVar29;
        FUN_00c44438(lVar25 + 0x8040,local_70);
      }
    }
    else if (sVar24 == 0) goto LAB_00dab068;
    if (plVar21 != (long *)0x0) {
      local_a0 = (undefined8 *)&DAT_f60ecfd9ef7531d5;
      puStack_98 = &DAT_03befc36;
      local_90 = (long *)0x4;
      local_88 = (long *)0x0;
      uVar14 = FUN_00cb86ec(plVar21,&local_a0);
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      if ((uVar14 & 1) == 0) {
        lVar25 = plVar21[6];
        if (*(long *)(lVar25 + 0x10) == 0) {
LAB_00daae08:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar3 = (short *)(lVar25 + 0x1a);
        do {
          sVar24 = *psVar3;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar11) {
            *psVar3 = sVar24 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar24 == 0) {
          uVar15 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
          *(undefined8 *)(lVar25 + 8) = uVar15;
          *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
        }
        else if (sVar24 == -1) {
LAB_00daae28:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        uVar14 = FUN_02a238f8(plVar21);
        lVar25 = plVar21[6];
        psVar3 = (short *)(lVar25 + 0x1a);
        do {
          sVar24 = *psVar3;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar11) {
            *psVar3 = sVar24 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar24 == 1) {
          *(undefined8 *)(lVar25 + 0x10) = 0;
          (**(code **)(*plVar21 + 0x50))(plVar21);
        }
        else if (sVar24 == 0) goto LAB_00daa7a8;
        if ((uVar14 & 1) == 0) {
          lVar25 = plVar21[6];
          psVar3 = (short *)(lVar25 + 0x1a);
          do {
            sVar24 = *psVar3;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar11) {
              *psVar3 = sVar24 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar24 == 1) {
            *(undefined8 *)(lVar25 + 0x10) = 0;
            (**(code **)(*plVar21 + 0x50))(plVar21);
          }
          else if (sVar24 == 0) goto LAB_00daa7a8;
          goto LAB_00daa724;
        }
      }
      lVar25 = plVar21[6];
      psVar3 = (short *)(lVar25 + 0x1a);
      do {
        sVar24 = *psVar3;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar11) {
          *psVar3 = sVar24 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar24 == 1) {
        *(undefined8 *)(lVar25 + 0x10) = 0;
        (**(code **)(*plVar21 + 0x50))(plVar21);
      }
      else if (sVar24 == 0) goto LAB_00daa7a8;
      goto LAB_00daa67c;
    }
  }
LAB_00daa724:
  local_90 = *(long **)(param_1 + 0x78);
  local_a0 = *(undefined8 **)(param_1 + 0x68);
  puStack_98 = *(undefined **)(param_1 + 0x70);
  local_88 = (long *)0x0;
  FUN_00f22614(local_70,lVar17 + 0x520,&local_a0);
  puVar29 = local_70[0];
  plVar21 = (long *)0x0;
  if (local_70[0] != (undefined8 *)0x0) {
    if (*(short *)((long)local_70[0] + 0x1a) != 0) {
      psVar3 = (short *)((long)local_70[0] + 0x1a);
      sVar24 = *(short *)((long)local_70[0] + 0x1a);
      do {
        sVar5 = *psVar3;
        if (sVar5 == sVar24) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar11) {
            *psVar3 = sVar24 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00daaa60;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00daaa60:
          bVar11 = false;
        }
        if (bVar11) {
          plVar21 = (long *)0x0;
          if (local_70[0][2] != 0) {
            plVar21 = (long *)(local_70[0][2] + -0x28);
          }
          goto LAB_00daaa88;
        }
        sVar24 = sVar5;
        if (sVar5 == 0) break;
      } while( true );
    }
    plVar21 = (long *)0x0;
LAB_00daaa88:
    psVar3 = (short *)(local_70[0] + 3);
    do {
      sVar24 = *psVar3;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar11) {
        *psVar3 = sVar24 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar24 == 1) {
      piVar2 = (int *)((long)local_70[0] + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar25 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar25;
        local_48 = *puVar29;
        FUN_00c44438(lVar25 + 0x8040,&local_48);
      }
    }
    else if (sVar24 == 0) goto LAB_00dab068;
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
    if (plVar21 != (long *)0x0) goto LAB_00daa75c;
LAB_00daa7e0:
    local_90 = *(long **)(param_1 + 0x78);
    local_a0 = *(undefined8 **)(param_1 + 0x68);
    puStack_98 = *(undefined **)(param_1 + 0x70);
    local_88 = (long *)0x0;
    FUN_00fe3ff4(local_70,plVar27,&local_a0);
    puVar29 = local_70[0];
    plVar23 = (long *)0x0;
    if (local_70[0] != (undefined8 *)0x0) {
      if (*(short *)((long)local_70[0] + 0x1a) != 0) {
        psVar3 = (short *)((long)local_70[0] + 0x1a);
        sVar24 = *(short *)((long)local_70[0] + 0x1a);
        do {
          sVar5 = *psVar3;
          if (sVar5 == sVar24) {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar11) {
              *psVar3 = sVar24 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_00daacb0;
            bVar11 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00daacb0:
            bVar11 = false;
          }
          if (bVar11) {
            plVar23 = (long *)0x0;
            if (local_70[0][2] != 0) {
              plVar23 = (long *)(local_70[0][2] + -0x28);
            }
            goto LAB_00daacd8;
          }
          sVar24 = sVar5;
          if (sVar5 == 0) break;
        } while( true );
      }
      plVar23 = (long *)0x0;
LAB_00daacd8:
      psVar3 = (short *)(local_70[0] + 3);
      do {
        sVar24 = *psVar3;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar11) {
          *psVar3 = sVar24 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar24 == 1) {
        piVar2 = (int *)((long)local_70[0] + 0x1c);
        do {
          iVar13 = *piVar2;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar25 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar25;
          local_48 = *puVar29;
          FUN_00c44438(lVar25 + 0x8040,&local_48);
        }
      }
      else if (sVar24 == 0) goto LAB_00dab068;
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
      if (plVar23 != (long *)0x0) goto LAB_00daa818;
      goto LAB_00daa770;
    }
    if (plVar23 == (long *)0x0) goto LAB_00daa770;
LAB_00daa818:
    lVar25 = FUN_010c5a68(plVar23 + 0x21,&local_a0);
    if (lVar25 != 0) {
      lVar18 = *(long *)(lVar25 + 0x120);
      if (((lVar18 == 0) || (*(undefined8 **)(lVar18 + 0x28) == *(undefined8 **)(lVar18 + 0x20))) ||
         (plVar28 = (long *)**(undefined8 **)(lVar18 + 0x20), plVar28 == (long *)0x0)) {
        local_a0 = (undefined8 *)0x0;
        puStack_98 = (undefined *)0x0;
        goto LAB_00daa8d4;
      }
      (**(code **)(*(long *)(lVar25 + 0x20) + 0x20))(local_70);
      puVar9 = PTR_DAT_047d39b8;
      local_a0 = (undefined8 *)0x0;
      puStack_98 = (undefined *)0x0;
      if (local_70[0] != (undefined8 *)0x0) {
        puVar29 = (undefined8 *)local_70[0][1];
        if (puVar29 != (undefined8 *)0x0) {
          if ((*PTR_DAT_047d39b0 & 1) == 0) {
            iVar13 = __cxa_guard_acquire(PTR_DAT_047d39b0);
            puVar10 = PTR_DAT_047d39c8;
            if (iVar13 != 0) {
              if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar13 != 0)) {
                *(undefined8 *)puVar10 = 0;
                __cxa_guard_release(PTR_DAT_047d39c0);
              }
              *(undefined **)puVar9 = puVar10;
              __cxa_guard_release(PTR_DAT_047d39b0);
            }
          }
          do {
            if (puVar29 == (undefined8 *)puVar9) {
              FUN_00d30d98(&local_a0,local_70);
              break;
            }
            puVar29 = (undefined8 *)*puVar29;
          } while (puVar29 != (undefined8 *)0x0);
        }
        puVar29 = local_70[0];
        if (local_70[0] != (undefined8 *)0x0) {
          psVar3 = (short *)(local_70[0] + 3);
          do {
            sVar24 = *psVar3;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar11) {
              *psVar3 = sVar24 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar24 == 1) {
            piVar2 = (int *)((long)local_70[0] + 0x1c);
            do {
              iVar13 = *piVar2;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar11) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar25 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar25;
              local_48 = *puVar29;
              FUN_00c44438(lVar25 + 0x8040,&local_48);
            }
          }
          else if (sVar24 == 0) goto LAB_00dab068;
        }
      }
      local_90 = plVar28;
      if (local_a0 == (undefined8 *)0x0) goto LAB_00daa8d4;
      lVar25 = *(long *)(param_1 + 0x80);
      if (*(short *)((long)local_a0 + 0x1a) == 0) {
LAB_00dab038:
        bVar11 = true;
        bVar12 = true;
LAB_00dab040:
        puVar29 = local_a0;
        psVar3 = (short *)(local_a0 + 3);
        do {
          sVar24 = *psVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar24 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar24 != 1) {
          if (sVar24 == 0) goto LAB_00dab068;
          goto LAB_00dab060;
        }
        piVar2 = (int *)((long)local_a0 + 0x1c);
        do {
          iVar13 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 == -1) goto LAB_00dab060;
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar25 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar25;
        local_70[0] = (undefined8 *)*puVar29;
        FUN_00c44438(lVar25 + 0x8040,local_70);
        if (bVar12) goto LAB_00daa8d4;
        bVar12 = false;
        goto LAB_00daa8dc;
      }
      psVar3 = (short *)((long)local_a0 + 0x1a);
      sVar24 = *(short *)((long)local_a0 + 0x1a);
      do {
        sVar5 = *psVar3;
        if (sVar5 == sVar24) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar11) {
            *psVar3 = sVar24 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00daaebc;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00daaebc:
          bVar11 = false;
        }
        if (bVar11) {
          if (local_a0[2] == 0) goto LAB_00dab038;
          plVar8 = (long *)*plVar28;
          goto joined_r0x00daaee8;
        }
        sVar24 = sVar5;
      } while (sVar5 != 0);
      uVar19 = 0;
      goto LAB_00daafe0;
    }
LAB_00daa8d4:
    bVar12 = true;
    bVar11 = true;
    goto LAB_00daa8dc;
  }
  if (plVar21 == (long *)0x0) goto LAB_00daa7e0;
LAB_00daa75c:
  FUN_00e28240(&local_a0,plVar21);
  if (local_a0 != (undefined8 *)0x0) {
    lVar25 = *(long *)(param_1 + 0x80);
    if (*(short *)((long)local_a0 + 0x1a) != 0) {
      psVar3 = (short *)((long)local_a0 + 0x1a);
      sVar24 = *(short *)((long)local_a0 + 0x1a);
      do {
        sVar5 = *psVar3;
        if (sVar5 == sVar24) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar11) {
            *psVar3 = sVar24 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00daad48;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00daad48:
          bVar11 = false;
        }
        if (bVar11) {
          if (local_a0[2] == 0) goto LAB_00daae50;
          plVar23 = (long *)*local_90;
          goto joined_r0x00daad78;
        }
        sVar24 = sVar5;
      } while (sVar5 != 0);
      uVar19 = 0;
      goto LAB_00daadec;
    }
LAB_00daae50:
    bVar11 = true;
    bVar12 = true;
LAB_00daae58:
    puVar29 = local_a0;
    psVar3 = (short *)(local_a0 + 3);
    do {
      sVar24 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar24 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar24 == 1) {
      piVar2 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar25 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar25;
        local_70[0] = (undefined8 *)*puVar29;
        FUN_00c44438(lVar25 + 0x8040,local_70);
      }
    }
    else if (sVar24 == 0) goto LAB_00dab068;
    goto LAB_00daae78;
  }
LAB_00daa770:
  bVar11 = true;
LAB_00daa774:
  bVar22 = 1;
  bVar20 = bVar22;
  if (plVar21 == (long *)0x0) goto LAB_00daa77c;
  goto LAB_00daa90c;
code_r0x00daa580:
  bVar20 = 0;
  sVar24 = sVar5;
  if (sVar5 == 0) goto LAB_00daa454;
  goto LAB_00daa554;
  while( true ) {
    lVar18 = *plVar8;
    plVar4 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar18 + 8) != 0) {
      plVar4 = (long *)(*(long *)(lVar18 + 8) + 0x30);
    }
    plVar8 = plVar8 + 1;
    if (*plVar4 == lVar25) break;
joined_r0x00daaee8:
    if (plVar8 == (long *)plVar28[1]) goto LAB_00dab2a4;
  }
  if ((*(char *)(lVar18 + 0x10) != '\x01') || (*(long **)(lVar18 + 0x18) == (long *)0x0))
  goto LAB_00dab2a4;
  uVar19 = (uint)(**(long **)(lVar18 + 0x18) != 0) << 8;
  uVar16 = 1;
LAB_00daafcc:
  uVar19 = uVar19 | uVar16;
  (**(code **)(*(long *)(local_a0[2] + -8) + 0x18))();
LAB_00daafe0:
  bVar12 = (uVar19 & 0xff) == 0;
  bVar11 = bVar12 || 0xff < uVar19;
  if (local_a0 != (undefined8 *)0x0) goto LAB_00dab040;
LAB_00dab060:
  if (bVar12) goto LAB_00daa8d4;
  bVar12 = false;
LAB_00daa8dc:
  lVar25 = plVar23[6];
  psVar3 = (short *)(lVar25 + 0x1a);
  do {
    sVar24 = *psVar3;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar7) {
      *psVar3 = sVar24 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar24 != 1) {
    if (sVar24 == 0) goto LAB_00daa7a8;
    if (!bVar12) goto LAB_00daa904;
    goto LAB_00daa774;
  }
  *(undefined8 *)(lVar25 + 0x10) = 0;
  (**(code **)(*plVar23 + 0x50))(plVar23);
  if (bVar12) goto LAB_00daa774;
LAB_00daa904:
  bVar22 = 0;
  bVar20 = 0;
  if (plVar21 != (long *)0x0) goto LAB_00daa90c;
  goto LAB_00daa77c;
LAB_00dab2a4:
  uVar16 = 0;
  uVar19 = 0;
  goto LAB_00daafcc;
  while( true ) {
    lVar18 = *plVar23;
    plVar28 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar18 + 8) != 0) {
      plVar28 = (long *)(*(long *)(lVar18 + 8) + 0x30);
    }
    plVar23 = plVar23 + 1;
    if (*plVar28 == lVar25) break;
joined_r0x00daad78:
    if (plVar23 == (long *)local_90[1]) goto LAB_00dab1c4;
  }
  if ((*(char *)(lVar18 + 0x10) != '\x01') || (*(long **)(lVar18 + 0x18) == (long *)0x0))
  goto LAB_00dab1c4;
  uVar19 = (uint)(**(long **)(lVar18 + 0x18) != 0) << 8;
  uVar16 = 1;
LAB_00daadd8:
  uVar19 = uVar19 | uVar16;
  (**(code **)(*(long *)(local_a0[2] + -8) + 0x18))();
LAB_00daadec:
  bVar12 = (uVar19 & 0xff) == 0;
  bVar11 = bVar12 || 0xff < uVar19;
  if (local_a0 != (undefined8 *)0x0) goto LAB_00daae58;
LAB_00daae78:
  if (bVar12) goto LAB_00daa770;
  bVar20 = 0;
LAB_00daa90c:
  bVar22 = bVar20;
  lVar25 = plVar21[6];
  psVar3 = (short *)(lVar25 + 0x1a);
  do {
    sVar24 = *psVar3;
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar12) {
      *psVar3 = sVar24 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar24 == 1) {
    *(undefined8 *)(lVar25 + 0x10) = 0;
    (**(code **)(*plVar21 + 0x50))(plVar21);
  }
  else if (sVar24 == 0) goto LAB_00daa7a8;
LAB_00daa77c:
  bVar20 = bVar11 & (bVar22 ^ 1);
LAB_00daa784:
  lVar17 = *(long *)(lVar17 + 8);
  psVar3 = (short *)(lVar17 + 0x1a);
  do {
    sVar24 = *psVar3;
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar11) {
      *psVar3 = sVar24 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar24 == 1) {
    *(undefined8 *)(lVar17 + 0x10) = 0;
    (**(code **)(*plVar27 + 0x50))(plVar27);
  }
  else if (sVar24 == 0) {
LAB_00daa7a8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_00daa454;
LAB_00dab1c4:
  uVar16 = 0;
  uVar19 = 0;
  goto LAB_00daadd8;
}



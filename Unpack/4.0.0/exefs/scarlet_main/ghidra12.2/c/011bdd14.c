/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011bdd14; name: FUN_011bdd14
 */


void FUN_011bdd14(long *param_1)

{
  uint uVar1;
  short *psVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  byte bVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  short sVar25;
  long lVar26;
  undefined8 uVar27;
  long *plVar28;
  long *plVar29;
  long local_a8;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar26 = *param_1;
  uVar1 = *(int *)(lVar26 + 0xc0) + 1;
  *(uint *)(lVar26 + 0xc0) = uVar1;
  if (*(uint *)(lVar26 + 0xbc) <= uVar1) {
    plVar28 = (long *)(lVar26 + 0x48);
    *(undefined4 *)(lVar26 + 0xc0) = 0;
    if (*plVar28 != *(long *)(lVar26 + 0x50)) {
      plVar24 = (long *)(lVar26 + 0x30);
      lVar22 = *plVar24;
      lVar16 = nn::os::GetCurrentThread();
      if (lVar16 != lVar22) {
        lVar16 = nn::os::GetCurrentThread();
LAB_011bde08:
        if (*plVar24 == 0) goto code_r0x011bde10;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x38));
        do {
          if (*plVar24 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x38));
              while (*plVar24 == 0) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar7) {
                  *plVar24 = lVar16;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_011bde18;
              }
            } while( true );
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar7) {
            *plVar24 = lVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_011bde18:
        bVar7 = false;
        goto LAB_011bde1c;
      }
      plVar24 = (long *)0x0;
      bVar7 = true;
LAB_011bde1c:
      plVar20 = *(long **)(lVar26 + 0x48);
      plVar4 = *(long **)(lVar26 + 0x50);
      if (plVar20 != plVar4) {
        do {
          if ((*plVar20 != 0) && (*(short *)(*plVar20 + 0x1a) != 0)) {
            plVar17 = (long *)(**(code **)(**(long **)(lVar26 + 0x98) + 0x10))
                                        (*(long **)(lVar26 + 0x98),0x38,8);
            if (plVar17 == (long *)0x0) {
              (**(code **)(**(long **)(lVar26 + 0x98) + 0xe8))();
            }
            plVar29 = plVar17 + 2;
            *plVar17 = 0;
            uVar27 = *(undefined8 *)(lVar26 + 0x98);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar16 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar16 == 0) {
              *plVar29 = 0;
              plVar17[3] = 0;
              FUN_00ca1a48(plVar29,plVar20);
              plVar17[4] = 0;
              plVar17[5] = 0;
              *(undefined1 *)(plVar17 + 6) = 1;
            }
            else {
              if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar27;
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
              *plVar29 = 0;
              plVar17[3] = 0;
              FUN_00ca1a48(plVar29,plVar20);
              plVar17[4] = 0;
              plVar17[5] = 0;
              *(undefined1 *)(plVar17 + 6) = 1;
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
            }
            plVar17[1] = lVar26 + 0x80;
            lVar16 = *(long *)(lVar26 + 0x80);
            *plVar17 = lVar16;
            *(long **)(lVar16 + 8) = plVar17;
            *(long **)(lVar26 + 0x80) = plVar17;
            *(long *)(lVar26 + 0x90) = *(long *)(lVar26 + 0x90) + 1;
          }
          plVar20 = plVar20 + 2;
        } while (plVar4 != plVar20);
        plVar20 = (long *)*plVar28;
      }
      FUN_011be704(plVar28,plVar20);
      if (!bVar7) {
        *plVar24 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar24 + 1));
      }
    }
    puVar11 = PTR_LAB_047d3de8;
    puVar10 = PTR_DAT_047d3918;
    puVar9 = PTR_DAT_047d3910;
    puVar8 = PTR_DAT_047d3908;
    lVar16 = lVar26 + 0x80;
    if (lVar16 != *(long *)(lVar26 + 0x88)) {
      lVar22 = *(long *)(lVar26 + 0x88);
      do {
        lVar21 = *(long *)(lVar22 + 0x10);
        if ((lVar21 != 0) && (*(short *)(lVar21 + 0x1a) != 0)) {
          psVar2 = (short *)(lVar21 + 0x1a);
          sVar25 = *(short *)(lVar21 + 0x1a);
          do {
            sVar5 = *psVar2;
            if (sVar5 == sVar25) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar7) {
                *psVar2 = sVar25 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 != '\0') goto LAB_011bdfd0;
              bVar7 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_011bdfd0:
              bVar7 = false;
            }
            if (bVar7) {
              lVar21 = *(long *)(lVar21 + 0x10);
              if (lVar21 != 0) {
                plVar28 = (long *)(lVar21 + -0x28);
                lVar15 = *(long *)(lVar22 + 8);
                uVar18 = (**(code **)(*plVar28 + 0xd8))(plVar28,lVar22);
                if ((uVar18 & 1) == 0) goto LAB_011be010;
                plVar24 = (long *)(lVar22 + 0x20);
                if ((*plVar24 != 0) && (*(short *)(*plVar24 + 0x1a) != 0)) goto LAB_011be17c;
                plVar20 = (long *)(lVar21 + 0xe8);
                lVar23 = *plVar20;
                lVar19 = nn::os::GetCurrentThread();
                if (lVar19 != lVar23) {
                  lVar19 = nn::os::GetCurrentThread();
                  goto LAB_011be100;
                }
                bVar7 = true;
                goto LAB_011be11c;
              }
              break;
            }
            sVar25 = sVar5;
          } while (sVar5 != 0);
        }
        lVar15 = FUN_011be48c(lVar16);
LAB_011bdddc:
        lVar22 = lVar15;
      } while (lVar16 != lVar15);
    }
  }
  return;
code_r0x011bde10:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar7) {
    *plVar24 = lVar16;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_011bde18;
  goto LAB_011bde08;
LAB_011be100:
  if (*plVar20 == 0) goto code_r0x011be10c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0xf0));
  do {
    if (*plVar20 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0xf0));
        while (*plVar20 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar7) {
            *plVar20 = lVar19;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_011be118;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar7) {
      *plVar20 = lVar19;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_011be118:
  bVar7 = false;
LAB_011be11c:
  plVar20 = (long *)FUN_01f89000(*(undefined8 *)(lVar21 + 0x100),*(undefined8 *)(lVar21 + 0x108));
  if ((*(long **)(lVar21 + 0x108) == plVar20) || (*plVar20 == 0)) {
    plVar20 = (long *)FUN_01f89000(*(undefined8 *)(lVar21 + 0x138),*(undefined8 *)(lVar21 + 0x140));
    if (*(long **)(lVar21 + 0x140) == plVar20) {
      local_a8 = 0;
    }
    else {
      local_a8 = 0;
      if (*plVar20 != 0) {
        local_a8 = *plVar20 + -0x20;
      }
    }
  }
  else {
    local_a8 = *plVar20 + -0x20;
  }
  if (!bVar7) {
    *(undefined8 *)(lVar21 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0xf0));
  }
  if (local_a8 != 0) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00c43ef0(&local_78,local_a8 + 0x98);
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    if (local_78[2] == local_a8 + 0x28) {
      FUN_00c953a8(&local_88,&local_78);
    }
    puVar12 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_78 + 3);
      do {
        sVar25 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar25 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar25 == 1) {
        piVar3 = (int *)((long)local_78 + 0x1c);
        do {
          iVar14 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar14 != -1) {
          if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
            FUN_00100190(puVar11,puVar9,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar8);
          }
          lVar19 = *(long *)puVar9;
          *(long *)puVar10 = lVar19;
          local_68 = *puVar12;
          FUN_00c44438(lVar19 + 0x8040,&local_68);
        }
      }
      else if (sVar25 == 0) goto LAB_011be340;
    }
    FUN_00cacc64(plVar24,&local_88);
    puVar12 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_88 + 3);
      do {
        sVar25 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar25 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar25 == 1) {
        piVar3 = (int *)((long)local_88 + 0x1c);
        do {
          iVar14 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar14 != -1) {
          if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
            FUN_00100190(puVar11,puVar9,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar8);
          }
          lVar19 = *(long *)puVar9;
          *(long *)puVar10 = lVar19;
          local_78 = (undefined8 *)*puVar12;
          FUN_00c44438(lVar19 + 0x8040,&local_78);
        }
      }
      else if (sVar25 == 0) {
LAB_011be340:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    bVar13 = FUN_01df7cc8(local_a8);
    *(byte *)(lVar22 + 0x30) = bVar13 & 1;
  }
LAB_011be17c:
  if (*(char *)(lVar26 + 0xb8) != '\0') {
    if (*(int *)(lVar26 + 0xc4) == 0) {
      if (((*(char *)(lVar22 + 0x30) != '\0') && (*plVar24 != 0)) &&
         (lVar19 = *(long *)(*plVar24 + 0x10), lVar19 != 0)) {
        FUN_0143cdb0(lVar19 + -0x28,0);
        *(undefined1 *)(lVar22 + 0x30) = 0;
      }
    }
    else if (((*(char *)(lVar22 + 0x30) == '\0') && (*plVar24 != 0)) &&
            (lVar19 = *(long *)(*plVar24 + 0x10), lVar19 != 0)) {
      FUN_0143cdb0(lVar19 + -0x28,1);
      *(undefined1 *)(lVar22 + 0x30) = 1;
    }
  }
LAB_011be010:
  lVar22 = *(long *)(lVar21 + 8);
  psVar2 = (short *)(lVar22 + 0x1a);
  do {
    sVar25 = *psVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar7) {
      *psVar2 = sVar25 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar25 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*plVar28 + 0x50))();
  }
  else if (sVar25 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_011bdddc;
code_r0x011be10c:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar7) {
    *plVar20 = lVar19;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_011be118;
  goto LAB_011be100;
}



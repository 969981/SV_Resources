/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d2de48; name: FUN_00d2de48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d2de48(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  long **pplVar3;
  short sVar4;
  undefined2 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined3 uVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  float *pfVar21;
  undefined4 uVar22;
  undefined8 *puVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar44;
  undefined1 auVar34 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  float fVar45;
  undefined1 auVar43 [16];
  undefined6 uVar46;
  undefined1 auVar47 [12];
  byte bVar50;
  byte bVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined2 uVar52;
  byte bVar57;
  byte bVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar61;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar62;
  float fVar67;
  float fVar68;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar74;
  undefined1 auVar73 [16];
  undefined1 auVar75 [12];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  float fVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  int iVar96;
  int iVar97;
  float fVar99;
  float fVar100;
  undefined1 auVar98 [16];
  float fVar101;
  int iVar102;
  int iVar105;
  int iVar106;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float local_b0;
  float fStack_ac;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  long *local_88;
  undefined8 uStack_80;
  long local_78;
  long *local_70;
  long *local_68;
  
  if (*(char *)(param_1 + 0x138) == '\0') {
LAB_00d2e23c:
    *(undefined1 *)(param_1 + 0x13a) = 0;
    return;
  }
  if (*(long *)(param_1 + 0xe8) == 0) {
    plVar24 = (long *)0x0;
  }
  else {
    plVar24 = *(long **)(*(long *)(param_1 + 0xe8) + 0x48);
  }
  if (*(char *)(param_1 + 0x13a) == '\0') {
    uVar17 = (**(code **)(*plVar24 + 0xd8))(plVar24);
    if ((uVar17 & 1) == 0) goto LAB_00d2dea0;
    if (*(long *)(param_1 + 0xe8) == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
    }
    plVar24 = (long *)(lVar18 + 0x110);
    lVar26 = *plVar24;
    lVar25 = nn::os::GetCurrentThread();
    if (lVar25 != lVar26) {
      lVar25 = nn::os::GetCurrentThread();
LAB_00d2e500:
      if (*plVar24 == 0) goto code_r0x00d2e508;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x118));
      do {
        if (*plVar24 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x118));
            while (*plVar24 == 0) {
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar14) {
                *plVar24 = lVar25;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_00d2e510;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar14) {
          *plVar24 = lVar25;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_00d2e510:
      bVar14 = false;
      goto LAB_00d2e514;
    }
    bVar14 = true;
LAB_00d2e514:
    plVar24 = (long *)FUN_00d2fa80(*(undefined8 *)(lVar18 + 0x128),*(undefined8 *)(lVar18 + 0x130));
    if ((*(long **)(lVar18 + 0x130) == plVar24) || (*plVar24 == 0)) {
      plVar24 = (long *)FUN_00d2fa80(*(undefined8 *)(lVar18 + 0x160),*(undefined8 *)(lVar18 + 0x168)
                                    );
      if (*(long **)(lVar18 + 0x168) == plVar24) {
        lVar25 = 0;
      }
      else {
        lVar25 = 0;
        if (*plVar24 != 0) {
          lVar25 = *plVar24 + -0x20;
        }
      }
    }
    else {
      lVar25 = *plVar24 + -0x20;
    }
    if (!bVar14) {
      *(undefined8 *)(lVar18 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x118));
    }
    if (lVar25 != 0) {
      local_70 = (long *)0x0;
      local_68 = (long *)0x0;
      FUN_00c43ef0(&local_70,lVar25 + 0x98);
      local_88 = (long *)0x0;
      uStack_80 = 0;
      if (local_70[2] == lVar25 + 0x28) {
        FUN_00c953a8(&local_88,&local_70);
      }
      plVar24 = local_70;
      if (local_70 != (long *)0x0) {
        plVar19 = local_70 + 3;
        do {
          sVar4 = (short)*plVar19;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar14) {
            *(short *)plVar19 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)local_70 + 0x1c);
          do {
            iVar16 = *piVar2;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_78 = *plVar24;
            FUN_00c44438(lVar18 + 0x8040,&local_78);
          }
        }
        else if (sVar4 == 0) goto LAB_00d2e280;
      }
      FUN_00cacc64(param_1 + 0x1b8,&local_88);
      plVar24 = local_88;
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 3;
        do {
          sVar4 = (short)*plVar19;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar14) {
            *(short *)plVar19 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)local_88 + 0x1c);
          do {
            iVar16 = *piVar2;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_70 = (long *)*plVar24;
            FUN_00c44438(lVar18 + 0x8040,&local_70);
          }
        }
        else if (sVar4 == 0) goto LAB_00d2e280;
      }
    }
    lVar18 = 0;
    if (*(long *)(param_1 + 0xe8) != 0) {
      lVar18 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
    }
    uVar20 = FUN_00ea7754(lVar18 + 0x108,&local_70);
    FUN_00d2fb58((long *)(param_1 + 0x1c8),uVar20);
    if (*(long *)(param_1 + 0xe8) == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
    }
    plVar24 = (long *)(lVar18 + 0x110);
    lVar26 = *plVar24;
    lVar25 = nn::os::GetCurrentThread();
    if (lVar25 != lVar26) {
      lVar25 = nn::os::GetCurrentThread();
      bVar14 = false;
LAB_00d2ee1c:
      if (*plVar24 == 0) goto code_r0x00d2ee24;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x118));
      bVar14 = false;
      do {
        if (*plVar24 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x118));
            while (*plVar24 == 0) {
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar14) {
                *plVar24 = lVar25;
                cVar6 = ExclusiveMonitorsStatus();
              }
              bVar14 = false;
              if (cVar6 == '\0') goto LAB_00d2e5f4;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar15) {
          *plVar24 = lVar25;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      goto LAB_00d2e5f4;
    }
    bVar14 = true;
LAB_00d2e5f4:
    plVar24 = (long *)FUN_00d2ee80(*(undefined8 *)(lVar18 + 0x128),*(undefined8 *)(lVar18 + 0x130));
    if ((*(long **)(lVar18 + 0x130) == plVar24) || (*plVar24 == 0)) {
      plVar24 = (long *)FUN_00d2ee80(*(undefined8 *)(lVar18 + 0x160),*(undefined8 *)(lVar18 + 0x168)
                                    );
      if (*(long **)(lVar18 + 0x168) == plVar24) {
        lVar25 = 0;
      }
      else {
        lVar25 = 0;
        if (*plVar24 != 0) {
          lVar25 = *plVar24 + -0x20;
        }
      }
    }
    else {
      lVar25 = *plVar24 + -0x20;
    }
    if (!bVar14) {
      *(undefined8 *)(lVar18 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x118));
    }
    if (lVar25 == 0) {
      bVar14 = false;
    }
    else {
      lVar18 = *(long *)(lVar25 + 0x488);
      if (lVar18 == 0) {
        bVar14 = true;
      }
      else if (*(char *)(lVar18 + 0x11a) == '\0') {
        bVar14 = false;
      }
      else {
        bVar14 = *(int *)(lVar18 + 0x130) == 3;
      }
      if (*(long *)(lVar25 + 0x498) == 0) {
        bVar15 = true;
      }
      else {
        bVar15 = *(char *)(*(long *)(lVar25 + 0x498) + 0x11a) != '\0';
      }
      if ((bool)(bVar14 & bVar15)) {
        bVar14 = *(int *)(lVar25 + 0x3b0) != 1;
      }
      else {
        bVar14 = true;
      }
    }
    if (((*(long *)(param_1 + 0x1b8) == 0) || (*(short *)(*(long *)(param_1 + 0x1b8) + 0x1a) == 0))
       || ((bool)(bVar14 | *(long *)(param_1 + 0x1c8) == 0))) goto LAB_00d2dea0;
    if ((*(char *)(param_1 + 0x58) != '\x04') || (*(char *)(param_1 + 0x59) != '\x04')) {
      uVar5 = *(undefined2 *)(param_1 + 0x58);
      plVar24 = (long *)(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0x58) = 0x404;
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(param_1 + 0x48),plVar24);
      }
      (**(code **)(*plVar24 + 0x20))(plVar24,uVar5);
    }
    *(undefined1 *)(param_1 + 0x13a) = 1;
  }
  else {
    plVar19 = plVar24 + 0x22;
    lVar25 = *plVar19;
    lVar18 = nn::os::GetCurrentThread();
    if (lVar18 != lVar25) {
      lVar18 = nn::os::GetCurrentThread();
      bVar14 = false;
LAB_00d2ed30:
      if (*plVar19 == 0) goto code_r0x00d2ed38;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar24 + 0x23));
      bVar14 = false;
      do {
        if (*plVar19 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar24 + 0x23));
            while (*plVar19 == 0) {
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar14) {
                *plVar19 = lVar18;
                cVar6 = ExclusiveMonitorsStatus();
              }
              bVar14 = false;
              if (cVar6 == '\0') goto LAB_00d2e158;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar15) {
          *plVar19 = lVar18;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      goto LAB_00d2e158;
    }
    bVar14 = true;
LAB_00d2e158:
    plVar19 = (long *)FUN_00d2ee80(plVar24[0x25],plVar24[0x26]);
    if (((long *)plVar24[0x26] == plVar19) || (*plVar19 == 0)) {
      plVar19 = (long *)FUN_00d2ee80(plVar24[0x2c],plVar24[0x2d]);
      if ((long *)plVar24[0x2d] == plVar19) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        if (*plVar19 != 0) {
          lVar18 = *plVar19 + -0x20;
        }
      }
    }
    else {
      lVar18 = *plVar19 + -0x20;
    }
    if (!bVar14) {
      plVar24[0x22] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar24 + 0x23));
    }
    if (lVar18 == 0) {
      bVar14 = false;
    }
    else {
      lVar25 = *(long *)(lVar18 + 0x488);
      if (lVar25 == 0) {
        bVar14 = true;
      }
      else if (*(char *)(lVar25 + 0x11a) == '\0') {
        bVar14 = false;
      }
      else {
        bVar14 = *(int *)(lVar25 + 0x130) == 3;
      }
      if (*(long *)(lVar18 + 0x498) == 0) {
        bVar15 = true;
      }
      else {
        bVar15 = *(char *)(*(long *)(lVar18 + 0x498) + 0x11a) != '\0';
      }
      if ((bool)(bVar14 & bVar15)) {
        bVar14 = *(int *)(lVar18 + 0x3b0) != 1;
      }
      else {
        bVar14 = true;
      }
    }
    uVar17 = (**(code **)(**(long **)(*(long *)(param_1 + 0xe8) + 0x48) + 0xd8))();
    if ((((uVar17 & 1) == 0) || (*(long *)(param_1 + 0x1b8) == 0)) ||
       (!(bool)(*(short *)(*(long *)(param_1 + 0x1b8) + 0x1a) != 0 & (bVar14 ^ 1U)))) {
      puVar23 = *(undefined8 **)(param_1 + 0x1b8);
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      if (puVar23 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar23 + 3);
        do {
          sVar4 = *psVar1;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)puVar23 + 0x1c);
          do {
            iVar16 = *piVar2;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_70 = (long *)*puVar23;
            FUN_00c44438(lVar18 + 0x8040,&local_70);
          }
        }
        else if (sVar4 == 0) {
LAB_00d2e280:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      plVar24 = *(long **)(param_1 + 0x1c8);
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      if (plVar24 != (long *)0x0) {
        lVar18 = plVar24[0x13];
        psVar1 = (short *)(lVar18 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*plVar24 + 0x50))();
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      if ((*(char *)(param_1 + 0x58) != '\b') || (*(char *)(param_1 + 0x59) != '\b')) {
        uVar5 = *(undefined2 *)(param_1 + 0x58);
        plVar24 = (long *)(param_1 + 0x38);
        *(undefined2 *)(param_1 + 0x58) = 0x808;
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_00c6a584(*(long *)(param_1 + 0x48),plVar24);
        }
        (**(code **)(*plVar24 + 0x20))(plVar24,uVar5);
      }
      goto LAB_00d2e23c;
    }
LAB_00d2dea0:
    if (*(char *)(param_1 + 0x13a) == '\0') {
      return;
    }
  }
  if (((*PTR_DAT_047dadd8 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_047dadd8), iVar16 != 0)) {
    FUN_00100190(&LAB_02a27cb8,PTR_DAT_047dade0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dadd8);
  }
  *(undefined8 *)PTR_DAT_047dade8 = *(undefined8 *)PTR_DAT_047dade0;
  FUN_00d2ef94(&local_88);
  if (local_88 == (long *)0x0) {
    auVar64 = ZEXT816(0);
  }
  else {
    FUN_00c9e664(&local_70,local_88 + 0x1d);
    if (local_70 == (long *)0x0) {
      fStack_98 = 0.0;
      local_a0 = 0.0;
      fStack_9c = 0.0;
    }
    else {
      lVar18 = (**(code **)(*(long *)local_68[9] + 0x68))();
      local_a0 = *(float *)(lVar18 + 0x30);
      fStack_9c = *(float *)(lVar18 + 0x34);
      fStack_98 = *(float *)(lVar18 + 0x38);
    }
    if (local_68 != (long *)0x0) {
      plVar24 = local_68 + 5;
      do {
        lVar18 = *plVar24;
        iVar16 = (int)lVar18 + -1;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar14) {
          *(int *)plVar24 = iVar16;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar16 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
      else if ((int)lVar18 == 0) goto LAB_00d2ecfc;
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x60))();
    }
    FUN_00c9e664(&local_70,local_88 + 0x1d);
    if (local_70 == (long *)0x0) {
      auVar94._8_8_ = _UNK_03cabe58;
      auVar94._0_8_ = _DAT_03cabe50;
    }
    else {
      if (local_68 == (long *)0x0) {
        plVar24 = (long *)0x0;
      }
      else {
        plVar24 = (long *)local_68[9];
      }
      pfVar21 = (float *)(**(code **)(*plVar24 + 0x68))();
      fVar33 = *pfVar21;
      fVar32 = pfVar21[1];
      fVar44 = pfVar21[2];
      fVar45 = pfVar21[3];
      fVar88 = pfVar21[4];
      fVar59 = pfVar21[5];
      fVar60 = pfVar21[6];
      fVar61 = pfVar21[7];
      fVar62 = pfVar21[8];
      fVar67 = pfVar21[9];
      fVar68 = pfVar21[10];
      fVar74 = pfVar21[0xb] * pfVar21[0xb];
      auVar54._0_4_ = fVar88 * fVar88 + fVar59 * fVar59;
      auVar54._4_4_ = fVar60 * fVar60 + fVar61 * fVar61;
      auVar54._8_4_ = fVar88 * fVar88 + fVar59 * fVar59;
      auVar54._12_4_ = fVar60 * fVar60 + fVar61 * fVar61;
      auVar66._0_4_ = fVar62 * fVar62 + fVar67 * fVar67;
      auVar66._4_4_ = fVar68 * fVar68 + fVar74;
      auVar66._8_4_ = fVar62 * fVar62 + fVar67 * fVar67;
      auVar66._12_4_ = fVar68 * fVar68 + fVar74;
      auVar28._0_4_ = fVar33 * fVar33 + fVar32 * fVar32;
      auVar28._4_4_ = fVar44 * fVar44 + fVar45 * fVar45;
      auVar28._8_4_ = fVar33 * fVar33 + fVar32 * fVar32;
      auVar28._12_4_ = fVar44 * fVar44 + fVar45 * fVar45;
      auVar70 = NEON_ext(auVar54,auVar54,4,1);
      auVar48 = NEON_ext(auVar66,auVar66,4,1);
      auVar64 = NEON_ext(auVar28,auVar28,4,1);
      auVar29._0_4_ = auVar70._0_4_ + auVar70._4_4_;
      auVar29._4_4_ = auVar70._8_4_ + auVar70._12_4_;
      auVar29._8_4_ = auVar70._0_4_ + auVar70._4_4_;
      auVar29._12_4_ = auVar70._8_4_ + auVar70._12_4_;
      auVar30._0_4_ = auVar48._0_4_ + auVar48._4_4_;
      auVar30._4_4_ = auVar48._8_4_ + auVar48._12_4_;
      auVar30._8_4_ = auVar48._0_4_ + auVar48._4_4_;
      auVar30._12_4_ = auVar48._8_4_ + auVar48._12_4_;
      auVar31._0_4_ = auVar64._0_4_ + auVar64._4_4_;
      auVar31._4_4_ = auVar64._8_4_ + auVar64._12_4_;
      auVar31._8_4_ = auVar64._0_4_ + auVar64._4_4_;
      auVar31._12_4_ = auVar64._8_4_ + auVar64._12_4_;
      auVar48 = NEON_frsqrte(auVar29,4);
      auVar54 = NEON_frsqrte(auVar30,4);
      auVar107._0_4_ = auVar29._0_4_ * auVar48._0_4_;
      auVar107._4_4_ = auVar29._4_4_ * auVar48._4_4_;
      auVar107._8_4_ = auVar29._8_4_ * auVar48._8_4_;
      auVar107._12_4_ = auVar29._12_4_ * auVar48._12_4_;
      auVar64 = NEON_frsqrte(auVar31,4);
      auVar111._0_4_ = auVar30._0_4_ * auVar54._0_4_;
      auVar111._4_4_ = auVar30._4_4_ * auVar54._4_4_;
      auVar111._8_4_ = auVar30._8_4_ * auVar54._8_4_;
      auVar111._12_4_ = auVar30._12_4_ * auVar54._12_4_;
      auVar89._0_4_ = auVar31._0_4_ * auVar64._0_4_;
      auVar89._4_4_ = auVar31._4_4_ * auVar64._4_4_;
      auVar89._8_4_ = auVar31._8_4_ * auVar64._8_4_;
      auVar89._12_4_ = auVar31._12_4_ * auVar64._12_4_;
      auVar66 = NEON_frsqrts(auVar54,auVar111,4);
      iVar102 = -(uint)(auVar30._0_4_ == 0.0);
      iVar105 = -(uint)(auVar30._4_4_ == 0.0);
      iVar106 = -(uint)(auVar30._8_4_ == 0.0);
      iVar11 = -(uint)(auVar29._0_4_ == 0.0);
      iVar12 = -(uint)(auVar29._4_4_ == 0.0);
      iVar96 = -(uint)(auVar29._8_4_ == 0.0);
      iVar97 = -(uint)(auVar29._12_4_ == 0.0);
      iVar16 = -(uint)(auVar31._0_4_ == 0.0);
      iVar7 = -(uint)(auVar31._4_4_ == 0.0);
      iVar8 = -(uint)(auVar31._8_4_ == 0.0);
      iVar9 = -(uint)(auVar31._12_4_ == 0.0);
      auVar70 = NEON_frsqrts(auVar64,auVar89,4);
      auVar76._0_4_ = auVar64._0_4_ * auVar70._0_4_;
      auVar76._4_4_ = auVar64._4_4_ * auVar70._4_4_;
      auVar76._8_4_ = auVar64._8_4_ * auVar70._8_4_;
      auVar76._12_4_ = auVar64._12_4_ * auVar70._12_4_;
      auVar70 = NEON_frsqrts(auVar48,auVar107,4);
      auVar108._0_4_ = auVar31._0_4_ * auVar76._0_4_;
      auVar108._4_4_ = auVar31._4_4_ * auVar76._4_4_;
      auVar108._8_4_ = auVar31._8_4_ * auVar76._8_4_;
      auVar108._12_4_ = auVar31._12_4_ * auVar76._12_4_;
      auVar64 = NEON_fmov(0x3f800000,4);
      auVar90._0_4_ = auVar48._0_4_ * auVar70._0_4_;
      auVar90._4_4_ = auVar48._4_4_ * auVar70._4_4_;
      auVar90._8_4_ = auVar48._8_4_ * auVar70._8_4_;
      auVar90._12_4_ = auVar48._12_4_ * auVar70._12_4_;
      auVar95._0_4_ = auVar54._0_4_ * auVar66._0_4_;
      auVar95._4_4_ = auVar54._4_4_ * auVar66._4_4_;
      auVar95._8_4_ = auVar54._8_4_ * auVar66._8_4_;
      auVar95._12_4_ = auVar54._12_4_ * auVar66._12_4_;
      auVar54 = NEON_frsqrts(auVar76,auVar108,4);
      auVar73._0_4_ = auVar30._0_4_ * auVar95._0_4_;
      auVar73._4_4_ = auVar30._4_4_ * auVar95._4_4_;
      auVar73._8_4_ = auVar30._8_4_ * auVar95._8_4_;
      auVar73._12_4_ = auVar30._12_4_ * auVar95._12_4_;
      auVar71._0_4_ = auVar29._0_4_ * auVar90._0_4_;
      auVar71._4_4_ = auVar29._4_4_ * auVar90._4_4_;
      auVar71._8_4_ = auVar29._8_4_ * auVar90._8_4_;
      auVar71._12_4_ = auVar29._12_4_ * auVar90._12_4_;
      auVar48 = NEON_frsqrts(auVar95,auVar73,4);
      auVar70 = NEON_frsqrts(auVar90,auVar71,4);
      fVar33 = fVar33 * auVar76._0_4_ * auVar54._0_4_;
      fVar32 = fVar32 * auVar76._4_4_ * auVar54._4_4_;
      fVar44 = fVar44 * auVar76._8_4_ * auVar54._8_4_;
      fVar45 = fVar45 * auVar76._12_4_ * auVar54._12_4_;
      fVar74 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                               CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar33 >> 8) &
                                                  ~(byte)((uint)iVar16 >> 8),
                                                  SUB41(fVar33,0) & ~(byte)iVar16)));
      uVar20 = CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                        CONCAT16((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                                 CONCAT15((byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                          CONCAT14(SUB41(fVar32,0) & ~(byte)iVar7,fVar74))));
      auVar75._0_10_ =
           CONCAT19((byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar8 >> 8),
                    CONCAT18(SUB41(fVar44,0) & ~(byte)iVar8,uVar20));
      auVar75[10] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
      auVar75[0xb] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
      auVar77[0xc] = SUB41(fVar45,0) & ~(byte)iVar9;
      auVar77._0_12_ = auVar75;
      auVar77[0xd] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar9 >> 8);
      auVar77[0xe] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
      auVar77[0xf] = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
      fVar62 = fVar62 * auVar95._0_4_ * auVar48._0_4_;
      fVar67 = fVar67 * auVar95._4_4_ * auVar48._4_4_;
      fVar68 = fVar68 * auVar95._8_4_ * auVar48._8_4_;
      fVar88 = fVar88 * auVar90._0_4_ * auVar70._0_4_;
      fVar59 = fVar59 * auVar90._4_4_ * auVar70._4_4_;
      fVar60 = fVar60 * auVar90._8_4_ * auVar70._8_4_;
      fVar61 = fVar61 * auVar90._12_4_ * auVar70._12_4_;
      auVar70 = NEON_ext(auVar77,auVar77,8,1);
      fVar62 = (float)CONCAT13((byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar102 >> 0x18),
                               CONCAT12((byte)((uint)fVar62 >> 0x10) &
                                        ~(byte)((uint)iVar102 >> 0x10),
                                        CONCAT11((byte)((uint)fVar62 >> 8) &
                                                 ~(byte)((uint)iVar102 >> 8),
                                                 SUB41(fVar62,0) & ~(byte)iVar102)));
      uVar46 = CONCAT15((byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar105 >> 8),
                        CONCAT14(SUB41(fVar67,0) & ~(byte)iVar105,fVar62));
      bVar50 = (byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar105 >> 0x10);
      bVar51 = (byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18);
      auVar47._0_8_ = CONCAT17(bVar51,CONCAT16(bVar50,uVar46));
      auVar47[8] = SUB41(fVar68,0) & ~(byte)iVar106;
      auVar47[9] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar106 >> 8);
      auVar47[10] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar106 >> 0x10);
      auVar47[0xb] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar106 >> 0x18);
      uVar52 = CONCAT11((byte)((uint)fVar88 >> 8) & ~(byte)((uint)iVar11 >> 8),
                        SUB41(fVar88,0) & ~(byte)iVar11);
      bVar57 = (byte)((uint)fVar88 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
      bVar58 = (byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
      fVar67 = (float)CONCAT13(bVar58,CONCAT12(bVar57,uVar52));
      auVar55._0_8_ =
           CONCAT17((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                    CONCAT16((byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                             CONCAT15((byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                      CONCAT14(SUB41(fVar59,0) & ~(byte)iVar12,fVar67))));
      auVar55[8] = SUB41(fVar60,0) & ~(byte)iVar96;
      auVar55[9] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar96 >> 8);
      auVar55[10] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
      auVar55[0xb] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
      auVar55[0xc] = SUB41(fVar61,0) & ~(byte)iVar97;
      auVar55[0xd] = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar97 >> 8);
      auVar55[0xe] = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar97 >> 0x10);
      auVar55[0xf] = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18);
      fVar68 = (float)((ulong)uVar20 >> 0x20);
      fVar44 = (float)((ulong)auVar55._0_8_ >> 0x20);
      fVar32 = auVar47._8_4_;
      fVar33 = auVar64._0_4_ + (float)_DAT_03cab3a0 * fVar74 + (float)_DAT_03cac210 * fVar44 +
               (float)_DAT_03cabb00 * fVar32;
      fVar88 = auVar64._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar74 +
               (float)((ulong)_DAT_03cac210 >> 0x20) * fVar44 +
               (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar32;
      fVar59 = auVar64._8_4_ + (float)_UNK_03cab3a8 * fVar74 + (float)_UNK_03cac218 * fVar44 +
               (float)_UNK_03cabb08 * fVar32;
      fVar60 = auVar64._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar74 +
               (float)((ulong)_UNK_03cac218 >> 0x20) * fVar44 +
               (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar32;
      fVar61 = (float)((ulong)auVar47._0_8_ >> 0x20);
      uVar5 = (undefined2)((uint6)uVar46 >> 0x20);
      auVar64 = NEON_ext(auVar55,auVar55,8,1);
      fVar45 = auVar64._0_4_;
      auVar78._4_4_ = fVar33;
      auVar78._0_4_ = fVar33;
      auVar78._8_4_ = fVar33;
      auVar78._12_4_ = fVar33;
      auVar109._4_4_ = fVar88;
      auVar109._0_4_ = fVar88;
      auVar109._8_4_ = fVar88;
      auVar109._12_4_ = fVar88;
      auVar112._0_4_ = -(uint)(fVar33 <= fVar88);
      auVar112._4_4_ = -(uint)(fVar33 <= fVar88);
      auVar112._8_4_ = -(uint)(fVar33 <= fVar88);
      auVar112._12_4_ = -(uint)(fVar33 <= fVar88);
      auVar78 = auVar78 ^ (auVar78 ^ auVar109) & auVar112;
      auVar103._4_4_ = fVar59;
      auVar103._0_4_ = fVar59;
      auVar103._8_4_ = fVar59;
      auVar103._12_4_ = fVar59;
      fVar74 = SQRT(fVar33) * 0.5;
      auVar64 = NEON_fmov(0x40800000,4);
      auVar110._0_4_ = -(uint)(auVar78._0_4_ <= fVar59);
      auVar110._4_4_ = -(uint)(auVar78._4_4_ <= fVar59);
      auVar110._8_4_ = -(uint)(auVar78._8_4_ <= fVar59);
      auVar110._12_4_ = -(uint)(auVar78._12_4_ <= fVar59);
      auVar98._0_4_ = fVar74 * auVar64._0_4_;
      auVar98._4_4_ = SQRT(fVar88) * 0.5 * auVar64._4_4_;
      auVar98._8_4_ = SQRT(fVar59) * 0.5 * auVar64._8_4_;
      auVar98._12_4_ = SQRT(fVar60) * 0.5 * auVar64._12_4_;
      auVar78 = auVar78 ^ (auVar78 ^ auVar103) & auVar110;
      auVar48 = NEON_frecpe(auVar98,4);
      auVar64 = NEON_frecps(auVar48,auVar98,4);
      auVar43._0_8_ = CONCAT44(-(uint)(auVar78._4_4_ <= fVar60),-(uint)(auVar78._0_4_ <= fVar60));
      auVar43._8_4_ = -(uint)(auVar78._8_4_ <= fVar60);
      auVar43._12_4_ = -(uint)(auVar78._12_4_ <= fVar60);
      auVar104._0_4_ = auVar48._0_4_ * auVar64._0_4_;
      auVar104._4_4_ = auVar48._4_4_ * auVar64._4_4_;
      auVar104._8_4_ = auVar48._8_4_ * auVar64._8_4_;
      auVar104._12_4_ = auVar48._12_4_ * auVar64._12_4_;
      auVar64 = NEON_frecps(auVar104,auVar98,4);
      fVar44 = auVar104._0_4_ * auVar64._0_4_;
      fVar99 = auVar104._4_4_ * auVar64._4_4_;
      fVar100 = auVar104._8_4_ * auVar64._8_4_;
      fVar101 = auVar104._12_4_ * auVar64._12_4_;
      fVar33 = (fVar68 + (float)CONCAT13(bVar58,CONCAT12(bVar57,uVar52))) * fVar44;
      uVar79 = (undefined1)((uint)fVar33 >> 8);
      uVar80 = (undefined1)((uint)fVar33 >> 0x10);
      uVar81 = (undefined1)((uint)fVar33 >> 0x18);
      fVar32 = (auVar70._0_4_ + fVar62) * fVar44;
      uVar82 = (undefined1)((uint)fVar32 >> 8);
      uVar83 = (undefined1)((uint)fVar32 >> 0x10);
      uVar84 = (undefined1)((uint)fVar32 >> 0x18);
      fVar44 = (fVar45 + -fVar61) * fVar44;
      uVar85 = (undefined1)((uint)fVar44 >> 8);
      uVar86 = (undefined1)((uint)fVar44 >> 0x10);
      uVar87 = (undefined1)((uint)fVar44 >> 0x18);
      auVar91._0_4_ = (fVar68 + fVar67) * fVar99;
      auVar91._4_4_ = fVar99 * 0.0;
      auVar91._8_4_ = (fVar45 + (float)CONCAT13(bVar51,CONCAT12(bVar50,uVar5))) * fVar99;
      auVar91._12_4_ = (fVar62 + -auVar75._8_4_) * fVar99;
      auVar49._0_4_ = (auVar70._0_4_ + fVar62) * fVar100;
      auVar49._4_4_ = (fVar45 + fVar61) * fVar100;
      auVar49._12_4_ = (fVar68 - fVar67) * fVar100;
      auVar92._8_8_ = auVar91._8_8_;
      auVar92._4_4_ = SQRT(fVar88) * 0.5;
      auVar92._0_4_ = auVar91._0_4_;
      auVar49._8_4_ = SQRT(fVar59) * 0.5;
      auVar70[4] = SUB41(fVar33,0);
      auVar70._0_4_ = fVar74;
      auVar70[5] = uVar79;
      auVar70[6] = uVar80;
      auVar70[7] = uVar81;
      auVar70[8] = SUB41(fVar32,0);
      auVar70[9] = uVar82;
      auVar70[10] = uVar83;
      auVar70[0xb] = uVar84;
      auVar70[0xc] = SUB41(fVar44,0);
      auVar70[0xd] = uVar85;
      auVar70[0xe] = uVar86;
      auVar70[0xf] = uVar87;
      auVar48[4] = SUB41(fVar33,0);
      auVar48._0_4_ = fVar74;
      auVar48[5] = uVar79;
      auVar48[6] = uVar80;
      auVar48[7] = uVar81;
      auVar48[8] = SUB41(fVar32,0);
      auVar48[9] = uVar82;
      auVar48[10] = uVar83;
      auVar48[0xb] = uVar84;
      auVar48[0xc] = SUB41(fVar44,0);
      auVar48[0xd] = uVar85;
      auVar48[0xe] = uVar86;
      auVar48[0xf] = uVar87;
      auVar93._8_8_ = auVar43._8_8_;
      auVar93._0_8_ = auVar43._0_8_;
      auVar49 = auVar49 ^ (auVar49 ^ auVar48 ^ (auVar70 ^ auVar92) & auVar112) & ~auVar110;
      uVar10 = CONCAT12(auVar75[10],(short)((unkuint10)auVar75._0_10_ >> 0x40));
      fVar33 = (float)CONCAT13(auVar75[0xb],uVar10);
      auVar56._0_4_ = (fVar45 - (float)CONCAT13(bVar51,CONCAT12(bVar50,uVar5))) * fVar101;
      auVar56._4_4_ = (fVar62 - fVar33) * fVar101;
      auVar56._8_4_ = (fVar68 - fVar67) * fVar101;
      auVar56._12_4_ = SQRT(fVar60) * 0.5;
      auVar94 = auVar49 ^ (auVar49 ^ auVar56) & auVar93;
    }
    local_b0 = auVar94._0_4_;
    fStack_ac = auVar94._4_4_;
    if (local_68 != (long *)0x0) {
      plVar24 = local_68 + 5;
      do {
        lVar18 = *plVar24;
        iVar16 = (int)lVar18 + -1;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar14) {
          *(int *)plVar24 = iVar16;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar16 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
      else if ((int)lVar18 == 0) {
LAB_00d2ecfc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x60))();
    }
    fVar32 = auVar94._8_4_;
    auVar63._4_4_ = fVar32;
    auVar63._0_4_ = fVar32;
    auVar63._8_4_ = fVar32;
    auVar63._12_4_ = fVar32;
    auVar64 = NEON_ext(auVar63,auVar94,0xc,1);
    auVar69._4_4_ = fStack_ac;
    auVar69._0_4_ = fStack_ac;
    auVar69._8_4_ = fStack_ac;
    auVar69._12_4_ = fStack_ac;
    fVar59 = auVar94._12_4_;
    auVar70 = NEON_ext(auVar69,auVar64,0xc,1);
    fVar44 = (float)_DAT_03cab640;
    fVar45 = (float)((ulong)_DAT_03cab640 >> 0x20);
    fVar88 = (float)_UNK_03cab648;
    fVar33 = (float)((ulong)_UNK_03cab648 >> 0x20);
    auVar34._0_4_ = -local_b0;
    auVar34._4_4_ = -fStack_ac;
    auVar34._8_4_ = -fVar32;
    auVar72._0_4_ =
         (float)_DAT_03caa5b0 * fVar59 + local_b0 * fVar44 * 0.0 +
         (float)DAT_03cab620 * auVar70._0_4_ * fVar44 + (float)_DAT_03caad80 * auVar64._0_4_;
    auVar72._4_4_ =
         (float)((ulong)_DAT_03caa5b0 >> 0x20) * fVar59 + fStack_ac * fVar45 * 0.0 +
         (float)((ulong)DAT_03cab620 >> 0x20) * auVar70._4_4_ * fVar45 +
         (float)((ulong)_DAT_03caad80 >> 0x20) * auVar64._4_4_;
    auVar72._8_4_ =
         (float)_UNK_03caa5b8 * fVar59 + fVar32 * fVar88 * 0.0 +
         (float)DAT_03cab628 * auVar70._8_4_ * fVar88 + (float)_UNK_03caad88 * auVar64._8_4_;
    auVar72._12_4_ =
         (float)((ulong)_UNK_03caa5b8 >> 0x20) * fVar59 + local_b0 * fVar33 * 0.0 +
         (float)((ulong)DAT_03cab628 >> 0x20) * auVar70._12_4_ * fVar33 +
         (float)((ulong)_UNK_03caad88 >> 0x20) * auVar64._12_4_;
    auVar34._12_4_ = fVar59;
    auVar53._4_4_ = auVar72._8_4_;
    auVar53._0_4_ = auVar72._8_4_;
    auVar53._8_4_ = auVar72._8_4_;
    auVar53._12_4_ = auVar72._8_4_;
    auVar54 = NEON_ext(auVar53,auVar72,0xc,1);
    auVar65._4_4_ = auVar72._4_4_;
    auVar65._0_4_ = auVar72._4_4_;
    auVar65._8_4_ = auVar72._4_4_;
    auVar65._12_4_ = auVar72._4_4_;
    auVar35._4_12_ = auVar34._4_12_;
    auVar35._0_4_ = auVar34._0_4_;
    auVar37._0_8_ = auVar35._0_8_;
    auVar37._8_4_ = auVar34._4_4_;
    auVar37._12_4_ = fVar59;
    auVar36._8_8_ = auVar37._8_8_;
    auVar36._4_4_ = auVar34._8_4_;
    auVar36._0_4_ = auVar34._0_4_;
    auVar38._0_12_ = auVar36._0_12_;
    auVar38._12_4_ = auVar34._8_4_;
    auVar48 = NEON_ext(auVar65,auVar54,0xc,1);
    auVar66 = NEON_ext(auVar38,auVar38,8,1);
    fVar33 = auVar66._0_4_;
    auVar39._4_12_ = auVar38._4_12_;
    auVar39._0_4_ = fVar33;
    auVar41._0_8_ = auVar39._0_8_;
    auVar41._8_4_ = auVar66._8_4_;
    auVar41._12_4_ = auVar34._8_4_;
    auVar40._8_8_ = auVar41._8_8_;
    auVar40._4_4_ = auVar34._0_4_;
    auVar40._0_4_ = fVar33;
    auVar42._0_12_ = auVar40._0_12_;
    auVar42._12_4_ = auVar34._4_4_;
    auVar64 = NEON_ext(auVar42,auVar66,8,1);
    auVar70 = NEON_ext(auVar64,auVar64,0xc,1);
    fVar32 = -*(float *)((long)local_88 + 0x184);
    auVar64._0_4_ =
         local_a0 +
         ((auVar34._0_4_ * auVar72._12_4_ + fVar59 * auVar72._0_4_ * fVar44 +
          auVar70._0_4_ * auVar48._0_4_ * fVar44) - auVar54._0_4_ * fVar33) * fVar32;
    auVar64._4_4_ =
         fStack_9c +
         ((auVar34._4_4_ * auVar72._12_4_ + fVar59 * auVar72._4_4_ * fVar45 +
          auVar70._4_4_ * auVar48._4_4_ * fVar45) - auVar54._4_4_ * auVar66._4_4_) * fVar32;
    auVar64._8_4_ =
         fStack_98 +
         ((auVar34._8_4_ * auVar72._12_4_ + fVar59 * auVar72._8_4_ * fVar88 +
          auVar70._8_4_ * auVar48._8_4_ * fVar88) - auVar54._8_4_ * auVar66._8_4_) * fVar32;
    auVar64._12_4_ = fVar32 * 0.0 + 0.0;
    if (local_88 != (long *)0x0) {
      uVar20 = auVar64._8_8_;
      (**(code **)(*local_88 + 0x60))();
      auVar64._8_8_ = uVar20;
    }
  }
  *(long *)(param_1 + 0x188) = auVar64._8_8_;
  *(long *)(param_1 + 0x180) = auVar64._0_8_;
  lVar18 = (**(code **)(**(long **)(*(long *)(param_1 + 0xe8) + 0x48) + 0x68))();
  lVar25 = *(long *)(param_1 + 0x1d8);
  auVar64 = *(undefined1 (*) [16])(param_1 + 0x180);
  fVar33 = auVar64._0_4_ - *(float *)(lVar18 + 0x30);
  fVar32 = auVar64._4_4_ - *(float *)(lVar18 + 0x34);
  fVar44 = auVar64._8_4_ - *(float *)(lVar18 + 0x38);
  fVar45 = auVar64._12_4_ - 0.0;
  fVar33 = fVar33 * fVar33;
  fVar32 = fVar32 * fVar32;
  fVar44 = fVar44 * fVar44;
  fVar45 = fVar45 * fVar45;
  auVar27._0_4_ = fVar33 + fVar32;
  auVar27._4_4_ = fVar44 + fVar45;
  auVar27._8_4_ = fVar33 + fVar32;
  auVar27._12_4_ = fVar44 + fVar45;
  auVar64 = NEON_ext(auVar27,auVar27,4,1);
  *(float *)(param_1 + 0x17c) = auVar64._0_4_ + auVar64._4_4_;
  plVar24 = *(long **)(lVar25 + 0x48);
  if (plVar24 != (long *)0x0) {
    iVar16 = *(int *)(lVar25 + 0x50);
    if (iVar16 == 1) {
      (**(code **)(*plVar24 + 0x30))(plVar24,param_2);
      if (*(int *)(lVar25 + 0x40) == *(int *)(lVar25 + 0x44)) goto LAB_00d2e0e8;
      uVar22 = 2;
    }
    else {
      if (iVar16 != 0) {
        if (iVar16 == 2) {
          (**(code **)(*plVar24 + 0x38))();
          FUN_00d2fc94(lVar25);
          *(undefined4 *)(lVar25 + 0x50) = 0;
        }
        goto LAB_00d2e0e8;
      }
      (**(code **)(*plVar24 + 0x28))();
      uVar22 = 1;
    }
    *(undefined4 *)(lVar25 + 0x50) = uVar22;
  }
LAB_00d2e0e8:
  lVar18 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  plVar24 = *(long **)(param_1 + 0x230);
  if (plVar24 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
  }
  else {
    bVar14 = (char)plVar24[9] != '\0';
    fVar33 = (float)((double)*(long *)(lVar18 + 8) / 1000000000.0);
    if ((char)plVar24[9] == '\0') {
      fVar44 = *(float *)(plVar24 + 7);
    }
    else {
      fVar32 = *(float *)((long)plVar24 + 0x3c);
      if (fVar32 == 0.0) {
        fVar44 = *(float *)((long)plVar24 + 0x34);
        *(undefined1 *)(plVar24 + 9) = 0;
        *(float *)(plVar24 + 7) = fVar44;
      }
      else {
        fVar44 = *(float *)(plVar24 + 8) + fVar33;
        local_70 = (long *)CONCAT44(local_70._4_4_,fVar44);
        pplVar3 = (long **)((long)plVar24 + 0x3c);
        if (fVar44 <= fVar32) {
          pplVar3 = &local_70;
        }
        fVar32 = *(float *)pplVar3 / fVar32;
        *(float *)(plVar24 + 8) = *(float *)pplVar3;
        if (1.0 <= fVar32) {
          *(undefined1 *)(plVar24 + 9) = 0;
          fVar32 = 1.0;
        }
        fVar44 = *(float *)(plVar24 + 6);
        fVar45 = *(float *)((long)plVar24 + 0x34);
        fVar32 = (float)(**(code **)(PTR_PTR_047d9248 + (ulong)*(uint *)((long)plVar24 + 0x44) * 8))
                                  (fVar32);
        fVar44 = fVar44 + (fVar45 - fVar44) * fVar32;
        *(float *)(plVar24 + 7) = fVar44;
      }
    }
    puVar13 = PTR_PTR_047d9248;
    fVar32 = (float)NEON_fminnm(fVar44,0x3f800000);
    plVar24 = (long *)*plVar24;
    if (plVar24 != (long *)0x0) {
      fVar44 = fVar32;
      do {
        bVar14 = (char)plVar24[9] != '\0' || bVar14;
        if ((char)plVar24[9] == '\0') {
          fVar32 = *(float *)(plVar24 + 7);
        }
        else {
          fVar32 = *(float *)((long)plVar24 + 0x3c);
          if (fVar32 == 0.0) {
            fVar32 = *(float *)((long)plVar24 + 0x34);
            *(undefined1 *)(plVar24 + 9) = 0;
            *(float *)(plVar24 + 7) = fVar32;
          }
          else {
            fVar45 = *(float *)(plVar24 + 8) + fVar33;
            local_70 = (long *)CONCAT44(local_70._4_4_,fVar45);
            pplVar3 = (long **)((long)plVar24 + 0x3c);
            if (fVar45 <= fVar32) {
              pplVar3 = &local_70;
            }
            fVar45 = *(float *)pplVar3;
            *(float *)(plVar24 + 8) = fVar45;
            if (1.0 <= fVar45 / fVar32) {
              *(undefined1 *)(plVar24 + 9) = 0;
            }
            fVar32 = *(float *)(plVar24 + 6);
            fVar88 = *(float *)((long)plVar24 + 0x34);
            fVar45 = (float)(**(code **)(puVar13 + (ulong)*(uint *)((long)plVar24 + 0x44) * 8))();
            fVar32 = fVar32 + (fVar88 - fVar32) * fVar45;
            *(float *)(plVar24 + 7) = fVar32;
          }
        }
        plVar24 = (long *)*plVar24;
        if (fVar44 <= fVar32) {
          fVar32 = fVar44;
        }
        fVar44 = fVar32;
      } while (plVar24 != (long *)0x0);
    }
    *(float *)(param_1 + 0x1ac) = fVar32;
    if (bVar14) {
      *(undefined1 *)(param_1 + 0x13c) = 1;
    }
  }
  if (*(char *)(param_1 + 0x13c) == '\0') {
    return;
  }
  FUN_00d2f610(param_1);
  *(undefined1 *)(param_1 + 0x13c) = 0;
  return;
code_r0x00d2e508:
  cVar6 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar14) {
    *plVar24 = lVar25;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00d2e510;
  goto LAB_00d2e500;
code_r0x00d2ee24:
  cVar6 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar15) {
    *plVar24 = lVar25;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00d2e5f4;
  goto LAB_00d2ee1c;
code_r0x00d2ed38:
  cVar6 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar15) {
    *plVar19 = lVar18;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00d2e158;
  goto LAB_00d2ed30;
}



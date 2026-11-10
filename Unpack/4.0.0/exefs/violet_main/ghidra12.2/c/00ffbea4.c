/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ffbea4; name: FUN_00ffbea4
 */


undefined8 FUN_00ffbea4(long *param_1)

{
  int *piVar1;
  short *psVar2;
  ulong uVar3;
  long *plVar4;
  short sVar5;
  undefined2 uVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar16;
  code *pcVar17;
  long *plVar18;
  long lVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  undefined4 uVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  long *plVar34;
  undefined8 *puVar35;
  long *plVar36;
  ulong uVar37;
  long lVar38;
  code *pcVar39;
  bool bVar40;
  long lVar41;
  code *pcVar42;
  code *local_120;
  code *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  long *local_100;
  undefined4 local_f8;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  undefined4 local_70;
  
  uVar16 = 1;
  switch((int)param_1[0x25]) {
  case 1:
    if ((*(long *)(param_1[0x26] + 0x38) != 0) &&
       ((*(byte *)(*(long *)(param_1[0x26] + 0x38) + 0x1e8) & 1) != 0)) {
      FUN_00fffb74(param_1[0x26],1,param_1[0xa2]);
      uVar24 = 2;
      goto LAB_00ffbf38;
    }
    break;
  case 2:
    lVar41 = param_1[0x26];
    lVar25 = *(long *)(lVar41 + 0x80);
    if (lVar25 != 0) {
      lVar29 = *(long *)(lVar25 + 0x38);
      if (lVar29 != *(long *)(lVar25 + 0x40)) {
        do {
          if ((*(long *)(lVar29 + 8) == 0) || ((*(byte *)(*(long *)(lVar29 + 8) + 0x1e8) & 1) == 0))
          goto switchD_00ffbef0_caseD_6;
          lVar29 = lVar29 + 0x40;
        } while (*(long *)(lVar25 + 0x40) != lVar29);
        lVar41 = param_1[0x26];
      }
      FUN_00ffd7d0(lVar41);
      FUN_00ffe9a8(lVar41);
      FUN_00ffe338(*(undefined8 *)(lVar41 + 0x70),*(long *)(lVar41 + 0x38) + 0x210);
      FUN_00ffdd40(lVar41);
      uVar24 = 3;
      goto LAB_00ffbf38;
    }
    break;
  case 3:
    if (param_1[0x1d] == 0) {
      plVar36 = (long *)0x0;
    }
    else {
      plVar36 = *(long **)(param_1[0x1d] + 0x48);
    }
    pcVar17 = (code *)FUN_00ea96a8(plVar36,param_1[1]);
    lVar25 = *(long *)(param_1[0x26] + 0x78);
    if (lVar25 != 0) {
      piVar1 = (int *)(lVar25 + 0x28);
      do {
        iVar15 = *piVar1;
        cVar7 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar40) {
          *piVar1 = iVar15 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar15 == -1) goto LAB_00ffd494;
    }
    plVar18 = *(long **)(pcVar17 + 0x138);
    *(long *)(pcVar17 + 0x138) = lVar25;
    if (plVar18 != (long *)0x0) {
      plVar34 = plVar18 + 5;
      do {
        lVar25 = *plVar34;
        iVar15 = (int)lVar25 + -1;
        cVar7 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar40) {
          *(int *)plVar34 = iVar15;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*plVar18 + 0x10))();
      }
      else if ((int)lVar25 == 0) {
        pcVar20 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar21 = "DecrementReferenceInternal";
        pcVar22 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar23 = "Reference counter underflows.";
        goto LAB_00ffd390;
      }
    }
    plVar18 = param_1 + 0x28;
    *(undefined4 *)(pcVar17 + 0x130) = 4;
    local_120 = pcVar17;
    FUN_00fff4a8(plVar18,&local_120);
    puVar28 = PTR_DAT_047d88d0;
    if (((*PTR_DAT_047d88d0 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar15 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    puVar9 = PTR_DAT_047d88e0;
    puVar8 = PTR_DAT_047d88d8;
    lVar25 = *(long *)PTR_DAT_047d88d8;
    *(long *)PTR_DAT_047d88e0 = lVar25;
    plVar34 = *(long **)(lVar25 + 0xe8);
    if (plVar34 != (long *)0x0) {
      lVar25 = plVar34[6];
      if (*(long *)(lVar25 + 0x10) == 0) goto LAB_00ffd368;
      psVar2 = (short *)(lVar25 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar40) {
          *psVar2 = sVar5 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
        *(undefined8 *)(lVar25 + 8) = uVar16;
        *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
LAB_00ffc0f4:
        FUN_00e21f0c(plVar34);
        lVar25 = plVar34[6];
        psVar2 = (short *)(lVar25 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar7 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar40) {
            *psVar2 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar25 + 0x10) = 0;
          (**(code **)(*plVar34 + 0x50))(plVar34);
        }
        else if (sVar5 == 0) goto LAB_00ffcc18;
        goto LAB_00ffc120;
      }
      if (sVar5 != -1) goto LAB_00ffc0f4;
LAB_00ffd370:
      pcVar20 = "count != 0";
      pcVar21 = "AddReference";
      pcVar22 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar23 = "Reference counter overflows.";
LAB_00ffd390:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar20,pcVar21,pcVar22,0x58,pcVar23);
    }
    FUN_00e21f0c(0);
LAB_00ffc120:
    if (((*puVar28 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar15 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    lVar25 = *(long *)puVar8;
    *(long *)puVar9 = lVar25;
    plVar34 = *(long **)(lVar25 + 0xd0);
    if (plVar34 == (long *)0x0) {
      FUN_00e21f0c(0);
    }
    else {
      lVar25 = plVar34[6];
      if (*(long *)(lVar25 + 0x10) == 0) goto LAB_00ffd368;
      psVar2 = (short *)(lVar25 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar40) {
          *psVar2 = sVar5 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
        *(undefined8 *)(lVar25 + 8) = uVar16;
        *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) goto LAB_00ffd370;
      FUN_00e21f0c(plVar34);
      lVar25 = plVar34[6];
      psVar2 = (short *)(lVar25 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar40) {
          *psVar2 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar25 + 0x10) = 0;
        (**(code **)(*plVar34 + 0x50))(plVar34);
      }
      else if (sVar5 == 0) goto LAB_00ffcc18;
    }
    plVar34 = (long *)param_1[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_04865a38), iVar15 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar25 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar25 + 0x80)) {
LAB_00ffd344:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = plVar34;
    *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
    pcVar17 = (code *)(**(code **)(*plVar34 + 0x10))(plVar34,0x130,8);
    if (pcVar17 == (code *)0x0) {
      (**(code **)(*plVar34 + 0xe8))(plVar34);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    FUN_00d1a240(pcVar17,0x8009809d);
    puVar8 = PTR_DAT_047dd4b8;
    *(undefined **)pcVar17 = PTR_DAT_047dd4b8 + 0x10;
    pcVar39 = pcVar17 + 0x20;
    *(undefined **)pcVar39 = puVar8 + 0x158;
    puVar28 = puVar8 + 0x300;
    *(undefined **)(pcVar17 + 0x28) = puVar8 + 0x280;
    *(undefined **)(pcVar17 + 0x30) = puVar8 + 0x2d8;
    pcVar42 = pcVar17 + 0x38;
    *(undefined **)pcVar42 = puVar28;
    *(undefined4 *)(pcVar17 + 0x120) = 0;
    *(long *)(pcVar17 + 0x128) = 0;
    if ((pcVar17[0x58] != (code)0x0) || (pcVar17[0x59] != (code)0x0)) {
      uVar6 = *(undefined2 *)(pcVar17 + 0x58);
      *(undefined2 *)(pcVar17 + 0x58) = 0;
      if (*(long *)(pcVar17 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(pcVar17 + 0x48),pcVar42);
        puVar28 = *(undefined **)pcVar42;
      }
      (**(code **)(puVar28 + 0x20))(pcVar42,uVar6);
    }
    *(undefined4 *)(pcVar17 + 0x18) = 0x80130;
    *(long **)(pcVar17 + 8) = plVar34;
    *(code **)(pcVar17 + 0x10) = pcVar17;
    *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
    lVar25 = *(long *)(pcVar17 + 0x98);
    if (*(long *)(lVar25 + 0x10) == 0) {
LAB_00ffd368:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar25 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar40 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar40) {
        *psVar2 = sVar5 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
      *(undefined8 *)(lVar25 + 8) = uVar16;
      *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
      pcVar20 = "count != 0";
      pcVar21 = "AddReference";
      pcVar22 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar23 = "Reference counter overflows.";
      goto LAB_00ffd390;
    }
    (**(code **)(*(long *)(pcVar17 + 0x20) + 0xe8))(pcVar39,plVar36);
    (**(code **)(*(long *)(pcVar17 + 0x20) + 0x68))(pcVar39);
    local_120 = pcVar17;
    FUN_00df8c30(plVar36 + 0x21,&local_120);
    if (local_120 != (code *)0x0) {
      lVar25 = *(long *)(local_120 + 0x98);
      psVar2 = (short *)(lVar25 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar40) {
          *psVar2 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar25 + 0x10) = 0;
        (**(code **)(*(long *)local_120 + 0x50))();
      }
      else if (sVar5 == 0) {
LAB_00ffcc18:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    (**(code **)(*plVar36 + 0x100))(plVar36,pcVar39);
    plVar34 = plVar36 + 0x88;
    lVar41 = *plVar34;
    lVar25 = nn::os::GetCurrentThread();
    if (lVar25 != lVar41) {
      lVar25 = nn::os::GetCurrentThread();
LAB_00ffc324:
      if (*plVar34 == 0) goto code_r0x00ffc32c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar36 + 0x89));
      do {
        if (*plVar34 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar36 + 0x89));
            while (*plVar34 == 0) {
              cVar7 = '\x01';
              bVar40 = (bool)ExclusiveMonitorPass(plVar34,0x10);
              if (bVar40) {
                *plVar34 = lVar25;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_00ffc334;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar40) {
          *plVar34 = lVar25;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00ffc334:
      bVar40 = false;
      goto LAB_00ffc338;
    }
    plVar34 = (long *)0x0;
    bVar40 = true;
LAB_00ffc338:
    if ((*(byte *)(plVar36 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(plVar36,0,0);
    }
    else {
      (**(code **)(*(long *)pcVar39 + 0xf8))(pcVar39);
    }
    if (!bVar40) {
      *plVar34 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar34 + 1));
    }
    (**(code **)(*(long *)pcVar17 + 0x70))(pcVar17,0);
    lVar25 = *(long *)(param_1[0x26] + 0x88);
    if (lVar25 != 0) {
      piVar1 = (int *)(lVar25 + 0x28);
      do {
        iVar15 = *piVar1;
        cVar7 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar40) {
          *piVar1 = iVar15 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar15 == -1) goto LAB_00ffd494;
    }
    plVar34 = *(long **)(pcVar17 + 0x128);
    *(long *)(pcVar17 + 0x128) = lVar25;
    if (plVar34 != (long *)0x0) {
      plVar4 = plVar34 + 5;
      do {
        lVar25 = *plVar4;
        iVar15 = (int)lVar25 + -1;
        cVar7 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar40) {
          *(int *)plVar4 = iVar15;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*plVar34 + 0x10))();
      }
      else if ((int)lVar25 == 0) {
        pcVar20 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar21 = "DecrementReferenceInternal";
        pcVar22 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar23 = "Reference counter underflows.";
        goto LAB_00ffd390;
      }
    }
    *(undefined4 *)(pcVar17 + 0x120) = 1;
    local_120 = pcVar17;
    FUN_00fff4a8(plVar18,&local_120);
    pcVar17 = (code *)FUN_00ea9a94(plVar36,param_1[1]);
    lVar25 = *(long *)(param_1[0x26] + 0x80);
    if (lVar25 != 0) {
      piVar1 = (int *)(lVar25 + 0x28);
      do {
        iVar15 = *piVar1;
        cVar7 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar40) {
          *piVar1 = iVar15 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar15 == -1) {
LAB_00ffd494:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar36 = *(long **)(pcVar17 + 0x130);
    *(long *)(pcVar17 + 0x130) = lVar25;
    if (plVar36 != (long *)0x0) {
      plVar34 = plVar36 + 5;
      do {
        lVar25 = *plVar34;
        iVar15 = (int)lVar25 + -1;
        cVar7 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar40) {
          *(int *)plVar34 = iVar15;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*plVar36 + 0x10))();
      }
      else if ((int)lVar25 == 0) {
        pcVar20 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar21 = "DecrementReferenceInternal";
        pcVar22 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar23 = "Reference counter underflows.";
        goto LAB_00ffd390;
      }
    }
    *(undefined4 *)(pcVar17 + 0x128) = 2;
    local_120 = pcVar17;
    FUN_00fff4a8(plVar18,&local_120);
    lVar25 = *(long *)(param_1[0x26] + 0x38);
    lVar41 = *(long *)(lVar25 + 0x250);
    lVar29 = *(long *)(lVar25 + 600);
    if (lVar41 == lVar29) {
      uVar37 = 0;
    }
    else {
      uVar37 = 0;
      while( true ) {
        if (lVar25 == 0) {
          lVar25 = FUN_00da5204();
        }
        else {
          lVar25 = lVar25 + 0x40;
        }
        FUN_00ffd4c8(&local_120,lVar25,lVar41,&DAT_03c886bc);
        lVar31 = *(long *)(lVar41 + 0x20);
        for (lVar25 = *(long *)(lVar41 + 0x18); lVar25 != lVar31; lVar25 = lVar25 + 0x18) {
          if (*(long *)(param_1[0x26] + 0x38) == 0) {
            lVar30 = FUN_00da5204();
          }
          else {
            lVar30 = *(long *)(param_1[0x26] + 0x38) + 0x40;
          }
          FUN_00ffd4c8(&local_98,lVar30,lVar25,&DAT_03c886bc);
          pcVar17 = local_120;
          if (local_120 != (code *)0x0) {
            (**(code **)(*(long *)local_120 + 0x18))(local_120);
          }
          plVar36 = local_100;
          puVar11 = local_108;
          puVar10 = local_110;
          pcVar39 = local_118;
          if (local_100 != (long *)0x0) {
            (**(code **)(*local_100 + 0x18))(local_100);
          }
          plVar18 = local_98;
          uVar24 = local_f8;
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x18))(local_98);
          }
          plVar34 = local_78;
          uVar13 = local_80;
          uVar12 = local_88;
          uVar16 = local_90;
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x18))(local_78);
          }
          uVar14 = local_70;
          puVar35 = (undefined8 *)param_1[0xa5];
          if (puVar35 < (undefined8 *)param_1[0xa6]) {
            lVar30 = param_1[0xa7];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(&DAT_04865a38), iVar15 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar26 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar26 != 0) {
              if (0xf < *(ulong *)(lVar26 + 0x80)) goto LAB_00ffd344;
              *(long *)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = lVar30;
              *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
            }
            *puVar35 = pcVar17;
            puVar35[1] = pcVar39;
            puVar35[2] = puVar10;
            puVar35[3] = puVar11;
            *(undefined4 *)(puVar35 + 5) = uVar24;
            puVar35[6] = plVar18;
            puVar35[7] = uVar16;
            puVar35[8] = uVar12;
            puVar35[9] = uVar13;
            puVar35[4] = plVar36;
            puVar35[10] = plVar34;
            *(undefined4 *)(puVar35 + 0xb) = uVar14;
            if (lVar26 != 0) {
              *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
            }
            param_1[0xa5] = (long)(puVar35 + 0xc);
          }
          else {
            uVar33 = param_1[0xa8];
            lVar30 = (long)puVar35 - param_1[0xa4] >> 5;
            if (0x7ffffffffffffffe < uVar33) {
              uVar33 = 0x7fffffffffffffff;
            }
            uVar3 = lVar30 * -0x5555555555555555 + 1;
            if (uVar33 < uVar3) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar26 = param_1[0xa6] - param_1[0xa4] >> 5;
            uVar32 = lVar26 * 0x5555555555555556;
            if (uVar3 <= uVar32) {
              uVar3 = uVar32;
            }
            if (uVar33 >> 1 <= (ulong)(lVar26 * -0x5555555555555555)) {
              uVar3 = uVar33;
            }
            if (uVar3 == 0) {
              lVar26 = 0;
            }
            else {
              lVar26 = (**(code **)(*(long *)param_1[0xa7] + 0x10))
                                 ((long *)param_1[0xa7],uVar3 * 0x60,8);
              if (lVar26 == 0) {
                (**(code **)(*(long *)param_1[0xa7] + 0xe8))();
              }
            }
            lVar38 = param_1[0xa7];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(&DAT_04865a38), iVar15 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar19 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar19 != 0) {
              if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_00ffd344;
              *(long *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = lVar38;
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
            }
            puVar35 = (undefined8 *)(lVar26 + lVar30 * 0x20);
            lVar30 = lVar26 + lVar30 * 0x20;
            *puVar35 = pcVar17;
            *(code **)(lVar30 + 8) = pcVar39;
            *(undefined1 **)(lVar30 + 0x10) = puVar10;
            *(undefined1 **)(lVar30 + 0x18) = puVar11;
            *(long **)(lVar30 + 0x20) = plVar36;
            *(undefined4 *)(lVar30 + 0x28) = uVar24;
            *(long **)(lVar30 + 0x50) = plVar34;
            *(long **)(lVar30 + 0x30) = plVar18;
            *(undefined8 *)(lVar30 + 0x38) = uVar16;
            *(undefined8 *)(lVar30 + 0x40) = uVar12;
            *(undefined8 *)(lVar30 + 0x48) = uVar13;
            *(undefined4 *)(lVar30 + 0x58) = uVar14;
            if (lVar19 != 0) {
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
            }
            plVar18 = (long *)param_1[0xa4];
            plVar36 = (long *)param_1[0xa5];
            if (plVar36 == plVar18) {
              puVar27 = puVar35;
              plVar36 = plVar18;
            }
            else {
              lVar30 = 0;
              do {
                lVar38 = param_1[0xa7];
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar15 = __cxa_guard_acquire(&DAT_04865a38), iVar15 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar19 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar19 != 0) {
                  if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_00ffd344;
                  *(long *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = lVar38;
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                }
                uVar16 = *(undefined8 *)((long)plVar36 + lVar30 + -0x60);
                *(undefined8 *)((long)plVar36 + lVar30 + -0x60) = 0;
                *(undefined8 *)((long)puVar35 + lVar30 + -0x60) = uVar16;
                *(undefined8 *)((long)puVar35 + lVar30 + -0x58) =
                     *(undefined8 *)((long)plVar36 + lVar30 + -0x58);
                *(undefined8 *)((long)puVar35 + lVar30 + -0x50) =
                     *(undefined8 *)((long)plVar36 + lVar30 + -0x50);
                *(undefined8 *)((long)puVar35 + lVar30 + -0x48) =
                     *(undefined8 *)((long)plVar36 + lVar30 + -0x48);
                uVar16 = *(undefined8 *)((long)plVar36 + lVar30 + -0x40);
                *(undefined8 *)((long)plVar36 + lVar30 + -0x40) = 0;
                *(undefined8 *)((long)puVar35 + lVar30 + -0x40) = uVar16;
                *(undefined4 *)((long)puVar35 + lVar30 + -0x38) =
                     *(undefined4 *)((long)plVar36 + lVar30 + -0x38);
                uVar16 = *(undefined8 *)((long)plVar36 + lVar30 + -0x30);
                *(undefined8 *)((long)plVar36 + lVar30 + -0x30) = 0;
                *(undefined8 *)((long)puVar35 + lVar30 + -0x30) = uVar16;
                *(undefined8 *)((long)puVar35 + lVar30 + -0x28) =
                     *(undefined8 *)((long)plVar36 + lVar30 + -0x28);
                *(undefined8 *)((long)puVar35 + lVar30 + -0x20) =
                     *(undefined8 *)((long)plVar36 + lVar30 + -0x20);
                *(undefined8 *)((long)puVar35 + lVar30 + -0x18) =
                     *(undefined8 *)((long)plVar36 + lVar30 + -0x18);
                uVar16 = *(undefined8 *)((long)plVar36 + lVar30 + -0x10);
                *(undefined8 *)((long)plVar36 + lVar30 + -0x10) = 0;
                *(undefined8 *)((long)puVar35 + lVar30 + -0x10) = uVar16;
                *(undefined4 *)((long)puVar35 + lVar30 + -8) =
                     *(undefined4 *)((long)plVar36 + lVar30 + -8);
                if (lVar19 != 0) {
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
                }
                lVar30 = lVar30 + -0x60;
              } while ((long)plVar18 - (long)plVar36 != lVar30);
              plVar18 = (long *)param_1[0xa4];
              puVar27 = (undefined8 *)((long)puVar35 + lVar30);
              plVar36 = (long *)param_1[0xa5];
            }
            lVar30 = param_1[0xa6];
            param_1[0xa4] = (long)puVar27;
            param_1[0xa5] = (long)(puVar35 + 0xc);
            param_1[0xa6] = lVar26 + uVar3 * 0x60;
            if (plVar36 != plVar18) {
              if ((long *)plVar36[-2] != (long *)0x0) {
                (**(code **)(*(long *)plVar36[-2] + 0x20))();
              }
              if ((long *)plVar36[-6] != (long *)0x0) {
                (**(code **)(*(long *)plVar36[-6] + 0x20))();
              }
              if ((long *)plVar36[-8] != (long *)0x0) {
                (**(code **)(*(long *)plVar36[-8] + 0x20))();
              }
              plVar34 = (long *)plVar36[-0xc];
              if (plVar34 != (long *)0x0) {
                (**(code **)(*plVar34 + 0x20))();
              }
              if (plVar36 + -0xc != plVar18) {
                if ((long *)plVar36[-0xe] != (long *)0x0) {
                  (**(code **)(*(long *)plVar36[-0xe] + 0x20))();
                }
                if ((long *)plVar36[-0x12] != (long *)0x0) {
                  (**(code **)(*(long *)plVar36[-0x12] + 0x20))();
                }
                if ((long *)plVar36[-0x14] != (long *)0x0) {
                  (**(code **)(*(long *)plVar36[-0x14] + 0x20))();
                }
                plVar34 = (long *)plVar36[-0x18];
                if (plVar34 != (long *)0x0) {
                  (**(code **)(*plVar34 + 0x20))();
                }
                if (plVar36 + -0x18 != plVar18) {
                  if ((long *)plVar36[-0x1a] != (long *)0x0) {
                    (**(code **)(*(long *)plVar36[-0x1a] + 0x20))();
                  }
                  if ((long *)plVar36[-0x1e] != (long *)0x0) {
                    (**(code **)(*(long *)plVar36[-0x1e] + 0x20))();
                  }
                  if ((long *)plVar36[-0x20] != (long *)0x0) {
                    (**(code **)(*(long *)plVar36[-0x20] + 0x20))();
                  }
                  plVar34 = (long *)plVar36[-0x24];
                  if (plVar34 != (long *)0x0) {
                    (**(code **)(*plVar34 + 0x20))();
                  }
                  if (plVar36 + -0x24 != plVar18) {
                    do {
                      if ((long *)plVar36[-0x26] != (long *)0x0) {
                        (**(code **)(*(long *)plVar36[-0x26] + 0x20))();
                      }
                      if ((long *)plVar36[-0x2a] != (long *)0x0) {
                        (**(code **)(*(long *)plVar36[-0x2a] + 0x20))();
                      }
                      if ((long *)plVar36[-0x2c] != (long *)0x0) {
                        (**(code **)(*(long *)plVar36[-0x2c] + 0x20))();
                      }
                      if ((long *)plVar36[-0x30] != (long *)0x0) {
                        (**(code **)(*(long *)plVar36[-0x30] + 0x20))();
                      }
                      plVar36 = plVar36 + -0xc;
                    } while (plVar18 + 0x24 != plVar36);
                  }
                }
              }
            }
            if (plVar18 != (long *)0x0) {
              plVar36 = (long *)param_1[0xa7];
              uVar33 = (**(code **)(*plVar36 + 0xf8))(plVar36);
              if (((uVar33 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
                (**(code **)(*plVar36 + 0x18))(plVar36,plVar18,lVar30 - (long)plVar18,8);
              }
              else {
                FUN_00c48fe8(plVar36,plVar18,lVar30 - (long)plVar18,8);
              }
            }
          }
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          uVar37 = uVar37 + 1;
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
        }
        if (local_100 != (long *)0x0) {
          (**(code **)(*local_100 + 0x20))();
        }
        if (local_120 != (code *)0x0) {
          (**(code **)(*(long *)local_120 + 0x20))();
        }
        lVar41 = lVar41 + 0x50;
        if (lVar41 == lVar29) break;
        lVar25 = *(long *)(param_1[0x26] + 0x38);
      }
    }
    lVar25 = param_1[0x36];
    uVar33 = 0;
    if ((char)param_1[0xa3] != '\0') {
      uVar33 = uVar37;
    }
    lVar41 = uVar33 << 3;
    if ((ulong)(param_1[0x38] - lVar25 >> 3) < uVar33) {
      lVar31 = param_1[0x37];
      plVar36 = param_1 + 0x39;
      lVar29 = (**(code **)(*(long *)param_1[0x39] + 0x10))((long *)param_1[0x39],lVar41,8);
      if (lVar29 == 0) {
        (**(code **)(*(long *)*plVar36 + 0xe8))();
      }
      plVar18 = (long *)param_1[0x36];
      plVar34 = (long *)param_1[0x37];
      lVar25 = lVar29 + (lVar31 - lVar25 >> 3) * 8;
      if (plVar34 == plVar18) {
        lVar31 = lVar25;
        plVar34 = plVar18;
      }
      else {
        lVar31 = lVar25 + -8;
        FUN_01231224(plVar36,lVar31,plVar34 + -1);
        if (plVar34 + -1 != plVar18) {
          do {
            lVar31 = lVar31 + -8;
            FUN_01231224(plVar36,lVar31,plVar34 + -2);
            plVar34 = plVar34 + -1;
          } while (plVar18 + 1 != plVar34);
        }
        plVar18 = (long *)param_1[0x36];
        plVar34 = (long *)param_1[0x37];
      }
      param_1[0x36] = lVar31;
      param_1[0x37] = lVar25;
      lVar25 = param_1[0x38];
      param_1[0x38] = lVar29 + uVar33 * 8;
      if (plVar34 != plVar18) {
        plVar34 = plVar34 + -1;
        if ((long *)*plVar34 != (long *)0x0) {
          (**(code **)(*(long *)*plVar34 + 0x60))();
        }
        while (plVar34 != plVar18) {
          plVar34 = plVar34 + -1;
          if ((long *)*plVar34 != (long *)0x0) {
            (**(code **)(*(long *)*plVar34 + 0x60))();
          }
        }
      }
      if (plVar18 != (long *)0x0) {
        plVar36 = (long *)*plVar36;
        uVar37 = (**(code **)(*plVar36 + 0xf8))(plVar36);
        if (((uVar37 & 1) == 0) || (lVar29 = FUN_00c4e600(), *(int *)(lVar29 + 0x12c8) < 1)) {
          (**(code **)(*plVar36 + 0x18))(plVar36,plVar18,lVar25 - (long)plVar18,8);
        }
        else {
          FUN_00c48fe8(plVar36,plVar18,lVar25 - (long)plVar18,8);
        }
      }
    }
    lVar25 = param_1[0x3d];
    if ((ulong)(param_1[0x3f] - lVar25 >> 3) < uVar33) {
      lVar31 = param_1[0x3e];
      plVar36 = param_1 + 0x40;
      lVar29 = (**(code **)(*(long *)param_1[0x40] + 0x10))((long *)param_1[0x40],lVar41,8);
      if (lVar29 == 0) {
        (**(code **)(*(long *)*plVar36 + 0xe8))();
      }
      lVar25 = lVar29 + (lVar31 - lVar25 >> 3) * 8;
      lVar31 = param_1[0x3d];
      lVar30 = param_1[0x3e];
      if (lVar30 == lVar31) {
        lVar26 = lVar25;
      }
      else {
        lVar26 = lVar25 + -8;
        FUN_01231148(plVar36,lVar26,lVar30 + -8);
        if (lVar30 + -8 != lVar31) {
          do {
            lVar26 = lVar26 + -8;
            FUN_01231148(plVar36,lVar26,lVar30 + -0x10);
            lVar30 = lVar30 + -8;
          } while (lVar31 + 8 != lVar30);
        }
        lVar31 = param_1[0x3d];
      }
      lVar30 = param_1[0x3f];
      param_1[0x3d] = lVar26;
      param_1[0x3e] = lVar25;
      param_1[0x3f] = lVar29 + uVar33 * 8;
      if (lVar31 != 0) {
        plVar36 = (long *)*plVar36;
        uVar37 = (**(code **)(*plVar36 + 0xf8))(plVar36);
        if (((uVar37 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
          (**(code **)(*plVar36 + 0x18))(plVar36,lVar31,lVar30 - lVar31,8);
        }
        else {
          FUN_00c48fe8(plVar36,lVar31,lVar30 - lVar31,8);
        }
      }
    }
    lVar25 = param_1[0x44];
    if ((ulong)(param_1[0x46] - lVar25 >> 3) < uVar33) {
      lVar29 = param_1[0x45];
      plVar36 = param_1 + 0x47;
      lVar41 = (**(code **)(*(long *)param_1[0x47] + 0x10))((long *)param_1[0x47],lVar41,8);
      if (lVar41 == 0) {
        (**(code **)(*(long *)*plVar36 + 0xe8))();
      }
      lVar25 = lVar41 + (lVar29 - lVar25 >> 3) * 8;
      lVar31 = param_1[0x45];
      lVar29 = param_1[0x44];
      if (lVar31 == lVar29) {
        lVar30 = lVar25;
      }
      else {
        lVar30 = lVar25 + -8;
        FUN_0100adfc(plVar36,lVar30,lVar31 + -8);
        if (lVar31 + -8 != lVar29) {
          do {
            lVar30 = lVar30 + -8;
            FUN_0100adfc(plVar36,lVar30,lVar31 + -0x10);
            lVar31 = lVar31 + -8;
          } while (lVar29 + 8 != lVar31);
        }
        lVar29 = param_1[0x44];
      }
      lVar31 = param_1[0x46];
      param_1[0x44] = lVar30;
      param_1[0x45] = lVar25;
      param_1[0x46] = lVar41 + uVar33 * 8;
      if (lVar29 != 0) {
        plVar36 = (long *)*plVar36;
        uVar37 = (**(code **)(*plVar36 + 0xf8))(plVar36);
        if (((uVar37 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
          (**(code **)(*plVar36 + 0x18))(plVar36,lVar29,lVar31 - lVar29,8);
        }
        else {
          FUN_00c48fe8(plVar36,lVar29,lVar31 - lVar29,8);
        }
      }
    }
    *(undefined4 *)(param_1 + 0xab) = 0;
    param_1[0xac] = uVar33;
    *(undefined4 *)(param_1 + 0xad) = 0;
    uVar24 = 4;
    if ((char)param_1[0xa3] == '\0') {
      uVar24 = 5;
    }
LAB_00ffbf38:
    *(undefined4 *)(param_1 + 0x25) = uVar24;
    break;
  case 4:
    local_110 = &LAB_02b478e8;
    local_120 = FUN_0125f77c;
    local_118 = FUN_02b478e4;
    local_108 = &LAB_02b478f4;
    local_100 = param_1;
    FUN_00fff7c0(param_1[0xae],param_1 + 0xab,&local_120);
    pcVar17 = local_118;
    if (local_118 != (code *)0x0) {
      local_110 = (undefined1 *)0x0;
      local_108 = (undefined1 *)0x0;
      local_120 = (code *)0x0;
      local_118 = (code *)0x0;
      (*pcVar17)(&local_100);
    }
    if (((ulong)param_1[0xac] <= (ulong)*(uint *)(param_1 + 0xab)) && ((int)param_1[0xad] == 0)) {
      uVar24 = 5;
      goto LAB_00ffbf38;
    }
    break;
  case 5:
    uVar24 = 0xc;
    if (*(char *)((long)param_1 + 0x519) != '\0') {
      uVar24 = 5;
    }
    *(undefined4 *)(param_1 + 0x25) = uVar24;
    uVar16 = 1;
  case 0xc:
    goto switchD_00ffbef0_caseD_c;
  }
switchD_00ffbef0_caseD_6:
  uVar16 = 0;
switchD_00ffbef0_caseD_c:
  return uVar16;
code_r0x00ffc32c:
  cVar7 = '\x01';
  bVar40 = (bool)ExclusiveMonitorPass(plVar34,0x10);
  if (bVar40) {
    *plVar34 = lVar25;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ffc334;
  goto LAB_00ffc324;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0145a890; name: FUN_0145a890
 */


void FUN_0145a890(long param_1,long param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined8 local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  long *local_c0;
  long *local_80;
  undefined1 local_78 [16];
  long *local_68;
  
  local_78._0_8_ = *(long *)(param_1 + 8);
  if (param_3 != 0) {
    local_78._0_8_ = param_3;
  }
  FUN_0145b4f4(&local_d8,*(long *)(param_1 + 8),param_2,local_78);
  plVar9 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 5;
    do {
      lVar17 = *plVar10;
      iVar8 = (int)lVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar17 == 0) {
LAB_0145af8c:
      pcVar12 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar13 = "DecrementReferenceInternal";
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar15 = "Reference counter underflows.";
      goto LAB_0145b23c;
    }
  }
  *(undefined8 *)(param_1 + 0x30) = local_d8;
  FUN_0145b4b0(param_1 + 0x440,(long)*(int *)(param_2 + 0x48));
  FUN_0145b3e0(*(undefined8 *)(param_1 + 0x30),0xffffffff,&LAB_00c5acc4);
  FUN_0145b560(*(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x28));
  FUN_0145c044(param_1);
  puVar7 = PTR_DAT_047d8d90;
  puVar6 = PTR_DAT_047d8d88;
  puVar5 = PTR_DAT_047d8d80;
  lVar17 = *(long *)(param_1 + 0x440);
  if (*(long *)(param_1 + 0x448) != lVar17) {
    uVar23 = 0;
    do {
      lVar19 = lVar17 + uVar23 * 0x70;
      *(int *)(lVar19 + 0x68) = (int)uVar23;
      local_d8 = 0;
      plVar9 = (long *)FUN_0145b26c(local_78,*(undefined8 *)(param_1 + 8),&local_d8);
      if (plVar9 != (long *)0x0) {
        lVar21 = plVar9[6];
        plVar9[0x37] = plVar9[0x37] | 8;
        if (*(long *)(lVar21 + 0x10) == 0) goto LAB_0145b1fc;
        psVar1 = (short *)(lVar21 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar20 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
          *(undefined8 *)(lVar21 + 8) = uVar20;
          *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_0145b21c;
      }
      pcVar16 = (code *)plVar9[0x71];
      if (pcVar16 != (code *)0x0) {
        plVar9[0x72] = 0;
        plVar9[0x73] = 0;
        plVar9[0x70] = 0;
        plVar9[0x71] = 0;
        (*pcVar16)(plVar9 + 0x74);
      }
      plVar9[0x70] = (long)&LAB_00d3abbc;
      plVar9[0x71] = (long)&LAB_02b2c45c;
      plVar9[0x72] = (long)&LAB_02b2c460;
      plVar9[0x74] = param_1;
      plVar9[0x75] = lVar19;
      plVar9[0x73] = (long)&LAB_02b2c46c;
      (**(code **)(*plVar9 + 0x68))(plVar9,0);
      plVar10 = plVar9 + 0x3a;
      lVar19 = nn::os::GetCurrentThread();
LAB_0145aa2c:
      if (*plVar10 == 0) goto code_r0x0145aa34;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar9 + 0x3b));
      do {
        if (*plVar10 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar9 + 0x3b));
            while (*plVar10 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar19;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0145aa3c;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar19;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0145aa3c:
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047dcf10,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar5);
      }
      lVar19 = *(long *)puVar6;
      *(long *)puVar7 = lVar19;
      uVar20 = *(undefined8 *)(lVar19 + 0x28);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047dcf10,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar5);
      }
      lVar19 = *(long *)puVar6;
      *(long *)puVar7 = lVar19;
      uVar22 = *(undefined8 *)(lVar19 + 0x30);
      FUN_00e220f4(plVar9,uVar20,0);
      FUN_00e220f4(plVar9,0,uVar22);
      plVar9[0x3a] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 0x3b));
      plVar18 = (long *)(lVar17 + uVar23 * 0x70 + 0x60);
      plVar10 = (long *)*plVar18;
      *plVar18 = 0;
      if (plVar10 != (long *)0x0) {
        lVar17 = plVar10[6];
        psVar1 = (short *)(lVar17 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar17 + 0x10) = 0;
          (**(code **)(*plVar10 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_0145b060;
      }
      *plVar18 = (long)plVar9;
      lVar17 = *(long *)(param_1 + 0x440);
      uVar23 = uVar23 + 1;
      if ((ulong)((*(long *)(param_1 + 0x448) - lVar17 >> 4) * 0x6db6db6db6db6db7) <= uVar23) break;
    } while( true );
  }
  local_d8 = 0;
  lVar17 = FUN_0145b26c(local_78,*(undefined8 *)(param_1 + 8),&local_d8);
  if (lVar17 != 0) {
    lVar19 = *(long *)(lVar17 + 0x30);
    *(ulong *)(lVar17 + 0x1b8) = *(ulong *)(lVar17 + 0x1b8) | 8;
    if (*(long *)(lVar19 + 0x10) == 0) {
LAB_0145b1fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar20;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_0145b21c:
      pcVar12 = "count != 0";
      pcVar13 = "AddReference";
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar15 = "Reference counter overflows.";
LAB_0145b23c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar12,pcVar13,pcVar14,0x58,pcVar15);
    }
  }
  plVar9 = *(long **)(param_1 + 0x600);
  *(undefined8 *)(param_1 + 0x600) = 0;
  if (plVar9 != (long *)0x0) {
    lVar19 = plVar9[6];
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_0145b060:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0x600) = lVar17;
  pcVar16 = *(code **)(lVar17 + 0x388);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(lVar17 + 0x390) = 0;
    *(undefined8 *)(lVar17 + 0x398) = 0;
    *(undefined8 *)(lVar17 + 0x380) = 0;
    *(undefined8 *)(lVar17 + 0x388) = 0;
    (*pcVar16)(lVar17 + 0x3a0);
  }
  *(undefined1 **)(lVar17 + 0x380) = &LAB_00f1bb00;
  *(undefined1 **)(lVar17 + 0x388) = &LAB_02b2c478;
  *(undefined1 **)(lVar17 + 0x390) = &LAB_02b2c47c;
  *(long *)(lVar17 + 0x3a0) = param_1;
  *(undefined1 **)(lVar17 + 0x398) = &LAB_02b2c488;
  lVar19 = *(long *)(param_1 + 0x600);
  plVar9 = (long *)(lVar19 + 0x1d0);
  lVar17 = nn::os::GetCurrentThread();
LAB_0145ac3c:
  if (*plVar9 == 0) goto code_r0x0145ac44;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1d8));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1d8));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar17;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0145ac4c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar17;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0145ac4c:
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  lVar17 = *(long *)puVar6;
  *(long *)puVar7 = lVar17;
  uVar20 = *(undefined8 *)(lVar17 + 0x28);
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  lVar17 = *(long *)puVar6;
  *(long *)puVar7 = lVar17;
  uVar22 = *(undefined8 *)(lVar17 + 0x30);
  FUN_00e220f4(lVar19,uVar20,0);
  FUN_00e220f4(lVar19,0,uVar22);
  puVar11 = (undefined8 *)FUN_00f351bc();
  puVar11 = (undefined8 *)FUN_00e514cc(*puVar11);
  plVar9 = (long *)*puVar11;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 5;
    do {
      lVar17 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)lVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar17 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_d8 = 0x5e1771f463b934e6;
  puStack_d0 = PTR_s_RT_MainDepth_047dcf38;
  local_c8 = 0x1f;
  local_c0 = (long *)0x0;
  FUN_00fff044(&local_68,plVar9,&local_d8);
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  lVar17 = *(long *)(param_1 + 0x30);
  pcVar12 = (char *)FUN_00ccbbb0(*(undefined8 *)(local_68[0xe] + 0x110),local_68 + 6);
  if (*pcVar12 != '\0' && *(long *)(pcVar12 + 8) != 0) {
    FUN_00f1d9f4(*(long *)(*(long *)(*(long *)(lVar17 + 0x30) + 0x30) + 0x6140) + 0x110,
                 param_1 + 3000,*(undefined4 *)(*(long *)(pcVar12 + 8) + 0x88));
  }
  puVar11 = (undefined8 *)FUN_0166cefc();
  local_78 = FUN_0166cf08(*puVar11,0,0);
  FUN_0145b3f8(*(long *)(param_1 + 0x30) + 0x30,param_1 + 0xbc0,local_78);
  local_d8 = 0x8b260ba30cc4bec7;
  puStack_d0 = PTR_s_RT_MainStencil_047dcf40;
  local_c8 = 0x1f;
  local_c0 = (long *)0x0;
  FUN_00fff044(&local_80,plVar9,&local_d8);
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  lVar17 = *(long *)(param_1 + 0x30);
  pcVar12 = (char *)FUN_00ccbbb0(*(undefined8 *)(local_80[0xe] + 0x110),local_80 + 6);
  if ((*pcVar12 != '\0') && (*(long *)(pcVar12 + 8) != 0)) {
    FUN_00f1d9f4(*(long *)(*(long *)(*(long *)(lVar17 + 0x30) + 0x30) + 0x6140) + 0x110,
                 param_1 + 0xbc8,*(undefined4 *)(*(long *)(pcVar12 + 8) + 0x88));
  }
  puVar11 = (undefined8 *)FUN_0166cefc();
  auVar24 = FUN_0166cf08(*puVar11,1,0);
  local_78 = auVar24;
  FUN_0145b3f8(*(long *)(param_1 + 0x30) + 0x30,param_1 + 0xbd0,local_78);
  if (local_80 == (long *)0x0) {
LAB_0145ae44:
    memset(&local_d8,0,0x58);
    puVar5 = PTR_DAT_047d8a48;
    if ((*PTR_DAT_047d8a48 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_047d8a48);
      if (iVar8 != 0) {
        FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8a48);
      }
    }
    puVar7 = PTR_DAT_047d8a58;
    puVar6 = PTR_DAT_047d8a50;
    lVar17 = *(long *)PTR_DAT_047d8a50;
    *(long *)PTR_DAT_047d8a58 = lVar17;
    FUN_0145b440(*(undefined8 *)(lVar17 + 0x30),9,&local_d8);
    local_c0 = (long *)&LAB_011924b8;
    if ((*puVar5 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_047d8a48);
      if (iVar8 != 0) {
        FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8a48);
      }
    }
    lVar17 = *(long *)puVar6;
    *(long *)puVar7 = lVar17;
    FUN_0145b440(*(undefined8 *)(lVar17 + 0x30),0,&local_d8);
    if (local_68 != (long *)0x0) {
      plVar10 = local_68 + 5;
      do {
        lVar17 = *plVar10;
        iVar8 = (int)lVar17 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
      else if ((int)lVar17 == 0) goto LAB_0145af8c;
    }
    if (plVar9 == (long *)0x0) {
LAB_0145aefc:
      *(undefined8 *)(lVar19 + 0x1d0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x1d8));
      return;
    }
    plVar10 = plVar9 + 5;
    do {
      lVar17 = *plVar10;
      iVar8 = (int)lVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      goto LAB_0145aefc;
    }
    if ((int)lVar17 != 0) goto LAB_0145aefc;
  }
  else {
    plVar10 = local_80 + 5;
    do {
      lVar17 = *plVar10;
      iVar8 = (int)lVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_80 + 0x10))();
      goto LAB_0145ae44;
    }
    if ((int)lVar17 != 0) goto LAB_0145ae44;
  }
  goto LAB_0145af8c;
code_r0x0145aa34:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar4) {
    *plVar10 = lVar19;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0145aa3c;
  goto LAB_0145aa2c;
code_r0x0145ac44:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar4) {
    *plVar9 = lVar17;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0145ac4c;
  goto LAB_0145ac3c;
}



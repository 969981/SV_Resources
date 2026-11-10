/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c84868; name: FUN_00c84868
 */


void FUN_00c84868(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  code *pcVar15;
  undefined8 *puVar16;
  long lVar17;
  long *local_90;
  char *local_88;
  undefined8 local_80;
  long *local_78;
  long local_70 [2];
  undefined4 local_60;
  undefined8 local_5c;
  undefined2 local_54;
  
  puVar16 = (undefined8 *)(param_1 + 0x40);
  *puVar16 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  *(ulong *)(param_1 + 0x50) = param_4;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 6;
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(float *)(param_1 + 0x1ac) = (float)param_4 / 7.0;
  local_54 = 1;
  local_60 = 0x3f800000;
  local_5c = 6;
  local_70[1] = 0x3f80000000000009;
  puVar7 = (undefined8 *)FUN_0166cefc();
  local_90 = (long *)0x9a618887cb81d230;
  local_88 = "[Radar Chart Back]";
  local_80 = 0x12;
  local_78 = (long *)0x0;
  FUN_0151ede0(local_70,*puVar7,local_70 + 1,param_2,&local_90,*puVar16);
  plVar8 = *(long **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar11 = *plVar1;
      iVar6 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
      goto LAB_00c8494c;
    }
    if ((int)lVar11 != 0) goto LAB_00c8494c;
LAB_00c85060:
    pcVar10 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar12 = "DecrementReferenceInternal";
    pcVar13 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
    ;
    pcVar14 = "Reference counter underflows.";
LAB_00c85080:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar10,pcVar12,pcVar13,0x58,pcVar14);
  }
LAB_00c8494c:
  lVar11 = local_70[0];
  local_70[0] = 0;
  *(long *)(param_1 + 0x128) = lVar11;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
    lVar11 = *(long *)(param_1 + 0x128);
  }
  FUN_00eb3bec(*(undefined8 *)(lVar11 + 200),0);
  FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0x128) + 200),0);
  FUN_00c854c0(&local_90,*(undefined8 *)(param_1 + 0x40),puVar16);
  plVar8 = local_90;
  local_90 = (long *)0x0;
  lVar11 = *(long *)(param_1 + 0x140);
  *(long **)(param_1 + 0x140) = plVar8;
  if (lVar11 == 0) {
    *(undefined8 *)(param_1 + 0x150) = local_80;
    *(long **)(param_1 + 0x158) = local_78;
  }
  else {
    FUN_00c855e0(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x150) = local_80;
    *(long **)(param_1 + 0x158) = local_78;
    plVar8 = *(long **)(param_1 + 0x140);
  }
  *(char **)(param_1 + 0x148) = local_88;
  uVar9 = FUN_00e31554();
  FUN_00c850cc(plVar8,0x1a,0x2e);
  FUN_00c850cc(plVar8,1,0x22);
  FUN_00ebd51c(plVar8,uVar9,0xe,1);
  FUN_00c751c8(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x140),1,1);
  FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0x128) + 200),0,1);
  FUN_00eacd1c(*(undefined8 *)(param_1 + 0x128),0,1,4);
  puVar7 = (undefined8 *)FUN_0166cefc();
  local_90 = (long *)0x92e7b5861acc83ea;
  local_88 = "[Radar Chart Forward]";
  local_80 = 0x15;
  local_78 = (long *)0x0;
  FUN_0151ede0(local_70,*puVar7,local_70 + 1,param_2,&local_90,*(undefined8 *)(param_1 + 0x40));
  plVar8 = *(long **)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar11 = *plVar1;
      iVar6 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_00c85060;
  }
  lVar11 = local_70[0];
  local_70[0] = 0;
  *(long *)(param_1 + 0x130) = lVar11;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
    lVar11 = *(long *)(param_1 + 0x130);
  }
  FUN_00eb3bec(*(undefined8 *)(lVar11 + 200),0);
  FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0x130) + 200),0);
  FUN_00c854c0(&local_90,*(undefined8 *)(param_1 + 0x40),puVar16);
  plVar8 = local_90;
  local_90 = (long *)0x0;
  puVar7 = (undefined8 *)(param_1 + 0x168);
  lVar11 = *(long *)(param_1 + 0x160);
  *(long **)(param_1 + 0x160) = plVar8;
  if (lVar11 == 0) {
    *(undefined8 *)(param_1 + 0x170) = local_80;
    *(long **)(param_1 + 0x178) = local_78;
    *puVar7 = local_88;
  }
  else {
    FUN_00c855e0(puVar7);
    *(undefined8 *)(param_1 + 0x170) = local_80;
    *(long **)(param_1 + 0x178) = local_78;
    *puVar7 = local_88;
    plVar8 = *(long **)(param_1 + 0x160);
  }
  uVar9 = FUN_00e31554();
  FUN_00c850cc(plVar8,0x1a,0x2e);
  FUN_00c850cc(plVar8,1,0x22);
  FUN_00ebd51c(plVar8,uVar9,0xe,1);
  FUN_00c751c8(*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x160),1,1);
  FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0x130) + 200),0,1);
  FUN_00eacd1c(*(undefined8 *)(param_1 + 0x130),0,1,4);
  puVar7 = (undefined8 *)FUN_0166cefc();
  local_90 = (long *)0x92e7b5861acc83ea;
  local_88 = "[Radar Chart Forward]";
  local_80 = 0x15;
  local_78 = (long *)0x0;
  FUN_0151ede0(local_70,*puVar7,local_70 + 1,param_2,&local_90,*(undefined8 *)(param_1 + 0x40));
  plVar8 = *(long **)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar11 = *plVar1;
      iVar6 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_00c85060;
  }
  lVar11 = local_70[0];
  local_70[0] = 0;
  *(long *)(param_1 + 0x138) = lVar11;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
    lVar11 = *(long *)(param_1 + 0x138);
  }
  FUN_00eb3bec(*(undefined8 *)(lVar11 + 200),0);
  FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0x138) + 200),0);
  FUN_00c854c0(&local_90,*(undefined8 *)(param_1 + 0x40),puVar16);
  plVar8 = local_90;
  local_90 = (long *)0x0;
  puVar7 = (undefined8 *)(param_1 + 0x188);
  lVar11 = *(long *)(param_1 + 0x180);
  *(long **)(param_1 + 0x180) = plVar8;
  if (lVar11 == 0) {
    *(undefined8 *)(param_1 + 400) = local_80;
    *(long **)(param_1 + 0x198) = local_78;
    *puVar7 = local_88;
  }
  else {
    FUN_00c855e0(puVar7);
    *(undefined8 *)(param_1 + 400) = local_80;
    *(long **)(param_1 + 0x198) = local_78;
    *puVar7 = local_88;
    plVar8 = *(long **)(param_1 + 0x180);
  }
  uVar9 = FUN_00e31554();
  FUN_00c850cc(plVar8,0x1a,0x2e);
  FUN_00c850cc(plVar8,1,0x22);
  FUN_00ebd51c(plVar8,uVar9,0xe,1);
  FUN_00c751c8(*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x180),1,1);
  FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0x138) + 200),0,1);
  FUN_00eacd1c(*(undefined8 *)(param_1 + 0x138),0,1,4);
  local_90 = (long *)0x0;
  lVar11 = FUN_0145b26c(local_70,*(undefined8 *)(param_1 + 0x40),&local_90);
  if (lVar11 != 0) {
    FUN_00f1b0c8(lVar11);
    lVar17 = *(long *)(lVar11 + 0x30);
    if (*(long *)(lVar17 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar9;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
      pcVar10 = "count != 0";
      pcVar12 = "AddReference";
      pcVar13 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar14 = "Reference counter overflows.";
      goto LAB_00c85080;
    }
  }
  pcVar15 = *(code **)(lVar11 + 0x388);
  if (pcVar15 != (code *)0x0) {
    *(undefined8 *)(lVar11 + 0x390) = 0;
    *(undefined8 *)(lVar11 + 0x398) = 0;
    *(undefined8 *)(lVar11 + 0x380) = 0;
    *(undefined8 *)(lVar11 + 0x388) = 0;
    (*pcVar15)(lVar11 + 0x3a0);
  }
  *(undefined1 **)(lVar11 + 0x380) = &LAB_0179b420;
  *(undefined1 **)(lVar11 + 0x388) = &LAB_00a37ae8;
  *(undefined1 **)(lVar11 + 0x390) = &LAB_00a37aec;
  *(long *)(lVar11 + 0x3a0) = param_1;
  *(undefined1 **)(lVar11 + 0x398) = &LAB_00a37af8;
  plVar8 = *(long **)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (plVar8 != (long *)0x0) {
    lVar17 = plVar8[6];
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_00c84f98:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0x1b8) = lVar11;
  plVar8 = (long *)(lVar11 + 0x1d0);
  lVar17 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar17;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00c84d74;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1d8));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1d8));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar17;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00c84d74;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar17;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c84d74:
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_01293e44(&local_90);
  FUN_00e220f4(lVar11,local_90,0);
  if (local_90 == (long *)0x0) {
LAB_00c84de0:
    if (((*PTR_DAT_047d8d80 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar6 != 0)) {
      FUN_00100190(&LAB_00a37b04,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8d80);
    }
    lVar17 = *(long *)PTR_DAT_047d8d88;
    *(long *)PTR_DAT_047d8d90 = lVar17;
    FUN_00e220f4(lVar11,0,*(undefined8 *)(lVar17 + 0x30));
    *(undefined8 *)(lVar11 + 0x1d0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x1d8));
    return;
  }
  lVar17 = local_90[6];
  psVar2 = (short *)(lVar17 + 0x1a);
  do {
    sVar3 = *psVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar5) {
      *psVar2 = sVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar17 + 0x10) = 0;
    (**(code **)(*local_90 + 0x50))();
    goto LAB_00c84de0;
  }
  if (sVar3 != 0) goto LAB_00c84de0;
  goto LAB_00c84f98;
}



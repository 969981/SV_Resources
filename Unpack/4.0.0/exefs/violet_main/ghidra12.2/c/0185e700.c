/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0185e700; name: FUN_0185e700
 */


void FUN_0185e700(undefined8 *param_1)

{
  long *__s;
  short *psVar1;
  undefined8 *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  FUN_0185ed4c();
  *(undefined4 *)(param_1 + 5) = 1;
  __s = param_1 + 6;
  param_1[0x1f] = 0;
  *param_1 = &PTR_LAB_04568fd8;
  param_1[4] = &PTR_LAB_04569008;
  *(undefined2 *)(param_1 + 0x20) = 0;
  memset(__s,0,0xc4);
  FUN_0185ed00(param_1 + 0x21);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  FUN_0185ee74(param_1 + 0x2e);
  lVar11 = tpidr_el0;
  lVar12 = 400;
  do {
    puVar2 = (undefined8 *)((long)param_1 + lVar12);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
        (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
       (lVar7 = *(long *)(lVar11 + 0x30), lVar7 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar7 = DAT_04859430;
      *(long *)(lVar11 + 0x30) = DAT_04859430;
    }
    lVar12 = lVar12 + 0x38;
    *(undefined4 *)(puVar2 + 6) = 0;
    puVar2[4] = 0x1fffffffffffffff;
    puVar2[5] = 0;
    puVar2[3] = lVar7;
  } while (puVar2 + 7 != param_1 + 0x174);
  param_1[0x177] = 0;
  param_1[0x176] = 0;
  param_1[0x175] = 0;
  param_1[0x174] = 0;
  *(undefined4 *)(param_1 + 0x178) = 1;
  memset(param_1 + 0x17e,0,0x68);
  *(undefined8 *)((long)param_1 + 0xbc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbcc) = 0;
  *(undefined8 *)((long)param_1 + 0xbe4) = 0;
  *(undefined8 *)((long)param_1 + 0xbd4) = 0;
  *(undefined8 *)((long)param_1 + 0xbdc) = 0;
  FUN_0142358c(param_1 + 0x17e);
  param_1[0x18b] = 0xffffffffffffffff;
  local_88 = (long *)0x0;
  lVar12 = FUN_0145b26c(&local_68,param_1[1],&local_88);
  if (lVar12 != 0) {
    FUN_00f1b0c8(lVar12);
    lVar11 = *(long *)(lVar12 + 0x30);
    if (*(long *)(lVar11 + 0x10) == 0) {
LAB_0185ec90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar9;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_0185ecb0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  pcVar10 = *(code **)(lVar12 + 0x388);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(lVar12 + 0x390) = 0;
    *(undefined8 *)(lVar12 + 0x398) = 0;
    *(undefined8 *)(lVar12 + 0x380) = 0;
    *(undefined8 *)(lVar12 + 0x388) = 0;
    (*pcVar10)(lVar12 + 0x3a0);
  }
  *(undefined1 **)(lVar12 + 0x380) = &LAB_01135898;
  *(undefined1 **)(lVar12 + 0x390) = &LAB_02a3036c;
  *(undefined8 **)(lVar12 + 0x3a0) = param_1;
  *(undefined1 **)(lVar12 + 0x388) = &LAB_02a30368;
  plVar8 = (long *)(lVar12 + 0x1d0);
  *(undefined1 **)(lVar12 + 0x398) = &LAB_02a30378;
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0185e900;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0185e900;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0185e900:
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_015ccff4(&local_68);
  FUN_00e220f4(lVar12,local_68,0);
  plVar8 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_0185ebb8;
  }
  param_1[0x1f] = lVar12;
  FUN_00d2f4e8(&local_88);
  param_1[0x174] = local_88;
  if (local_88 != (long *)0x0) {
    lVar11 = local_88[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_88 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_0185ebb8;
  }
  lVar11 = FUN_01221220(&local_88,param_1[1]);
  if (lVar11 != 0) {
    lVar7 = *(long *)(lVar11 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0185ec90;
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar9;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_0185ecb0;
  }
  plVar8 = (long *)*__s;
  *__s = 0;
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_0185ebb8;
  }
  *__s = lVar11;
  local_88 = (long *)0xd3f11d61229bcb6e;
  pcStack_80 = 
  "world/data/field/chara_animation_interval/chara_animation_interval/chara_animation_interval_array"
  ;
  local_78 = 0x61;
  local_70 = (long *)0x0;
  FUN_012214a8(lVar11,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    lVar11 = local_68[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_68 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_0185ebb8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(lVar12 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1d8));
  return;
}



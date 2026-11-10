/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01415150; name: FUN_01415150
 */


void FUN_01415150(long *param_1,uint param_2,long *param_3)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined4 local_8e;
  undefined2 local_8a;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined1 local_64;
  undefined8 local_62;
  undefined1 auStack_58 [8];
  
  if (*(uint *)((long)param_1 + 0x54) <= param_2) {
    return;
  }
  lVar20 = param_1[8];
  if (lVar20 == 0) {
    if (param_1[9] == 0) {
      return;
    }
    uVar7 = (**(code **)(*param_1 + 0x88))(param_1);
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar6 = param_2 / uVar7;
    }
    uVar8 = (**(code **)(*param_1 + 0x88))(param_1);
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar7 = param_2 / uVar8;
    }
    param_2 = param_2 - uVar7 * uVar8;
    lVar20 = *(long *)(param_1[9] + (ulong)uVar6 * 8);
  }
  uVar17 = (ulong)param_2;
  if (lVar20 == 0) {
    return;
  }
  param_3 = (long *)*param_3;
  if (param_3 == (long *)0x0) {
    FUN_014154e4(&local_c0,param_1);
  }
  else {
    lVar9 = param_3[6];
    local_c0 = param_3;
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar9 + 0x1a);
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
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar10;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
      pcVar11 = "count != 0";
      pcVar12 = "AddReference";
      pcVar13 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar14 = "Reference counter overflows.";
LAB_01415494:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar11,pcVar12,pcVar13,0x58,pcVar14);
    }
  }
  *(char *)(lVar20 + uVar17 * 0x170 + 8) = (char)local_c0[8];
  plVar18 = (long *)local_c0[9];
  if (plVar18 == (long *)0x0) {
    local_78 = 0xffffffff;
    local_a8 = 0xffffffffffffffff;
    uStack_a0 = 0x3ffffffff;
    local_62 = 0x10001000100;
    local_98 = 0xffffffffffffffff;
    local_b8 = 0;
    local_b0 = 0;
    local_8e = 0;
    local_64 = 0;
    local_74 = 0;
    local_90 = 0;
    local_8a = 0;
    local_88 = 0x1ffffffffff00ff;
    uStack_80 = 0xffffffffffffffff;
    local_6c = 0xffff00000000;
    plVar18 = (long *)FUN_00eebe4c(auStack_58,param_1[1],&local_b8);
    if (plVar18 == (long *)0x0) goto LAB_01415268;
    plVar1 = plVar18 + 5;
    do {
      iVar16 = (int)*plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    plVar1 = plVar18 + 5;
    do {
      iVar16 = (int)*plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (iVar16 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_01415268:
  lVar15 = lVar20 + uVar17 * 0x170;
  lVar19 = plVar18[0xe];
  plVar1 = (long *)(lVar19 + 0x20);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01415294;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x28));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x28));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01415294;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01415294:
  FUN_00f32a60(lVar19,lVar15 + 9,lVar15 + 0x151);
  *(undefined8 *)(lVar19 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x28));
  *(long *)(lVar20 + uVar17 * 0x170 + 0x168) = local_c0[10];
  if (plVar18 == (long *)0x0) {
LAB_014152e8:
    if (local_c0 == (long *)0x0) {
      return;
    }
    lVar20 = local_c0[6];
    psVar2 = (short *)(lVar20 + 0x1a);
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
      *(undefined8 *)(lVar20 + 0x10) = 0;
      (**(code **)(*local_c0 + 0x50))();
      return;
    }
    if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  plVar1 = plVar18 + 5;
  do {
    lVar20 = *plVar1;
    iVar16 = (int)lVar20 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    goto LAB_014152e8;
  }
  if ((int)lVar20 != 0) goto LAB_014152e8;
  pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar12 = "DecrementReferenceInternal";
  pcVar13 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
  ;
  pcVar14 = "Reference counter underflows.";
  goto LAB_01415494;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021bb81c; name: FUN_021bb81c
 */


void FUN_021bb81c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 param_5,undefined8 param_6)

{
  short *psVar1;
  undefined *puVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long local_68;
  undefined8 local_48;
  
  local_48 = param_6;
  FUN_00d1a22c(param_1,0xd);
  *param_1 = &PTR_LAB_045a4100;
  uVar14 = param_1[1];
  param_1[4] = &PTR_LAB_045a4258;
  param_1[5] = &DAT_045a4380;
  param_1[6] = &PTR_LAB_045a43d8;
  param_1[7] = &PTR_LAB_045a4400;
  param_1[0x24] = &PTR_LAB_045a4438;
  if (((*PTR_DAT_047dab40 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dab40);
  }
  uVar12 = *(undefined8 *)PTR_DAT_047dab48;
  *(undefined8 *)PTR_DAT_047dab50 = uVar12;
  local_98 = *param_3;
  uStack_90 = param_3[1];
  local_88 = param_3[2];
  local_80 = (long *)param_3[3];
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))();
  }
  FUN_010e2c30(&local_78,uVar12,&local_98);
  plVar13 = (long *)local_78[8];
  if (plVar13 == (long *)0x0) goto LAB_021bb924;
  lVar15 = plVar13[6];
  if (*(long *)(lVar15 + 0x10) == 0) goto LAB_021bbc3c;
  psVar1 = (short *)(lVar15 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar4 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar4 != 0) {
    if (sVar4 != -1) goto LAB_021bb924;
LAB_021bbc5c:
    pcVar8 = "count != 0";
    pcVar9 = "AddReference";
    pcVar10 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar11 = "Reference counter overflows.";
LAB_021bbc7c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar8,pcVar9,pcVar10,0x58,pcVar11);
  }
  uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
  *(undefined8 *)(lVar15 + 8) = uVar12;
  *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
LAB_021bb924:
  local_b8 = *param_4;
  uStack_b0 = param_4[1];
  local_a8 = param_4[2];
  local_a0 = (long *)param_4[3];
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))();
  }
  FUN_021cc9c8(&local_70,plVar13,&local_b8);
  FUN_021c1904(&local_68,uVar14,&local_70,param_2,&local_48);
  puVar2 = PTR_DAT_047dd898 + 0x10;
  *(undefined4 *)(param_1 + 0x26) = param_5;
  param_1[0x24] = puVar2;
  param_1[0x25] = &LAB_02b5eb9c;
  param_1[0x27] = local_68;
  if (local_68 != 0) {
    lVar15 = *(long *)(local_68 + 0x30);
    if (*(long *)(lVar15 + 0x10) == 0) {
LAB_021bbc3c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar14;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_021bbc5c;
  }
  param_1[0x28] = param_1 + 0x31;
  FUN_021c1944(&local_68);
  if (local_70 != (long *)0x0) {
    plVar3 = local_70 + 5;
    do {
      lVar15 = *plVar3;
      iVar7 = (int)lVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar15 == 0) {
      pcVar8 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar9 = "DecrementReferenceInternal";
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar11 = "Reference counter underflows.";
      goto LAB_021bbc7c;
    }
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (plVar13 != (long *)0x0) {
    lVar15 = plVar13[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar4 == 0) goto LAB_021bbc14;
  }
  if (local_78 != (long *)0x0) {
    lVar15 = local_78[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar4 == 0) {
LAB_021bbc14:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  *param_1 = &PTR_LAB_045a4100;
  param_1[4] = &PTR_LAB_045a4258;
  param_1[5] = &DAT_045a4380;
  param_1[6] = &PTR_LAB_045a43d8;
  param_1[7] = &PTR_LAB_045a4400;
  param_1[0x24] = &PTR_LAB_045a4438;
  param_1[0x29] = *param_3;
  param_1[0x2a] = param_3[1];
  param_1[0x2b] = param_3[2];
  plVar13 = (long *)param_3[3];
  param_1[0x2c] = plVar13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))();
  }
  param_1[0x2d] = *param_4;
  param_1[0x2e] = param_4[1];
  param_1[0x2f] = param_4[2];
  plVar13 = (long *)param_4[3];
  param_1[0x30] = plVar13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))();
  }
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_021cca74(param_1 + 0x33);
  return;
}



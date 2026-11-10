/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ba45c; name: FUN_021ba45c
 */


void FUN_021ba45c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long local_60;
  undefined8 local_58;
  
  local_58 = param_5;
  FUN_00d1a22c(param_1,0xd);
  *param_1 = &PTR_LAB_045a3b28;
  uVar13 = param_1[1];
  param_1[4] = &PTR_LAB_045a3c80;
  param_1[5] = &DAT_045a3da8;
  param_1[6] = &PTR_LAB_045a3e00;
  param_1[7] = &PTR_LAB_045a3e28;
  param_1[0x24] = &PTR_LAB_045a3e60;
  if (((*PTR_DAT_047dab40 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dab40);
  }
  uVar11 = *(undefined8 *)PTR_DAT_047dab48;
  *(undefined8 *)PTR_DAT_047dab50 = uVar11;
  local_90 = *param_3;
  uStack_88 = param_3[1];
  local_80 = param_3[2];
  local_78 = (long *)param_3[3];
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  FUN_010e2c30(&local_70,uVar11,&local_90);
  plVar12 = (long *)local_70[8];
  if (plVar12 == (long *)0x0) goto LAB_021ba55c;
  lVar14 = plVar12[6];
  if (*(long *)(lVar14 + 0x10) == 0) goto LAB_021ba7fc;
  psVar1 = (short *)(lVar14 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 != 0) {
    if (sVar3 != -1) goto LAB_021ba55c;
LAB_021ba81c:
    pcVar7 = "count != 0";
    pcVar8 = "AddReference";
    pcVar9 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar10 = "Reference counter overflows.";
LAB_021ba83c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar7,pcVar8,pcVar9,0x58,pcVar10);
  }
  uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
  *(undefined8 *)(lVar14 + 8) = uVar11;
  *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
LAB_021ba55c:
  FUN_021c18f8(&local_68,plVar12);
  FUN_021c1904(&local_60,uVar13,&local_68,param_2,&local_58);
  *(undefined4 *)(param_1 + 0x26) = param_4;
  param_1[0x24] = &PTR_LAB_045a3e90;
  param_1[0x25] = &LAB_02b5e344;
  param_1[0x27] = local_60;
  if (local_60 != 0) {
    lVar14 = *(long *)(local_60 + 0x30);
    if (*(long *)(lVar14 + 0x10) == 0) {
LAB_021ba7fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar14 + 0x1a);
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
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar13;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_021ba81c;
  }
  param_1[0x28] = param_1 + 0x2d;
  FUN_021c1944(&local_60);
  if (local_68 != (long *)0x0) {
    plVar2 = local_68 + 5;
    do {
      lVar14 = *plVar2;
      iVar6 = (int)lVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar14 == 0) {
      pcVar7 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar8 = "DecrementReferenceInternal";
      pcVar9 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar10 = "Reference counter underflows.";
      goto LAB_021ba83c;
    }
  }
  if (plVar12 != (long *)0x0) {
    lVar14 = plVar12[6];
    psVar1 = (short *)(lVar14 + 0x1a);
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
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_021ba7d4;
  }
  if (local_70 != (long *)0x0) {
    lVar14 = local_70[6];
    psVar1 = (short *)(lVar14 + 0x1a);
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
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_021ba7d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  *param_1 = &PTR_LAB_045a3b28;
  param_1[4] = &PTR_LAB_045a3c80;
  param_1[5] = &DAT_045a3da8;
  param_1[6] = &PTR_LAB_045a3e00;
  param_1[7] = &PTR_LAB_045a3e28;
  param_1[0x24] = &PTR_LAB_045a3e60;
  param_1[0x29] = *param_3;
  param_1[0x2a] = param_3[1];
  param_1[0x2b] = param_3[2];
  plVar12 = (long *)param_3[3];
  param_1[0x2c] = plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))();
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  FUN_021c19bc(param_1 + 0x2f);
  return;
}



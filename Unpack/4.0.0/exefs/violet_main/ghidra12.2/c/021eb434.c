/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021eb434; name: FUN_021eb434
 */


void FUN_021eb434(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  long local_58;
  undefined8 local_38;
  
  local_38 = param_5;
  FUN_00d1a22c(param_1,0xd);
  *param_1 = &PTR_LAB_045ace18;
  uVar12 = param_1[1];
  param_1[4] = &PTR_LAB_045acf60;
  param_1[5] = &DAT_045ad088;
  param_1[6] = &PTR_LAB_045ad0e0;
  param_1[7] = &PTR_LAB_045ad108;
  param_1[0x24] = &PTR_LAB_045ad140;
  if (((*PTR_DAT_047d8840 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8840), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047db070,PTR_DAT_047d8848,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8840);
  }
  uVar13 = *(undefined8 *)PTR_DAT_047d8848;
  *(undefined8 *)PTR_DAT_047d8850 = uVar13;
  local_80 = *param_3;
  uStack_78 = param_3[1];
  local_70 = param_3[2];
  local_68 = (long *)param_3[3];
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  FUN_0225ad2c(&local_60,uVar13,&local_80);
  uVar12 = FUN_0225ae54(uVar12,&local_60,param_2,&local_38);
  FUN_0225b00c(&local_58,uVar12);
  *(undefined4 *)(param_1 + 0x26) = param_4;
  param_1[0x24] = &PTR_LAB_045ad1a0;
  param_1[0x25] = &LAB_02b7b884;
  param_1[0x27] = local_58;
  if (local_58 != 0) {
    lVar11 = *(long *)(local_58 + 0x30);
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar12;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
      pcVar7 = "count != 0";
      pcVar8 = "AddReference";
      pcVar9 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar10 = "Reference counter overflows.";
      goto LAB_021eb708;
    }
  }
  param_1[0x28] = param_1 + 0x2d;
  FUN_0225b0c8(&local_58);
  if (local_60 != (long *)0x0) {
    plVar6 = local_60 + 5;
    do {
      lVar11 = *plVar6;
      iVar5 = (int)lVar11 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
      pcVar7 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar8 = "DecrementReferenceInternal";
      pcVar9 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar10 = "Reference counter underflows.";
LAB_021eb708:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar7,pcVar8,pcVar9,0x58,pcVar10);
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  *param_1 = &PTR_LAB_045ace18;
  param_1[4] = &PTR_LAB_045acf60;
  param_1[5] = &DAT_045ad088;
  param_1[6] = &PTR_LAB_045ad0e0;
  param_1[7] = &PTR_LAB_045ad108;
  param_1[0x24] = &PTR_LAB_045ad140;
  param_1[0x29] = *param_3;
  param_1[0x2a] = param_3[1];
  param_1[0x2b] = param_3[2];
  plVar6 = (long *)param_3[3];
  param_1[0x2c] = plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  FUN_017ace30(param_1 + 0x2f);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017acaf8; name: FUN_017acaf8
 */


void FUN_017acaf8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  undefined8 local_38;
  
  local_38 = param_5;
  FUN_00d1a22c(param_1,0xd);
  *param_1 = &PTR_LAB_045acac0;
  uVar13 = param_1[1];
  param_1[4] = &PTR_LAB_045acc08;
  param_1[5] = &DAT_045acd30;
  param_1[6] = &PTR_LAB_045acd88;
  param_1[7] = &PTR_LAB_045acdb0;
  param_1[0x24] = &PTR_LAB_045acde8;
  if (((*PTR_DAT_047d8840 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8840), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047db070,PTR_DAT_047d8848,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8840);
  }
  uVar14 = *(undefined8 *)PTR_DAT_047d8848;
  *(undefined8 *)PTR_DAT_047d8850 = uVar14;
  local_80 = *param_3;
  uStack_78 = param_3[1];
  local_70 = param_3[2];
  local_68 = (long *)param_3[3];
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  FUN_017ad02c(&local_60,uVar14,&local_80);
  FUN_017acf68(&local_58,uVar13,&local_60,param_2,&local_38);
  *(undefined4 *)(param_1 + 0x26) = param_4;
  puVar1 = param_1 + 0x2d;
  param_1[0x24] = &PTR_FUN_045ad170;
  param_1[0x25] = &LAB_02b7b874;
  param_1[0x27] = local_58;
  if (local_58 == (long *)0x0) {
    param_1[0x28] = puVar1;
  }
  else {
    lVar12 = local_58[6];
    if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar12 + 0x1a);
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
      uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar13;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
      pcVar8 = "count != 0";
      pcVar9 = "AddReference";
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar11 = "Reference counter overflows.";
      goto LAB_017ace00;
    }
    param_1[0x28] = puVar1;
    if (local_58 != (long *)0x0) {
      lVar12 = local_58[6];
      psVar2 = (short *)(lVar12 + 0x1a);
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
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*local_58 + 0x50))();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  if (local_60 != (long *)0x0) {
    plVar7 = local_60 + 5;
    do {
      lVar12 = *plVar7;
      iVar6 = (int)lVar12 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
      pcVar8 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar9 = "DecrementReferenceInternal";
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar11 = "Reference counter underflows.";
LAB_017ace00:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar8,pcVar9,pcVar10,0x58,pcVar11);
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  *param_1 = &PTR_LAB_045acac0;
  param_1[4] = &PTR_LAB_045acc08;
  param_1[5] = &DAT_045acd30;
  param_1[6] = &PTR_LAB_045acd88;
  param_1[7] = &PTR_LAB_045acdb0;
  param_1[0x24] = &PTR_LAB_045acde8;
  param_1[0x29] = *param_3;
  param_1[0x2a] = param_3[1];
  param_1[0x2b] = param_3[2];
  plVar7 = (long *)param_3[3];
  param_1[0x2c] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *puVar1 = 0;
  param_1[0x2e] = 0;
  FUN_017ace30(param_1 + 0x2f);
  return;
}



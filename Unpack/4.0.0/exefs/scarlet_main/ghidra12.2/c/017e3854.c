/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e3854; name: FUN_017e3854
 */


void FUN_017e3854(undefined8 param_1,undefined8 *param_2,char *param_3,byte *param_4,char *param_5,
                 undefined4 param_6)

{
  long *plVar1;
  short *psVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  short sVar10;
  undefined8 uVar11;
  undefined8 local_80 [2];
  undefined4 local_6c;
  long *local_68;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  long *local_28;
  
  cVar3 = *param_3;
  uVar11 = *param_2;
  if (cVar3 == '\x02') {
    lVar8 = *(long *)(param_3 + 8);
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar8 + 0x1a);
      sVar10 = *(short *)(lVar8 + 0x1a);
      do {
        sVar5 = *psVar2;
        if (sVar5 == sVar10) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_017e3a8c;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_017e3a8c:
          bVar6 = false;
        }
        if (bVar6) {
          local_28 = (long *)0x0;
          if (*(long *)(lVar8 + 0x10) != 0) {
            local_28 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
          }
          goto LAB_017e3894;
        }
        sVar10 = sVar5;
      } while (sVar5 != 0);
    }
LAB_017e3890:
    local_28 = (long *)0x0;
  }
  else {
    if ((cVar3 != '\x01') && (cVar3 != '\0')) goto LAB_017e3890;
    local_28 = *(long **)(param_3 + 8);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x58))();
    }
  }
LAB_017e3894:
  if (param_4 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_60 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_58 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_50 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_48 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    local_50 = strlen((char *)param_4);
    bVar4 = *param_4;
    local_60 = &DAT_cbf29ce484222645;
    pbVar9 = param_4;
    while (bVar4 != 0) {
      pbVar9 = pbVar9 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar9;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_4;
  }
  if (*param_5 == '\x01') {
    local_68 = *(long **)(param_5 + 8);
    if (local_68 == (long *)0x0) goto LAB_017e38f8;
    plVar1 = local_68 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (*param_5 != '\0') {
      local_68 = (long *)0x0;
      goto LAB_017e38f8;
    }
    local_68 = *(long **)(param_5 + 8);
    if (local_68 == (long *)0x0) goto LAB_017e38f8;
    plVar1 = local_68 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_017e38f8:
  local_80[0] = param_1;
  local_6c = param_6;
  FUN_017e3b60(uVar11,&local_28,&local_60,&local_68,&local_6c,local_80);
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 5;
    do {
      lVar8 = *plVar1;
      iVar7 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x60))();
  }
  return;
}



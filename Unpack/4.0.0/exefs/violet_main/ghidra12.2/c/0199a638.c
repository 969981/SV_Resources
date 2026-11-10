/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0199a638; name: FUN_0199a638
 */


void FUN_0199a638(char *param_1,byte *param_2,char *param_3,undefined4 param_4)

{
  long *plVar1;
  short *psVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  short sVar11;
  undefined4 local_6c;
  long *local_68;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  long *local_28;
  
  uVar7 = DAT_04831020;
  cVar3 = *param_1;
  if (cVar3 == '\x02') {
    lVar9 = *(long *)(param_1 + 8);
    if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar9 + 0x1a);
      sVar11 = *(short *)(lVar9 + 0x1a);
      do {
        sVar5 = *psVar2;
        if (sVar5 == sVar11) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0199a84c;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0199a84c:
          bVar6 = false;
        }
        if (bVar6) {
          local_28 = (long *)0x0;
          if (*(long *)(lVar9 + 0x10) != 0) {
            local_28 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
          }
          goto LAB_0199a67c;
        }
        sVar11 = sVar5;
      } while (sVar5 != 0);
    }
LAB_0199a678:
    local_28 = (long *)0x0;
  }
  else {
    if ((cVar3 != '\x01') && (cVar3 != '\0')) goto LAB_0199a678;
    local_28 = *(long **)(param_1 + 8);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x58))();
    }
  }
LAB_0199a67c:
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
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
    local_50 = strlen((char *)param_2);
    bVar4 = *param_2;
    local_60 = &DAT_cbf29ce484222645;
    pbVar10 = param_2;
    while (bVar4 != 0) {
      pbVar10 = pbVar10 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar10;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_2;
  }
  if (*param_3 == '\x01') {
    local_68 = *(long **)(param_3 + 8);
    if (local_68 == (long *)0x0) goto LAB_0199a6ec;
    plVar1 = local_68 + 5;
    do {
      iVar8 = (int)*plVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (*param_3 != '\0') {
      local_68 = (long *)0x0;
      goto LAB_0199a6ec;
    }
    local_68 = *(long **)(param_3 + 8);
    if (local_68 == (long *)0x0) goto LAB_0199a6ec;
    plVar1 = local_68 + 5;
    do {
      iVar8 = (int)*plVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_0199a6ec:
  local_6c = param_4;
  FUN_0199a920(uVar7,&local_28,&local_60,&local_68,&local_6c);
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 5;
    do {
      lVar9 = *plVar1;
      iVar8 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
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



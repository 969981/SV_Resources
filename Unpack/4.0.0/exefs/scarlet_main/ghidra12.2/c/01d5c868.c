/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d5c868; name: FUN_01d5c868
 */


void FUN_01d5c868(undefined8 param_1,char *param_2,byte *param_3,char *param_4,undefined4 param_5,
                 byte *param_6)

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
  undefined8 *puVar12;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90 [3];
  undefined4 local_74;
  long *local_70;
  undefined1 *local_68;
  byte *pbStack_60;
  size_t local_58;
  long *local_50;
  long *local_48;
  
  uVar7 = DAT_04831028;
  cVar3 = *param_2;
  if (cVar3 == '\x02') {
    lVar9 = *(long *)(param_2 + 8);
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
          if (cVar3 != '\0') goto LAB_01d5cae4;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01d5cae4:
          bVar6 = false;
        }
        if (bVar6) {
          local_48 = (long *)0x0;
          if (*(long *)(lVar9 + 0x10) != 0) {
            local_48 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
          }
          goto LAB_01d5c8b0;
        }
        sVar11 = sVar5;
      } while (sVar5 != 0);
    }
LAB_01d5c8ac:
    local_48 = (long *)0x0;
  }
  else {
    if ((cVar3 != '\x01') && (cVar3 != '\0')) goto LAB_01d5c8ac;
    local_48 = *(long **)(param_2 + 8);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x58))();
    }
  }
LAB_01d5c8b0:
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_68 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_60 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_58 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_50 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x18))();
    }
  }
  else {
    local_58 = strlen((char *)param_3);
    bVar4 = *param_3;
    local_68 = &DAT_cbf29ce484222645;
    pbVar10 = param_3;
    while (bVar4 != 0) {
      pbVar10 = pbVar10 + 1;
      local_68 = (undefined1 *)(((ulong)local_68 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar10;
    }
    local_50 = (long *)0x0;
    pbStack_60 = param_3;
  }
  if (*param_4 == '\x01') {
    local_70 = *(long **)(param_4 + 8);
    if (local_70 == (long *)0x0) goto LAB_01d5c914;
    plVar1 = local_70 + 5;
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
    if (*param_4 != '\0') {
      local_70 = (long *)0x0;
      goto LAB_01d5c914;
    }
    local_70 = *(long **)(param_4 + 8);
    if (local_70 == (long *)0x0) goto LAB_01d5c914;
    plVar1 = local_70 + 5;
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
LAB_01d5c914:
  local_90[0] = param_1;
  local_74 = param_5;
  if ((1 < *param_6) ||
     (puVar12 = *(undefined8 **)(param_6 + 8), *(undefined8 **)(param_6 + 8) == (undefined8 *)0x0))
  {
    if ((*PTR_DAT_047d3c18 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_047d3c18);
      puVar12 = (undefined8 *)PTR_DAT_047d3c20;
      if (iVar8 != 0) {
        *(undefined8 *)PTR_DAT_047d3c20 = 0;
        *(undefined8 *)((long)puVar12 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d3c18);
      }
    }
    else {
      puVar12 = (undefined8 *)PTR_DAT_047d3c20;
    }
  }
  uStack_98 = puVar12[1];
  local_a0 = *puVar12;
  FUN_01d5e7a0(uVar7,&local_48,&local_68,&local_70,&local_74,local_90,&local_a0);
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 5;
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
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x60))();
  }
  return;
}



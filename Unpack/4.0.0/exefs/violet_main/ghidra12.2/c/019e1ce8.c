/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e1ce8; name: FUN_019e1ce8
 */


void FUN_019e1ce8(undefined8 param_1,undefined8 *param_2,char *param_3,byte *param_4,
                 undefined8 param_5,char *param_6,undefined4 param_7,byte param_8)

{
  long *plVar1;
  short *psVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  bool bVar6;
  int iVar7;
  undefined2 *puVar8;
  long lVar9;
  byte *pbVar10;
  short sVar11;
  undefined8 uVar12;
  byte local_b4 [4];
  undefined8 local_b0 [3];
  undefined4 local_94;
  long *local_90;
  undefined2 local_88;
  undefined2 local_86;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  long *local_38;
  
  cVar3 = *param_3;
  uVar12 = *param_2;
  if (cVar3 == '\x02') {
    lVar9 = *(long *)(param_3 + 8);
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
          if (cVar3 != '\0') goto LAB_019e1f6c;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_019e1f6c:
          bVar6 = false;
        }
        if (bVar6) {
          local_38 = (long *)0x0;
          if (*(long *)(lVar9 + 0x10) != 0) {
            local_38 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
          }
          goto LAB_019e1d38;
        }
        sVar11 = sVar5;
      } while (sVar5 != 0);
    }
LAB_019e1d34:
    local_38 = (long *)0x0;
  }
  else {
    if ((cVar3 != '\x01') && (cVar3 != '\0')) goto LAB_019e1d34;
    local_38 = *(long **)(param_3 + 8);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x58))();
    }
  }
LAB_019e1d38:
  if (param_4 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_68 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_60 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_58 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    local_60 = strlen((char *)param_4);
    bVar4 = *param_4;
    local_70 = &DAT_cbf29ce484222645;
    pbVar10 = param_4;
    while (bVar4 != 0) {
      pbVar10 = pbVar10 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar10;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_4;
  }
  puVar8 = (undefined2 *)FUN_017c262c(param_5);
  local_88 = *puVar8;
  local_86 = puVar8[1];
  local_84 = *(undefined1 *)(puVar8 + 2);
  local_83 = *(undefined1 *)((long)puVar8 + 5);
  local_82 = *(undefined1 *)(puVar8 + 3);
  local_80 = *(undefined4 *)(puVar8 + 4);
  uStack_7c = *(undefined4 *)(puVar8 + 6);
  local_78 = *(undefined4 *)(puVar8 + 8);
  if (*param_6 == '\x01') {
    local_90 = *(long **)(param_6 + 8);
    if (local_90 == (long *)0x0) goto LAB_019e1dec;
    plVar1 = local_90 + 5;
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
    if (*param_6 != '\0') {
      local_90 = (long *)0x0;
      goto LAB_019e1dec;
    }
    local_90 = *(long **)(param_6 + 8);
    if (local_90 == (long *)0x0) goto LAB_019e1dec;
    plVar1 = local_90 + 5;
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
LAB_019e1dec:
  local_b4[0] = param_8 & 1;
  local_b0[0] = param_1;
  local_94 = param_7;
  FUN_019e2040(uVar12,&local_38,&local_70,&local_88,&local_90,&local_94,local_b0,local_b4);
  if (local_90 != (long *)0x0) {
    plVar1 = local_90 + 5;
    do {
      lVar9 = *plVar1;
      iVar7 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x60))();
  }
  return;
}



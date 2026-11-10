/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d88060; name: FUN_01d88060
 */


void FUN_01d88060(undefined1 *param_1,char *param_2,byte *param_3,byte *param_4)

{
  short *psVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  byte *pbVar12;
  short sVar13;
  undefined1 *local_98;
  byte *pbStack_90;
  size_t local_88;
  long *local_80;
  undefined1 *local_78;
  byte *pbStack_70;
  size_t local_68;
  long *local_60;
  long *local_58;
  long *local_38;
  
  uVar10 = DAT_04832650;
  cVar2 = *param_2;
  if (cVar2 == '\x02') {
    lVar11 = *(long *)(param_2 + 8);
    if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar11 + 0x1a);
      sVar13 = *(short *)(lVar11 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar13) {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01d88340;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01d88340:
          bVar5 = false;
        }
        if (bVar5) {
          local_58 = (long *)0x0;
          if (*(long *)(lVar11 + 0x10) != 0) {
            local_58 = (long *)(*(long *)(lVar11 + 0x10) + -0x28);
          }
          goto LAB_01d880a8;
        }
        sVar13 = sVar4;
      } while (sVar4 != 0);
    }
  }
  else if ((cVar2 == '\x01') || (cVar2 == '\0')) {
    local_58 = *(long **)(param_2 + 8);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x58))();
    }
    goto LAB_01d880a8;
  }
  local_58 = (long *)0x0;
LAB_01d880a8:
  puVar7 = PTR_DAT_047d3e30;
  puVar6 = PTR_DAT_047d3e28;
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_78 = *(undefined1 **)puVar7;
    pbStack_70 = *(byte **)(puVar7 + 8);
    local_68 = *(size_t *)(puVar7 + 0x10);
    local_60 = *(long **)(puVar7 + 0x18);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x18))();
    }
  }
  else {
    local_68 = strlen((char *)param_3);
    bVar3 = *param_3;
    local_78 = &DAT_cbf29ce484222645;
    pbVar12 = param_3;
    while (bVar3 != 0) {
      pbVar12 = pbVar12 + 1;
      local_78 = (undefined1 *)(((ulong)local_78 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar12;
    }
    local_60 = (long *)0x0;
    pbStack_70 = param_3;
  }
  if (param_4 == (byte *)0x0) {
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_98 = *(undefined1 **)puVar7;
    pbStack_90 = *(byte **)(puVar7 + 8);
    local_88 = *(size_t *)(puVar7 + 0x10);
    local_80 = *(long **)(puVar7 + 0x18);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x18))();
    }
  }
  else {
    local_88 = strlen((char *)param_4);
    bVar3 = *param_4;
    local_98 = &DAT_cbf29ce484222645;
    pbVar12 = param_4;
    while (bVar3 != 0) {
      pbVar12 = pbVar12 + 1;
      local_98 = (undefined1 *)(((ulong)local_98 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar12;
    }
    local_80 = (long *)0x0;
    pbStack_90 = param_4;
  }
  FUN_01d8a6c0(&local_38,uVar10,&local_58,&local_78,&local_98);
  plVar8 = local_38;
  if (local_38 == (long *)0x0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar11 = local_38[6];
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar13 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar10;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    *param_1 = 1;
    *(long **)(param_1 + 8) = plVar8;
    if (local_38 != (long *)0x0) {
      lVar11 = local_38[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (sVar13 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x60))();
  }
  return;
}



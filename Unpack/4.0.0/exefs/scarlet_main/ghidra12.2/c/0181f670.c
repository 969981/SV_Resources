/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0181f670; name: FUN_0181f670
 */


/* WARNING: Removing unreachable block (ram,0x0181fabc) */

undefined8 FUN_0181f670(undefined8 param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_250;
  undefined8 uStack_248;
  long *local_240;
  undefined8 *local_1e8 [2];
  long *local_1d8;
  code *local_1d0;
  code *local_1c8;
  code *local_1c0;
  code *pcStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long *local_1a0;
  code *local_150;
  code *local_148;
  code *local_140;
  code *pcStack_138;
  undefined1 auStack_130 [96];
  code *local_d0;
  code *local_c8;
  code *local_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [96];
  
  uVar7 = FUN_00c92df0(param_1,1,0);
  FUN_0181fe24(local_1e8,param_1,2);
  if (((DAT_048334a0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_048334a0), iVar8 != 0)) {
    __cxa_guard_release(&DAT_048334a0);
  }
  local_250 = 0;
  uStack_248 = 0;
  FUN_00d32adc(&local_250,local_1e8);
  local_240 = local_1d8;
  if (local_1d8 != (long *)0x0) {
    lVar10 = local_1d8[6];
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0181fa74;
    psVar1 = (short *)(lVar10 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar9;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_0181fa94;
  }
  local_1d0 = (code *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (code *)0x0;
  pcStack_1b8 = (code *)0x0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  FUN_00d32adc(&local_1b0,&local_250);
  local_1a0 = local_240;
  if (local_240 != (long *)0x0) {
    lVar10 = local_240[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_0181fa74:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar9;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_0181fa94:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  local_150 = (code *)0x0;
  local_148 = (code *)0x0;
  local_140 = (code *)0x0;
  pcStack_138 = (code *)0x0;
  local_1d0 = FUN_01d9dba8;
  local_1c8 = FUN_01d9de38;
  local_1c0 = FUN_01d9e054;
  pcStack_1b8 = FUN_01d9e12c;
  FUN_01d9e054(&local_1b0,auStack_130);
  local_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  local_150 = local_1d0;
  local_148 = local_1c8;
  local_140 = local_1c0;
  pcStack_138 = pcStack_1b8;
  if (pcStack_1b8 != (code *)0x0) {
    (*pcStack_1b8)(auStack_130,auStack_b0);
    pcVar6 = local_148;
    local_d0 = local_150;
    local_c8 = local_148;
    local_c0 = local_140;
    pcStack_b8 = pcStack_138;
    if (local_148 != (code *)0x0) {
      local_140 = (code *)0x0;
      pcStack_138 = (code *)0x0;
      local_150 = (code *)0x0;
      local_148 = (code *)0x0;
      (*pcVar6)(auStack_130);
    }
  }
  iVar8 = FUN_0181faf4(uVar7,&local_d0);
  pcVar6 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    pcStack_b8 = (code *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar6)(auStack_b0);
  }
  pcVar6 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (code *)0x0;
    pcStack_138 = (code *)0x0;
    local_150 = (code *)0x0;
    local_148 = (code *)0x0;
    (*pcVar6)(auStack_130);
  }
  pcVar6 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (code *)0x0;
    pcStack_1b8 = (code *)0x0;
    local_1d0 = (code *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar6)(&local_1b0);
  }
  FUN_01d9de38(&local_250);
  FUN_00c5d960(param_1,(long)iVar8);
  if (local_1d8 != (long *)0x0) {
    lVar10 = local_1d8[6];
    psVar1 = (short *)(lVar10 + 0x1a);
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
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_1d8 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_1e8[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_1e8[0] + 3);
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
      piVar2 = (int *)((long)local_1e8[0] + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_d0 = (code *)*local_1e8[0];
        FUN_00c44438(lVar10 + 0x8040,&local_d0);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return 1;
}



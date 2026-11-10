/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01992e50; name: FUN_01992e50
 */


void FUN_01992e50(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  char *pcVar7;
  code *pcVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  FUN_0199328c();
  plVar10 = *(long **)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  if (plVar10 != (long *)0x0) {
    lVar12 = plVar10[6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  local_b0 = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  FUN_0149c3a0(&local_b0);
  local_b0 = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  FUN_014a2480(&local_b0);
  local_b0 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  FUN_0149c2b0(&local_b0);
  local_b0 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  FUN_0149c1c0(&local_b0);
  local_b0 = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = 0;
  FUN_014a233c(&local_b0);
  local_b0 = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  FUN_014a2414(&local_b0);
  local_b0 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_014a23a8(&local_b0);
  local_b0 = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  FUN_01993214(&local_b0);
  plVar10 = *(long **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x60))();
  }
  plVar10 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x60))();
  }
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar12 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar12;
  local_d0 = 0x6e3d076faf5f42;
  local_c8 = "SET_STATE_BOX_INIT";
  local_c0 = 0x12;
  local_b8 = (long *)0x0;
  if (*(long *)(lVar12 + 0x48) == 0) {
    uVar11 = 0xffffffffffffffff;
  }
  else {
    uVar11 = FUN_00cf8198();
  }
  pcVar7 = local_c8;
  memset(&local_b0,0,0x80);
  plVar10 = *(long **)(*(long *)(lVar12 + 0x200) + 0x60);
  iVar9 = (**(code **)(*plVar10 + 0xd0))(plVar10,pcVar7,uVar11,1,&LAB_01080c70,lVar12,0,0,0);
  if (iVar9 != 0) {
    FUN_0104f218(*(undefined8 *)(lVar12 + 0x220),&local_d0,iVar9,uVar11,0,&local_b0,0);
    pcVar8 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar8)(auStack_90);
    }
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  local_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  FUN_01084328(&local_e0,param_1 + 0x130);
  FUN_0199332c(&local_e0,s_F600653F11D5D39FC_04541bf8);
  puVar6 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_e0 + 3);
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
      piVar2 = (int *)((long)local_e0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_b0 = *puVar6;
        FUN_00c44438(lVar12 + 0x8040,&local_b0);
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
  return;
}



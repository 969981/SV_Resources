/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0174ab80; name: FUN_0174ab80
 */


void FUN_0174ab80(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  short sVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long local_f0;
  code *local_e8;
  long local_e0;
  code *local_d8;
  undefined1 auStack_d0 [96];
  long *local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [8];
  long local_38;
  
  if ((*param_2 != 0) && (*(ulong *)(param_1 + 0x78) < *(ulong *)(param_1 + 0x80))) {
    local_e0 = 0;
    local_d8 = (code *)0x0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_2 + 4,auStack_d0);
      local_d8 = (code *)param_2[3];
      local_e8 = (code *)param_2[1];
      local_f0 = *param_2;
      local_e0 = param_2[2];
    }
    local_70 = (long *)0x0;
    uStack_68 = 0;
    FUN_0154631c(&local_70,param_3);
    uVar4 = *(ulong *)(param_1 + 0x78);
    if (uVar4 < *(ulong *)(param_1 + 0x80)) {
      lVar12 = *(long *)(param_1 + 0x70);
      uVar11 = *(undefined8 *)(param_1 + 0x50);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar9 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar9 != 0) {
        if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar11;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      }
      plVar13 = (long *)(lVar12 + uVar4 * 0x90);
      plVar13[2] = 0;
      plVar13[3] = 0;
      *plVar13 = 0;
      plVar13[1] = 0;
      if (local_d8 != (code *)0x0) {
        (*local_d8)(auStack_d0,lVar12 + uVar4 * 0x90 + 0x20);
        pcVar7 = local_e8;
        plVar13[3] = (long)local_d8;
        *plVar13 = local_f0;
        plVar13[1] = (long)local_e8;
        plVar13[2] = local_e0;
        if (local_e8 != (code *)0x0) {
          local_e0 = 0;
          local_d8 = (code *)0x0;
          local_f0 = 0;
          local_e8 = (code *)0x0;
          (*pcVar7)(auStack_d0);
        }
      }
      lVar12 = lVar12 + uVar4 * 0x90;
      puVar10 = (undefined8 *)(lVar12 + 0x80);
      *puVar10 = 0;
      *(undefined8 *)(lVar12 + 0x88) = 0;
      FUN_00e5e91c(puVar10,&local_70);
      if (lVar9 != 0) {
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      }
      *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
    }
    else {
      local_38 = *(long *)(param_1 + 0x70) + uVar4 * 0x90;
      FUN_01e7dce0(auStack_58,param_1 + 0x50,&local_38,1,&local_f0);
    }
    plVar13 = local_70;
    if (local_70 != (long *)0x0) {
      plVar1 = local_70 + 3;
      do {
        sVar3 = (short)*plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(short *)plVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_38 = *plVar13;
          FUN_00c44438(lVar12 + 0x8040,&local_38);
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
    pcVar7 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      local_d8 = (code *)0x0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar7)(auStack_d0);
    }
  }
  return;
}



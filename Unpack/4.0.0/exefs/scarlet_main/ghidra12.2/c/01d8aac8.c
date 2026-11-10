/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d8aac8; name: FUN_01d8aac8
 */


void FUN_01d8aac8(long *param_1,byte param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined1 *local_200;
  code *local_1f8;
  undefined1 *local_1f0;
  undefined1 *puStack_1e8;
  byte *local_1e0 [12];
  undefined8 *local_180;
  undefined8 uStack_178;
  undefined8 local_170 [2];
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [108];
  byte local_54 [4];
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  local_54[0] = param_2 & 1;
  lVar10 = FUN_0168e7c4(*param_1 + 0x108,local_170);
  if (lVar10 != 0) {
    local_158 = (code *)0x0;
    local_150 = 0;
    local_148 = 0;
    local_160 = 0;
    local_170[0] = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    local_d0 = 0;
    uStack_c8 = 0;
    param_1 = (long *)*param_1;
    (**(code **)(*param_1 + 0x18))(local_50,param_1);
    local_180 = (undefined8 *)0x0;
    uStack_178 = 0;
    plVar3 = (long *)0x0;
    if (param_1 != (long *)0x0) {
      plVar3 = param_1 + 5;
    }
    if ((long *)local_50[0][2] == plVar3) {
      FUN_00cbc6dc(&local_180,local_50);
    }
    puVar8 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50[0] + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_28 = *puVar8;
          FUN_00c44438(lVar11 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) goto LAB_01d8ac54;
    }
    FUN_01df5a08(&local_e0,&local_180);
    puVar8 = local_180;
    if (local_180 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_180 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_180 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_50[0] = (undefined8 *)*puVar8;
          FUN_00c44438(lVar11 + 0x8040,local_50);
        }
      }
      else if (sVar4 == 0) {
LAB_01d8ac54:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    FUN_0102825c(lVar10,local_170);
    local_1e0[0] = local_54;
    local_200 = &LAB_01df6288;
    local_1f8 = FUN_00a8abb0;
    local_1f0 = &LAB_00a8abb4;
    puStack_1e8 = &LAB_00a8abc0;
    FUN_014911dc(lVar10,&local_200);
    pcVar7 = local_1f8;
    if (local_1f8 != (code *)0x0) {
      local_1f0 = (undefined1 *)0x0;
      puStack_1e8 = (undefined1 *)0x0;
      local_200 = (undefined1 *)0x0;
      local_1f8 = (code *)0x0;
      (*pcVar7)(local_1e0);
    }
    pcVar7 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar7)(auStack_c0);
    }
    pcVar7 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = 0;
      local_148 = 0;
      local_160 = 0;
      local_158 = (code *)0x0;
      (*pcVar7)(auStack_140);
    }
  }
  return;
}



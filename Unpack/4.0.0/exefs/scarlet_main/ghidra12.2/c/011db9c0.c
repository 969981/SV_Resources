/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011db9c0; name: FUN_011db9c0
 */


void FUN_011db9c0(long param_1)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  long lVar19;
  long lVar20;
  long local_60;
  undefined8 local_58;
  long *local_50;
  undefined8 uStack_48;
  undefined1 local_18 [8];
  
  if (((*(char *)(param_1 + 0x98) != '\0') && (*(long *)(param_1 + 0x68) != 0)) &&
     (lVar15 = *(long *)(*(long *)(param_1 + 0x68) + 0x10), lVar15 != 0)) {
    local_50 = (long *)0x0;
    uStack_48 = 0;
    FUN_00ca1a48(&local_50,lVar15 + 0x20);
    plVar17 = local_50;
    if (local_50 != (long *)0x0) {
      lVar15 = local_50[2];
      plVar4 = (long *)0x0;
      if (lVar15 != 0) {
        plVar4 = (long *)(lVar15 + -0x28);
      }
      plVar2 = local_50 + 3;
      do {
        sVar5 = (short)*plVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(short *)plVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar3 = (int *)((long)local_50 + 0x1c);
        do {
          iVar11 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar16;
          local_60 = *plVar17;
          FUN_00c44438(lVar16 + 0x8040,&local_60);
        }
      }
      else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if ((((lVar15 != 0) && (uVar12 = (**(code **)(*plVar4 + 0xe8))(plVar4), (uVar12 & 1) != 0)) &&
          ((*(char *)(param_1 + 0x90) != '\0' ||
           ((*(long *)(param_1 + 0x78) != 0 && (*(short *)(*(long *)(param_1 + 0x78) + 0x1a) != 0)))
           ))) && (plVar17 = *(long **)(param_1 + 0x88), plVar17 != (long *)0x0)) {
        lVar20 = plVar4[0x19];
        lVar19 = plVar4[0x18];
        pauVar1 = (undefined1 (*) [16])(plVar4 + 0x1a);
        lVar15 = *(long *)*pauVar1;
        auVar9 = *pauVar1;
        auVar18 = *pauVar1;
        auVar8 = *(undefined1 (*) [16])(plVar4 + 0x1c);
        lVar16 = auVar8._0_8_;
        FUN_016947d8(&local_50);
        local_18[0] = 7;
        if (local_50 != (long *)0x0) {
          FUN_011dbce8(&local_60,local_18,local_50 + 1);
        }
        local_58 = CONCAT44(local_58._4_4_,(int)lVar20);
        if (local_50 != (long *)0x0) {
          local_60 = lVar19;
          FUN_011dbc60(local_18,&local_60,local_50 + 1);
        }
        auVar18 = NEON_ext(auVar18,auVar9,8,1);
        local_58 = auVar18._0_8_;
        if (local_50 != (long *)0x0) {
          local_60 = lVar15;
          FUN_011dbd5c(local_18,&local_60,local_50 + 1);
        }
        local_58 = CONCAT44(local_58._4_4_,auVar8._8_4_);
        local_60 = lVar16;
        if (local_50 != (long *)0x0) {
          FUN_011dbc60(local_18,&local_60,local_50 + 1);
        }
        uVar10 = FUN_011dbca0(param_1);
        local_60 = CONCAT44(local_60._4_4_,uVar10);
        uVar13 = FUN_014c27b0(&local_50);
        uVar14 = FUN_014c27c8(&local_50);
        (**(code **)(*plVar17 + 8))(plVar17,&local_60,uVar13,uVar14);
        FUN_01694aa8(&local_50);
      }
    }
  }
  return;
}



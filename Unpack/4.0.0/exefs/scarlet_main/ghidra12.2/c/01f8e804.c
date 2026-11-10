/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8e804; name: FUN_01f8e804
 */


void FUN_01f8e804(long param_1)

{
  short *psVar1;
  int *piVar2;
  undefined4 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  short sVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  lVar8 = FUN_00da75d8();
  if ((lVar8 != 0) && (*(int *)(param_1 + 0x2c0) - 1U < 2)) {
    *(undefined4 *)(param_1 + 0x2c0) = 3;
    FUN_01f93430(param_1);
    FUN_00e06ff0(&local_60,param_1);
    if (local_60 != (undefined8 *)0x0) {
      if (*(short *)((long)local_60 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_60 + 0x1a);
        sVar10 = *(short *)((long)local_60 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar10) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar10 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01f8e8b8;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01f8e8b8:
            bVar6 = false;
          }
          if (bVar6) {
            plVar12 = (long *)0x0;
            if (local_60[2] != 0) {
              plVar12 = (long *)(local_60[2] + -0x28);
            }
            goto LAB_01f8e8e4;
          }
          sVar10 = sVar4;
        } while (sVar4 != 0);
      }
      plVar12 = (long *)0x0;
LAB_01f8e8e4:
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar10 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar10 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = *local_60;
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar12 != (long *)0x0) {
        FUN_01f935a0(*(undefined4 *)(lVar8 + 0x2c4),plVar12);
        FUN_015ecb28(*(undefined4 *)(lVar8 + 0x2c8),plVar12,1);
        FUN_01f93620(plVar12);
        puVar9 = (undefined8 *)FUN_00d8fbac(plVar12);
        local_50 = puVar9[2];
        uStack_48 = puVar9[3];
        local_60 = (undefined8 *)*puVar9;
        uStack_58 = puVar9[1];
        uVar13 = puVar9[4];
        uVar15 = *(undefined8 *)(lVar8 + 0x70);
        uVar3 = *(undefined4 *)(puVar9 + 0xc);
        *(ulong *)(param_1 + 0x368) =
             CONCAT44((float)((ulong)puVar9[5] >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar8 + 0x78) >> 0x20),
                      (float)puVar9[5] + (float)*(undefined8 *)(lVar8 + 0x78));
        *(ulong *)(param_1 + 0x360) =
             CONCAT44((float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar15 >> 0x20),
                      (float)uVar13 + (float)uVar15);
        auVar14 = FUN_01f93708(param_1 + 0x160,lVar8);
        *(undefined4 *)(param_1 + 0x380) = uVar3;
        *(undefined1 (*) [16])(param_1 + 0x360) = auVar14;
        *(undefined8 *)(param_1 + 0x370) = local_50;
        *(undefined8 *)(param_1 + 0x378) = uStack_48;
        lVar8 = plVar12[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
        }
        else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    *(undefined4 *)(param_1 + 0x390) = 0;
    *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x290);
  }
  return;
}



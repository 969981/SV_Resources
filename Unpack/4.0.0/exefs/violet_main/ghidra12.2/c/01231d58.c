/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01231d58; name: FUN_01231d58
 */


void FUN_01231d58(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar16;
  undefined8 *puVar15;
  long *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  lVar9 = FUN_01231fe8(*param_2 + 0x108,&local_80);
  if ((lVar9 != 0) && (uVar10 = FUN_01232288(), (uVar10 & 1) != 0)) {
    plVar11 = (long *)FUN_021222f4(lVar9);
    puVar2 = (undefined8 *)plVar11[1];
    for (puVar14 = (undefined8 *)*plVar11; puVar14 != puVar2; puVar14 = puVar14 + 1) {
      puVar12 = (undefined8 *)FUN_01231fe0(*puVar14);
      puVar3 = (undefined8 *)puVar12[1];
      for (puVar12 = (undefined8 *)*puVar12; puVar12 != puVar3; puVar12 = puVar12 + 1) {
        local_80 = (long *)&DAT_afc4d6c05abef19e;
        pcStack_78 = "default";
        local_70 = 7;
        local_68 = (long *)0x0;
        plVar11 = (long *)FUN_00cb7028(*puVar12,&local_80);
        puVar15 = *(undefined8 **)(*plVar11 + 0xd0);
        puVar4 = *(undefined8 **)(*plVar11 + 0xd8);
        if (puVar15 != puVar4) {
          cVar5 = *(char *)*param_1;
          do {
            puVar16 = puVar15 + 1;
            FUN_01231fb4(*puVar15,cVar5 != '\0');
            puVar15 = puVar16;
          } while (puVar4 != puVar16);
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
      }
    }
    uVar13 = FUN_021222fc(lVar9);
    FUN_02122304(&local_80,uVar13);
    if (local_80 != (long *)0x0) {
      puVar14 = (undefined8 *)FUN_02122364();
      plVar11 = (long *)*puVar14;
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 5;
        do {
          lVar8 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)lVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        FUN_01231fb4(plVar11,*(undefined1 *)*param_1);
        do {
          lVar8 = *plVar1;
          iVar7 = (int)lVar8 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        else if ((int)lVar8 == 0) goto LAB_01231f40;
      }
      if (local_80 != (long *)0x0) {
        plVar11 = local_80 + 5;
        do {
          lVar8 = *plVar11;
          iVar7 = (int)lVar8 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *(int *)plVar11 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
        else if ((int)lVar8 == 0) {
LAB_01231f40:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    plVar11 = (long *)FUN_0212236c(lVar9);
    puVar2 = (undefined8 *)plVar11[1];
    for (puVar14 = (undefined8 *)*plVar11; puVar14 != puVar2; puVar14 = puVar14 + 1) {
      FUN_0143cdb0(*puVar14,*(undefined1 *)*param_1);
    }
  }
  return;
}



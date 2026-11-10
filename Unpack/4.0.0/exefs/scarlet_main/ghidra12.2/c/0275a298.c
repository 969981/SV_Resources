/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275a298; name: FUN_0275a298
 */


void FUN_0275a298(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_80 [24];
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_38;
  
  lVar7 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  puVar11 = *(undefined8 **)(param_1 + 0x120);
  puVar2 = *(undefined8 **)(param_1 + 0x128);
  *(float *)(param_1 + 0x160) =
       *(float *)(param_1 + 0x160) + (float)((double)*(long *)(lVar7 + 8) / 1000000000.0);
  puVar6 = PTR_DAT_047d9c48;
  if (puVar11 != puVar2) {
    do {
      uVar9 = *puVar11;
      FUN_00c9e664(&local_60,param_1 + 0xe8);
      puVar8 = (undefined8 *)(**(code **)(*(long *)local_58[9] + 0x68))();
      uVar14 = puVar8[6];
      uVar12 = puVar8[4];
      uVar10 = *(undefined8 *)(param_1 + 0x158);
      uVar15 = puVar8[2];
      uVar13 = *puVar8;
      FUN_00d8fb98(auStack_80,puVar6);
      puVar8 = (undefined8 *)FUN_00cb7028(uVar10,auStack_80);
      FUN_01e3c714(&local_38,*puVar8);
      FUN_0275a470(uVar13,uVar15,uVar12,uVar14,*(undefined4 *)(param_1 + 0x160),uVar9,&local_38);
      if (local_38 != (long *)0x0) {
        plVar1 = local_38 + 5;
        do {
          lVar7 = *plVar1;
          iVar5 = (int)lVar7 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
        else if ((int)lVar7 == 0) goto LAB_0275a448;
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        plVar1 = local_58 + 5;
        do {
          lVar7 = *plVar1;
          iVar5 = (int)lVar7 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
LAB_0275a448:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x60))();
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar2);
  }
  return;
}



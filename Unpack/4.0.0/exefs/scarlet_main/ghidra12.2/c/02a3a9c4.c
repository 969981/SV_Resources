/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3a9c4; name: FUN_02a3a9c4
 */


void FUN_02a3a9c4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  undefined1 (*pauVar8) [16];
  char *__haystack;
  undefined1 auVar9 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_28;
  
  FUN_00c5ecb4(&local_28,*(undefined8 *)(DAT_0485a0d8 + 0x38));
  plVar7 = local_28;
  __haystack = *(char **)(local_28[0x15] + 0x38);
  pcVar6 = strstr(__haystack,"objects_un_plan_raid_jewelry01_01");
  if (pcVar6 != (char *)0x0) {
    local_60 = 0x93adbf516a55c0cf;
    pcStack_58 = "BaseColor";
    local_50 = 9;
    local_48 = (long *)0x0;
    pauVar8 = (undefined1 (*) [16])*param_1;
    local_70 = *(undefined8 *)*pauVar8;
    auVar9 = NEON_ext(*pauVar8,*pauVar8,8,1);
    uStack_68 = auVar9._0_8_;
    plVar7 = (long *)(plVar7[7] + 0x30);
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_60,&local_70);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    __haystack = *(char **)(local_28[0x15] + 0x38);
    plVar7 = local_28;
  }
  pcVar6 = strstr(__haystack,"objects_un_plan_raid_jewelry01_02");
  if (pcVar6 != (char *)0x0) {
    local_60 = 0x93adbf516a55c0cf;
    pcStack_58 = "BaseColor";
    local_50 = 9;
    local_48 = (long *)0x0;
    pauVar8 = (undefined1 (*) [16])param_1[1];
    local_70 = *(undefined8 *)*pauVar8;
    auVar9 = NEON_ext(*pauVar8,*pauVar8,8,1);
    uStack_68 = auVar9._0_8_;
    (**(code **)(*(long *)(plVar7[7] + 0x30) + 0x30))
              ((long *)(plVar7[7] + 0x30),&local_60,&local_70);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    local_60 = 0x21d7cc2bfe24271;
    pcStack_58 = "EmissionColor";
    local_50 = 0xd;
    local_48 = (long *)0x0;
    pauVar8 = (undefined1 (*) [16])param_1[2];
    local_70 = *(undefined8 *)*pauVar8;
    auVar9 = NEON_ext(*pauVar8,*pauVar8,8,1);
    uStack_68 = auVar9._0_8_;
    (**(code **)(*(long *)(local_28[7] + 0x30) + 0x30))
              ((long *)(local_28[7] + 0x30),&local_60,&local_70);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    local_60 = 0x74d4a15d097967a4;
    pcStack_58 = "EmissionFresnelColor";
    local_50 = 0x14;
    local_48 = (long *)0x0;
    pauVar8 = (undefined1 (*) [16])param_1[3];
    local_70 = *(undefined8 *)*pauVar8;
    auVar9 = NEON_ext(*pauVar8,*pauVar8,8,1);
    uStack_68 = auVar9._0_8_;
    (**(code **)(*(long *)(local_28[7] + 0x30) + 0x30))
              ((long *)(local_28[7] + 0x30),&local_60,&local_70);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    plVar7 = local_28;
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}



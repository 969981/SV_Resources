/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b6fbcc; name: FUN_01b6fbcc
 */


void FUN_01b6fbcc(byte param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *local_40;
  long *local_38;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar5 = FUN_020f6c68();
  FUN_020f6cc4(&local_38,param_2);
  if (4 < param_1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("0","SetParty",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/cmn/game_data/savedata_accessor/rental_team_savedata_accessor.cpp"
               ,99);
  }
  uVar8 = (ulong)param_1;
  FUN_01674c60(local_38,*(long *)(lVar5 + 0x40) + uVar8 * 0x844 + 0x30);
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 5;
    do {
      lVar7 = *plVar1;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_01b6fdc0;
  }
  FUN_01e71d08(&local_38,param_2);
  uVar6 = FUN_0196c644(local_38);
  FUN_011b8d00(*(long *)(lVar5 + 0x40) + uVar8 * 0x844,uVar6,0xd);
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 5;
    do {
      lVar7 = *plVar1;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_01b6fdc0;
  }
  FUN_01e71f74(&local_38,param_2);
  uVar6 = FUN_0196c644(local_38);
  FUN_011b8d00(*(long *)(lVar5 + 0x40) + uVar8 * 0x844 + 0x18,uVar6,0xb);
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 5;
    do {
      lVar7 = *plVar1;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_01b6fdc0;
  }
  *(undefined1 *)(*(long *)(lVar5 + 0x40) + uVar8 * 0x844 + 0x2c) = *(undefined1 *)(param_2 + 0x845)
  ;
  FUN_020f6ebc(&local_40,param_2);
  lVar7 = *(long *)(lVar5 + 0x78);
  uVar6 = FUN_0196c644(local_40);
  FUN_011b8d00(lVar7 + uVar8 * 0x88,uVar6,7);
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 5;
    do {
      lVar7 = *plVar1;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_01b6fdc0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(undefined1 *)(*(long *)(lVar5 + 0x78) + uVar8 * 0x88 + 0xe) = *(undefined1 *)(param_2 + 0x846);
  *(undefined1 *)(*(long *)(lVar5 + 0x78) + uVar8 * 0x88 + 0xf) = *(undefined1 *)(param_2 + 0x844);
  return;
}



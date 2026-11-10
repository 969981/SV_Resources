/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b55b50; name: FUN_00b55b50
 */


bool FUN_00b55b50(long param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long local_588 [2];
  char *pcStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  long local_560;
  char *pcStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  char local_540 [8];
  char acStack_538 [8];
  undefined1 local_530;
  undefined8 local_52f;
  undefined8 local_527;
  undefined8 local_51f;
  undefined8 local_517;
  undefined8 local_50f;
  undefined8 local_507;
  undefined8 local_4ff;
  undefined8 local_4f7;
  char local_4c0 [1152];
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar7 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar7;
  memset(local_4c0,0,0x480);
  local_507 = 0;
  local_4ff = 0;
  local_4f7 = 0;
  local_540[0] = s_RaidPublicSearch_03c8b967[0];
  local_540[1] = s_RaidPublicSearch_03c8b967[1];
  local_540[2] = s_RaidPublicSearch_03c8b967[2];
  local_540[3] = s_RaidPublicSearch_03c8b967[3];
  local_540[4] = s_RaidPublicSearch_03c8b967[4];
  local_540[5] = s_RaidPublicSearch_03c8b967[5];
  local_540[6] = s_RaidPublicSearch_03c8b967[6];
  local_540[7] = s_RaidPublicSearch_03c8b967[7];
  acStack_538[0] = s_RaidPublicSearch_03c8b967[8];
  acStack_538[1] = s_RaidPublicSearch_03c8b967[9];
  acStack_538[2] = s_RaidPublicSearch_03c8b967[10];
  acStack_538[3] = s_RaidPublicSearch_03c8b967[0xb];
  acStack_538[4] = s_RaidPublicSearch_03c8b967[0xc];
  acStack_538[5] = s_RaidPublicSearch_03c8b967[0xd];
  acStack_538[6] = s_RaidPublicSearch_03c8b967[0xe];
  acStack_538[7] = s_RaidPublicSearch_03c8b967[0xf];
  local_52f = 0;
  local_560 = 0xcbf327ac65cca990;
  pcStack_558 = "difficulty";
  local_527 = 0;
  local_51f = 0;
  local_517 = 0;
  local_50f = 0;
  local_530 = 0;
  local_550 = 10;
  uStack_548 = 0;
  FUN_01f2f314(local_540,0,local_588 + 5,(long)*(int *)(param_1 + 0x100));
  local_588[1] = 0x81fdb359fa97d0cb;
  pcStack_578 = "is_distributed";
  local_570 = 0xe;
  uStack_568 = 0;
  FUN_01f2f314(local_540,1,local_588 + 1,param_2 & 1);
  plVar6 = *(long **)(lVar7 + 0x48);
  if (plVar6 == (long *)0x0) {
    local_588[0] = 0;
  }
  else {
    (**(code **)(*plVar6 + 0x88))(local_588,plVar6,local_540);
  }
  plVar6 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0xc0) = local_588[0];
  if (local_588[0] == 0) {
    *(undefined4 *)(param_1 + 0x40) = 8;
  }
  return local_588[0] != 0;
}



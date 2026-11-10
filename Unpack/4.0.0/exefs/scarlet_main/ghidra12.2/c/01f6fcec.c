/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6fcec; name: FUN_01f6fcec
 */


bool FUN_01f6fcec(long param_1,int param_2,int param_3,int param_4,int param_5,void *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_4c0 [16];
  byte local_4b0;
  undefined7 uStack_4af;
  undefined8 local_4a0;
  long *plStack_498;
  undefined1 auStack_490 [16];
  byte local_480;
  undefined7 uStack_47f;
  undefined8 local_470;
  long *plStack_468;
  byte local_460;
  undefined7 uStack_45f;
  undefined8 local_450;
  long *plStack_448;
  byte local_440;
  undefined7 uStack_43f;
  undefined8 local_430;
  long *plStack_428;
  undefined1 auStack_420 [8];
  long *local_418;
  byte local_410;
  undefined7 uStack_40f;
  undefined8 local_400;
  long *plStack_3f8;
  undefined1 auStack_3f0 [16];
  byte local_3e0;
  undefined7 uStack_3df;
  undefined8 local_3d0;
  long *plStack_3c8;
  byte local_3c0;
  undefined7 uStack_3bf;
  undefined8 local_3b0;
  long *plStack_3a8;
  byte local_3a0;
  undefined7 uStack_39f;
  undefined8 local_390;
  long *plStack_388;
  undefined1 auStack_380 [752];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  char local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  
  local_60 = 0;
  local_58 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    local_58 = 0;
  }
  else {
    local_58 = std::__shared_weak_count::lock();
    if ((local_58 != 0) && (local_60 = *(long *)(param_1 + 0x48), local_60 != 0)) {
      local_70 = 0;
      uStack_68 = 0;
      snprintf((char *)&local_70,0x10,"%d",(ulong)*(uint *)(param_1 + 0x94));
      local_80[0] = '\0';
      local_80[1] = '\0';
      local_80[2] = '\0';
      local_80[3] = '\0';
      local_80[4] = '\0';
      local_80[5] = '\0';
      local_80[6] = '\0';
      local_80[7] = '\0';
      local_80[8] = '\0';
      local_80[9] = '\0';
      local_80[10] = '\0';
      local_80[0xb] = '\0';
      local_80[0xc] = '\0';
      local_80[0xd] = '\0';
      local_80[0xe] = '\0';
      local_80[0xf] = '\0';
      snprintf(local_80,0x10,"%d",(ulong)*(uint *)(param_1 + 0x9c));
      FUN_01e74fb0(auStack_88);
      FUN_01f70094(auStack_88,&local_70,(long)param_2);
      FUN_01f70094(auStack_88,local_80,(long)param_4);
      FUN_01e74fb0(auStack_90);
      FUN_01f70094(auStack_90,&local_70,(long)param_3);
      FUN_01f70094(auStack_90,local_80,(long)param_5);
      memcpy(auStack_380,param_6,0x2f0);
      FUN_01f6ef54(auStack_4c0,local_60 + 0x10,"@@battleReport");
      FUN_01f6fa0c(auStack_490,auStack_4c0,&DAT_03c12387);
      FUN_01f70240(auStack_420,auStack_490,"users");
      FUN_01f6fa0c(auStack_3f0,auStack_420,&local_70);
      if ((local_410 & 1) != 0) {
        (**(code **)(*plStack_3f8 + 0x18))
                  (plStack_3f8,local_400,CONCAT71(uStack_40f,local_410) & 0xfffffffffffffffe,1);
      }
      FUN_01f6f158(auStack_420);
      if ((local_440 & 1) != 0) {
        (**(code **)(*plStack_428 + 0x18))
                  (plStack_428,local_430,CONCAT71(uStack_43f,local_440) & 0xfffffffffffffffe,1);
      }
      if ((local_460 & 1) != 0) {
        (**(code **)(*plStack_448 + 0x18))
                  (plStack_448,local_450,CONCAT71(uStack_45f,local_460) & 0xfffffffffffffffe,1);
      }
      if ((local_480 & 1) != 0) {
        (**(code **)(*plStack_468 + 0x18))
                  (plStack_468,local_470,CONCAT71(uStack_47f,local_480) & 0xfffffffffffffffe,1);
      }
      FUN_01f6f158(auStack_490);
      if ((local_4b0 & 1) != 0) {
        (**(code **)(*plStack_498 + 0x18))
                  (plStack_498,local_4a0,CONCAT71(uStack_4af,local_4b0) & 0xfffffffffffffffe,1);
      }
      FUN_01f6f158(auStack_4c0);
      FUN_01f6fa34(auStack_490);
      if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
        lVar4 = param_1 + 0x71;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x80);
      }
      thunk_FUN_027c1d20(auStack_490,"competitionId",lVar4);
      FUN_01f70358(auStack_490,"result",auStack_88);
      FUN_01f70358(auStack_490,"behavior",auStack_90);
      thunk_FUN_00258e34(auStack_490,&DAT_03c38e78,auStack_380,0x2f0);
      FUN_01f6fb80(auStack_420,auStack_3f0,auStack_490);
      FUN_01f6fbec((long *)(param_1 + 0xa0),auStack_420);
      if (local_418 != (long *)0x0) {
        plVar1 = local_418 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*local_418 + 0x10))(local_418);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar4 = *(long *)(param_1 + 0xa0);
      FUN_01f6fc48(auStack_490);
      if ((local_3a0 & 1) != 0) {
        (**(code **)(*plStack_388 + 0x18))
                  (plStack_388,local_390,CONCAT71(uStack_39f,local_3a0) & 0xfffffffffffffffe,1);
      }
      if ((local_3c0 & 1) != 0) {
        (**(code **)(*plStack_3a8 + 0x18))
                  (plStack_3a8,local_3b0,CONCAT71(uStack_3bf,local_3c0) & 0xfffffffffffffffe,1);
      }
      if ((local_3e0 & 1) != 0) {
        (**(code **)(*plStack_3c8 + 0x18))
                  (plStack_3c8,local_3d0,CONCAT71(uStack_3df,local_3e0) & 0xfffffffffffffffe,1);
      }
      FUN_01f6f158(auStack_3f0);
      FUN_01cfa410(auStack_90);
      FUN_01cfa410(auStack_88);
      FUN_01f6f1b0(&local_60);
      return lVar4 != 0;
    }
  }
  FUN_01f6f1b0(&local_60);
  return false;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027e4e6c; name: FUN_027e4e6c
 */


void FUN_027e4e6c(undefined8 param_1,long param_2,undefined8 param_3,char *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long local_160 [2];
  char *pcStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  long local_138 [2];
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  char local_110 [48];
  long local_e0;
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  local_80 = 0xe185f6f6b840a887;
  pcStack_78 = "InitializeLdn";
  local_70 = 0xd;
  local_68 = (long *)0x0;
  FUN_01959f88(&local_60,&local_80);
  local_a0 = 0x5f3a9f86b611a6e;
  pcStack_98 = "StartupSession";
  local_90 = 0xe;
  local_88 = (long *)0x0;
  FUN_0195b8bc(&local_58,local_60,&local_a0,*(undefined8 *)(param_2 + 0x70));
  plVar5 = local_58;
  local_110[0] = '\0';
  local_c0 = 0xe1a3d887bca4131b;
  pcStack_b8 = "JoinSession";
  local_b0 = 0xb;
  local_a8 = (long *)0x0;
  cVar3 = *param_4;
  if (cVar3 != '\0') {
    memcpy((void *)((ulong)local_110 | 4),param_4 + 4,0x28);
  }
  local_110[0] = cVar3 != '\0';
  FUN_027e51a0(&local_e0,param_2,param_3,local_110);
  FUN_027e5278(&local_50,plVar5,&local_c0,&local_e0);
  local_138[1] = 0x942838809ca0825a;
  pcStack_128 = "StoreSessionInfo";
  local_120 = 0x10;
  local_118 = (long *)0x0;
  local_138[0] = param_2;
  FUN_027e59bc(&local_48,local_50,local_138 + 1,local_160 + 5);
  local_160[1] = 0xac19ec5dd305f32b;
  pcStack_150 = "RandomMatchingCancel";
  local_148 = 0x14;
  uStack_140 = 0;
  local_160[0] = param_2;
  FUN_027e5a80(param_1,local_48,local_160 + 1,local_160);
  if (local_48 != (long *)0x0) {
    lVar6 = local_48[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_027e5188;
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    lVar6 = local_50[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_027e5188;
  }
  lVar6 = local_e0;
  local_e0 = 0;
  if (lVar6 != 0) {
    FUN_027e5e74(auStack_d8);
  }
  if (local_110[0] != '\0') {
    local_110[0] = '\0';
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    lVar6 = local_58[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_58 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_027e5188;
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    lVar6 = local_60[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_027e5188:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02854a1c; name: FUN_02854a1c
 */


void FUN_02854a1c(undefined8 param_1,long param_2,undefined8 param_3,char *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long local_138 [2];
  char *pcStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110 [2];
  char *pcStack_100;
  undefined8 local_f8;
  long *local_f0;
  char local_e8 [48];
  long local_b8;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  local_78 = 0x5f3a9f86b611a6e;
  pcStack_70 = "StartupSession";
  local_68 = 0xe;
  local_60 = (long *)0x0;
  FUN_027c20b8(&local_58,&local_78,*(undefined8 *)(param_2 + 0x70));
  plVar5 = local_58;
  local_e8[0] = '\0';
  local_98 = 0xe1a3d887bca4131b;
  pcStack_90 = "JoinSession";
  local_88 = 0xb;
  local_80 = (long *)0x0;
  cVar3 = *param_4;
  if (cVar3 != '\0') {
    memcpy((void *)((ulong)local_e8 | 4),param_4 + 4,0x28);
  }
  local_e8[0] = cVar3 != '\0';
  FUN_02854cc4(&local_b8,param_2,param_3,local_e8);
  FUN_027e5278(&local_50,plVar5,&local_98,&local_b8);
  local_110[1] = 0x942838809ca0825a;
  pcStack_100 = "StoreSessionInfo";
  local_f8 = 0x10;
  local_f0 = (long *)0x0;
  local_110[0] = param_2;
  FUN_02854d74(&local_48,local_50,local_110 + 1,local_138 + 5);
  local_138[1] = 0xac19ec5dd305f32b;
  pcStack_128 = "RandomMatchingCancel";
  local_120 = 0x14;
  uStack_118 = 0;
  local_138[0] = param_2;
  FUN_02854e38(param_1,local_48,local_138 + 1,local_138);
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
    else if (sVar2 == 0) goto LAB_02854cac;
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
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
    else if (sVar2 == 0) goto LAB_02854cac;
  }
  lVar6 = local_b8;
  local_b8 = 0;
  if (lVar6 != 0) {
    FUN_027e5e74(auStack_b0);
  }
  if (local_e8[0] != '\0') {
    local_e8[0] = '\0';
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
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
    else if (sVar2 == 0) {
LAB_02854cac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}



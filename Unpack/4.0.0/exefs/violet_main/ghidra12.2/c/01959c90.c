/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01959c90; name: FUN_01959c90
 */


void FUN_01959c90(undefined8 param_1,long param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long local_130 [2];
  char *pcStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  long local_108 [2];
  char *pcStack_f8;
  undefined8 local_f0;
  long *local_e8;
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
  local_c0 = 0xf6b73a7830ce53af;
  pcStack_b8 = "CreateSession";
  local_b0 = 0xd;
  local_a8 = (long *)0x0;
  FUN_0195a5d0(&local_e0,param_2,param_3);
  FUN_0195c410(&local_50,plVar5,&local_c0,&local_e0);
  local_108[1] = 0x942838809ca0825a;
  pcStack_f8 = "StoreSessionInfo";
  local_f0 = 0x10;
  local_e8 = (long *)0x0;
  local_108[0] = param_2;
  FUN_0195a000(&local_48,local_50,local_108 + 1,local_130 + 5);
  local_130[1] = 0xac19ec5dd305f32b;
  pcStack_120 = "RandomMatchingCancel";
  local_118 = 0x14;
  uStack_110 = 0;
  local_130[0] = param_2;
  FUN_0195abb8(param_1,local_48,local_130 + 1,local_130);
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
    else if (sVar2 == 0) goto LAB_01959f70;
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
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
    else if (sVar2 == 0) goto LAB_01959f70;
  }
  lVar6 = local_e0;
  local_e0 = 0;
  if (lVar6 != 0) {
    FUN_027e2e98(auStack_d8);
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
    else if (sVar2 == 0) goto LAB_01959f70;
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
LAB_01959f70:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}



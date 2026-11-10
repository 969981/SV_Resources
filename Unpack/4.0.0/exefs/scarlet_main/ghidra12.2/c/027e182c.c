/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027e182c; name: FUN_027e182c
 */


void FUN_027e182c(undefined8 param_1,long param_2,undefined8 param_3,undefined2 param_4,byte param_5
                 )

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
  long local_110;
  byte local_108;
  undefined8 local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined2 local_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 auStack_60 [16];
  long *local_38;
  
  FUN_02794c94(auStack_60);
  *(undefined2 *)(param_2 + 0x5c0) = 0;
  local_a0 = 0x94aeaab4737159ef;
  pcStack_98 = "origin";
  local_90 = 6;
  local_88 = (long *)0x0;
  FUN_027e1b68(&local_80,&local_a0,param_3);
  local_c0 = 0xf1e71e35c3c63acc;
  pcStack_b8 = "RandomMatchingSeq";
  local_b0 = 0x11;
  local_a8 = (long *)0x0;
  local_d0 = param_2;
  local_c8 = param_4;
  FUN_027e1c28(&local_78,local_80,&local_c0,&local_d0);
  plVar5 = local_78;
  local_e0 = 0;
  uStack_d8 = 0;
  FUN_02790ba0(&local_e0,auStack_60);
  FUN_027e1e8c(&local_70,plVar5,&local_e0);
  local_100 = 0xdd344f64c81e84d;
  pcStack_f8 = "CloseSession";
  local_f0 = 0xc;
  local_e8 = (long *)0x0;
  local_110 = param_2;
  local_108 = param_5 & 1;
  FUN_027e2288(&local_68,local_70,&local_100,&local_110);
  local_138[1] = 0x942838809ca0825a;
  pcStack_128 = "StoreSessionInfo";
  local_120 = 0x10;
  local_118 = (long *)0x0;
  local_138[0] = param_2;
  FUN_027e2978(&local_38,local_68,local_138 + 1,local_160 + 5);
  local_160[1] = 0xac19ec5dd305f32b;
  pcStack_150 = "RandomMatchingCancel";
  local_148 = 0x14;
  uStack_140 = 0;
  local_160[0] = param_2;
  FUN_027e2a3c(param_1,local_38,local_160 + 1,local_160);
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[6];
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
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_027e1b50;
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    lVar6 = local_68[6];
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
      (**(code **)(*local_68 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_027e1b50;
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    lVar6 = local_70[6];
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
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_027e1b50;
  }
  FUN_0279064c(&local_e0);
  if (local_78 != (long *)0x0) {
    lVar6 = local_78[6];
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
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_027e1b50:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  FUN_027e2e30(&local_80);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  FUN_0279064c(auStack_60);
  return;
}



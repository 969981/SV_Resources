/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284f7f8; name: FUN_0284f7f8
 */


void FUN_0284f7f8(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 byte param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long local_1c8 [2];
  char *pcStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_1a0 [2];
  char *pcStack_190;
  undefined8 local_188;
  long *local_180;
  undefined8 local_178;
  char *pcStack_170;
  undefined8 local_168;
  long *local_160;
  undefined8 local_158;
  char *pcStack_150;
  undefined8 local_148;
  long *local_140;
  long local_138;
  undefined1 auStack_130 [24];
  undefined8 local_118;
  char *pcStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long local_b8;
  byte local_b0;
  long *local_a0;
  char local_98 [72];
  long *local_38;
  
  FUN_0195a874(&local_b8,param_3);
  FUN_0195a950(local_98,&local_b8);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_98[0] == '\0') {
    *param_1 = 0;
  }
  else {
    local_f8 = 0x5f3a9f86b611a6e;
    pcStack_f0 = "StartupSession";
    local_e8 = 0xe;
    local_e0 = (long *)0x0;
    FUN_027c20b8(&local_d8,&local_f8,*(undefined8 *)(param_2 + 0x70));
    plVar5 = local_d8;
    local_118 = 0x5e7d7ee3d894203a;
    pcStack_110 = "JoinRandomSession";
    local_108 = 0x11;
    local_100 = (long *)0x0;
    FUN_0284fbec(&local_138,param_2,param_3);
    FUN_0284fcbc(&local_d0,plVar5,&local_118,&local_138);
    local_158 = 0x7ffa5533b9781f92;
    pcStack_150 = "WaitMember";
    local_148 = 10;
    local_140 = (long *)0x0;
    FUN_02850400(&local_c8,local_d0,&local_158,param_4);
    local_178 = 0xdd344f64c81e84d;
    pcStack_170 = "CloseSession";
    local_168 = 0xc;
    local_160 = (long *)0x0;
    local_b8 = param_2;
    local_b0 = param_5 & 1;
    FUN_02850b44(&local_c0,local_c8,&local_178,&local_b8);
    local_1a0[1] = 0x942838809ca0825a;
    pcStack_190 = "StoreSessionInfo";
    local_188 = 0x10;
    local_180 = (long *)0x0;
    local_1a0[0] = param_2;
    FUN_02851234(&local_38,local_c0,local_1a0 + 1,local_1c8 + 5);
    local_1c8[1] = 0xac19ec5dd305f32b;
    pcStack_1b8 = "RandomMatchingCancel";
    local_1b0 = 0x14;
    uStack_1a8 = 0;
    local_1c8[0] = param_2;
    FUN_028512f8(param_1,local_38,local_1c8 + 1,local_1c8);
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
      else if (sVar2 == 0) goto LAB_0284fbd4;
    }
    if (local_180 != (long *)0x0) {
      (**(code **)(*local_180 + 0x20))();
    }
    if (local_c0 != (long *)0x0) {
      lVar6 = local_c0[6];
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
        (**(code **)(*local_c0 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0284fbd4;
    }
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      lVar6 = local_c8[6];
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
        (**(code **)(*local_c8 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0284fbd4;
    }
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
    if (local_d0 != (long *)0x0) {
      lVar6 = local_d0[6];
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
        (**(code **)(*local_d0 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0284fbd4;
    }
    lVar6 = local_138;
    local_138 = 0;
    if (lVar6 != 0) {
      FUN_028516ec(auStack_130);
    }
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    if (local_d8 != (long *)0x0) {
      lVar6 = local_d8[6];
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
        (**(code **)(*local_d8 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_0284fbd4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
  }
  return;
}



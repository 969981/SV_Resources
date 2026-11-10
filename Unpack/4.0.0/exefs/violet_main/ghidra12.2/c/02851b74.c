/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02851b74; name: FUN_02851b74
 */


void FUN_02851b74(undefined8 param_1,long param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long local_f8 [2];
  char *pcStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0 [2];
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long local_a8;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  local_68 = 0x5f3a9f86b611a6e;
  pcStack_60 = "StartupSession";
  local_58 = 0xe;
  local_50 = (long *)0x0;
  FUN_027c20b8(&local_48,&local_68,*(undefined8 *)(param_2 + 0x70));
  plVar5 = local_48;
  local_88 = 0xf6b73a7830ce53af;
  pcStack_80 = "CreateSession";
  local_78 = 0xd;
  local_70 = (long *)0x0;
  FUN_02851dd8(&local_a8,param_2,param_3);
  FUN_02851ee8(&local_40,plVar5,&local_88,&local_a8);
  local_d0[1] = 0x942838809ca0825a;
  pcStack_c0 = "StoreSessionInfo";
  local_b8 = 0x10;
  local_b0 = (long *)0x0;
  local_d0[0] = param_2;
  FUN_0285262c(&local_38,local_40,local_d0 + 1,local_f8 + 5);
  local_f8[1] = 0xac19ec5dd305f32b;
  pcStack_e8 = "RandomMatchingCancel";
  local_e0 = 0x14;
  uStack_d8 = 0;
  local_f8[0] = param_2;
  FUN_028526f0(param_1,local_38,local_f8 + 1,local_f8);
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
    else if (sVar2 == 0) goto LAB_02851dc0;
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_40 != (long *)0x0) {
    lVar6 = local_40[6];
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
      (**(code **)(*local_40 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02851dc0;
  }
  lVar6 = local_a8;
  local_a8 = 0;
  if (lVar6 != 0) {
    FUN_02852ae4(auStack_a0);
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
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
    else if (sVar2 == 0) {
LAB_02851dc0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}



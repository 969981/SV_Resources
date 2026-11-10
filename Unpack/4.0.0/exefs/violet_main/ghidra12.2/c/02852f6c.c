/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02852f6c; name: FUN_02852f6c
 */


void FUN_02852f6c(undefined8 param_1,long param_2,undefined8 param_3)

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
  long local_108;
  char local_100 [48];
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  long local_b0;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long *local_28;
  
  local_70 = 0x5f3a9f86b611a6e;
  pcStack_68 = "StartupSession";
  local_60 = 0xe;
  local_58 = (long *)0x0;
  FUN_027c20b8(&local_50,&local_70,*(undefined8 *)(param_2 + 0x70));
  plVar5 = local_50;
  local_90 = 0x4009dc70b1776ef1;
  pcStack_88 = "BrowseSession";
  local_80 = 0xd;
  local_78 = (long *)0x0;
  FUN_028531f8(&local_b0,param_2,param_3);
  FUN_028532fc(&local_48,plVar5,&local_90,&local_b0);
  plVar5 = local_48;
  local_d0 = 0x86ea4d83239ef7f8;
  pcStack_c8 = "PickSessionInfo";
  local_c0 = 0xf;
  local_b8 = (long *)0x0;
  local_108 = param_2;
  FUN_0195a830(local_100,param_3);
  FUN_02853a40(&local_28,plVar5,&local_d0,local_130 + 5);
  local_130[1] = 0xac19ec5dd305f32b;
  pcStack_120 = "RandomMatchingCancel";
  local_118 = 0x14;
  uStack_110 = 0;
  local_130[0] = param_2;
  FUN_0285415c(param_1,local_28,local_130 + 1,local_130);
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[6];
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
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_028531e0;
  }
  if (local_100[0] != '\0') {
    local_100[0] = '\0';
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
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
    else if (sVar2 == 0) goto LAB_028531e0;
  }
  lVar6 = local_b0;
  local_b0 = 0;
  if (lVar6 != 0) {
    FUN_02854550(auStack_a8);
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
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
    else if (sVar2 == 0) {
LAB_028531e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}



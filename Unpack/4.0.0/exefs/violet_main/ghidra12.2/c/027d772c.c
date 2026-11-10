/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027d772c; name: FUN_027d772c
 */


void FUN_027d772c(long *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  long *local_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_28 [8];
  
  uVar6 = *(undefined8 *)(*param_1 + 8);
  local_98 = 0;
  FUN_027d6574(&local_90);
  FUN_027d6574(auStack_48,param_2);
  FUN_027d6574(auStack_50,param_2);
  uVar6 = FUN_027d7a68(uVar6,&local_98,&local_90,auStack_48,auStack_50);
  FUN_027d7cb8(auStack_28,uVar6);
  FUN_027d6640(auStack_50);
  FUN_027d6640(auStack_48);
  FUN_027d6640(&local_90);
  local_90 = (long *)*param_1;
  if (local_90 != (long *)0x0) {
    lVar7 = local_90[6];
    if (*(long *)(lVar7 + 0x10) == 0) goto LAB_027d79b8;
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar6;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_027d79b8;
  }
  FUN_027c9f74(auStack_88,param_1 + 5);
  FUN_027d7d44(auStack_80,auStack_28);
  FUN_027d6574(auStack_78,param_2);
  local_70 = param_1[1];
  lStack_68 = param_1[2];
  local_60 = param_1[3];
  local_58 = (long *)param_1[4];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  FUN_027d6574(auStack_48,param_2);
  FUN_027d6574(auStack_50,param_2);
  local_9c = 1;
  FUN_027d7dd4(&local_98,*(undefined8 *)(*param_1 + 8),&local_9c,&local_90,auStack_48,auStack_50);
  lVar7 = *param_1;
  FUN_0191d764(lVar7 + 0xf0,&local_98);
  if (*(int *)(lVar7 + 0x48) - 1U < 3) {
    FUN_0174a3b8(lVar7);
  }
  plVar5 = (long *)CONCAT44(uStack_94,local_98);
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[6];
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
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_027d79b8;
  }
  FUN_027d6640(auStack_50);
  FUN_027d6640(auStack_48);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_027d6640(auStack_78);
  FUN_027d6d64(auStack_80);
  FUN_027ca1d8(auStack_88);
  if (local_90 != (long *)0x0) {
    lVar7 = local_90[6];
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
      (**(code **)(*local_90 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_027d79b8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  FUN_027d6d64(auStack_28);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0234ce50; name: FUN_0234ce50
 */


void FUN_0234ce50(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_78 [24];
  long *local_60;
  ulong local_58;
  undefined1 local_4c [4];
  long local_48;
  long local_40;
  long local_38;
  
  plVar1 = (long *)(param_1 + 0x40);
  lVar6 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar6) {
    bVar8 = true;
LAB_0234ce98:
    local_38 = *(long *)(*(long *)(param_1 + 0x168) + *(long *)(param_1 + 0x240) * 8);
    local_48 = *(long *)(local_38 + 0xc0) + 1;
    *(long *)(local_38 + 0xc0) = local_48;
    local_58 = local_58 & 0xffffffffffffff00;
    local_40 = *(long *)(local_38 + 0xb8);
    FUN_00f84c44(*(undefined8 *)(local_38 + 200),&local_38,&local_58,&local_40,&local_48);
    puVar2 = *(undefined8 **)(param_1 + 0x170);
    for (puVar7 = *(undefined8 **)(param_1 + 0x168); puVar7 != puVar2; puVar7 = puVar7 + 1) {
      FUN_028e587c(*puVar7);
    }
    lVar6 = *(long *)(param_1 + 0xd0);
    for (lVar4 = *(long *)(param_1 + 200); lVar4 != lVar6; lVar4 = lVar4 + 0x38) {
      *(undefined1 *)(lVar4 + 0x28) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
    }
    FUN_00d8fb98(auStack_78,&DAT_045eaeb0);
    uVar5 = FUN_00f839cc(param_1,auStack_78);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    local_40 = CONCAT71(local_40._1_7_,(uVar5 & 0xfffffffffffffffd) != 0);
    local_58 = uVar5;
    local_38 = param_1;
    FUN_017a27bc(*(undefined8 *)(param_1 + 0x2d0),&local_38,&local_40,&local_58,param_1 + 0x240);
    *(ulong *)(param_1 + 0x240) = uVar5;
    local_38 = *(long *)(*(long *)(param_1 + 0x168) + uVar5 * 8);
    local_40 = *(long *)(local_38 + 0xb8) + 1;
    *(long *)(local_38 + 0xb8) = local_40;
    local_4c[0] = 1;
    local_48 = *(long *)(local_38 + 0xc0);
    FUN_00f84c44(*(undefined8 *)(local_38 + 200),&local_38,local_4c,&local_40,&local_48);
    if (!bVar8) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
    }
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0234ce94;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0234ce94;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0234ce94:
  bVar8 = false;
  goto LAB_0234ce98;
}



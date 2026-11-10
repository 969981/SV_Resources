/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027a20f0; name: FUN_027a20f0
 */


void FUN_027a20f0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *local_130;
  undefined1 local_128;
  undefined8 local_120;
  long *local_118;
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [96];
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  plVar8 = (long *)*param_2;
  if ((plVar8[0x26] != 0) && (lVar9 = *(long *)(plVar8[0x26] + 0x10), lVar9 != 0)) {
    iVar6 = (**(code **)(*(long *)(lVar9 + -0x28) + 0x68))();
    if (iVar6 == 2) {
      local_70 = 0x79cdb2de8b964c20;
      pcStack_68 = "RecoverReject";
      local_60 = 0xd;
      local_58 = (long *)0x0;
      FUN_01e7b418(param_1,&local_70,param_3);
      plVar8 = local_58;
      goto joined_r0x027a2310;
    }
    plVar8 = (long *)*param_2;
  }
  local_90 = 0x43139186f303bad;
  pcStack_88 = "RetryRecoverLoop";
  local_80 = 0x10;
  local_78 = (long *)0x0;
  local_130 = plVar8;
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_027a23bc;
    psVar1 = (short *)(lVar9 + 0x1a);
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
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar7;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_027a23bc;
  }
  local_128 = (undefined1)param_2[1];
  FUN_019db778(&local_120,param_3);
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  local_108 = (code *)0x0;
  FUN_027a336c(&local_110,&local_130);
  FUN_01efd6a8(param_1,&local_90,&local_110);
  pcVar5 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    local_108 = (code *)0x0;
    (*pcVar5)(auStack_f0);
  }
  lVar9 = tpidr_el0;
  if (*(long *)(lVar9 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar9 + 0x30) = DAT_04859430;
  }
  plVar8 = local_118;
  local_50 = *(undefined8 *)(lVar9 + 0x30);
  local_48 = *(undefined8 *)(lVar9 + 0x38);
  *(undefined8 *)(lVar9 + 0x30) = local_120;
  *(undefined2 *)(lVar9 + 0x38) = 1;
  local_118 = (long *)0x0;
  if (plVar8 == (long *)0x0) {
    *(undefined8 *)(lVar9 + 0x30) = local_50;
    *(undefined2 *)(lVar9 + 0x38) = (undefined2)local_48;
  }
  else {
    (**(code **)(*plVar8 + 8))();
    *(undefined8 *)(lVar9 + 0x30) = local_50;
    *(undefined2 *)(lVar9 + 0x38) = (undefined2)local_48;
    if (local_118 != (long *)0x0) {
      (**(code **)(*local_118 + 8))(local_118);
    }
  }
  plVar8 = local_78;
  if (local_130 != (long *)0x0) {
    lVar9 = local_130[6];
    psVar1 = (short *)(lVar9 + 0x1a);
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
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_130 + 0x50))();
      plVar8 = local_78;
    }
    else if (sVar2 == 0) {
LAB_027a23bc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
joined_r0x027a2310:
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  return;
}



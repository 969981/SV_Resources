/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02792c10; name: FUN_02792c10
 */


void FUN_02792c10(undefined8 param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_148;
  char *pcStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  char *pcStack_120;
  undefined8 local_118;
  long *local_110;
  undefined8 local_108;
  char *pcStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  ulong local_28;
  
  if (*(long *)(param_2 + 0x1c0) == 0) {
    lVar10 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(param_2 + 0x1c0) + 0x10);
    lVar10 = 0;
    if (lVar8 != 0) {
      lVar10 = lVar8 + -0x28;
    }
  }
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  uVar11 = *(undefined8 *)PTR_DAT_047d6ca0;
  *(undefined8 *)PTR_DAT_047d6ca8 = uVar11;
  if (lVar10 == 0) {
    local_60 = 0xf9ea7befe95aa249;
    pcStack_58 = "NoSessionInstance";
    local_50 = 0x11;
    local_48 = (long *)0x0;
    FUN_02792464(param_1,&local_60);
    plVar5 = local_48;
  }
  else if (*(char *)(param_2 + 0x9c) == '\0') {
    local_80 = 0x9d4262a916a71fe7;
    pcStack_78 = "NotEnabled";
    local_70 = 10;
    local_68 = (long *)0x0;
    FUN_02792464(param_1,&local_80);
    plVar5 = local_68;
  }
  else if (*(uint *)(param_2 + 0xa0) == 2) {
    local_a0 = 0x9e296062bba1fb84;
    pcStack_98 = "SkipSend_RecieveOnly";
    local_90 = 0x14;
    local_88 = (long *)0x0;
    FUN_01987400(param_1,&local_a0,&DAT_03d68958);
    plVar5 = local_88;
  }
  else {
    if ((*(uint *)(param_2 + 0xa0) < 2) && (*(long **)(param_2 + 0x88) != (long *)0x0)) {
      (**(code **)(**(long **)(param_2 + 0x88) + 0x68))();
    }
    uVar7 = FUN_02793068(param_2);
    if ((uVar7 & 1) == 0) {
      local_128 = 0x8a5df6e6886d878b;
      pcStack_120 = "SkipSend_NoUpdate";
      local_118 = 0x11;
      local_110 = (long *)0x0;
      FUN_01987400(&local_a8,&local_128,&DAT_03d68958);
      plVar5 = local_a8;
      local_28 = 0;
      local_148 = 0xde652c30fd81f974;
      pcStack_140 = "BeaconWait";
      local_138 = 10;
      uStack_130 = 0;
      nn::os::GenerateRandomBytes(&local_28,8);
      uVar7 = *(ulong *)(param_2 + 0x70);
      iVar6 = 0;
      if (uVar7 != 0) {
        iVar6 = (int)(local_28 / uVar7);
      }
      FUN_02793154(param_1,plVar5,&local_148,
                   ((int)local_28 - iVar6 * (int)uVar7) + *(int *)(param_2 + 0x68));
      plVar5 = local_110;
      if (local_a8 != (long *)0x0) {
        lVar10 = local_a8[6];
        psVar1 = (short *)(lVar10 + 0x1a);
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
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*local_a8 + 0x50))();
          plVar5 = local_110;
        }
        else {
joined_r0x02792efc:
          if (sVar2 == 0) {
LAB_02793050:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
        }
      }
    }
    else {
      uVar7 = FUN_01739910(uVar11);
      if ((uVar7 & 1) != 0) {
        FUN_0279382c(&local_a8,lVar10);
        plVar5 = local_a8;
        local_28 = 0;
        local_c8 = 0xde652c30fd81f974;
        pcStack_c0 = "BeaconWait";
        local_b8 = 10;
        uStack_b0 = 0;
        nn::os::GenerateRandomBytes(&local_28,8);
        uVar7 = *(ulong *)(param_2 + 0x70);
        iVar6 = 0;
        if (uVar7 != 0) {
          iVar6 = (int)(local_28 / uVar7);
        }
        FUN_02793154(param_1,plVar5,&local_c8,
                     ((int)local_28 - iVar6 * (int)uVar7) + *(int *)(param_2 + 0x68));
        if (local_a8 == (long *)0x0) {
          return;
        }
        lVar10 = local_a8[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 != 1) {
          if (sVar2 != 0) {
            return;
          }
          goto LAB_02793050;
        }
        *(undefined8 *)(lVar10 + 0x10) = 0;
        pcVar9 = *(code **)(*local_a8 + 0x50);
        goto LAB_02792d64;
      }
      local_e8 = 0x877b3b63a2097188;
      pcStack_e0 = "DelegateSend";
      local_d8 = 0xc;
      local_d0 = (long *)0x0;
      FUN_01987400(&local_a8,&local_e8,&DAT_03d68958);
      plVar5 = local_a8;
      local_28 = 0;
      local_108 = 0xde652c30fd81f974;
      pcStack_100 = "BeaconWait";
      local_f8 = 10;
      uStack_f0 = 0;
      nn::os::GenerateRandomBytes(&local_28,8);
      uVar7 = *(ulong *)(param_2 + 0x70);
      iVar6 = 0;
      if (uVar7 != 0) {
        iVar6 = (int)(local_28 / uVar7);
      }
      FUN_02793154(param_1,plVar5,&local_108,
                   ((int)local_28 - iVar6 * (int)uVar7) + *(int *)(param_2 + 0x68));
      plVar5 = local_d0;
      if (local_a8 != (long *)0x0) {
        lVar10 = local_a8[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 != 1) goto joined_r0x02792efc;
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_a8 + 0x50))();
        plVar5 = local_d0;
      }
    }
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
  pcVar9 = *(code **)(*plVar5 + 0x20);
LAB_02792d64:
  (*pcVar9)();
  return;
}



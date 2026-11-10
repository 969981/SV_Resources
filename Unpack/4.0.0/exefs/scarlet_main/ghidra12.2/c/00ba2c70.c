/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ba2c70; name: FUN_00ba2c70
 */


void FUN_00ba2c70(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  byte local_c0 [16];
  long local_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  byte *local_78;
  undefined1 *puStack_70;
  ulong local_68;
  
  if (*(char *)(param_2 + 0x44) == '\0') goto LAB_00ba2e10;
  pbVar10 = *(byte **)(*(long *)(param_2 + 0x50) + 8);
  if (DAT_0483a6a0 != 2) {
    local_68 = local_68 & 0xffffffffffffff00;
    local_78 = PTR_DAT_047daba0 + 0x10;
    puStack_70 = &LAB_00baae90;
    if (DAT_0483a6a0 != 2) {
      do {
        lVar8 = DAT_0483a6a0;
        if (DAT_0483a6a0 != 0) break;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x483a6a0,0x10);
        if (bVar2) {
          DAT_0483a6a0 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      DataMemoryBarrier(2,3);
      if (lVar8 == 0) {
        FUN_00bb162c(&local_78);
        DAT_0483a6a0 = 2;
      }
      else {
        while (lVar8 == 1) {
          sched_yield();
          lVar8 = DAT_0483a6a0;
        }
      }
    }
  }
  plVar12 = (long *)(DAT_0483a6a8 + 8);
  plVar14 = (long *)*plVar12;
  if (plVar14 == (long *)0x0) {
LAB_00ba2de0:
    plVar13 = plVar12;
  }
  else {
    plVar13 = plVar12;
    do {
      puStack_70 = (undefined1 *)(ulong)(*pbVar10 >> 1);
      local_78 = pbVar10 + 1;
      if ((*pbVar10 & 1) != 0) {
        puStack_70 = *(undefined1 **)(pbVar10 + 8);
        local_78 = *(byte **)(pbVar10 + 0x10);
      }
      iVar3 = FUN_028a8144(plVar14 + 4,&local_78);
      if (iVar3 >= 0) {
        plVar13 = plVar14;
      }
      plVar14 = (long *)plVar14[iVar3 < 0];
    } while (plVar14 != (long *)0x0);
    if (plVar13 == plVar12) goto LAB_00ba2de0;
    puStack_70 = (undefined1 *)(ulong)(*(byte *)(plVar13 + 4) >> 1);
    local_78 = (byte *)((long)plVar13 + 0x21);
    if ((*(byte *)(plVar13 + 4) & 1) != 0) {
      puStack_70 = (undefined1 *)plVar13[5];
      local_78 = (byte *)plVar13[6];
    }
    iVar3 = FUN_028a8144(pbVar10,&local_78);
    if (iVar3 < 0) goto LAB_00ba2de0;
  }
  if (plVar13 == (long *)(DAT_0483a6a8 + 8)) {
    FUN_00b8a120(param_1,*(undefined8 *)(param_2 + 8),param_3,9,
                 "Extensions in proto3 are only allowed for defining options.");
  }
LAB_00ba2e10:
  if (*(int *)(param_2 + 0x40) == 2) {
    FUN_00b8a120(param_1,*(undefined8 *)(param_2 + 8),param_3,9,
                 "Required fields are not allowed in proto3.");
  }
  if (*(char *)(param_2 + 0x80) != '\0') {
    FUN_00b8a120(param_1,*(undefined8 *)(param_2 + 8),param_3,9,
                 "Explicit default values are not allowed in proto3.");
  }
  iVar3 = *(int *)(param_2 + 0x3c);
  if (iVar3 == 0xe) {
    lVar8 = *(long *)(param_2 + 0x70);
    if (lVar8 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar8 + 0x10) + 0x7c) == 3) {
      return;
    }
    uVar11 = *(undefined8 *)(param_2 + 8);
    std::operator+("Enum type \"",*(string **)(lVar8 + 8));
    puVar4 = (ulong *)std::string::append((char *)local_c0);
    uStack_a0 = puVar4[1];
    local_98 = puVar4[2];
    local_a8 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    pbVar9 = *(byte **)(*(long *)(param_2 + 0x50) + 8);
    pbVar10 = *(byte **)(pbVar9 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      pbVar10 = pbVar9 + 1;
    }
    puVar4 = (ulong *)std::string::append((char *)&local_a8,(ulong)pbVar10);
    uStack_88 = puVar4[1];
    local_80 = puVar4[2];
    local_90 = *puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar5 = (undefined8 *)std::string::append((char *)&local_90);
    puStack_70 = (undefined1 *)puVar5[1];
    local_68 = puVar5[2];
    local_78 = (byte *)*puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_00b89f94(param_1,uVar11,param_3,2,&local_78);
    uVar7 = local_68;
    if ((((ulong)local_78 & 1) != 0) && (local_68 != 0)) {
      lVar8 = tpidr_el0;
      plVar12 = *(long **)(lVar8 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,uVar7,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,uVar7,0,8);
      }
    }
    uVar7 = local_80;
    if (((local_90 & 1) != 0) && (local_80 != 0)) {
      lVar8 = tpidr_el0;
      plVar12 = *(long **)(lVar8 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,uVar7,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,uVar7,0,8);
      }
    }
    uVar7 = local_98;
    if (((local_a8 & 1) != 0) && (local_98 != 0)) {
      lVar8 = tpidr_el0;
      plVar12 = *(long **)(lVar8 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,uVar7,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,uVar7,0,8);
      }
    }
    if (((local_c0[0] & 1) != 0) && (local_b0 != 0)) {
      lVar8 = tpidr_el0;
      plVar12 = *(long **)(lVar8 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,local_b0,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,local_b0,0,8);
      }
    }
    iVar3 = *(int *)(param_2 + 0x3c);
  }
  if (iVar3 == 10) {
    FUN_00b8a120(param_1,*(undefined8 *)(param_2 + 8),param_3,2,
                 "Groups are not supported in proto3 syntax.");
  }
  return;
}



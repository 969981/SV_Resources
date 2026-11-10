/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c3caf8; name: FUN_00c3caf8
 */


undefined8 FUN_00c3caf8(long param_1,string *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  string sVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  string *psVar10;
  void *__s1;
  string *__s2;
  long *plVar11;
  byte local_90 [16];
  long local_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  
  bVar2 = *(byte *)(param_1 + 0x30);
  uVar9 = (ulong)(bVar2 >> 1);
  __n = uVar9;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x38);
  }
  sVar3 = *param_2;
  sVar1 = (ulong)((byte)sVar3 >> 1);
  if (((byte)sVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x40);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x31);
    }
    __s2 = *(string **)(param_2 + 0x10);
    if (((byte)sVar3 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        psVar10 = (string *)(param_1 + 0x31);
        do {
          if (*psVar10 != *__s2) goto LAB_00c3cb9c;
          uVar9 = uVar9 - 1;
          psVar10 = psVar10 + 1;
          __s2 = __s2 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00c3cb9c;
    FUN_00c2f698(param_1 + 0x28);
    uVar6 = 1;
  }
  else {
LAB_00c3cb9c:
    std::operator+("Expected \"",param_2);
    puVar5 = (ulong *)std::string::append((char *)local_90);
    uStack_70 = puVar5[1];
    local_68 = puVar5[2];
    local_78 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar9 = *(ulong *)(param_1 + 0x40);
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      uVar9 = param_1 + 0x31;
    }
    puVar5 = (ulong *)std::string::append((char *)&local_78,uVar9);
    uStack_58 = puVar5[1];
    local_50 = puVar5[2];
    local_60 = *puVar5;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5 = (ulong *)std::string::append((char *)&local_60);
    uStack_40 = puVar5[1];
    local_38 = puVar5[2];
    local_48 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_48);
    uVar9 = local_38;
    if (((local_48 & 1) != 0) && (local_38 != 0)) {
      lVar8 = tpidr_el0;
      plVar11 = *(long **)(lVar8 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar9,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,uVar9,0,8);
      }
    }
    uVar9 = local_50;
    if (((local_60 & 1) != 0) && (local_50 != 0)) {
      lVar8 = tpidr_el0;
      plVar11 = *(long **)(lVar8 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar9,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,uVar9,0,8);
      }
    }
    uVar9 = local_68;
    if (((local_78 & 1) != 0) && (local_68 != 0)) {
      lVar8 = tpidr_el0;
      plVar11 = *(long **)(lVar8 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar9,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,uVar9,0,8);
      }
    }
    if (((local_90[0] & 1) != 0) && (local_80 != 0)) {
      lVar8 = tpidr_el0;
      plVar11 = *(long **)(lVar8 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,local_80,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,local_80,0,8);
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}



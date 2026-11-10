/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b8160c; name: FUN_00b8160c
 */


void FUN_00b8160c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  string *psVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ushort local_58;
  undefined1 local_56;
  long local_48;
  
  puVar1 = PTR_DAT_047dabb0;
  psVar8 = (string *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  if (*(string **)(param_2 + 0x18) == *(string **)puVar1) {
    FUN_00b6eb88();
  }
  else {
    std::string::operator=(*(string **)(param_2 + 0x18),psVar8);
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 7);
  *(uint *)(param_2 + 0x10) = uVar3 | 2;
  *(undefined4 *)(param_2 + 0x20) = uVar4;
  if (*(char *)(param_1 + 4) != '\0') {
    psVar8 = (string *)param_1[5];
    *(uint *)(param_2 + 0x10) = uVar3 | 0x102;
    if (*(string **)(param_2 + 0x48) == *(string **)puVar1) {
      FUN_00b6eb88();
    }
    else {
      std::string::operator=(*(string **)(param_2 + 0x48),psVar8);
    }
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 8);
  *(uint *)(param_2 + 0x10) = uVar3 | 4;
  *(undefined4 *)(param_2 + 0x24) = uVar4;
  uVar4 = *(undefined4 *)((long)param_1 + 0x3c);
  uVar11 = uVar3 | 0xc;
  *(uint *)(param_2 + 0x10) = uVar11;
  *(undefined4 *)(param_2 + 0x38) = uVar4;
  if (*(char *)((long)param_1 + 0x44) != '\0') {
    if (*(char *)(param_1[10] + 0x29) == '\0') {
      *(uint *)(param_2 + 0x10) = uVar3 | 0x2c;
      local_58 = 0x2e02;
      local_56 = 0;
      if (*(string **)(param_2 + 0x30) == *(string **)puVar1) {
        FUN_00b6eb88();
      }
      else {
        std::string::operator=(*(string **)(param_2 + 0x30),(string *)&local_58);
      }
      lVar10 = local_48;
      if (((local_58 & 1) != 0) && (local_48 != 0)) {
        lVar12 = tpidr_el0;
        plVar14 = *(long **)(lVar12 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(lVar12 + 0x30) = DAT_04859430;
        }
        uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar7 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar10,0,8);
        }
        else {
          FUN_00c48fe8(plVar14,lVar10,0,8);
        }
      }
      uVar11 = *(uint *)(param_2 + 0x10);
    }
    plVar14 = (long *)(param_2 + 0x30);
    pcVar6 = (char *)*plVar14;
    *(uint *)(param_2 + 0x10) = uVar11 | 0x20;
    if (pcVar6 == *(char **)puVar1) {
      FUN_00b6eb88(plVar14);
      pcVar6 = (char *)*plVar14;
    }
    pbVar9 = *(byte **)(param_1[10] + 8);
    pbVar2 = *(byte **)(pbVar9 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      pbVar2 = pbVar9 + 1;
    }
    std::string::append(pcVar6,(ulong)pbVar2);
  }
  if (*(int *)(&DAT_03d5c718 + (ulong)*(uint *)((long)param_1 + 0x3c) * 4) == 8) {
    if (*(char *)(param_1[0xe] + 0x29) == '\0') {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
      local_58 = 0x2e02;
      local_56 = 0;
      if (*(string **)(param_2 + 0x28) == *(string **)puVar1) {
        FUN_00b6eb88();
      }
      else {
        std::string::operator=(*(string **)(param_2 + 0x28),(string *)&local_58);
      }
      lVar10 = local_48;
      if (((local_58 & 1) != 0) && (local_48 != 0)) {
        lVar12 = tpidr_el0;
        plVar14 = *(long **)(lVar12 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(lVar12 + 0x30) = DAT_04859430;
        }
        uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar7 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar10,0,8);
        }
        else {
          FUN_00c48fe8(plVar14,lVar10,0,8);
        }
      }
    }
    plVar14 = (long *)(param_2 + 0x28);
    pcVar6 = (char *)*plVar14;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
    if (pcVar6 == *(char **)puVar1) {
      FUN_00b6eb88(plVar14);
      pcVar6 = (char *)*plVar14;
    }
    lVar10 = param_1[0xe];
  }
  else {
    if (*(int *)(&DAT_03d5c718 + (ulong)*(uint *)((long)param_1 + 0x3c) * 4) != 10)
    goto LAB_00b818f8;
    lVar10 = param_1[0xd];
    if (*(char *)(lVar10 + 0x28) != '\0') {
      *(undefined4 *)(param_2 + 0x38) = 1;
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) & 0xfffffff7;
      lVar10 = param_1[0xd];
    }
    if (*(char *)(lVar10 + 0x29) == '\0') {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
      local_58 = 0x2e02;
      local_56 = 0;
      if (*(string **)(param_2 + 0x28) == *(string **)puVar1) {
        FUN_00b6eb88();
      }
      else {
        std::string::operator=(*(string **)(param_2 + 0x28),(string *)&local_58);
      }
      lVar10 = local_48;
      if (((local_58 & 1) != 0) && (local_48 != 0)) {
        lVar12 = tpidr_el0;
        plVar14 = *(long **)(lVar12 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(lVar12 + 0x30) = DAT_04859430;
        }
        uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar7 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar10,0,8);
        }
        else {
          FUN_00c48fe8(plVar14,lVar10,0,8);
        }
      }
    }
    plVar14 = (long *)(param_2 + 0x28);
    pcVar6 = (char *)*plVar14;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
    if (pcVar6 == *(char **)puVar1) {
      FUN_00b6eb88(plVar14);
      pcVar6 = (char *)*plVar14;
    }
    lVar10 = param_1[0xd];
  }
  pbVar9 = *(byte **)(lVar10 + 8);
  pbVar2 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar2 = pbVar9 + 1;
  }
  std::string::append(pcVar6,(ulong)pbVar2);
LAB_00b818f8:
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_00b7f18c(&local_58,param_1,0);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x40;
    if (*(string **)(param_2 + 0x40) == *(string **)puVar1) {
      FUN_00b6eb88();
    }
    else {
      std::string::operator=(*(string **)(param_2 + 0x40),(string *)&local_58);
    }
    if (((local_58 & 1) != 0) && (local_48 != 0)) {
      lVar10 = tpidr_el0;
      plVar14 = *(long **)(lVar10 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar14 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,local_48,0,8);
      }
      else {
        FUN_00c48fe8(plVar14,local_48,0,8);
      }
    }
  }
  lVar10 = param_1[0xb];
  if ((lVar10 != 0) && (*(char *)((long)param_1 + 0x44) == '\0')) {
    lVar12 = *(long *)(*(long *)(lVar10 + 0x10) + 0x40);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x80;
    *(int *)(param_2 + 0x3c) = (int)((ulong)(lVar10 - lVar12) >> 4) * -0x55555555;
  }
  puVar1 = PTR_DAT_047dac58;
  lVar12 = param_1[0xf];
  lVar10 = *(long *)PTR_DAT_047dac58;
  if (lVar10 == 0) {
    FUN_00bb5d70();
    lVar10 = *(long *)puVar1;
  }
  if (lVar12 != lVar10) {
    plVar14 = *(long **)(param_2 + 0x50);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x200;
    if (plVar14 == (long *)0x0) {
      lVar10 = tpidr_el0;
      plVar14 = *(long **)(lVar10 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar14 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      plVar14 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x60,8);
      puVar1 = PTR_DAT_047dac60 + 0x10;
      plVar14[2] = 0;
      plVar14[3] = 0;
      plVar14[4] = 0;
      *(undefined4 *)(plVar14 + 0xb) = 0;
      plVar14[5] = 0;
      plVar14[6] = 0;
      plVar14[7] = 0;
      plVar14[8] = 0;
      *plVar14 = (long)puVar1;
      plVar14[1] = (long)(plVar14 + 2);
      plVar14[9] = 0;
      plVar14[10] = 0;
      *(long **)(param_2 + 0x50) = plVar14;
    }
    plVar13 = (long *)param_1[0xf];
    if (plVar13 != plVar14) {
      (**(code **)(*plVar14 + 0x38))(plVar14);
      FUN_00bc60dc(plVar14,plVar13);
    }
  }
  return;
}



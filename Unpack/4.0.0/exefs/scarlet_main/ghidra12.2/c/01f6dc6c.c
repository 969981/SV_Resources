/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6dc6c; name: FUN_01f6dc6c
 */


void FUN_01f6dc6c(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  long *plVar3;
  bool bVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_b0;
  long *local_a8;
  undefined1 auStack_a0 [80];
  char local_50 [4];
  undefined8 local_4c;
  undefined1 auStack_40 [16];
  
  plVar8 = (long *)(param_1 + 0x50);
  if (*plVar8 != 0) {
    FUN_01f657cc();
  }
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 1:
    if ((*plVar8 == 0) || (uVar5 = FUN_01f6dab4(), (uVar5 & 1) == 0)) break;
    uVar5 = FUN_01f6e014(*plVar8);
    bVar4 = (uVar5 & 1) == 0;
    uVar6 = 2;
LAB_01f6ddbc:
    if (bVar4) {
      uVar6 = 0xb;
    }
    goto LAB_01f6de78;
  case 2:
    if (*(int *)(*plVar8 + 0x24) != 5) {
      if (*(int *)(*plVar8 + 0x24) == 4) {
        *(undefined1 *)(param_1 + 0x35) = 1;
        *(undefined4 *)(param_1 + 0x30) = 3;
        return;
      }
      return;
    }
    break;
  case 3:
    lVar7 = FUN_01f6e034(*plVar8);
    if (lVar7 < 3) {
      uVar5 = FUN_01f6e120(*plVar8);
      if ((uVar5 & 1) == 0) {
        if (*(char *)(param_1 + 0x38) != '\0') {
          *(undefined1 *)(param_1 + 0x38) = 0;
        }
        goto LAB_01f6dcd8;
      }
      FUN_01f6e064(*(undefined8 *)(param_1 + 0x50));
      FUN_01f6e0bc(*(undefined8 *)(param_1 + 0x50),0);
      cVar2 = *(char *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
joined_r0x01f6df84:
      if (cVar2 == '\0') {
        *(undefined1 *)(param_1 + 0x38) = 1;
      }
    }
    else {
      lVar7 = FUN_01f6e04c();
      uVar5 = FUN_01f6570c(*plVar8);
      if (lVar7 == 0) {
        FUN_01f6e064(*(undefined8 *)(param_1 + 0x50));
        FUN_01f65760(*(undefined8 *)(param_1 + 0x50));
        cVar2 = *(char *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x40) = 1;
        *(undefined8 *)(param_1 + 0x48) = 0x1e;
        goto joined_r0x01f6df84;
      }
      if (0 < (long)uVar5) {
        *(undefined4 *)(param_1 + 0x40) = 1;
        *(ulong *)(param_1 + 0x48) = uVar5 / 0x3c + 1;
        if (*(char *)(param_1 + 0x38) == '\0') {
          *(undefined1 *)(param_1 + 0x38) = 1;
        }
        goto LAB_01f6dcd8;
      }
      FUN_01f6e064(*(undefined8 *)(param_1 + 0x50));
      FUN_01f6e08c(*(undefined8 *)(param_1 + 0x50));
      FUN_01f6e0bc(*(undefined8 *)(param_1 + 0x50),0);
      FUN_01f6e0f0(*(undefined8 *)(param_1 + 0x50),2);
      if (*(char *)(param_1 + 0x38) != '\0') {
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
    }
    uVar6 = 4;
    goto LAB_01f6de78;
  case 4:
    if ((*plVar8 != 0) && (uVar5 = FUN_01f6dab4(), (uVar5 & 1) != 0)) {
      uVar5 = FUN_01f6e140(*plVar8);
      bVar4 = (uVar5 & 1) == 0;
      uVar6 = 5;
      goto LAB_01f6ddbc;
    }
    break;
  case 5:
  case 7:
  case 9:
    if (*(int *)(*plVar8 + 0x24) != 5) {
      if (*(int *)(*plVar8 + 0x24) != 4) {
        return;
      }
LAB_01f6dcd8:
      uVar6 = 10;
      goto LAB_01f6de78;
    }
    break;
  case 6:
    if (((*plVar8 != 0) && (uVar5 = FUN_01f6dab4(), (uVar5 & 1) != 0)) &&
       (uVar5 = FUN_01f6e164(*plVar8,1), (uVar5 & 1) != 0)) {
      lVar7 = FUN_01f6e034(*plVar8);
      if (lVar7 == 2) {
        FUN_01f6e0bc(*plVar8,1);
      }
      uVar5 = FUN_01f6e140(*plVar8);
      bVar4 = (uVar5 & 1) == 0;
      uVar6 = 7;
      goto LAB_01f6ddbc;
    }
    break;
  case 8:
    if ((*plVar8 != 0) && (uVar5 = FUN_01f6dab4(), (uVar5 & 1) != 0)) {
      lVar7 = FUN_01f6e034(*plVar8);
      uVar1 = 0xfffffffffffffffe;
      if (lVar7 < 2) {
        uVar1 = 0xffffffffffffffff;
      }
      uVar5 = FUN_01f6e164(*plVar8,uVar1);
      if (((uVar5 & 1) != 0) && (uVar5 = FUN_01f6e0bc(*plVar8,0), (uVar5 & 1) != 0)) {
        uVar5 = FUN_01f6e140(*plVar8);
        bVar4 = (uVar5 & 1) == 0;
        uVar6 = 9;
        goto LAB_01f6ddbc;
      }
    }
    break;
  case 10:
    if (*plVar8 != 0) {
      FUN_01f6e064();
    }
    *(undefined1 *)(param_1 + 0x34) = 1;
    goto LAB_01f6df54;
  case 0xb:
    lVar7 = *plVar8;
    if (lVar7 != 0) {
      local_50[0] = '\0';
      if (*(char *)(lVar7 + 0x70) == '\0') {
        FUN_01c3e2e8();
      }
      else {
        local_4c = *(undefined8 *)(lVar7 + 0x74);
        local_50[0] = '\x01';
        FUN_01f6e19c(&local_b0,(ulong)local_50 | 4);
        FUN_019dba7c(auStack_a0,&local_b0);
        FUN_0135d328(auStack_40,local_b0,0);
        plVar3 = local_a8;
        local_a8 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        FUN_0135d2ec(auStack_40);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 8))();
        }
        FUN_01c3d63c(auStack_a0);
        FUN_019ab5b0(auStack_a0);
      }
      FUN_01f6e064(*plVar8);
    }
    *(undefined1 *)(param_1 + 0x34) = 0;
LAB_01f6df54:
    *(undefined4 *)(param_1 + 0x30) = 0;
  default:
    goto switchD_01f6dcbc_default;
  }
  uVar6 = 0xb;
LAB_01f6de78:
  *(undefined4 *)(param_1 + 0x30) = uVar6;
switchD_01f6dcbc_default:
  return;
}



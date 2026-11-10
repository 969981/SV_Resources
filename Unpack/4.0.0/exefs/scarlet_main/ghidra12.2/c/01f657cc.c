/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f657cc; name: FUN_01f657cc
 */


void FUN_01f657cc(char *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [96];
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
    switch(*(undefined4 *)(param_1 + 0x28)) {
    case 0:
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar5 == 0)) break;
      FUN_01f65b74(auStack_d0,lVar5 + -0x28,"penalty");
      FUN_01f65c10(param_1 + 0x40,auStack_d0);
      FUN_01f656a4(auStack_d0);
LAB_01f659ac:
      uVar3 = 1;
      goto LAB_01f65b1c;
    case 1:
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar5 != 0)) {
        if (*(char *)(lVar5 + 0x18) == '\0') {
          return;
        }
        uVar2 = *(undefined8 *)(lVar5 + 0x1c);
        if (param_1[0x70] == '\0') {
          *(undefined8 *)(param_1 + 0x74) = uVar2;
          param_1[0x70] = '\x01';
        }
        else {
          *(undefined8 *)(param_1 + 0x74) = uVar2;
        }
        iVar4 = (int)((ulong)uVar2 >> 0x20);
        if (iVar4 == 0) {
LAB_01f65b10:
          uVar3 = 2;
          goto LAB_01f65b1c;
        }
        if (iVar4 == 5) {
          param_1[8] = '\0';
          param_1[9] = '\0';
          param_1[10] = '\0';
          param_1[0xb] = '\0';
          param_1[0xc] = '\0';
          param_1[0xd] = '\0';
          param_1[0xe] = '\0';
          param_1[0xf] = '\0';
          *param_1 = '\x01';
          param_1[0x18] = '\0';
          param_1[0x19] = '\0';
          param_1[0x1a] = '\0';
          param_1[0x1b] = '\0';
          param_1[0x1c] = '\0';
          param_1[0x1d] = '\0';
          param_1[0x1e] = '\0';
          param_1[0x1f] = '\0';
          param_1[0x10] = '\x01';
          param_1[0x20] = '\x01';
          param_1[0x21] = '\0';
          param_1[0x24] = '\x01';
          param_1[0x25] = '\0';
          param_1[0x26] = '\0';
          param_1[0x27] = '\0';
          param_1[0x28] = '\0';
          param_1[0x29] = '\0';
          param_1[0x2a] = '\0';
          param_1[0x2b] = '\0';
          return;
        }
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar5 != 0)) {
        lVar5 = lVar5 + -0x28;
        FUN_01f65da4(auStack_d0,lVar5);
        uVar2 = FUN_01f65db0(auStack_90,"disconnect_count");
        *(undefined8 *)(param_1 + 8) = uVar2;
        *param_1 = '\x01';
        FUN_01e73d08(auStack_d0);
        FUN_01f65da4(auStack_d0,lVar5);
        uVar2 = FUN_01f65db0(auStack_90,"penalty_start_at");
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        param_1[0x10] = '\x01';
        FUN_01e73d08(auStack_d0);
        FUN_01f65da4(auStack_d0,lVar5);
        bVar1 = FUN_01f65edc(auStack_90,"warning_flag");
        param_1[0x21] = bVar1 & 1;
        param_1[0x20] = '\x01';
        FUN_01e73d08(auStack_d0);
        uVar6 = FUN_01f66010(param_1);
        if ((uVar6 & 1) == 0) {
          param_1[8] = '\0';
          param_1[9] = '\0';
          param_1[10] = '\0';
          param_1[0xb] = '\0';
          param_1[0xc] = '\0';
          param_1[0xd] = '\0';
          param_1[0xe] = '\0';
          param_1[0xf] = '\0';
          *param_1 = '\x01';
          param_1[0x18] = '\0';
          param_1[0x19] = '\0';
          param_1[0x1a] = '\0';
          param_1[0x1b] = '\0';
          param_1[0x1c] = '\0';
          param_1[0x1d] = '\0';
          param_1[0x1e] = '\0';
          param_1[0x1f] = '\0';
          param_1[0x10] = '\x01';
          param_1[0x20] = '\x01';
          param_1[0x21] = '\0';
          param_1[0x24] = '\x01';
          param_1[0x25] = '\0';
          param_1[0x26] = '\0';
          param_1[0x27] = '\0';
          param_1[0x28] = '\0';
          param_1[0x29] = '\0';
          param_1[0x2a] = '\0';
          param_1[0x2b] = '\0';
          return;
        }
        goto switchD_01f65970_caseD_2;
      }
      break;
    case 3:
switchD_01f65970_caseD_3:
      uVar3 = 5;
LAB_01f659b8:
      *(undefined4 *)(param_1 + 0x24) = uVar3;
    default:
      goto switchD_01f65804_caseD_3;
    }
    break;
  case 1:
    switch(*(undefined4 *)(param_1 + 0x28)) {
    case 0:
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar5 != 0)) {
        memset(auStack_d0,0,0xa0);
        FUN_01e73f00(auStack_d0);
        if ((*param_1 == '\0') || (param_1[0x10] == '\0')) {
          uVar3 = 3;
        }
        else {
          thunk_FUN_01f70094(auStack_d0,"disconnect_count",*(undefined8 *)(param_1 + 8));
          thunk_FUN_01f70094(auStack_d0,"penalty_start_at",*(undefined8 *)(param_1 + 0x18));
          FUN_01f660a4(auStack_d0,"warning_flag",param_1[0x21]);
          FUN_01f660ac(auStack_e0,lVar5 + -0x28,"penalty",auStack_d0);
          FUN_01f66158(param_1 + 0x50,auStack_e0);
          FUN_01e7382c(auStack_e0);
          uVar3 = 1;
        }
        *(undefined4 *)(param_1 + 0x28) = uVar3;
        FUN_01e7393c(auStack_d0);
        return;
      }
      break;
    case 1:
      lVar5 = *(long *)(param_1 + 0x50);
joined_r0x01f65ae4:
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
        if (*(char *)(lVar5 + 0x18) == '\0') {
          return;
        }
        uVar6 = *(ulong *)(lVar5 + 0x1c);
        if (param_1[0x70] == '\0') {
          *(ulong *)(param_1 + 0x74) = uVar6;
          param_1[0x70] = '\x01';
        }
        else {
          *(ulong *)(param_1 + 0x74) = uVar6;
        }
        if (uVar6 >> 0x20 == 0) goto LAB_01f65b10;
      }
      break;
    case 2:
switchD_01f65970_caseD_2:
      uVar3 = 4;
      goto LAB_01f659b8;
    case 3:
      goto switchD_01f65970_caseD_3;
    default:
      goto switchD_01f65804_caseD_3;
    }
    break;
  case 2:
    switch(*(undefined4 *)(param_1 + 0x28)) {
    case 0:
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar5 != 0)) {
        FUN_01f662ec(auStack_d0,lVar5 + -0x28,"penalty");
        FUN_01f66388(param_1 + 0x60,auStack_d0);
        FUN_01f6563c(auStack_d0);
        goto LAB_01f659ac;
      }
      break;
    case 1:
      lVar5 = *(long *)(param_1 + 0x60);
      goto joined_r0x01f65ae4;
    case 2:
      goto switchD_01f65970_caseD_2;
    case 3:
      goto switchD_01f65970_caseD_3;
    default:
      goto switchD_01f65804_caseD_3;
    }
    break;
  default:
    goto switchD_01f65804_caseD_3;
  case 4:
  case 5:
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    goto switchD_01f65804_caseD_3;
  }
  uVar3 = 3;
LAB_01f65b1c:
  *(undefined4 *)(param_1 + 0x28) = uVar3;
switchD_01f65804_caseD_3:
  return;
}



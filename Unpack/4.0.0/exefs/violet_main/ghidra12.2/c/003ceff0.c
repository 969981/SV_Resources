/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ceff0; name: FUN_003ceff0
 */


undefined8 FUN_003ceff0(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  long lVar10;
  
  piVar9 = *(int **)(param_1 + 8);
  uVar4 = *(uint *)(*(long *)(piVar9 + 0x30) + 0x60);
  if ((((uVar4 >> 3 & 1) != 0) || (*piVar9 < 0x304)) || (*piVar9 == 0x10000)) {
    switch(*(undefined4 *)(param_1 + 0x5c)) {
    case 0:
      return 2;
    case 1:
      if (*(int *)(param_1 + 0x60) == 0x13) {
        *(undefined8 *)(param_1 + 0x5c) = DAT_03cb5650;
        return 1;
      }
      uVar5 = FUN_003cb670(param_1);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      return 2;
    default:
      uVar5 = 0x25c;
      uVar6 = 0x235;
      goto LAB_003cf328;
    case 0x13:
      break;
    case 0x14:
      if ((((uVar4 >> 3 & 1) != 0) && (*(int *)(*(long *)(param_1 + 0xb0) + 0x108) == 0)) &&
         (uVar4 = FUN_003b5740(param_1), (uVar4 >> 0xd & 1) != 0)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x15;
        return 1;
      }
      if (((*(int *)(param_1 + 0x890) != 0) || (*(long *)(*(long *)(param_1 + 0xa8) + 0x198) == 0))
         || (*(long *)(*(long *)(param_1 + 0xa8) + 0x220) == 0)) goto switchD_003cf044_caseD_14;
      break;
    case 0x15:
    case 0x1a:
      goto switchD_003cf044_caseD_2e;
    case 0x16:
      if (*(int *)(param_1 + 200) != 0) {
        if (*(int *)(param_1 + 0x740) != 0) goto LAB_003cf120;
        goto switchD_003cf08c_caseD_21;
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
      uVar2 = *(uint *)(lVar10 + 0x20);
      if ((uVar2 & 0x54) == 0) goto LAB_003cf540;
      uVar1 = *(uint *)(lVar10 + 0x1c);
      if (((uVar1 & 6) == 0) &&
         ((((uVar1 & 0x48) == 0 || (*(long *)(*(long *)(param_1 + 0x550) + 0x200) == 0)) &&
          ((uVar1 & 0x1a0) == 0)))) {
        uVar1 = *(uint *)(param_1 + 0x620);
        if ((((uVar1 & 1) != 0) &&
            ((((uVar4 >> 3 & 1) != 0 || ((uVar1 >> 3 & 1) == 0)) ||
             ((*piVar9 < 0x304 || ((*piVar9 == 0x10000 || (*(int *)(param_1 + 0x898) == 3)))))))) &&
           ((((uVar1 >> 2 & 1) == 0 || (*(int *)(param_1 + 0x8b0) < 1)) &&
            (((uVar2 & 0x50) == 0 && ((uVar2 & 4) == 0 || (uVar1 & 2) != 0)))))) goto LAB_003cf4d8;
        goto switchD_003cf08c_caseD_19;
      }
      goto LAB_003cf164;
    case 0x17:
      if (*(int *)(param_1 + 0x71c) != 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0x22;
        return 1;
      }
    case 0x22:
      uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x1c);
      if ((((uVar2 & 6) != 0) ||
          (((uVar2 & 0x48) != 0 && (*(long *)(*(long *)(param_1 + 0x550) + 0x200) != 0)))) ||
         ((uVar2 & 0x1a0) != 0)) {
LAB_003cf164:
        *(undefined4 *)(param_1 + 0x5c) = 0x18;
        return 1;
      }
    case 0x18:
      goto switchD_003cf08c_caseD_18;
    case 0x19:
      goto switchD_003cf08c_caseD_19;
    case 0x20:
      if (*(int *)(param_1 + 200) == 0) {
        bVar3 = *(int *)(param_1 + 0x740) == 0;
        uVar7 = 0x21;
        uVar8 = 0x23;
        goto LAB_003cf3f4;
      }
      break;
    case 0x21:
switchD_003cf08c_caseD_21:
      *(undefined4 *)(param_1 + 0x5c) = 0x23;
      return 1;
    case 0x23:
      goto switchD_003cf044_caseD_28;
    case 0x24:
      if (*(int *)(param_1 + 200) != 0) {
        return 2;
      }
    }
switchD_003cf044_caseD_2a:
    *(undefined4 *)(param_1 + 0x5c) = 1;
    return 1;
  }
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 1:
    if (*(int *)(param_1 + 0x894) != -1) {
      *(undefined4 *)(param_1 + 0x5c) = 0x2a;
      return 1;
    }
    if (*(int *)(param_1 + 0x898) != 3) {
      if (*(int *)(param_1 + 0x744) < 1) {
        return 2;
      }
LAB_003cf120:
      *(undefined4 *)(param_1 + 0x5c) = 0x21;
      return 1;
    }
    break;
  default:
    uVar5 = 600;
    uVar6 = 0x1ac;
LAB_003cf328:
    FUN_003c3950(param_1,0x50,uVar5,0x44,"external/openssl/ssl/statem/statem_srvr.c",uVar6);
    return 0;
  case 0x14:
switchD_003cf044_caseD_14:
    *(undefined4 *)(param_1 + 0x5c) = 0x16;
    return 1;
  case 0x16:
    if ((*(byte *)(param_1 + 0x696) >> 4 & 1) == 0) {
      if (*(int *)(param_1 + 0x5a0) == 1) goto switchD_003cf044_caseD_24;
    }
    else if (*(int *)(param_1 + 0x5a0) != 2) goto switchD_003cf08c_caseD_21;
    *(undefined4 *)(param_1 + 0x5c) = 0x25;
    return 1;
  case 0x17:
    *(undefined4 *)(param_1 + 0x5c) = 0x28;
    return 1;
  case 0x19:
    if (*(int *)(param_1 + 0x898) == 3) {
      *(undefined4 *)(param_1 + 0x898) = 4;
      *(undefined4 *)(param_1 + 0x5c) = 1;
      return 1;
    }
LAB_003cf540:
    *(undefined4 *)(param_1 + 0x5c) = 0x17;
    return 1;
  case 0x20:
    if (*(int *)(param_1 + 0x898) == 4) {
      *(undefined4 *)(param_1 + 0x898) = 2;
    }
    else if (*(int *)(param_1 + 0x740) == 0) goto switchD_003cf044_caseD_2a;
    uVar8 = 0x21;
    if (*(ulong *)(param_1 + 0x1958) <= *(ulong *)(param_1 + 0x1960)) {
      uVar8 = 1;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar8;
    return 1;
  case 0x21:
    if (((*(long *)(*(long *)(param_1 + 0xa8) + 0x198) != 0) &&
        (*(long *)(*(long *)(param_1 + 0xa8) + 0x220) != 0)) && (0 < *(int *)(param_1 + 0x744))) {
      return 1;
    }
    if ((*(int *)(param_1 + 200) == 0) &&
       (*(ulong *)(param_1 + 0x1960) < *(ulong *)(param_1 + 0x1958))) {
      return 1;
    }
    goto switchD_003cf044_caseD_2a;
  case 0x23:
    bVar3 = *(int *)(param_1 + 0x5a0) == 1;
    uVar7 = 0x25;
    uVar8 = 0x2e;
LAB_003cf3f4:
    if (!bVar3) {
      uVar8 = uVar7;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar8;
    return 1;
  case 0x24:
switchD_003cf044_caseD_24:
    *(undefined4 *)(param_1 + 0x5c) = 0x2e;
    return 1;
  case 0x25:
    if (*(int *)(param_1 + 200) != 0) goto switchD_003cf044_caseD_28;
    uVar4 = *(uint *)(param_1 + 0x620);
    if (((((uVar4 & 1) == 0) || (((uVar4 >> 3 & 1) != 0 && (*(int *)(param_1 + 0x898) != 3)))) ||
        (((uVar4 >> 2 & 1) != 0 && (0 < *(int *)(param_1 + 0x8b0))))) ||
       ((uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20), (uVar2 & 0x50) != 0
        || ((uVar2 & 4) != 0 && (uVar4 & 2) == 0)))) goto LAB_003cf540;
    break;
  case 0x28:
switchD_003cf044_caseD_28:
    *(undefined4 *)(param_1 + 0x5c) = 0x24;
    return 1;
  case 0x2a:
  case 0x2c:
    goto switchD_003cf044_caseD_2a;
  case 0x2e:
switchD_003cf044_caseD_2e:
    return 2;
  }
  goto LAB_003cf4d8;
switchD_003cf08c_caseD_18:
  uVar2 = *(uint *)(param_1 + 0x620);
  if (((((uVar2 & 1) == 0) ||
       ((((uVar4 >> 3 & 1) == 0 && ((uVar2 >> 3 & 1) != 0)) &&
        ((0x303 < *piVar9 && ((*piVar9 != 0x10000 && (*(int *)(param_1 + 0x898) != 3)))))))) ||
      (((uVar2 >> 2 & 1) != 0 && (0 < *(int *)(param_1 + 0x8b0))))) ||
     ((uVar4 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20), (uVar4 & 0x50) != 0
      || ((uVar4 & 4) != 0 && (uVar2 & 2) == 0)))) {
switchD_003cf08c_caseD_19:
    *(undefined4 *)(param_1 + 0x5c) = 0x1a;
    return 1;
  }
LAB_003cf4d8:
  *(undefined4 *)(param_1 + 0x5c) = 0x19;
  return 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ced10; name: FUN_003ced10
 */


undefined8 FUN_003ced10(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60);
  if ((((uVar1 >> 3 & 1) != 0) || (iVar2 = **(int **)(param_1 + 2), iVar2 < 0x304)) ||
     (iVar2 == 0x10000)) {
    switch(param_1[0x17]) {
    case 0:
    case 1:
    case 0x15:
      if (param_2 == 1) {
LAB_003ceda4:
        param_1[0x17] = 0x14;
        return 1;
      }
      break;
    case 0x1a:
      if (param_2 == 0x10) {
        if (*(int *)(*(long *)(param_1 + 0x2a) + 0x2a0) != 0) {
          if (*param_1 != 0x300) goto switchD_003ced5c_caseD_2;
          if ((~param_1[0x188] & 3U) == 0) {
            FUN_003c3950(param_1,0x28,0x1a2,199,"external/openssl/ssl/statem/statem_srvr.c",0xc9);
            return 0;
          }
        }
LAB_003cee18:
        param_1[0x17] = 0x1c;
        return 1;
      }
      if ((param_2 == 0xb) && (*(int *)(*(long *)(param_1 + 0x2a) + 0x2a0) != 0)) goto LAB_003cef74;
      break;
    case 0x1b:
      if (param_2 == 0x10) goto LAB_003cee18;
      break;
    case 0x1c:
      if ((*(long *)(*(long *)(param_1 + 0x174) + 0x1b8) == 0) || (param_1[0x1d] != 0))
      goto switchD_003ced98_caseD_1d;
      if (param_2 == 0xf) goto LAB_003cefc0;
      break;
    case 0x1d:
    case 0x24:
switchD_003ced98_caseD_1d:
      if (param_2 == 0x101) {
        param_1[0x17] = 0x1f;
        return 1;
      }
      goto switchD_003ced5c_caseD_2;
    case 0x1e:
switchD_003ced98_caseD_1e:
      if (param_2 == 0x14) goto LAB_003cef18;
      break;
    case 0x1f:
      if (*(int *)(*(long *)(param_1 + 0x2a) + 0x3dc) == 0) goto switchD_003ced98_caseD_1e;
      if (param_2 == 0x43) {
        param_1[0x17] = 0x1e;
        return 1;
      }
    }
    if ((param_2 == 0x101) && ((uVar1 >> 3 & 1) != 0)) {
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      param_1[10] = 3;
      uVar3 = FUN_003b35d0();
      FUN_003e8cb0(uVar3,0xf);
      FUN_003e8cd0(uVar3,9);
      return 0;
    }
    goto switchD_003ced5c_caseD_2;
  }
  switch(param_1[0x17]) {
  case 1:
    if (param_1[0x21] == 0xb) goto switchD_003ced5c_caseD_2;
    if (param_2 == 0x18) {
      param_1[0x17] = 0x2c;
      return 1;
    }
    if ((param_2 != 0xb) || (param_1[0x226] != 4)) goto switchD_003ced5c_caseD_2;
    goto LAB_003cef74;
  default:
    goto switchD_003ced5c_caseD_2;
  case 0x1b:
    if (*(long *)(*(long *)(param_1 + 0x174) + 0x1b8) != 0) {
      if (param_2 == 0xf) {
LAB_003cefc0:
        param_1[0x17] = 0x1d;
        return 1;
      }
      goto switchD_003ced5c_caseD_2;
    }
    break;
  case 0x1d:
    break;
  case 0x24:
  case 0x31:
    goto switchD_003ced5c_caseD_24;
  case 0x2e:
    if (param_1[0x168] == 1) {
      if (param_2 == 1) goto LAB_003ceda4;
      goto switchD_003ced5c_caseD_2;
    }
    if ((param_1[0x1f6] == 2) && (*(long *)(param_1 + 0x218) == 0)) {
      if (param_2 == 5) {
        param_1[0x17] = 0x31;
        return 1;
      }
      goto switchD_003ced5c_caseD_2;
    }
switchD_003ced5c_caseD_24:
    if (*(int *)(*(long *)(param_1 + 0x2a) + 0x2a0) != 0) {
      if (param_2 == 0xb) {
LAB_003cef74:
        param_1[0x17] = 0x1b;
        return 1;
      }
      goto switchD_003ced5c_caseD_2;
    }
  }
  if (param_2 == 0x14) {
LAB_003cef18:
    param_1[0x17] = 0x20;
    return 1;
  }
switchD_003ced5c_caseD_2:
  FUN_003c3950(param_1,10,0x1a2,0xf4,"external/openssl/ssl/statem/statem_srvr.c",0x13a);
  return 0;
}



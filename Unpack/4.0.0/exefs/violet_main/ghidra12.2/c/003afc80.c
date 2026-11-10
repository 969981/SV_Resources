/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003afc80; name: FUN_003afc80
 */


undefined8
FUN_003afc80(uint *param_1,long *param_2,long *param_3,int *param_4,undefined8 *param_5,
            undefined8 *param_6,int param_7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  uint local_68 [6];
  
  lVar8 = *(long *)(param_1 + 0x7c);
  if (lVar8 == 0) {
    return 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    FUN_0047e650(&DAT_047f1658,&LAB_003b1f60);
    *param_6 = 0;
    local_68[0] = param_1[0x7a];
    if (DAT_047f1660 != 0) {
      uVar1 = FUN_0047e200(DAT_047f1660,local_68);
      uVar3 = FUN_0047e450(DAT_047f1660,uVar1);
      *param_6 = uVar3;
    }
    if ((param_2 == (long *)0x0) && (param_3 == (long *)0x0)) {
      return 1;
    }
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (param_3 == (long *)0x0) {
    return 0;
  }
  iVar4 = *(int *)(lVar8 + 0x24);
  if (0x7ff < iVar4) {
    if (iVar4 < 0x10000) {
      if (iVar4 < 0x2000) {
        if (iVar4 == 0x800) {
          lVar5 = 0xb;
        }
        else {
          if (iVar4 != 0x1000) goto switchD_003afd5c_caseD_3;
          lVar5 = 0xc;
        }
      }
      else if (iVar4 == 0x2000) {
        lVar5 = 0xd;
      }
      else if (iVar4 == 0x4000) {
        lVar5 = 0xe;
      }
      else {
        if (iVar4 != 0x8000) goto switchD_003afd5c_caseD_3;
        lVar5 = 0xf;
      }
    }
    else if (iVar4 < 0x80000) {
      if (iVar4 == 0x10000) {
        lVar5 = 0x10;
      }
      else if (iVar4 == 0x20000) {
        lVar5 = 0x11;
      }
      else {
        if (iVar4 != 0x40000) goto switchD_003afd5c_caseD_3;
        lVar5 = 0x12;
      }
    }
    else if (iVar4 == 0x80000) {
      lVar5 = 0x13;
    }
    else if (iVar4 == 0x100000) {
      lVar5 = 0x14;
    }
    else {
      if (iVar4 != 0x200000) goto switchD_003afd5c_caseD_3;
      lVar5 = 0x15;
    }
    goto switchD_003afd5c_caseD_1;
  }
  if (0x7f < iVar4) {
    if (iVar4 < 0x200) {
      if (iVar4 == 0x80) {
        lVar5 = 7;
      }
      else {
        if (iVar4 != 0x100) goto switchD_003afd5c_caseD_3;
        lVar5 = 8;
      }
    }
    else if (iVar4 == 0x200) {
      lVar5 = 9;
    }
    else {
      if (iVar4 != 0x400) goto switchD_003afd5c_caseD_3;
      lVar5 = 10;
    }
    goto switchD_003afd5c_caseD_1;
  }
  lVar5 = 0;
  switch(iVar4) {
  case 1:
    break;
  case 2:
    lVar5 = 1;
    break;
  default:
switchD_003afd5c_caseD_3:
    *param_2 = 0;
    iVar4 = *(int *)(lVar8 + 0x28);
    goto joined_r0x003afe50;
  case 4:
    lVar5 = 2;
    break;
  case 8:
    lVar5 = 3;
    break;
  case 0x10:
    lVar5 = 4;
    break;
  case 0x20:
    lVar5 = FUN_00438fc0(0);
    *param_2 = lVar5;
    iVar4 = *(int *)(lVar8 + 0x28);
    goto joined_r0x003afe50;
  case 0x40:
    lVar5 = 6;
  }
switchD_003afd5c_caseD_1:
  *param_2 = (&DAT_047f1728)[lVar5];
  iVar4 = *(int *)(lVar8 + 0x28);
joined_r0x003afe50:
  piVar7 = param_4;
  if (0x7f < iVar4) {
    if (iVar4 == 0x80) {
      lVar5 = 6;
    }
    else if (iVar4 == 0x100) {
      lVar5 = 7;
    }
    else {
      if (iVar4 != 0x200) goto switchD_003aff0c_caseD_3;
      lVar5 = 8;
    }
    goto switchD_003aff0c_caseD_1;
  }
  lVar5 = 0;
  switch(iVar4) {
  case 0:
    lVar5 = 9;
    break;
  case 1:
    break;
  case 2:
    lVar5 = 1;
    break;
  default:
switchD_003aff0c_caseD_3:
    *param_3 = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    piVar7 = (int *)0x0;
    if (*(int *)(lVar8 + 0x28) != 0x40) {
      piVar7 = param_4;
    }
    if (*param_2 == 0) {
      return 0;
    }
    goto LAB_003aff74;
  case 4:
    lVar5 = 2;
    break;
  case 8:
    lVar5 = 3;
    break;
  case 0x10:
    lVar5 = 4;
    break;
  case 0x20:
    lVar5 = 5;
  }
switchD_003aff0c_caseD_1:
  lVar6 = (&DAT_047f1668)[lVar5];
  *param_3 = lVar6;
  if (param_4 != (int *)0x0) {
    *param_4 = (&DAT_0449bcb4)[lVar5];
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = (&DAT_047f16c8)[lVar5];
  }
  if (*param_2 == 0) {
    return 0;
  }
  if (lVar6 == 0) {
LAB_003aff74:
    uVar2 = FUN_0043b160();
    if ((uVar2 >> 0x15 & 1) == 0) {
      return 0;
    }
  }
  if ((piVar7 != (int *)0x0) && (*piVar7 == 0)) {
    return 0;
  }
  if (param_7 != 0) {
    return 1;
  }
  if ((int)*param_1 < 0x301) {
    return 1;
  }
  if ((*param_1 & 0xffffff00) != 0x300) {
    return 1;
  }
  iVar4 = *(int *)(lVar8 + 0x24);
  if (iVar4 == 4) {
    if (*(int *)(lVar8 + 0x28) != 1) {
      return 1;
    }
    lVar5 = FUN_0043d0f0("RC4-HMAC-MD5");
    if (lVar5 != 0) goto LAB_003b0098;
    iVar4 = *(int *)(lVar8 + 0x24);
  }
  if (iVar4 == 0x40) {
    iVar4 = *(int *)(lVar8 + 0x28);
    if (iVar4 == 2) {
      lVar5 = FUN_0043d0f0("AES-128-CBC-HMAC-SHA1");
      if (lVar5 != 0) goto LAB_003b0098;
      iVar4 = *(int *)(lVar8 + 0x24);
      goto LAB_003b0024;
    }
LAB_003b0058:
    if (iVar4 != 0x10) {
      return 1;
    }
    lVar5 = FUN_0043d0f0("AES-128-CBC-HMAC-SHA256");
    if (lVar5 != 0) goto LAB_003b0098;
    iVar4 = *(int *)(lVar8 + 0x24);
LAB_003b0074:
    if (iVar4 != 0x80) {
      return 1;
    }
    iVar4 = *(int *)(lVar8 + 0x28);
  }
  else {
LAB_003b0024:
    if (iVar4 != 0x80) {
LAB_003b004c:
      if (iVar4 == 0x40) {
        iVar4 = *(int *)(lVar8 + 0x28);
        goto LAB_003b0058;
      }
      goto LAB_003b0074;
    }
    iVar4 = *(int *)(lVar8 + 0x28);
    if (iVar4 == 2) {
      lVar5 = FUN_0043d0f0("AES-256-CBC-HMAC-SHA1");
      if (lVar5 != 0) goto LAB_003b0098;
      iVar4 = *(int *)(lVar8 + 0x24);
      goto LAB_003b004c;
    }
  }
  if ((iVar4 != 0x10) || (lVar5 = FUN_0043d0f0("AES-256-CBC-HMAC-SHA256"), lVar5 == 0)) {
    return 1;
  }
LAB_003b0098:
  *param_2 = lVar5;
  *param_3 = 0;
  return 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a6110; name: FUN_028a6110
 */


byte * FUN_028a6110(long param_1,byte *param_2,byte *param_3,string *param_4)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == param_3) {
    return param_2;
  }
  bVar2 = *param_2;
  uVar3 = (ulong)bVar2;
  if (bVar2 < 0x66) {
    if (bVar2 != 0x30) {
      if (bVar2 == 99) {
        if ((param_2 + 1 != param_3) && (bVar2 = param_2[1], (byte)((bVar2 & 0xdf) + 0xbf) < 0x1a))
        {
          if (param_4 == (string *)0x0) {
            FUN_01467d38();
          }
          else {
            std::string::operator=(param_4,bVar2 & 0x1f);
          }
          return param_2 + 2;
        }
        goto LAB_028a63b4;
      }
      if (bVar2 == 0x5f) goto LAB_028a63b4;
      goto switchD_028a6154_caseD_6f;
    }
    if (param_4 != (string *)0x0) {
      bVar2 = 0;
      goto LAB_028a623c;
    }
    uVar3 = 0;
    goto LAB_028a6290;
  }
  switch(bVar2) {
  case 0x6e:
    uVar3 = 10;
    bVar2 = 10;
    break;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
  case 0x77:
switchD_028a6154_caseD_6f:
    if ((-1 < (char)bVar2) &&
       ((*(ushort *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + uVar3 * 2) & 0xc00) != 0))
    goto LAB_028a63b4;
    if (param_4 == (string *)0x0) goto LAB_028a6290;
    goto LAB_028a623c;
  case 0x72:
    uVar3 = 0xd;
    bVar2 = 0xd;
    break;
  case 0x74:
    uVar3 = 9;
    bVar2 = 9;
    break;
  case 0x75:
    if (param_2 + 1 == param_3) goto LAB_028a63b4;
    bVar2 = param_2[1];
    if (((bVar2 & 0xf8) == 0x30) || ((bVar2 & 0xfe) == 0x38)) {
      if (bVar2 == 0x2f) goto LAB_028a63b4;
    }
    else if (5 < (byte)((bVar2 | 0x20) + 0x9f)) goto LAB_028a63b4;
    param_2 = param_2 + 2;
    if (param_2 == param_3) goto LAB_028a63b4;
    bVar2 = *param_2;
    if (((bVar2 & 0xf8) == 0x30) || ((bVar2 & 0xfe) == 0x38)) {
      if (bVar2 == 0x2f) goto LAB_028a63b4;
    }
    else if (5 < (byte)((bVar2 | 0x20) + 0x9f)) goto LAB_028a63b4;
  case 0x78:
    if (param_2 + 1 != param_3) {
      bVar2 = param_2[1];
      if (((bVar2 & 0xf8) == 0x30) || ((bVar2 & 0xfe) == 0x38)) {
        iVar4 = bVar2 - 0x30;
        if (iVar4 == -1) goto LAB_028a63b4;
      }
      else {
        uVar1 = bVar2 | 0x20;
        if (5 < (uVar1 - 0x61 & 0xff)) goto LAB_028a63b4;
        iVar4 = uVar1 - 0x57;
      }
      if (param_2 + 2 != param_3) {
        bVar2 = param_2[2];
        if (((bVar2 & 0xf8) == 0x30) || ((bVar2 & 0xfe) == 0x38)) {
          iVar5 = bVar2 - 0x30;
          if (iVar5 != -1) goto LAB_028a638c;
        }
        else {
          uVar1 = bVar2 | 0x20;
          if ((uVar1 - 0x61 & 0xff) < 6) {
            iVar5 = uVar1 - 0x57;
LAB_028a638c:
            if (param_4 == (string *)0x0) {
              FUN_01467d38();
            }
            else {
              std::string::operator=(param_4,(char)iVar5 + (char)iVar4 * '\x10');
            }
            return param_2 + 3;
          }
        }
      }
    }
LAB_028a63b4:
                    /* WARNING: Subroutine does not return */
    FUN_028a5f80();
  case 0x76:
    uVar3 = 0xb;
    bVar2 = 0xb;
    break;
  default:
    if (bVar2 != 0x66) goto switchD_028a6154_caseD_6f;
    if (param_4 == (string *)0x0) {
      uVar3 = 0xc;
      goto LAB_028a6290;
    }
    bVar2 = 0xc;
    goto LAB_028a623c;
  }
  if (param_4 == (string *)0x0) {
LAB_028a6290:
    FUN_01467d38(param_1,uVar3);
  }
  else {
LAB_028a623c:
    std::string::operator=(param_4,bVar2);
  }
  return param_2 + 1;
}



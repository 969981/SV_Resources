/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0146bf24; name: FUN_0146bf24
 */


byte * FUN_0146bf24(undefined8 param_1,byte *param_2,byte *param_3,string *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  
  if (param_2 == param_3) goto LAB_0146c0c0;
  bVar2 = *param_2;
  if (bVar2 < 0x62) {
    if (bVar2 < 0x5c) {
      if ((bVar2 != 0x22) && (bVar2 != 0x2f)) goto switchD_0146bf84_caseD_6f;
    }
    else if (bVar2 != 0x5c) {
      if (bVar2 == 0x61) {
        if (param_4 == (string *)0x0) {
          bVar2 = 7;
          goto LAB_0146c0a0;
        }
        bVar2 = 7;
        goto LAB_0146bfbc;
      }
switchD_0146bf84_caseD_6f:
      if ((bVar2 & 0xf8) != 0x30) {
LAB_0146c0c0:
                    /* WARNING: Subroutine does not return */
        FUN_028a5f80();
      }
      pbVar4 = param_2 + 1;
      cVar3 = bVar2 - 0x30;
      if (pbVar4 != param_3) {
        if ((*pbVar4 & 0xf8) != 0x30) goto LAB_0146c08c;
        pbVar1 = param_2 + 2;
        cVar3 = *pbVar4 + cVar3 * '\b' + -0x30;
        if (pbVar1 != param_3) {
          pbVar4 = pbVar1;
          if ((*pbVar1 & 0xf8) == 0x30) {
            cVar3 = *pbVar1 + cVar3 * '\b' + -0x30;
            pbVar4 = param_2 + 3;
          }
          goto LAB_0146c08c;
        }
      }
      pbVar4 = param_3;
LAB_0146c08c:
      if (param_4 == (string *)0x0) {
        FUN_01467d38();
        return pbVar4;
      }
      std::string::operator=(param_4,cVar3);
      return pbVar4;
    }
    goto joined_r0x0146c070;
  }
  switch(bVar2) {
  case 0x6e:
    bVar2 = 10;
    break;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
  case 0x75:
    goto switchD_0146bf84_caseD_6f;
  case 0x72:
    bVar2 = 0xd;
    break;
  case 0x74:
    bVar2 = 9;
    break;
  case 0x76:
    bVar2 = 0xb;
    break;
  default:
    if (bVar2 == 0x62) {
      if (param_4 != (string *)0x0) {
        bVar2 = 8;
        goto LAB_0146bfbc;
      }
      bVar2 = 8;
      goto LAB_0146c0a0;
    }
    if (bVar2 != 0x66) goto switchD_0146bf84_caseD_6f;
    if (param_4 == (string *)0x0) {
      bVar2 = 0xc;
      goto LAB_0146c0a0;
    }
    bVar2 = 0xc;
    goto LAB_0146bfbc;
  }
joined_r0x0146c070:
  if (param_4 == (string *)0x0) {
LAB_0146c0a0:
    FUN_01467d38(param_1,bVar2);
  }
  else {
LAB_0146bfbc:
    std::string::operator=(param_4,bVar2);
  }
  return param_2 + 1;
}



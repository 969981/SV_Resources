/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00395610; name: FUN_00395610
 */


undefined8 FUN_00395610(byte *param_1,long param_2,long *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  
  *param_3 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar1 = param_1 + param_2;
  if (0 < param_2) {
    pbVar4 = pbVar1;
    if (pbVar1 <= param_1 + 1) {
      pbVar4 = param_1 + 1;
    }
    do {
      if (((byte)PTR_DAT_047cd038[*param_1] >> 3 & 1) == 0) goto LAB_00395654;
      param_1 = param_1 + 1;
    } while (pbVar4 != param_1);
    param_1 = pbVar4;
  }
LAB_00395654:
  do {
    pbVar4 = pbVar1;
    if (pbVar4 <= param_1) {
      return 0;
    }
    pbVar1 = pbVar4 + -1;
  } while (((byte)PTR_DAT_047cd038[pbVar4[-1]] >> 3 & 1) != 0);
  bVar2 = *param_1;
  if (((bVar2 == 0x2d) || (bVar2 == 0x2b)) && (param_1 = param_1 + 1, pbVar4 <= param_1)) {
    return 0;
  }
  if (param_4 == 0x10) {
    if (((1 < (long)pbVar4 - (long)param_1) && (*param_1 == 0x30)) && ((param_1[1] | 0x20) == 0x78))
    {
joined_r0x00395700:
      param_1 = param_1 + 2;
      if (pbVar4 <= param_1) {
        return 0;
      }
    }
    param_4 = 0x10;
  }
  else if (param_4 == 0) {
    if ((long)pbVar4 - (long)param_1 < 2) {
      if ((long)pbVar4 - (long)param_1 != 1) {
        param_4 = 10;
        goto LAB_00395750;
      }
      bVar6 = *param_1;
    }
    else {
      bVar6 = *param_1;
      if (bVar6 == 0x30) {
        if ((param_1[1] | 0x20) == 0x78) goto joined_r0x00395700;
        bVar6 = 0x30;
      }
    }
    if (bVar6 == 0x30) {
      param_1 = param_1 + 1;
    }
    param_4 = 8;
    if (bVar6 != 0x30) {
      param_4 = 10;
    }
  }
  else if (0x22 < param_4 - 2) {
    return 0;
  }
LAB_00395750:
  lVar7 = (long)pbVar4 - (long)param_1;
  uVar5 = (ulong)param_4;
  if (bVar2 == 0x2d) {
    if (0 < lVar7) {
      lVar3 = 0;
      pbVar1 = param_1 + lVar7;
      do {
        if ((int)param_4 <= (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*param_1])
        goto LAB_0039583c;
        if (lVar3 < *(long *)(&DAT_03cdbe40 + uVar5 * 8)) {
LAB_00395848:
          *param_3 = -0x8000000000000000;
          return 0;
        }
        uVar8 = (ulong)(int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*param_1];
        if ((long)(lVar3 * uVar5) < (long)(uVar8 | 0x8000000000000000)) goto LAB_00395848;
        param_1 = param_1 + 1;
        lVar3 = lVar3 * uVar5 - uVar8;
      } while (param_1 < pbVar1);
      goto LAB_00395830;
    }
  }
  else if (0 < lVar7) {
    lVar3 = 0;
    pbVar1 = param_1 + lVar7;
    do {
      if ((int)param_4 <= (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*param_1]) {
LAB_0039583c:
        *param_3 = lVar3;
        return 0;
      }
      if (*(long *)(&UNK_03cdbd18 + uVar5 * 8) < lVar3) {
LAB_00395858:
        *param_3 = 0x7fffffffffffffff;
        return 0;
      }
      lVar7 = (long)(int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*param_1];
      if (0x7fffffffffffffff - lVar7 < (long)(lVar3 * uVar5)) goto LAB_00395858;
      param_1 = param_1 + 1;
      lVar3 = lVar3 * uVar5 + lVar7;
    } while (param_1 < pbVar1);
    goto LAB_00395830;
  }
  lVar3 = 0;
LAB_00395830:
  *param_3 = lVar3;
  return 1;
}



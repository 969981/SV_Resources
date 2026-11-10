/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e1510; name: FUN_002e1510
 */


/* WARNING: Removing unreachable block (ram,0x002e1a20) */

undefined8 FUN_002e1510(long *param_1,uint *param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ostream *poVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  char *pcVar11;
  uint local_178;
  uint local_174;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [264];
  
  if ((param_1[1] == 0) || (pcVar11 = (char *)*param_1, *pcVar11 != '\\')) {
    uVar5 = 1;
    goto LAB_002e1568;
  }
  uVar7 = param_1[1] - 1;
  if (uVar7 == 0) {
    uVar5 = 7;
    goto LAB_002e1568;
  }
  *param_1 = (long)(pcVar11 + 1);
  param_1[1] = uVar7;
  uVar5 = (undefined4)uVar7;
  if (3 < uVar7) {
    uVar5 = 4;
  }
  iVar3 = FUN_002eaaa0(pcVar11 + 1,uVar5);
  if (((iVar3 == 0) || (iVar3 = FUN_002ea8f0(&local_174,*param_1), 0x10ffff < (int)local_174)) ||
     ((iVar3 == 1 && (local_174 == 0xfffd)))) {
LAB_002e15ec:
    uVar5 = 0xc;
LAB_002e1568:
    *param_3 = uVar5;
    *(undefined8 *)(param_3 + 2) = 0;
    *(undefined8 *)(param_3 + 4) = 0;
    return 0;
  }
  pbVar9 = (byte *)(*param_1 + (long)iVar3);
  uVar7 = param_1[1] - (long)iVar3;
  *param_1 = (long)pbVar9;
  param_1[1] = uVar7;
  if (iVar3 < 0) {
    return 0;
  }
  uVar6 = local_174 - 0x30;
  switch(uVar6) {
  case 0:
    uVar10 = 0;
    uVar6 = 0;
    if (uVar7 != 0) goto LAB_002e17a4;
LAB_002e17fc:
    pbVar8 = pbVar9;
    goto LAB_002e1800;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    if ((uVar7 == 0) || ((*pbVar9 & 0xf8) != 0x30)) goto LAB_002e180c;
LAB_002e17a4:
    uVar10 = uVar6;
    if ((*pbVar9 & 0xf8) != 0x30) goto LAB_002e17fc;
    pbVar8 = pbVar9 + 1;
    uVar10 = ((uint)*pbVar9 + uVar10 * 8) - 0x30;
    *param_1 = (long)pbVar8;
    param_1[1] = uVar7 - 1;
    if ((uVar7 - 1 != 0) && ((*pbVar8 & 0xf8) == 0x30)) {
      uVar10 = ((uint)*pbVar8 + uVar10 * 8) - 0x30;
      *param_1 = (long)(pbVar9 + 2);
      param_1[1] = uVar7 - 2;
      pbVar8 = pbVar9 + 2;
    }
LAB_002e1800:
    pbVar9 = pbVar8;
    if ((int)uVar10 <= param_4) {
      *param_2 = uVar10;
      return 1;
    }
LAB_002e180c:
    *param_3 = 2;
    *(char **)(param_3 + 2) = pcVar11;
    *(long *)(param_3 + 4) = (long)pbVar9 - (long)pcVar11;
    return 0;
  default:
    if ((((int)local_174 < 0x80) && (iVar3 = isalpha(local_174), 9 < uVar6)) && (iVar3 == 0)) {
      *param_2 = local_174;
      return 1;
    }
    goto LAB_002e180c;
  case 0x31:
    uVar10 = 7;
    break;
  case 0x36:
    uVar10 = 0xc;
    break;
  case 0x3e:
    uVar10 = 10;
    break;
  case 0x42:
    uVar10 = 0xd;
    break;
  case 0x44:
    uVar10 = 9;
    break;
  case 0x46:
    uVar10 = 0xb;
    break;
  case 0x48:
    if (uVar7 == 0) goto LAB_002e180c;
    uVar5 = (undefined4)uVar7;
    if (3 < uVar7) {
      uVar5 = 4;
    }
    iVar3 = FUN_002eaaa0(pbVar9,uVar5);
    if (((iVar3 != 0) && (iVar3 = FUN_002ea8f0(&local_174,*param_1), (int)local_174 < 0x110000)) &&
       ((iVar3 != 1 || (local_174 != 0xfffd)))) {
      pbVar9 = (byte *)(*param_1 + (long)iVar3);
      uVar7 = param_1[1] - (long)iVar3;
      *param_1 = (long)pbVar9;
      param_1[1] = uVar7;
      if (iVar3 < 0) {
        return 0;
      }
      uVar5 = (undefined4)uVar7;
      if (local_174 == 0x7b) {
        if (3 < uVar7) {
          uVar5 = 4;
        }
        iVar3 = FUN_002eaaa0(pbVar9,uVar5);
        if (((iVar3 != 0) && (iVar3 = FUN_002ea8f0(&local_174,*param_1), (int)local_174 < 0x110000))
           && ((iVar3 != 1 || (local_174 != 0xfffd)))) {
          pbVar9 = (byte *)(*param_1 + (long)iVar3);
          *param_1 = (long)pbVar9;
          param_1[1] = param_1[1] - (long)iVar3;
          if (iVar3 < 0) {
            return 0;
          }
          uVar6 = local_174 - 0x30;
          bVar2 = uVar6 < 10;
          if ((bVar2) || ((local_174 & 0xffffffdf) - 0x41 < 6)) {
            uVar10 = 0;
            do {
              uVar1 = local_174;
              if (!bVar2) {
                if (local_174 - 0x41 < 6) {
                  uVar6 = local_174 - 0x37;
                }
                else if (local_174 - 0x61 < 6) {
                  uVar6 = local_174 - 0x57;
                }
                else {
                  FUN_002cc810(auStack_170,"external/com_github_google_re2/re2/parse.cc",0x5a2);
                    /* try { // try from 002e1964 to 002e197f has its CatchHandler @ 002e1b1c */
                  poVar4 = std::__put_character_sequence<char,std::char_traits<char>>
                                     (aoStack_168,"Bad hex digit ",0xe);
                  std::ostream::operator<<(poVar4,uVar1);
                  FUN_002cc97c(auStack_170);
                  uVar6 = 0;
                }
              }
              uVar10 = uVar6 + uVar10 * 0x10;
              if ((param_4 < (int)uVar10) || (uVar7 = param_1[1], uVar7 == 0)) {
                pbVar9 = (byte *)*param_1;
                goto LAB_002e180c;
              }
              uVar5 = (undefined4)uVar7;
              if (3 < uVar7) {
                uVar5 = 4;
              }
              iVar3 = FUN_002eaaa0(*param_1,uVar5);
              if (((iVar3 == 0) ||
                  (iVar3 = FUN_002ea8f0(&local_174,*param_1), 0x10ffff < (int)local_174)) ||
                 ((iVar3 == 1 && (local_174 == 0xfffd)))) goto LAB_002e15ec;
              pbVar9 = (byte *)(*param_1 + (long)iVar3);
              *param_1 = (long)pbVar9;
              param_1[1] = param_1[1] - (long)iVar3;
              if (iVar3 < 0) {
                return 0;
              }
              uVar6 = local_174 - 0x30;
              bVar2 = uVar6 < 10;
            } while ((bVar2) || ((local_174 & 0xffffffdf) - 0x41 < 6));
            if (local_174 == 0x7d) {
              *param_2 = uVar10;
              return 1;
            }
          }
          goto LAB_002e180c;
        }
      }
      else {
        if (uVar7 == 0) goto LAB_002e180c;
        if (3 < uVar7) {
          uVar5 = 4;
        }
        iVar3 = FUN_002eaaa0(pbVar9,uVar5);
        if (((iVar3 != 0) && (iVar3 = FUN_002ea8f0(&local_178,*param_1), (int)local_178 < 0x110000))
           && ((iVar3 != 1 || (local_178 != 0xfffd)))) {
          pbVar9 = (byte *)(*param_1 + (long)iVar3);
          *param_1 = (long)pbVar9;
          param_1[1] = param_1[1] - (long)iVar3;
          if (iVar3 < 0) {
            return 0;
          }
          uVar6 = local_174 - 0x30;
          if (((uVar6 < 10) || ((local_174 & 0xffffffdf) - 0x41 < 6)) &&
             ((uVar10 = local_178 - 0x30, uVar10 < 10 || ((local_178 & 0xffffffdf) - 0x41 < 6)))) {
            if (9 < uVar6) {
              if (local_174 - 0x41 < 6) {
                uVar6 = local_174 - 0x37;
              }
              else if (local_174 - 0x61 < 6) {
                uVar6 = local_174 - 0x57;
              }
              else {
                FUN_002cc810(auStack_170,"external/com_github_google_re2/re2/parse.cc",0x5a2);
                    /* try { // try from 002e1a6c to 002e1a83 has its CatchHandler @ 002e1b18 */
                poVar4 = std::__put_character_sequence<char,std::char_traits<char>>
                                   (aoStack_168,"Bad hex digit ",0xe);
                std::ostream::operator<<(poVar4,local_174);
                FUN_002cc97c(auStack_170);
                uVar6 = 0;
                uVar10 = local_178 - 0x30;
              }
            }
            if (9 < uVar10) {
              if (local_178 - 0x41 < 6) {
                uVar10 = local_178 - 0x37;
              }
              else if (local_178 - 0x61 < 6) {
                uVar10 = local_178 - 0x57;
              }
              else {
                FUN_002cc810(auStack_170,"external/com_github_google_re2/re2/parse.cc",0x5a2);
                    /* try { // try from 002e1ae4 to 002e1afb has its CatchHandler @ 002e1b14 */
                poVar4 = std::__put_character_sequence<char,std::char_traits<char>>
                                   (aoStack_168,"Bad hex digit ",0xe);
                std::ostream::operator<<(poVar4,local_178);
                FUN_002cc97c(auStack_170);
                uVar10 = 0;
              }
            }
            uVar10 = uVar10 + uVar6 * 0x10;
            break;
          }
          goto LAB_002e180c;
        }
      }
    }
    goto LAB_002e15ec;
  }
  *param_2 = uVar10;
  return 1;
}



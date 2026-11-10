/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e21fc; name: FUN_002e21fc
 */


undefined8 FUN_002e21fc(uint *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  byte bVar12;
  undefined4 *puVar13;
  byte *local_190;
  ulong local_188 [33];
  char *local_80;
  ulong uStack_78;
  int local_64;
  
  uStack_78 = param_2[1];
  local_80 = (char *)*param_2;
  uVar8 = *param_1;
  if (((((uVar8 >> 9 & 1) == 0) || (uVar9 = uStack_78 - 2, uStack_78 < 2)) || (*local_80 != '(')) ||
     (local_80[1] != '?')) {
    FUN_002cc810(&local_190,"external/com_github_google_re2/re2/parse.cc",0x7fb);
                    /* try { // try from 002e22ec to 002e22fb has its CatchHandler @ 002e26c4 */
    std::__put_character_sequence<char,std::char_traits<char>>
              ((ostream *)local_188,"Bad call to ParseState::ParsePerlFlags",0x26);
    FUN_002cc97c(&local_190);
    **(undefined4 **)(param_1 + 6) = 1;
    return 0;
  }
  pcVar6 = local_80 + 2;
  uStack_78 = uVar9;
  if (((uVar9 < 3) || (*pcVar6 != 'P')) || (local_80[3] != '<')) {
    local_80 = pcVar6;
    if (uVar9 != 0) {
      bVar2 = false;
      bVar12 = 0;
LAB_002e23c4:
      do {
        uVar5 = (undefined4)uStack_78;
        if (3 < uStack_78) {
          uVar5 = 4;
        }
        puVar13 = *(undefined4 **)(param_1 + 6);
        iVar3 = FUN_002eaaa0(local_80,uVar5);
        if (iVar3 == 0) {
LAB_002e24d0:
          *puVar13 = 0xc;
          *(undefined8 *)(puVar13 + 2) = 0;
          *(undefined8 *)(puVar13 + 4) = 0;
          return 0;
        }
        iVar3 = FUN_002ea8f0(&local_190,local_80);
        if ((0x10ffff < (int)local_190) || ((iVar3 == 1 && ((int)local_190 == 0xfffd))))
        goto LAB_002e24d0;
        local_80 = local_80 + iVar3;
        uStack_78 = uStack_78 - (long)iVar3;
        if (iVar3 < 0) {
          return 0;
        }
        if (0x54 < (int)local_190) {
          switch((int)local_190) {
          case 0x55:
            if (bVar2) {
              uVar8 = uVar8 & 0x3fbf;
              bVar2 = true;
            }
            else {
              bVar2 = false;
              uVar8 = uVar8 | 0x40;
            }
            break;
          default:
            goto switchD_002e243c_caseD_56;
          case 0x69:
            if (bVar2) {
              uVar8 = uVar8 & 0x3ffe;
              bVar2 = true;
            }
            else {
              bVar2 = false;
              uVar8 = uVar8 | 1;
            }
            break;
          case 0x6d:
            if (bVar2) {
              uVar8 = uVar8 | 0x10;
              bVar2 = true;
            }
            else {
              bVar2 = false;
              uVar8 = uVar8 & 0x3fef;
            }
            break;
          case 0x73:
            if (bVar2) {
              uVar8 = uVar8 & 0x3ff7;
              bVar2 = true;
            }
            else {
              bVar2 = false;
              uVar8 = uVar8 | 8;
            }
          }
          bVar12 = 1;
          if (uStack_78 == 0) break;
          goto LAB_002e23c4;
        }
        if ((int)local_190 != 0x2d) {
          if ((int)local_190 != 0x29) {
            if ((int)local_190 != 0x3a) break;
            lVar4 = FUN_0049e770(PTR_FUN_047cba38,0x28);
            if (lVar4 != 0) {
              FUN_002e4418(lVar4,0x16,*param_1);
            }
            *(undefined4 *)(lVar4 + 0x18) = 0xffffffff;
            FUN_002de558(param_1,lVar4);
          }
          if ((bool)(bVar12 | bVar2 ^ 1U)) {
            *param_1 = uVar8;
            param_2[1] = uStack_78;
            *param_2 = (long)local_80;
            return 1;
          }
          break;
        }
        if (bVar2) break;
        bVar12 = 0;
        bVar2 = true;
      } while (uStack_78 != 0);
    }
switchD_002e243c_caseD_56:
    puVar13 = *(undefined4 **)(param_1 + 6);
    *puVar13 = 0xb;
    lVar4 = *param_2;
    *(long *)(puVar13 + 2) = lVar4;
    *(long *)(puVar13 + 4) = (long)local_80 - lVar4;
    return 0;
  }
  local_80 = pcVar6;
  lVar4 = FUN_002e9e04(&local_80,0x3e,2);
  if (lVar4 == -1) {
    puVar13 = *(undefined4 **)(param_1 + 6);
    lVar4 = *param_2;
    uVar9 = param_2[1];
    do {
      if (uVar9 == 0) {
        puVar13 = *(undefined4 **)(param_1 + 6);
        *puVar13 = 0xd;
        lVar4 = *param_2;
        *(long *)(puVar13 + 4) = param_2[1];
        *(long *)(puVar13 + 2) = lVar4;
        return 0;
      }
      uVar5 = (undefined4)uVar9;
      if (3 < uVar9) {
        uVar5 = 4;
      }
      iVar3 = FUN_002eaaa0(lVar4,uVar5);
      if (iVar3 == 0) {
LAB_002e2680:
        *puVar13 = 0xc;
        *(undefined8 *)(puVar13 + 2) = 0;
        *(undefined8 *)(puVar13 + 4) = 0;
        return 0;
      }
      iVar3 = FUN_002ea8f0(&local_190,lVar4);
      if ((0x10ffff < (int)local_190) || ((iVar3 == 1 && ((int)local_190 == 0xfffd))))
      goto LAB_002e2680;
      lVar4 = lVar4 + iVar3;
      uVar9 = uVar9 - (long)iVar3;
    } while (-1 < iVar3);
  }
  else {
    pcVar6 = local_80 + -2;
    pbVar10 = (byte *)(local_80 + 2);
    uVar9 = lVar4 - 2;
    puVar13 = *(undefined4 **)(param_1 + 6);
    pbVar7 = pbVar10;
    uVar11 = uVar9;
    local_190 = pbVar10;
    local_188[0] = uVar9;
    do {
      if (uVar11 == 0) {
        if (uVar9 != 0) {
          while (((bVar12 = *pbVar10, bVar12 - 0x30 < 10 || (bVar12 - 0x61 & 0xff) < 0x1a ||
                  (bVar12 == 0x5f)) || ((byte)(bVar12 + 0xbf) < 0x1a))) {
            uVar9 = uVar9 - 1;
            pbVar10 = pbVar10 + 1;
            if (uVar9 == 0) {
              FUN_002df188(param_1,&local_190);
              lVar1 = *param_2;
              *param_2 = (long)(pcVar6 + lVar4 + 3);
              param_2[1] = (lVar1 - (long)(pcVar6 + lVar4 + 3)) + param_2[1];
              return 1;
            }
          }
        }
        puVar13 = *(undefined4 **)(param_1 + 6);
        *puVar13 = 0xd;
        *(char **)(puVar13 + 2) = pcVar6;
        *(long *)(puVar13 + 4) = lVar4 + 3;
        return 0;
      }
      uVar5 = (undefined4)uVar11;
      if (3 < uVar11) {
        uVar5 = 4;
      }
      iVar3 = FUN_002eaaa0(pbVar7,uVar5);
      if (((iVar3 == 0) || (iVar3 = FUN_002ea8f0(&local_64,pbVar7), 0x10ffff < local_64)) ||
         ((iVar3 == 1 && (local_64 == 0xfffd)))) {
        *puVar13 = 0xc;
        *(undefined8 *)(puVar13 + 2) = 0;
        *(undefined8 *)(puVar13 + 4) = 0;
        return 0;
      }
      pbVar7 = pbVar7 + iVar3;
      uVar11 = uVar11 - (long)iVar3;
    } while (-1 < iVar3);
  }
  return 0;
}



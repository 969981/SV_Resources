/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002cec5c; name: FUN_002cec5c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_002cec5c(char *param_1,ulong *param_2,ulong *param_3,int param_4,int param_5,long param_6,
            uint param_7)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  byte **ppbVar13;
  long *plVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  byte bVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 uVar30;
  ulong local_200;
  ulong uStack_1f8;
  byte *local_1f0 [2];
  undefined1 local_1e0 [24];
  ulong local_1c8 [5];
  byte *local_1a0;
  ostream aoStack_198 [8];
  undefined1 local_190 [24];
  ulong local_178 [29];
  
  if ((param_4 != 1) && (param_5 != 2)) {
    FUN_002cc810(&local_1a0,"external/com_github_google_re2/re2/onepass.cc",0xdb);
                    /* try { // try from 002cecc8 to 002cecd7 has its CatchHandler @ 002cf644 */
    std::__put_character_sequence<char,std::char_traits<char>>
              (aoStack_198,"Cannot use SearchOnePass for unanchored matches.",0x30);
    FUN_002cc97c(&local_1a0);
    return 0;
  }
  uVar12 = param_7 * 2;
  uVar10 = uVar12;
  if ((int)param_7 < 2) {
    uVar10 = 2;
  }
  if (0 < (int)uVar10) {
    memset(&local_1a0,0,(ulong)uVar10 << 3);
    memset(local_1f0,0,(ulong)uVar10 << 3);
  }
  uVar30 = DAT_03cb5470;
  uStack_1f8 = param_3[1];
  local_200 = *param_3;
  if (local_200 == 0) {
    uStack_1f8 = param_2[1];
    local_200 = *param_2;
    cVar4 = *param_1;
  }
  else {
    cVar4 = *param_1;
  }
  if ((cVar4 != '\0') && (local_200 != *param_2)) {
    return 0;
  }
  if (param_1[1] == '\0') {
    pbVar18 = (byte *)*param_2;
    uVar20 = param_2[1];
  }
  else {
    pbVar18 = (byte *)*param_2;
    uVar20 = param_2[1];
    if ((byte *)(local_200 + uStack_1f8) != pbVar18 + uVar20) {
      return 0;
    }
    param_5 = 2;
  }
  puVar15 = *(uint **)(param_1 + 0x70);
  local_1f0[0] = pbVar18;
  local_1a0 = pbVar18;
  puVar21 = puVar15;
  if ((long)uVar20 < 1) {
    bVar5 = false;
  }
  else {
    pbVar2 = pbVar18 + uVar20;
    iVar24 = *(int *)(param_1 + 0x14) * 4 + 4;
    bVar1 = 1 < (int)param_7;
    uVar20 = (ulong)uVar10;
    if (param_5 == 2) {
      uVar17 = uVar20 - 2;
      uVar19 = uVar17 & 0xfffffffffffffff8;
      do {
        uVar12 = puVar21[(ulong)(byte)param_1[(ulong)*pbVar18 + 0x98] + 1];
        if (((uVar12 & 0x3f) != 0) &&
           (uVar7 = FUN_002d08f8(&local_200,pbVar18), (uVar12 & 0x3f & (uVar7 ^ 0xffffffff)) != 0))
        {
          return 0;
        }
        if (puVar15 == (uint *)0x0) {
          return 0;
        }
        puVar21 = (uint *)((long)puVar15 + (ulong)(uVar12 >> 0x10) * (long)iVar24);
        if ((1 < (int)param_7 && (uVar12 & 0x7f80) != 0) && bVar1) {
          if (uVar17 < 8) {
            uVar16 = 2;
          }
          else {
            uVar22 = CONCAT44(uVar12,uVar12);
            puVar11 = local_178;
            uVar16 = uVar19;
            uVar27 = uVar30;
            do {
              iVar23 = (int)uVar27;
              iVar25 = (int)((ulong)uVar27 >> 0x20);
              uVar27 = NEON_ushl(0x2000000020,uVar27,4);
              uVar29 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 2,iVar23 + 2),4);
              if (((uint)uVar27 & uVar12) != 0) {
                puVar11[-3] = (ulong)pbVar18;
              }
              if ((bool)(~(((uint)((ulong)uVar27 >> 0x20) & uVar12) == 0) & 1)) {
                puVar11[-2] = (ulong)pbVar18;
              }
              uVar28 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 4,iVar23 + 4),4);
              if ((bool)(~((int)(uVar29 & uVar22) == 0) & 1)) {
                puVar11[-1] = (ulong)pbVar18;
              }
              if ((bool)(~((int)((uVar29 & uVar22) >> 0x20) == 0) & 1)) {
                *puVar11 = (ulong)pbVar18;
              }
              bVar5 = (bool)~((int)((uVar28 & uVar22) >> 0x20) == 0);
              uVar29 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 6,iVar23 + 6),4);
              if ((bool)(~((int)(uVar28 & uVar22) == 0) & 1)) {
                puVar11[1] = (ulong)pbVar18;
                if (!bVar5) goto LAB_002cef40;
LAB_002cef6c:
                puVar11[2] = (ulong)pbVar18;
                bVar26 = ~((int)((uVar29 & uVar22) >> 0x20) == 0);
                if (((int)(uVar29 & uVar22) == 0) == true) goto LAB_002cef50;
LAB_002cef80:
                puVar11[3] = (ulong)pbVar18;
                if (bVar26 != 0) goto LAB_002cef8c;
              }
              else {
                if (bVar5) goto LAB_002cef6c;
LAB_002cef40:
                bVar26 = ~((int)((uVar29 & uVar22) >> 0x20) == 0);
                if ((bool)(~((int)(uVar29 & uVar22) == 0) & 1)) goto LAB_002cef80;
LAB_002cef50:
                if ((bool)(bVar26 & 1)) {
LAB_002cef8c:
                  puVar11[4] = (ulong)pbVar18;
                }
              }
              uVar27 = CONCAT44(iVar25 + 8,iVar23 + 8);
              uVar16 = uVar16 - 8;
              puVar11 = puVar11 + 8;
            } while (uVar16 != 0);
            uVar16 = uVar19 | 2;
            if (uVar17 == uVar19) goto LAB_002cee14;
          }
          do {
            if (((uVar12 >> (ulong)((uint)uVar16 & 0x1f)) >> 5 & 1) != 0) {
              local_1c8[uVar16 + 5] = (ulong)pbVar18;
            }
            uVar16 = uVar16 + 1;
          } while (uVar20 != uVar16);
        }
LAB_002cee14:
        pbVar18 = pbVar18 + 1;
      } while (pbVar18 < pbVar2);
      bVar5 = false;
    }
    else {
      if ((int)uVar12 < 4) {
        uVar12 = 3;
      }
      uVar17 = uVar20 - 2;
      uVar19 = uVar17 & 0xfffffffffffffff8;
      bVar5 = false;
      uVar7 = *puVar15;
      do {
        uVar3 = puVar21[(ulong)(byte)param_1[(ulong)*pbVar18 + 0x98] + 1];
        if (((uVar3 & 0x3f) == 0) ||
           (uVar8 = FUN_002d08f8(&local_200,pbVar18), (uVar3 & 0x3f & (uVar8 ^ 0xffffffff)) == 0)) {
          puVar21 = (uint *)((long)puVar15 + (ulong)(uVar3 >> 0x10) * (long)iVar24);
          uVar8 = *puVar21;
        }
        else {
          puVar21 = (uint *)0x0;
          uVar8 = 0x30;
        }
        if (((uVar7 != 0x30) && ((uVar3 & 0x40) != 0 || (uVar8 & 0x3f) != 0)) &&
           (((uVar7 & 0x3f) == 0 ||
            (uVar9 = FUN_002d08f8(&local_200,pbVar18), (uVar7 & 0x3f & (uVar9 ^ 0xffffffff)) == 0)))
           ) {
          if ((1 < (int)param_7) &&
             (memcpy(local_1e0,local_190,(ulong)(uVar12 - 2) << 3),
             (1 < (int)param_7 && (uVar7 & 0x7f80) != 0) && bVar1)) {
            if (uVar17 < 8) {
              uVar16 = 2;
            }
            else {
              uVar22 = CONCAT44(uVar7,uVar7);
              puVar11 = local_1c8;
              uVar16 = uVar19;
              uVar27 = uVar30;
              do {
                iVar23 = (int)uVar27;
                iVar25 = (int)((ulong)uVar27 >> 0x20);
                uVar27 = NEON_ushl(0x2000000020,uVar27,4);
                uVar29 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 2,iVar23 + 2),4);
                if (((uint)uVar27 & uVar7) != 0) {
                  puVar11[-3] = (ulong)pbVar18;
                }
                if ((bool)(~(((uint)((ulong)uVar27 >> 0x20) & uVar7) == 0) & 1)) {
                  puVar11[-2] = (ulong)pbVar18;
                }
                uVar28 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 4,iVar23 + 4),4);
                if ((bool)(~((int)(uVar29 & uVar22) == 0) & 1)) {
                  puVar11[-1] = (ulong)pbVar18;
                }
                if ((bool)(~((int)((uVar29 & uVar22) >> 0x20) == 0) & 1)) {
                  *puVar11 = (ulong)pbVar18;
                }
                bVar5 = (bool)~((int)((uVar28 & uVar22) >> 0x20) == 0);
                uVar29 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 6,iVar23 + 6),4);
                if ((bool)(~((int)(uVar28 & uVar22) == 0) & 1)) {
                  puVar11[1] = (ulong)pbVar18;
                  if (!bVar5) goto LAB_002cf36c;
LAB_002cf398:
                  puVar11[2] = (ulong)pbVar18;
                  bVar26 = ~((int)((uVar29 & uVar22) >> 0x20) == 0);
                  if (((int)(uVar29 & uVar22) == 0) == true) goto LAB_002cf37c;
LAB_002cf3ac:
                  puVar11[3] = (ulong)pbVar18;
                  if (bVar26 != 0) goto LAB_002cf3b8;
                }
                else {
                  if (bVar5) goto LAB_002cf398;
LAB_002cf36c:
                  bVar26 = ~((int)((uVar29 & uVar22) >> 0x20) == 0);
                  if ((bool)(~((int)(uVar29 & uVar22) == 0) & 1)) goto LAB_002cf3ac;
LAB_002cf37c:
                  if ((bool)(bVar26 & 1)) {
LAB_002cf3b8:
                    puVar11[4] = (ulong)pbVar18;
                  }
                }
                uVar27 = CONCAT44(iVar25 + 8,iVar23 + 8);
                uVar16 = uVar16 - 8;
                puVar11 = puVar11 + 8;
              } while (uVar16 != 0);
              uVar16 = uVar19 | 2;
              if (uVar17 == uVar19) goto LAB_002cf128;
            }
            do {
              if (((uVar7 >> (ulong)((uint)uVar16 & 0x1f)) >> 5 & 1) != 0) {
                local_1f0[uVar16] = pbVar18;
              }
              uVar16 = uVar16 + 1;
            } while (uVar20 != uVar16);
          }
LAB_002cf128:
          bVar5 = true;
          local_1f0[1] = pbVar18;
          if ((param_5 == 0) && ((uVar3 & 0x40) != 0)) goto LAB_002cf5e0;
        }
        if (puVar21 == (uint *)0x0) goto LAB_002cf424;
        if ((1 < (int)param_7 && (uVar3 & 0x7f80) != 0) && bVar1) {
          if (uVar17 < 8) {
            uVar16 = 2;
          }
          else {
            uVar22 = CONCAT44(uVar3,uVar3);
            puVar11 = local_178;
            uVar16 = uVar19;
            uVar27 = uVar30;
            do {
              iVar23 = (int)uVar27;
              iVar25 = (int)((ulong)uVar27 >> 0x20);
              uVar27 = NEON_ushl(0x2000000020,uVar27,4);
              uVar29 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 2,iVar23 + 2),4);
              if (((uint)uVar27 & uVar3) != 0) {
                puVar11[-3] = (ulong)pbVar18;
              }
              if ((bool)(~(((uint)((ulong)uVar27 >> 0x20) & uVar3) == 0) & 1)) {
                puVar11[-2] = (ulong)pbVar18;
              }
              uVar28 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 4,iVar23 + 4),4);
              if ((bool)(~((int)(uVar29 & uVar22) == 0) & 1)) {
                puVar11[-1] = (ulong)pbVar18;
              }
              if ((bool)(~((int)((uVar29 & uVar22) >> 0x20) == 0) & 1)) {
                *puVar11 = (ulong)pbVar18;
              }
              bVar6 = (bool)~((int)((uVar28 & uVar22) >> 0x20) == 0);
              uVar29 = NEON_ushl(0x2000000020,CONCAT44(iVar25 + 6,iVar23 + 6),4);
              if ((bool)(~((int)(uVar28 & uVar22) == 0) & 1)) {
                puVar11[1] = (ulong)pbVar18;
                if (!bVar6) goto LAB_002cf224;
LAB_002cf250:
                puVar11[2] = (ulong)pbVar18;
                bVar26 = ~((int)((uVar29 & uVar22) >> 0x20) == 0);
                if (((int)(uVar29 & uVar22) == 0) == true) goto LAB_002cf234;
LAB_002cf264:
                puVar11[3] = (ulong)pbVar18;
                if (bVar26 != 0) goto LAB_002cf270;
              }
              else {
                if (bVar6) goto LAB_002cf250;
LAB_002cf224:
                bVar26 = ~((int)((uVar29 & uVar22) >> 0x20) == 0);
                if ((bool)(~((int)(uVar29 & uVar22) == 0) & 1)) goto LAB_002cf264;
LAB_002cf234:
                if ((bool)(bVar26 & 1)) {
LAB_002cf270:
                  puVar11[4] = (ulong)pbVar18;
                }
              }
              uVar27 = CONCAT44(iVar25 + 8,iVar23 + 8);
              uVar16 = uVar16 - 8;
              puVar11 = puVar11 + 8;
            } while (uVar16 != 0);
            uVar16 = uVar19 | 2;
            if (uVar17 == uVar19) goto LAB_002cf050;
          }
          do {
            if (((uVar3 >> (ulong)((uint)uVar16 & 0x1f)) >> 5 & 1) != 0) {
              local_1c8[uVar16 + 5] = (ulong)pbVar18;
            }
            uVar16 = uVar16 + 1;
          } while (uVar20 != uVar16);
        }
LAB_002cf050:
        pbVar18 = pbVar18 + 1;
        uVar7 = uVar8;
      } while (pbVar18 < pbVar2);
    }
  }
  uVar12 = *puVar21;
  if ((uVar12 == 0x30) ||
     (((uVar12 & 0x3f) != 0 &&
      (uVar7 = FUN_002d08f8(&local_200,pbVar18), (uVar12 & 0x3f & (uVar7 ^ 0xffffffff)) != 0)))) {
LAB_002cf424:
    if (!bVar5) {
      return 0;
    }
    goto LAB_002cf5e0;
  }
  if (((1 < (int)param_7) && ((uVar12 & 0x7f80) != 0)) && (1 < (int)param_7)) {
    uVar20 = (ulong)uVar10 - 2;
    if (uVar20 < 8) {
      uVar17 = 2;
    }
    else {
      uVar22 = CONCAT44(uVar12,uVar12);
      uVar16 = uVar20 & 0xfffffffffffffff8;
      uVar17 = uVar16 | 2;
      puVar11 = local_178;
      uVar19 = uVar16;
      uVar30 = DAT_03cb5470;
      do {
        iVar24 = (int)uVar30;
        iVar23 = (int)((ulong)uVar30 >> 0x20);
        uVar30 = NEON_ushl(0x2000000020,uVar30,4);
        uVar29 = NEON_ushl(0x2000000020,CONCAT44(iVar23 + 2,iVar24 + 2),4);
        if (((uint)uVar30 & uVar12) != 0) {
          puVar11[-3] = (ulong)pbVar18;
        }
        if ((bool)(~(((uint)((ulong)uVar30 >> 0x20) & uVar12) == 0) & 1)) {
          puVar11[-2] = (ulong)pbVar18;
        }
        uVar28 = NEON_ushl(0x2000000020,CONCAT44(iVar23 + 4,iVar24 + 4),4);
        if ((bool)(~((int)(uVar29 & uVar22) == 0) & 1)) {
          puVar11[-1] = (ulong)pbVar18;
        }
        if ((bool)(~((int)((uVar29 & uVar22) >> 0x20) == 0) & 1)) {
          *puVar11 = (ulong)pbVar18;
        }
        bVar5 = (bool)~((int)((uVar28 & uVar22) >> 0x20) == 0);
        uVar29 = NEON_ushl(0x2000000020,CONCAT44(iVar23 + 6,iVar24 + 6),4);
        if ((bool)(~((int)(uVar28 & uVar22) == 0) & 1)) {
          puVar11[1] = (ulong)pbVar18;
          if (!bVar5) goto LAB_002cf560;
LAB_002cf58c:
          puVar11[2] = (ulong)pbVar18;
          bVar26 = ~((int)((uVar29 & uVar22) >> 0x20) == 0);
          if (!(bool)(~((int)(uVar29 & uVar22) == 0) & 1)) goto LAB_002cf570;
LAB_002cf5a0:
          puVar11[3] = (ulong)pbVar18;
          if (bVar26 != 0) goto LAB_002cf5ac;
        }
        else {
          if (bVar5) goto LAB_002cf58c;
LAB_002cf560:
          bVar26 = ~((int)((uVar29 & uVar22) >> 0x20) == 0);
          if ((bool)(~((int)(uVar29 & uVar22) == 0) & 1)) goto LAB_002cf5a0;
LAB_002cf570:
          if ((bool)(bVar26 & 1)) {
LAB_002cf5ac:
            puVar11[4] = (ulong)pbVar18;
          }
        }
        uVar30 = CONCAT44(iVar23 + 8,iVar24 + 8);
        uVar19 = uVar19 - 8;
        puVar11 = puVar11 + 8;
      } while (uVar19 != 0);
      if (uVar20 == uVar16) goto LAB_002cf5bc;
    }
    do {
      if (((uVar12 >> (ulong)((uint)uVar17 & 0x1f)) >> 5 & 1) != 0) {
        local_1c8[uVar17 + 5] = (ulong)pbVar18;
      }
      uVar17 = uVar17 + 1;
    } while (uVar10 != uVar17);
  }
LAB_002cf5bc:
  if (uVar10 - 2 != 0 && 1 < (int)uVar10) {
    memcpy(local_1e0,local_190,(ulong)(uVar10 - 2) << 3);
  }
  local_1f0[1] = pbVar18;
LAB_002cf5e0:
  if (0 < (int)param_7) {
    uVar20 = (ulong)param_7;
    ppbVar13 = local_1f0 + 1;
    plVar14 = (long *)(param_6 + 8);
    do {
      pbVar18 = ppbVar13[-1];
      pbVar2 = *ppbVar13;
      ppbVar13 = ppbVar13 + 2;
      plVar14[-1] = (long)pbVar18;
      *plVar14 = (long)pbVar2 - (long)pbVar18;
      plVar14 = plVar14 + 2;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  return 1;
}



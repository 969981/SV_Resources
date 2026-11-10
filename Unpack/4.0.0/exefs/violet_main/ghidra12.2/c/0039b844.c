/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0039b844; name: FUN_0039b844
 */


void FUN_0039b844(long param_1,byte *param_2,ulong *param_3)

{
  ulong uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  bool bVar10;
  ostream *poVar11;
  long lVar12;
  undefined8 *puVar13;
  void *__src;
  size_t __n;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  void *__dest;
  long lVar22;
  int *piVar23;
  long *plVar24;
  byte *pbVar25;
  int *piVar26;
  ulong uVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  undefined1 auVar31 [16];
  ulong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68 [2];
  
  bVar5 = *(byte *)(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x88) = 0;
  if ((bVar5 & 1) == 0) {
    uVar14 = (ulong)(bVar5 >> 1);
  }
  else {
    uVar14 = *(ulong *)(param_1 + 0x78);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_98 = 0;
  local_90 = 0;
  if (uVar14 != 0) {
                    /* try { // try from 0039b89c to 0039b967 has its CatchHandler @ 0039c3dc */
    uVar14 = FUN_003a0460((byte *)(param_1 + 0x70),&local_b8);
    if ((uVar14 & 1) == 0) {
      uVar14 = *(ulong *)(param_2 + 8);
      pbVar25 = *(byte **)(param_2 + 0x10);
      if ((*param_2 & 1) == 0) {
        pbVar25 = param_2 + 1;
        uVar14 = (ulong)(*param_2 >> 1);
      }
      poVar11 = std::__put_character_sequence<char,std::char_traits<char>>
                          ((ostream *)PTR_clog_047cd060,(char *)pbVar25,uVar14);
      poVar11 = std::__put_character_sequence<char,std::char_traits<char>>
                          (poVar11,": Failed to parse \'",0x13);
      uVar14 = *(ulong *)(param_1 + 0x78);
      pcVar3 = *(char **)(param_1 + 0x80);
      if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
        pcVar3 = (char *)(param_1 + 0x71);
        uVar14 = (ulong)(*(byte *)(param_1 + 0x70) >> 1);
      }
      poVar11 = std::__put_character_sequence<char,std::char_traits<char>>(poVar11,pcVar3,uVar14);
      std::__put_character_sequence<char,std::char_traits<char>>(poVar11,"\'\n",2);
    }
    else {
      uVar14 = local_98 >> 1 & 0x7f;
      if ((local_98 & 1) != 0) {
        uVar14 = local_90;
      }
      if (uVar14 == 0) {
        if (*param_3 == 0) {
          pbVar25 = (byte *)(param_1 + 0x38);
        }
        else {
          pbVar25 = (byte *)(*(long *)(param_1 + 8) + *param_3 * 0x30 + -0x28);
        }
                    /* try { // try from 0039bb84 to 0039bb97 has its CatchHandler @ 0039c3d0 */
        FUN_0039b660(param_1,param_2,*(long *)(param_1 + 0x20) + (ulong)*pbVar25 * 0x30,local_a0,0,
                     &local_b8);
      }
      else {
        if (1 < *param_3) {
          plVar28 = (long *)(param_1 + 8);
          __dest = (void *)*plVar28;
          uVar14 = *param_3 + 0x321;
          if ((ulong)((*(long *)(param_1 + 0x18) - (long)__dest >> 4) * -0x5555555555555555) <
              uVar14) {
            lVar16 = *(long *)(param_1 + 0x10);
            lVar22 = uVar14 * 0x30;
            lVar12 = FUN_0049e770(PTR_FUN_047cba38,lVar22);
            __src = *(void **)(param_1 + 8);
            lVar16 = lVar12 + (lVar16 - (long)__dest);
            __n = *(long *)(param_1 + 0x10) - (long)__src;
            __dest = (void *)(lVar16 - __n);
            if (0 < (long)__n) {
              memcpy(__dest,__src,__n);
              __src = (void *)*plVar28;
            }
            *(void **)(param_1 + 8) = __dest;
            *(long *)(param_1 + 0x10) = lVar16;
            *(long *)(param_1 + 0x18) = lVar12 + lVar22;
            if (__src != (void *)0x0) {
              FUN_0049e790(PTR_LAB_047cba48);
              __dest = (void *)*plVar28;
            }
          }
          lVar16 = *(long *)(param_1 + 0x10) - (long)__dest >> 4;
          uVar15 = *param_3;
          uVar14 = uVar15 + 800;
          bVar10 = uVar14 < (ulong)(lVar16 * -0x5555555555555555);
          lVar16 = uVar14 + lVar16 * 0x5555555555555555;
          if (bVar10 || lVar16 == 0) {
            if (bVar10) {
              *(void **)(param_1 + 0x10) = (void *)((long)__dest + uVar14 * 0x30);
            }
          }
          else {
                    /* try { // try from 0039ba38 to 0039ba3f has its CatchHandler @ 0039c3dc */
            FUN_0039f104(plVar28,lVar16);
            uVar15 = *param_3;
            __dest = (void *)*plVar28;
          }
          *(undefined1 *)(param_1 + 0x88) = 1;
          pbVar25 = (byte *)((long)__dest + uVar15 * 0x30 + -0x58);
          piVar23 = (int *)(*(long *)(param_1 + 0x20) +
                           (ulong)*(byte *)((long)__dest + uVar15 * 0x30 + -0x28) * 0x30);
          piVar26 = (int *)(*(long *)(param_1 + 0x20) + (ulong)*pbVar25 * 0x30);
          cVar6 = (char)piVar23[10];
          piVar2 = piVar26;
          if (cVar6 != '\0') {
            piVar2 = piVar23;
          }
                    /* try { // try from 0039ba9c to 0039bacb has its CatchHandler @ 0039c3d4 */
          FUN_0039b660(param_1,param_2,piVar2,local_80,1,&local_98);
          piVar2 = piVar23;
          if (cVar6 != '\0') {
            piVar2 = piVar26;
          }
          FUN_0039b660(param_1,param_2,piVar2,local_a0,0,&local_b8);
          plVar29 = (long *)((long)__dest + uVar15 * 0x30 + -0x30);
          plVar30 = (long *)((long)__dest + uVar15 * 0x30 + -0x60);
          auVar31 = FUN_00398570(0x7b2,1,1,0,*plVar29 / 0x3c,*plVar29 % 0x3c);
          lVar16 = auVar31._8_8_;
          uVar14 = FUN_00398570(auVar31._0_8_,(long)auVar31[8],(lVar16 << 0x30) >> 0x38,
                                (lVar16 << 0x28) >> 0x38,
                                (long)*piVar23 / 0x3c + ((lVar16 << 0x20) >> 0x38),
                                (long)*piVar23 % 0x3c + ((lVar16 << 0x18) >> 0x38));
          *(ulong *)(param_1 + 0x90) = uVar14;
          if ((uVar14 & 3) == 0) {
            if ((uVar14 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
                uVar14 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
              uVar15 = (ulong)((uVar14 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                               uVar14 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
            }
            else {
              uVar15 = 1;
            }
          }
          else {
            uVar15 = 0;
          }
          lVar12 = FUN_0039ebb0(uVar14,1,1,0x7b2,1,1);
          lVar17 = (long)uVar14 % 400;
          lVar16 = lVar17 + 0x95f;
          lVar22 = lVar17 + 0x962;
          if (-1 < lVar16) {
            lVar22 = lVar16;
          }
          lVar18 = SUB168(SEXT816(lVar16) * SEXT816(0x5c28f5c28f5c28f5),8) - lVar16;
          uVar19 = *param_3;
          lVar20 = *(long *)(param_1 + 8);
          lVar16 = lVar17 + (lVar22 >> 2) + ((lVar18 >> 6) - (lVar18 >> 0x3f)) + lVar16 / 400 +
                   0x960;
          uVar14 = SUB168(SEXT816(lVar16) * SEXT816(0x4924924924924925),8);
          plVar24 = (long *)(lVar20 + uVar19 * 0x30);
          iVar21 = (*(int *)(&DAT_03cdc2a8 +
                            (lVar16 + ((uVar14 >> 1) - ((long)uVar14 >> 0x3f)) * -7) * 4) + 1) % 7;
          lVar12 = lVar12 * 0x15180;
          auVar31 = FUN_00398570(0x7b2,1,1,0,*plVar30 / 0x3c,*plVar30 % 0x3c);
          lVar16 = auVar31._8_8_;
          uVar14 = FUN_00398570(auVar31._0_8_,(long)auVar31[8],(lVar16 << 0x30) >> 0x38,
                                (lVar16 << 0x28) >> 0x38,
                                (long)*piVar26 / 0x3c + ((lVar16 << 0x20) >> 0x38),
                                (long)*piVar26 % 0x3c + ((lVar16 << 0x18) >> 0x38));
          if (uVar14 == *(ulong *)(param_1 + 0x90)) {
            plVar28 = plVar24;
          }
          else {
            if (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) == -0x30) {
              *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
            }
            else {
                    /* try { // try from 0039be60 to 0039be6b has its CatchHandler @ 0039c3cc */
              FUN_0039f104(plVar28,1);
            }
            cVar6 = (char)piVar23[10];
            piVar2 = &local_7c;
            if (cVar6 != '\0') {
              piVar2 = &local_70;
            }
            iVar7 = *piVar2;
            if (iVar7 == 2) {
              piVar2 = &local_78;
              if (cVar6 != '\0') {
                piVar2 = &local_6c;
              }
              lVar22 = (long)*(char *)((long)piVar2 + 1);
              lVar16 = (long)(char)*piVar2;
              if (lVar22 == 5) {
                lVar16 = lVar16 + 1;
              }
              lVar17 = (long)*(short *)(&DAT_03cdc2c4 + lVar16 * 2 + uVar15 * 0x1c);
              lVar16 = (lVar17 + iVar21) % 7;
              if (lVar22 == 5) {
                lVar17 = ~(((lVar16 - *(char *)((long)piVar2 + 2)) + 6) % 7) + lVar17;
              }
              else {
                lVar17 = lVar22 * 7 + lVar17 + ((*(char *)((long)piVar2 + 2) - lVar16) + 7) % 7 + -7
                ;
              }
            }
            else if (iVar7 == 1) {
              piVar2 = &local_78;
              if (cVar6 != '\0') {
                piVar2 = &local_6c;
              }
              lVar17 = (long)*piVar2;
            }
            else if (iVar7 == 0) {
              piVar2 = &local_78;
              if (cVar6 != '\0') {
                piVar2 = &local_6c;
              }
              lVar17 = (long)*piVar2 - (ulong)((uint)((long)*piVar2 < 0x3c) | (uint)uVar15 ^ 1);
            }
            else {
              lVar17 = 0;
            }
            piVar2 = &local_74;
            if (cVar6 != '\0') {
              piVar2 = local_68;
            }
            plVar28 = plVar24 + 6;
            *plVar24 = (lVar12 + lVar17 * 0x15180 + (long)*piVar2) - (long)*piVar23;
            *(byte *)(lVar20 + uVar19 * 0x30 + 8) = *pbVar25;
            plVar29 = (long *)(*(long *)(param_1 + 8) + *param_3 * 0x30);
            piVar23 = (int *)(*(long *)(param_1 + 0x20) + (ulong)*(byte *)(plVar29 + 1) * 0x30);
            piVar26 = (int *)(*(long *)(param_1 + 0x20) + (ulong)*(byte *)(plVar29 + -5) * 0x30);
            uVar14 = *(ulong *)(param_1 + 0x90);
            plVar30 = plVar29 + -6;
          }
          cVar6 = (char)piVar23[10];
          iVar7 = *piVar23;
          iVar8 = *piVar26;
          piVar2 = &local_6c;
          piVar23 = &local_78;
          if (cVar6 != '\0') {
            piVar2 = &local_78;
            piVar23 = &local_6c;
          }
          uVar19 = uVar14;
          do {
            uVar27 = 0;
            uVar1 = uVar19 + 1;
            if (((uVar1 & 3) == 0) && ((int)uVar15 == 0)) {
              if ((uVar1 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
                  uVar1 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
                uVar27 = (ulong)((uVar1 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                                 uVar1 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
              }
              else {
                uVar27 = 1;
              }
            }
            lVar12 = lVar12 + (int)(&DAT_03cb5428)[uVar15];
            iVar21 = ((&DAT_03cb56a8)[uVar15] + iVar21) % 7;
            piVar26 = &local_7c;
            if (cVar6 != '\0') {
              piVar26 = &local_70;
            }
            iVar4 = *piVar26;
            if (iVar4 == 2) {
              lVar22 = (long)*(char *)((long)piVar23 + 1);
              lVar16 = (long)(char)*piVar23;
              if (lVar22 == 5) {
                lVar16 = lVar16 + 1;
              }
              lVar17 = (long)*(short *)(&DAT_03cdc2c4 + lVar16 * 2 + uVar27 * 0x1c);
              lVar16 = (lVar17 + iVar21) % 7;
              if (lVar22 == 5) {
                lVar17 = ~(((lVar16 - *(char *)((long)piVar23 + 2)) + 6) % 7) + lVar17;
              }
              else {
                lVar17 = lVar22 * 7 + lVar17 + ((*(char *)((long)piVar23 + 2) - lVar16) + 7) % 7 +
                         -7;
              }
            }
            else if (iVar4 == 1) {
              piVar26 = &local_78;
              if (cVar6 != '\0') {
                piVar26 = &local_6c;
              }
              lVar17 = (long)*piVar26;
            }
            else if (iVar4 == 0) {
              piVar26 = &local_78;
              if (cVar6 != '\0') {
                piVar26 = &local_6c;
              }
              lVar17 = (long)*piVar26 - (ulong)((uint)((long)*piVar26 < 0x3c) | (uint)uVar27 ^ 1);
            }
            else {
              lVar17 = 0;
            }
            piVar26 = &local_74;
            if (cVar6 != '\0') {
              piVar26 = local_68;
            }
            *plVar28 = (lVar12 + lVar17 * 0x15180 + (long)*piVar26) - (long)iVar7;
            piVar26 = &local_70;
            if (cVar6 != '\0') {
              piVar26 = &local_7c;
            }
            *(char *)(plVar28 + 1) = (char)plVar30[1];
            iVar4 = *piVar26;
            if (iVar4 == 2) {
              lVar22 = (long)*(char *)((long)piVar2 + 1);
              lVar16 = (long)(char)*piVar2;
              if (lVar22 == 5) {
                lVar16 = lVar16 + 1;
              }
              lVar17 = (long)*(short *)(&DAT_03cdc2c4 + lVar16 * 2 + uVar27 * 0x1c);
              lVar16 = (lVar17 + iVar21) % 7;
              if (lVar22 == 5) {
                lVar17 = ~(((lVar16 - *(char *)((long)piVar2 + 2)) + 6) % 7) + lVar17;
              }
              else {
                lVar17 = lVar22 * 7 + lVar17 + ((*(char *)((long)piVar2 + 2) - lVar16) + 7) % 7 + -7
                ;
              }
            }
            else if (iVar4 == 1) {
              piVar26 = &local_6c;
              if (cVar6 != '\0') {
                piVar26 = &local_78;
              }
              lVar17 = (long)*piVar26;
            }
            else if (iVar4 == 0) {
              piVar26 = &local_6c;
              if (cVar6 != '\0') {
                piVar26 = &local_78;
              }
              lVar17 = (long)*piVar26 - (ulong)((uint)((long)*piVar26 < 0x3c) | (uint)uVar27 ^ 1);
            }
            else {
              lVar17 = 0;
            }
            piVar26 = local_68;
            if (cVar6 != '\0') {
              piVar26 = &local_74;
            }
            plVar28[6] = (lVar12 + lVar17 * 0x15180 + (long)*piVar26) - (long)iVar8;
            *(char *)(plVar28 + 7) = (char)plVar29[1];
            plVar28 = plVar28 + 0xc;
            bVar10 = (long)uVar19 < (long)(uVar14 + 399);
            uVar19 = uVar1;
            uVar15 = uVar27;
          } while (bVar10);
          *(ulong *)(param_1 + 0x90) = uVar1;
          goto joined_r0x0039bbc0;
        }
        uVar14 = *(ulong *)(param_2 + 8);
        pbVar25 = *(byte **)(param_2 + 0x10);
        if ((*param_2 & 1) == 0) {
          pbVar25 = param_2 + 1;
          uVar14 = (ulong)(*param_2 >> 1);
        }
        poVar11 = std::__put_character_sequence<char,std::char_traits<char>>
                            ((ostream *)PTR_clog_047cd060,(char *)pbVar25,uVar14);
        std::__put_character_sequence<char,std::char_traits<char>>
                  (poVar11,": Too few transitions for POSIX spec\n",0x25);
      }
    }
  }
  if (*(long *)(*(long *)(param_1 + 0x10) + -0x30) < 0) {
    uVar9 = *(undefined1 *)(*(long *)(param_1 + 0x10) + -0x28);
                    /* try { // try from 0039bbac to 0039bbaf has its CatchHandler @ 0039c3d8 */
    puVar13 = (undefined8 *)FUN_0039b364(param_1 + 8);
    *puVar13 = 0x7fffffff;
    *(undefined1 *)(puVar13 + 1) = uVar9;
  }
joined_r0x0039bbc0:
  if ((local_98 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_88);
  }
  if ((local_b8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_a8);
  }
  return;
}



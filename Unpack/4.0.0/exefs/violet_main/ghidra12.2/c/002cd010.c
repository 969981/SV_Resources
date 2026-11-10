/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cd010; name: FUN_002cd010
 */


undefined8
FUN_002cd010(byte *param_1,long *param_2,ulong param_3,ulong param_4,int param_5,long *param_6,
            int param_7)

{
  undefined1 **__s2;
  undefined1 ***pppuVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ostream *poVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  undefined1 **ppuVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  byte bVar19;
  char *pcVar20;
  long lVar21;
  undefined1 **local_1c0;
  ulong uStack_1b8;
  char local_1a4 [4];
  undefined1 **local_1a0;
  ulong uStack_198;
  undefined1 **local_190;
  ulong uStack_188;
  undefined1 *local_180;
  byte **appbStack_178 [33];
  byte *local_70;
  undefined1 auStack_68 [8];
  
  if (*(int *)(param_1 + 0x40) != 0) {
    if (param_1[0x1e] == 0) {
      return 0;
    }
    FUN_002cc810(&local_180,"external/com_github_google_re2/re2/re2.cc",0x26e);
                    /* try { // try from 002cd05c to 002cd08b has its CatchHandler @ 002cdb98 */
    poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                       ((ostream *)appbStack_178,"Invalid RE2: ",0xd);
    pbVar11 = *(byte **)(param_1 + 0x38);
    uVar18 = *(ulong *)(pbVar11 + 8);
    pbVar9 = *(byte **)(pbVar11 + 0x10);
    if ((*pbVar11 & 1) == 0) {
      pbVar9 = pbVar11 + 1;
      uVar18 = (ulong)(*pbVar11 >> 1);
    }
    std::__put_character_sequence<char,std::char_traits<char>>(poVar8,(char *)pbVar9,uVar18);
    goto LAB_002cd15c;
  }
  if ((param_4 < param_3) || (uVar18 = param_2[1], uVar18 < param_4)) {
    if (param_1[0x1e] == 0) {
      return 0;
    }
    FUN_002cc810(&local_180,"external/com_github_google_re2/re2/re2.cc",0x274);
                    /* try { // try from 002cd0d4 to 002cd15b has its CatchHandler @ 002cdb9c */
    poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                       ((ostream *)appbStack_178,"RE2: invalid startpos, endpos pair. [",0x25);
    poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,"startpos: ",10);
    poVar8 = (ostream *)std::ostream::operator<<(poVar8,param_3);
    poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
    poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,"endpos: ",8);
    poVar8 = (ostream *)std::ostream::operator<<(poVar8,param_4);
    poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
    poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,"text size: ",0xb);
    poVar8 = (ostream *)std::ostream::operator<<(poVar8,param_2[1]);
    std::__put_character_sequence<char,std::char_traits<char>>(poVar8,"]",1);
    goto LAB_002cd15c;
  }
  local_1a0 = (undefined1 **)0x0;
  uStack_198 = 0;
  __s2 = (undefined1 **)(*param_2 + param_3);
  uVar16 = (param_2[1] - param_3) + (param_4 - uVar18);
  pppuVar1 = (undefined1 ***)0x0;
  if (param_7 != 0) {
    pppuVar1 = &local_1a0;
  }
  pcVar20 = *(char **)(param_1 + 0x88);
  iVar2 = param_7;
  if (*(int *)(param_1 + 0x90) < param_7) {
    iVar2 = *(int *)(param_1 + 0x90) + 1;
  }
  cVar4 = *pcVar20;
  if ((param_3 != 0) && (cVar4 != '\0')) {
    return 0;
  }
  cVar5 = pcVar20[1];
  if (cVar5 == '\0') {
LAB_002cd1f8:
    if (cVar4 != '\0' && param_5 != 2) {
      param_5 = 1;
    }
  }
  else {
    if (uVar18 != param_4) {
      return 0;
    }
    if (cVar4 == '\0') goto LAB_002cd1f8;
    param_5 = 2;
  }
  bVar3 = param_1[0x60];
  if ((bVar3 & 1) == 0) {
    uVar14 = (ulong)(bVar3 >> 1);
  }
  else {
    uVar14 = *(ulong *)(param_1 + 0x68);
  }
  local_190 = __s2;
  uStack_188 = uVar16;
  if (uVar14 == 0) {
    uVar14 = 0;
  }
  else {
    if (param_3 != 0) {
      return 0;
    }
    if ((bVar3 & 1) == 0) {
      uVar14 = (ulong)(bVar3 >> 1);
      if (uVar16 < uVar14) {
        return 0;
      }
      pbVar9 = param_1 + 0x61;
      if (param_1[0x78] != 0) goto LAB_002cd240;
LAB_002cd348:
      iVar7 = memcmp(pbVar9,__s2,uVar14);
      if (iVar7 != 0) {
        return 0;
      }
    }
    else {
      uVar14 = *(ulong *)(param_1 + 0x68);
      if (uVar16 < uVar14) {
        return 0;
      }
      pbVar9 = *(byte **)(param_1 + 0x70);
      if (param_1[0x78] == 0) goto LAB_002cd348;
LAB_002cd240:
      if (0 < (long)uVar14) {
        pbVar11 = pbVar9 + uVar14;
        ppuVar12 = __s2;
        do {
          bVar3 = *(byte *)ppuVar12;
          uVar15 = bVar3 + 0x20;
          if (0x19 < bVar3 - 0x41) {
            uVar15 = (uint)bVar3;
          }
          if ((uint)*pbVar9 != (uVar15 & 0xff)) {
            return 0;
          }
          pbVar9 = pbVar9 + 1;
          ppuVar12 = (undefined1 **)((long)ppuVar12 + 1);
        } while (pbVar9 < pbVar11);
      }
    }
    bVar6 = param_5 == 2;
    param_5 = 1;
    if (bVar6) {
      param_5 = 2;
    }
    local_190 = (undefined1 **)((long)__s2 + uVar14);
    uStack_188 = uVar16 - uVar14;
  }
  bVar3 = param_1[0x94];
  iVar7 = 0;
  if (*(int *)(pcVar20 + 0x28) != 0) {
    iVar7 = 0x40000 / *(int *)(pcVar20 + 0x28);
  }
  bVar19 = param_1[0x1d];
  lVar21 = *(long *)(pcVar20 + 0x50);
  lVar13 = tpidr_el0;
  *(byte **)(lVar13 + 0x40) = param_1;
  local_1a4[0] = '\0';
  if (param_5 == 0) {
    if (cVar5 == '\0') {
      uVar18 = FUN_002d6c80(pcVar20,&local_190,param_2,0,bVar19,pppuVar1,local_1a4,0);
      if ((uVar18 & 1) == 0) {
        if (local_1a4[0] == '\0') {
          return 0;
        }
        if (param_1[0x1e] != 0) {
          FUN_002cc810(&local_180,"external/com_github_google_re2/re2/re2.cc",0x2ea);
                    /* try { // try from 002cd6b4 to 002cd6d3 has its CatchHandler @ 002cdb88 */
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             ((ostream *)appbStack_178,"DFA out of memory: ",0x13);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"pattern length ",0xf);
          if ((*param_1 & 1) == 0) {
            uVar18 = (ulong)(*param_1 >> 1);
          }
          else {
            uVar18 = *(ulong *)(param_1 + 8);
          }
                    /* try { // try from 002cd81c to 002cd8a3 has its CatchHandler @ 002cdb88 */
          poVar8 = (ostream *)std::ostream::operator<<(poVar8,uVar18);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"program size ",0xd);
          poVar8 = (ostream *)
                   std::ostream::operator<<(poVar8,*(int *)(*(long *)(param_1 + 0x88) + 0x10));
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"list count ",0xb);
          poVar8 = (ostream *)
                   std::ostream::operator<<(poVar8,*(int *)(*(long *)(param_1 + 0x88) + 0x28));
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"bytemap range ",0xe);
          std::ostream::operator<<(poVar8,*(int *)(*(long *)(param_1 + 0x88) + 0x14));
LAB_002cd8a4:
          FUN_002cc97c(&local_180);
        }
        iVar10 = 0;
      }
      else {
        if (param_7 == 0) {
          return 1;
        }
        local_70 = param_1;
        if (*(ulong *)(param_1 + 0xb0) != 0xffffffffffffffff) {
          local_180 = auStack_68;
          appbStack_178[0] = &local_70;
          local_1c0 = &local_180;
          std::__call_once((ulong *)(param_1 + 0xb0),&local_1c0,(_func_void_void_ptr *)&LAB_002cea50
                          );
        }
        lVar13 = *(long *)(param_1 + 0x98);
        if (lVar13 != 0) {
          uVar18 = FUN_002d6c80(lVar13,&local_1a0,param_2,1,1,&local_1a0,local_1a4,0);
          if ((uVar18 & 1) != 0) goto LAB_002cd3bc;
          if (local_1a4[0] == '\0') {
            if (param_1[0x1e] == 0) {
              return 0;
            }
            FUN_002cc810(&local_180,"external/com_github_google_re2/re2/re2.cc",0x30e);
                    /* try { // try from 002cdac0 to 002cdacf has its CatchHandler @ 002cdb74 */
            std::__put_character_sequence<char,std::char_traits<char>>
                      ((ostream *)appbStack_178,"SearchDFA inconsistency",0x17);
            goto LAB_002cd15c;
          }
          if (param_1[0x1e] != 0) {
            FUN_002cc810(&local_180,"external/com_github_google_re2/re2/re2.cc",0x304);
                    /* try { // try from 002cd5d4 to 002cd5f3 has its CatchHandler @ 002cdb7c */
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                               ((ostream *)appbStack_178,"DFA out of memory: ",0x13);
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                               (poVar8,"pattern length ",0xf);
            if ((*param_1 & 1) == 0) {
              uVar18 = (ulong)(*param_1 >> 1);
            }
            else {
              uVar18 = *(ulong *)(param_1 + 8);
            }
                    /* try { // try from 002cdad8 to 002cdb53 has its CatchHandler @ 002cdb7c */
            poVar8 = (ostream *)std::ostream::operator<<(poVar8,uVar18);
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                               (poVar8,"program size ",0xd);
            poVar8 = (ostream *)std::ostream::operator<<(poVar8,*(int *)(lVar13 + 0x10));
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                               (poVar8,"list count ",0xb);
            poVar8 = (ostream *)std::ostream::operator<<(poVar8,*(int *)(lVar13 + 0x28));
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
            poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                               (poVar8,"bytemap range ",0xe);
            std::ostream::operator<<(poVar8,*(int *)(lVar13 + 0x14));
            FUN_002cc97c(&local_180);
          }
        }
        iVar10 = 0;
      }
      goto LAB_002cd8c0;
    }
    local_70 = param_1;
    if (*(ulong *)(param_1 + 0xb0) != 0xffffffffffffffff) {
      local_180 = auStack_68;
      appbStack_178[0] = &local_70;
      local_1c0 = &local_180;
      std::__call_once((ulong *)(param_1 + 0xb0),&local_1c0,(_func_void_void_ptr *)&LAB_002cea50);
    }
    lVar13 = *(long *)(param_1 + 0x98);
    if (lVar13 == 0) {
      iVar10 = 0;
      goto LAB_002cd8c0;
    }
    uVar18 = FUN_002d6c80(lVar13,&local_190,param_2,1,1,pppuVar1,local_1a4,0);
    if ((uVar18 & 1) == 0) {
      if (local_1a4[0] == '\0') {
        return 0;
      }
      if (param_1[0x1e] != 0) {
        FUN_002cc810(&local_180,"external/com_github_google_re2/re2/re2.cc",0x2d6);
                    /* try { // try from 002cd658 to 002cd677 has its CatchHandler @ 002cdb8c */
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                           ((ostream *)appbStack_178,"DFA out of memory: ",0x13);
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                           (poVar8,"pattern length ",0xf);
        if ((*param_1 & 1) == 0) {
          uVar18 = (ulong)(*param_1 >> 1);
        }
        else {
          uVar18 = *(ulong *)(param_1 + 8);
        }
                    /* try { // try from 002cd798 to 002cd813 has its CatchHandler @ 002cdb8c */
        poVar8 = (ostream *)std::ostream::operator<<(poVar8,uVar18);
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                           (poVar8,"program size ",0xd);
        poVar8 = (ostream *)std::ostream::operator<<(poVar8,*(int *)(lVar13 + 0x10));
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                           (poVar8,"list count ",0xb);
        poVar8 = (ostream *)std::ostream::operator<<(poVar8,*(int *)(lVar13 + 0x28));
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                           (poVar8,"bytemap range ",0xe);
        std::ostream::operator<<(poVar8,*(int *)(lVar13 + 0x14));
        goto LAB_002cd8a4;
      }
      iVar10 = 0;
      goto LAB_002cd8c0;
    }
    if (param_7 == 0) {
      return 1;
    }
LAB_002cd3bc:
    if (iVar2 < 2) {
      if (iVar2 == 1) {
        param_6[1] = uStack_198;
        *param_6 = (long)local_1a0;
      }
      goto LAB_002cd9d8;
    }
    bVar6 = false;
    bVar19 = 2;
    iVar10 = 1;
    uStack_1b8 = uStack_198;
    local_1c0 = local_1a0;
  }
  else {
    if (param_5 != 1) {
      if (param_5 != 2) {
        FUN_002cc810(&local_180,"external/com_github_google_re2/re2/re2.cc",0x2c4);
                    /* try { // try from 002cd490 to 002cd4a7 has its CatchHandler @ 002cdb90 */
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                           ((ostream *)appbStack_178,"Unexpected re_anchor value: ",0x1c);
        std::ostream::operator<<(poVar8,param_5);
        goto LAB_002cd15c;
      }
      bVar19 = 2;
    }
    if ((0x1000 < uVar18 || (5 < iVar2 || bVar3 == 0)) || ((iVar10 = 1, 8 < uVar18 && (iVar2 < 2))))
    {
      if ((lVar21 == 0) || ((iVar2 < 2 || ((ulong)(long)iVar7 < uVar18)))) {
        uVar18 = FUN_002d6c80(pcVar20,&local_190,param_2,1,bVar19,&local_1a0,local_1a4,0);
        if ((uVar18 & 1) != 0) goto LAB_002cd3bc;
        if (local_1a4[0] == '\0') {
          return 0;
        }
        if (param_1[0x1e] == 0) {
          iVar10 = 1;
        }
        else {
          FUN_002cc810(&local_180,"external/com_github_google_re2/re2/re2.cc",0x32e);
                    /* try { // try from 002cd4d8 to 002cd4f7 has its CatchHandler @ 002cdb94 */
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             ((ostream *)appbStack_178,"DFA out of memory: ",0x13);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"pattern length ",0xf);
          if ((*param_1 & 1) == 0) {
            uVar18 = (ulong)(*param_1 >> 1);
          }
          else {
            uVar18 = *(ulong *)(param_1 + 8);
          }
                    /* try { // try from 002cd6f0 to 002cd777 has its CatchHandler @ 002cdb94 */
          poVar8 = (ostream *)std::ostream::operator<<(poVar8,uVar18);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"program size ",0xd);
          poVar8 = (ostream *)
                   std::ostream::operator<<(poVar8,*(int *)(*(long *)(param_1 + 0x88) + 0x10));
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"list count ",0xb);
          poVar8 = (ostream *)
                   std::ostream::operator<<(poVar8,*(int *)(*(long *)(param_1 + 0x88) + 0x28));
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>(poVar8,", ",2);
          poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                             (poVar8,"bytemap range ",0xe);
          std::ostream::operator<<(poVar8,*(int *)(*(long *)(param_1 + 0x88) + 0x14));
          FUN_002cc97c(&local_180);
          iVar10 = 1;
        }
      }
      else {
        iVar10 = 1;
      }
    }
LAB_002cd8c0:
    bVar6 = true;
    uStack_1b8 = uStack_188;
    local_1c0 = local_190;
  }
  if ((5 < iVar2 || bVar3 == 0) || iVar10 == 0) {
    if ((lVar21 == 0) || ((ulong)(long)iVar7 < uStack_1b8)) {
      uVar18 = FUN_002d9340(*(undefined8 *)(param_1 + 0x88),&local_1c0,param_2,iVar10,bVar19,param_6
                           );
      if (!bVar6 && (uVar18 & 1) == 0) {
        if (param_1[0x1e] == 0) {
          return 0;
        }
        FUN_002cc810(&local_180,"external/com_github_google_re2/re2/re2.cc",0x35f);
                    /* try { // try from 002cd998 to 002cd9a7 has its CatchHandler @ 002cdb80 */
        std::__put_character_sequence<char,std::char_traits<char>>
                  ((ostream *)appbStack_178,"SearchNFA inconsistency",0x17);
        goto LAB_002cd15c;
      }
    }
    else {
      uVar18 = FUN_002d7e7c(*(undefined8 *)(param_1 + 0x88),&local_1c0,param_2,iVar10,bVar19,param_6
                           );
      if (!bVar6 && (uVar18 & 1) == 0) {
        if (param_1[0x1e] == 0) {
          return 0;
        }
        FUN_002cc810(&local_180,"external/com_github_google_re2/re2/re2.cc",0x359);
                    /* try { // try from 002cda8c to 002cda9b has its CatchHandler @ 002cdb78 */
        std::__put_character_sequence<char,std::char_traits<char>>
                  ((ostream *)appbStack_178,"SearchBitState inconsistency",0x1c);
LAB_002cd15c:
        FUN_002cc97c(&local_180);
        return 0;
      }
    }
  }
  else {
    uVar18 = FUN_002cec5c(*(undefined8 *)(param_1 + 0x88),&local_1c0,param_2,iVar10,bVar19,param_6);
    if (!bVar6 && (uVar18 & 1) == 0) {
      if (param_1[0x1e] == 0) {
        return 0;
      }
      FUN_002cc810(&local_180,"external/com_github_google_re2/re2/re2.cc",0x352);
                    /* try { // try from 002cd92c to 002cd93b has its CatchHandler @ 002cdb84 */
      std::__put_character_sequence<char,std::char_traits<char>>
                ((ostream *)appbStack_178,"SearchOnePass inconsistency",0x1b);
      goto LAB_002cd15c;
    }
  }
  if ((uVar18 & 1) == 0) {
    return 0;
  }
LAB_002cd9d8:
  if ((0 < param_7) && (uVar14 != 0)) {
    *param_6 = *param_6 - uVar14;
    param_6[1] = param_6[1] + uVar14;
  }
  if (iVar2 < param_7) {
    uVar18 = (ulong)iVar2;
    uVar14 = ~uVar18;
    uVar16 = (ulong)(uint)(param_7 - iVar2) & 3;
    if ((param_7 - iVar2 & 3U) != 0) {
      plVar17 = param_6 + uVar18 * 2;
      do {
        uVar18 = uVar18 + 1;
        uVar16 = uVar16 - 1;
        *plVar17 = 0;
        plVar17[1] = 0;
        plVar17 = plVar17 + 2;
      } while (uVar16 != 0);
    }
    if (2 < uVar14 + (long)param_7) {
      lVar13 = (long)param_7 - uVar18;
      param_6 = param_6 + uVar18 * 2 + 4;
      do {
        param_6[-4] = 0;
        param_6[-3] = 0;
        lVar13 = lVar13 + -4;
        param_6[-2] = 0;
        param_6[-1] = 0;
        *param_6 = 0;
        param_6[1] = 0;
        param_6[2] = 0;
        param_6[3] = 0;
        param_6 = param_6 + 8;
      } while (lVar13 != 0);
    }
  }
  return 1;
}



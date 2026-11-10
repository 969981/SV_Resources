/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e88e0; name: FUN_002e88e0
 */


long FUN_002e88e0(undefined8 param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ostream *poVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int iVar14;
  byte local_188 [8];
  ulong local_180;
  char *local_178;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [264];
  
  uVar11 = (ulong)param_2;
  if (param_3 == -1) {
    uVar1 = param_2 - 1;
    if (uVar1 == 0) {
      uVar6 = FUN_002e4590(param_1);
      lVar4 = FUN_002e4f18(uVar6,param_4);
      return lVar4;
    }
    if (param_2 == 0) {
      uVar6 = FUN_002e4590(param_1);
      lVar4 = FUN_002e4f28(uVar6,param_4);
      return lVar4;
    }
    puVar7 = (undefined8 *)
             FUN_0049e770(PTR_FUN_047cba38,
                          -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3);
    if (1 < (int)param_2) {
      uVar12 = (ulong)uVar1;
      puVar13 = puVar7;
      do {
                    /* try { // try from 002e8a78 to 002e8a7f has its CatchHandler @ 002e8d18 */
        uVar6 = FUN_002e4590(param_1);
        uVar12 = uVar12 - 1;
        *puVar13 = uVar6;
        puVar13 = puVar13 + 1;
      } while (uVar12 != 0);
    }
                    /* try { // try from 002e8a8c to 002e8aaf has its CatchHandler @ 002e8d14 */
    uVar6 = FUN_002e4590(param_1);
    uVar6 = FUN_002e4f18(uVar6,param_4);
    puVar7[(int)uVar1] = uVar6;
    lVar4 = FUN_002e5308(puVar7,uVar11,param_4);
    FUN_0049e790(PTR_LAB_047cba48,puVar7);
    return lVar4;
  }
  if (param_3 == 0 && param_2 == 0) {
    lVar4 = FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (lVar4 == 0) {
      return 0;
    }
    uVar6 = 2;
  }
  else {
    if ((param_2 == 1) && (param_3 == 1)) {
      lVar4 = FUN_002e4590(param_1);
      return lVar4;
    }
    if ((int)param_2 < 1) {
      lVar4 = 0;
    }
    else {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar11 * 8);
      lVar4 = 0;
      do {
                    /* try { // try from 002e89dc to 002e89e3 has its CatchHandler @ 002e8d38 */
        uVar6 = FUN_002e4590(param_1);
        *(undefined8 *)(lVar5 + lVar4) = uVar6;
        lVar4 = lVar4 + 8;
      } while (uVar11 * 8 != lVar4);
                    /* try { // try from 002e89f4 to 002e8a03 has its CatchHandler @ 002e8ce4 */
      lVar4 = FUN_002e5308(lVar5,uVar11,param_4);
      FUN_0049e790(PTR_LAB_047cba48,lVar5);
    }
    lVar5 = lVar4;
    if ((int)param_2 < param_3) {
      uVar6 = FUN_002e4590(param_1);
      lVar5 = FUN_002e4f38(uVar6,param_4);
      puVar3 = PTR_FUN_047cba38;
      if ((int)(param_2 + 1) < param_3) {
        iVar14 = ~param_2 + param_3;
        do {
          uVar6 = FUN_002e4590(param_1);
          lVar8 = FUN_0049e770(puVar3,0x28);
          if (lVar8 != 0) {
            FUN_002e4418(lVar8,5,param_4);
          }
          puVar7 = (undefined8 *)FUN_0049e7b0(puVar3,0x10);
          *(undefined8 **)(lVar8 + 8) = puVar7;
          *(undefined2 *)(lVar8 + 6) = 2;
          *puVar7 = uVar6;
          puVar7[1] = lVar5;
          lVar5 = FUN_002e4f38(lVar8,param_4);
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      if (lVar4 != 0) {
        lVar8 = FUN_0049e770(PTR_FUN_047cba38,0x28);
        if (lVar8 != 0) {
          FUN_002e4418(lVar8,5,param_4);
        }
        plVar9 = (long *)FUN_0049e7b0(PTR_FUN_047cba38,0x10);
        *(long **)(lVar8 + 8) = plVar9;
        *(undefined2 *)(lVar8 + 6) = 2;
        *plVar9 = lVar4;
        plVar9[1] = lVar5;
        return lVar8;
      }
    }
    if (lVar5 != 0) {
      return lVar5;
    }
    FUN_002cc810(auStack_170,"external/com_github_google_re2/re2/simplify.cc",0x27c);
                    /* try { // try from 002e8bf4 to 002e8c03 has its CatchHandler @ 002e8cdc */
    poVar10 = std::__put_character_sequence<char,std::char_traits<char>>
                        (aoStack_168,"Malformed repeat ",0x11);
                    /* try { // try from 002e8c08 to 002e8c17 has its CatchHandler @ 002e8cd4 */
    FUN_002e9e60(local_188,param_1);
    uVar11 = (ulong)(local_188[0] >> 1);
    pcVar2 = (char *)((ulong)local_188 | 1);
    if ((local_188[0] & 1) != 0) {
      uVar11 = local_180;
      pcVar2 = local_178;
    }
                    /* try { // try from 002e8c34 to 002e8c6b has its CatchHandler @ 002e8cec */
    poVar10 = std::__put_character_sequence<char,std::char_traits<char>>(poVar10,pcVar2,uVar11);
    poVar10 = std::__put_character_sequence<char,std::char_traits<char>>(poVar10," ",1);
    poVar10 = (ostream *)std::ostream::operator<<(poVar10,param_2);
    poVar10 = std::__put_character_sequence<char,std::char_traits<char>>(poVar10," ",1);
    std::ostream::operator<<(poVar10,param_3);
    if ((local_188[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_178);
    }
    FUN_002cc97c(auStack_170);
    lVar4 = FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (lVar4 == 0) {
      return 0;
    }
    uVar6 = 1;
  }
  FUN_002e4418(lVar4,uVar6,param_4);
  return lVar4;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d57b8; name: FUN_002d57b8
 */


long FUN_002d57b8(long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  int *piVar15;
  char local_170 [8];
  ostream aoStack_168 [264];
  
  if (param_2 < (long *)0x3) {
    if (param_2 == (long *)0x0) {
      FUN_002cc810(local_170,"external/com_github_google_re2/re2/dfa.cc",0x3fa);
                    /* try { // try from 002d596c to 002d597b has its CatchHandler @ 002d5b48 */
      std::__put_character_sequence<char,std::char_traits<char>>
                (aoStack_168,"NULL state in RunStateOnByte",0x1c);
    }
    else {
      if (param_2 == (long *)0x2) {
        return 2;
      }
      if (param_2 == (long *)0x1) {
        FUN_002cc810(local_170,"external/com_github_google_re2/re2/dfa.cc",0x3f6);
                    /* try { // try from 002d5838 to 002d5847 has its CatchHandler @ 002d5b4c */
        std::__put_character_sequence<char,std::char_traits<char>>
                  (aoStack_168,"DeadState in RunStateOnByte",0x1b);
      }
      else {
        FUN_002cc810(local_170,"external/com_github_google_re2/re2/dfa.cc",0x3fd);
                    /* try { // try from 002d599c to 002d59ab has its CatchHandler @ 002d5b44 */
        std::__put_character_sequence<char,std::char_traits<char>>
                  (aoStack_168,"Unexpected special state in RunStateOnByte",0x2a);
      }
    }
    FUN_002cc97c(local_170);
    lVar6 = 0;
  }
  else {
    if (param_3 == 0x100) {
      lVar6 = param_2[(long)*(int *)(*param_1 + 0x14) + 2];
    }
    else {
      lVar6 = param_2[(long)(int)(uint)*(byte *)(*param_1 + (long)(int)param_3 + 0x98) + 2];
    }
    if (lVar6 == 0) {
      plVar13 = param_1 + 8;
      piVar10 = (int *)*plVar13;
      *piVar10 = 0;
      piVar10[0xc] = piVar10[10];
      if (0 < (int)param_2[1]) {
        lVar6 = 0;
        do {
          iVar3 = *(int *)(*param_2 + lVar6 * 4);
          if (iVar3 == -1) {
            if ((char)piVar10[0xd] == '\0') {
              uVar7 = piVar10[0xc];
              piVar10[0xc] = uVar7 + 1;
              lVar8 = *(long *)(piVar10 + 6);
              *(undefined1 *)(piVar10 + 0xd) = 0;
              if ((lVar8 != 0) && (uVar7 < (uint)piVar10[8])) {
                *(int *)(*(long *)(piVar10 + 2) + (long)(int)uVar7 * 4) = *piVar10;
                *(uint *)(lVar8 + (long)*piVar10 * 4) = uVar7;
                *piVar10 = *piVar10 + 1;
              }
            }
          }
          else {
            if (iVar3 == -2) break;
            FUN_002d50dc(param_1,piVar10,iVar3,*(undefined1 *)((long)param_2 + 0xc));
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)param_2[1]);
      }
      uVar2 = *(uint *)((long)param_2 + 0xc);
      uVar7 = uVar2 & 0xff;
      bVar5 = param_3 == 10;
      uVar1 = uVar7 | 2;
      if (!bVar5) {
        uVar1 = uVar7;
      }
      if (param_3 == 0x100) {
        bVar4 = false;
        uVar1 = uVar1 | 10;
      }
      else if (((param_3 & 0xffffffdf) - 0x41 & 0xff) < 0x1a) {
        bVar4 = true;
      }
      else {
        bVar4 = (param_3 & 0xff) == 0x5f || (param_3 - 0x30 & 0xff) < 10;
      }
      plVar14 = param_1 + 9;
      piVar11 = (int *)*plVar14;
      piVar10 = (int *)param_1[8];
      uVar9 = 0x20;
      if (!(bool)((uVar2 & 0x200) == 0 ^ bVar4)) {
        uVar9 = 0x10;
      }
      piVar12 = piVar11;
      if ((uVar2 >> 0x10 & (uVar7 ^ 0xffffffff) & (uVar9 | uVar1)) != 0) {
        *piVar11 = 0;
        piVar11[0xc] = piVar11[10];
        if (*piVar10 != 0) {
          piVar12 = *(int **)(piVar10 + 6);
          do {
            piVar15 = piVar12 + 1;
            iVar3 = *piVar12;
            if (piVar10[10] <= iVar3) {
              iVar3 = -1;
            }
            FUN_002d50dc(param_1,piVar11,iVar3,uVar9 | uVar1);
            piVar12 = piVar15;
          } while (piVar15 != (int *)(*(long *)(piVar10 + 6) + (long)*piVar10 * 4));
          piVar10 = (int *)*plVar13;
          piVar11 = (int *)*plVar14;
        }
        *plVar13 = (long)piVar11;
        *plVar14 = (long)piVar10;
        piVar12 = piVar10;
        piVar10 = piVar11;
      }
      local_170[0] = '\0';
      FUN_002d5350(param_1,piVar10,piVar12,param_3,bVar5,local_170);
      lVar6 = param_1[8];
      lVar8 = param_1[9];
      param_1[8] = lVar8;
      param_1[9] = lVar6;
      uVar7 = (uint)bVar5;
      if (local_170[0] != '\0') {
        uVar7 = bVar5 | 0x100;
      }
      uVar1 = uVar7 | 0x200;
      if (!bVar4) {
        uVar1 = uVar7;
      }
      if ((local_170[0] == '\0') || ((int)param_1[1] != 3)) {
        lVar6 = 0;
      }
      lVar6 = FUN_002d47a0(param_1,lVar8,lVar6,uVar1);
      if (param_3 == 0x100) {
        uVar7 = *(uint *)(*param_1 + 0x14);
      }
      else {
        uVar7 = (uint)*(byte *)(*param_1 + (long)(int)param_3 + 0x98);
      }
      param_2[(long)(int)uVar7 + 2] = lVar6;
    }
  }
  return lVar6;
}



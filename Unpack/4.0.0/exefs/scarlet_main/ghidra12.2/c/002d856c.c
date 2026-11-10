/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d856c; name: FUN_002d856c
 */


void FUN_002d856c(long *param_1,uint *param_2,int param_3,int param_4,undefined8 param_5,
                 undefined8 param_6,long *param_7)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  ostream *poVar7;
  uint uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  int *piVar18;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [264];
  
  if (param_3 != 0) {
    piVar18 = (int *)param_1[0xf];
    *piVar18 = param_3;
    piVar18[2] = 0;
    piVar18[3] = 0;
    uVar17 = 1;
    do {
      uVar17 = uVar17 - 1;
      uVar8 = piVar18[(ulong)uVar17 * 4];
      plVar10 = *(long **)(piVar18 + (ulong)uVar17 * 4 + 2);
      do {
        if (plVar10 == (long *)0x0) {
          plVar11 = param_7;
        }
        else {
          lVar14 = *param_7;
          iVar4 = (int)lVar14 + -1;
          *(int *)param_7 = iVar4;
          plVar11 = plVar10;
          if (iVar4 == 0 || (int)lVar14 < 1) {
            *param_7 = param_1[0x17];
            param_1[0x17] = (long)param_7;
          }
        }
        if (uVar8 == 0) break;
        lVar14 = *(long *)(param_2 + 6);
        if ((lVar14 != 0) && (uVar8 < param_2[8])) {
          uVar6 = *(uint *)(*(long *)(param_2 + 2) + (long)(int)uVar8 * 4);
          if ((uVar6 < *param_2) && (*(uint *)(lVar14 + (long)(int)uVar6 * 0x10) == uVar8)) break;
          lVar15 = *(long *)(param_2 + 2);
          *(uint *)(lVar15 + (long)(int)uVar8 * 4) = *param_2;
          uVar6 = *param_2;
          *(uint *)(lVar14 + (long)(int)uVar6 * 0x10) = uVar8;
          *param_2 = uVar6 + 1;
          *(undefined8 *)(lVar14 + (long)*(int *)(lVar15 + (long)(int)uVar8 * 4) * 0x10 + 8) = 0;
          lVar14 = *(long *)(param_2 + 6);
        }
        lVar15 = *(long *)(*param_1 + 0x60);
        puVar1 = (uint *)(lVar15 + (long)(int)uVar8 * 8);
        uVar6 = *puVar1;
        if (6 < (uVar6 & 7) - 1) {
          FUN_002cc810(auStack_170,"external/com_github_google_re2/re2/nfa.cc",0xf2);
                    /* try { // try from 002d8980 to 002d89af has its CatchHandler @ 002d89dc */
          poVar7 = std::__put_character_sequence<char,std::char_traits<char>>
                             (aoStack_168,"unhandled ",10);
          poVar7 = (ostream *)std::ostream::operator<<(poVar7,*puVar1 & 7);
          std::__put_character_sequence<char,std::char_traits<char>>(poVar7," in AddToThreadq",0x10)
          ;
          FUN_002cc97c(auStack_170);
          break;
        }
        lVar16 = (long)(int)uVar8;
        puVar9 = (undefined8 *)
                 (lVar14 + (long)*(int *)(*(long *)(param_2 + 2) + (long)(int)uVar8 * 4) * 0x10 + 8)
        ;
        param_7 = plVar11;
        switch(uVar6 & 7) {
        case 1:
          uVar8 = uVar8 + 1;
          *(int *)plVar11 = (int)*plVar11 + 1;
          *puVar9 = plVar11;
          goto LAB_002d861c;
        case 2:
          lVar15 = lVar15 + lVar16 * 8;
          iVar4 = param_4 + 0x20;
          if ((*(byte *)(lVar15 + 6) & param_4 - 0x41U < 0x1a) == 0) {
            iVar4 = param_4;
          }
          if ((iVar4 < (int)(uint)*(byte *)(lVar15 + 4)) ||
             ((int)(uint)*(byte *)(lVar15 + 5) < iVar4)) goto LAB_002d8834;
          *(int *)plVar11 = (int)*plVar11 + 1;
          *puVar9 = plVar11;
          uVar5 = *(ushort *)(lVar15 + 6) >> 1;
          if (uVar5 != 0) {
            uVar8 = uVar8 + uVar5;
            goto LAB_002d861c;
          }
          goto switchD_002d8710_caseD_7;
        case 3:
          if ((uVar6 >> 3 & 1) == 0) {
            piVar2 = piVar18 + (long)(int)uVar17 * 4;
            uVar17 = uVar17 + 1;
            *piVar2 = uVar8 + 1;
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          iVar4 = *(int *)(lVar15 + lVar16 * 8 + 4);
          if (iVar4 < *(int *)((long)param_1 + 0xc)) {
            piVar18[(long)(int)uVar17 * 4] = 0;
            *(long **)(piVar18 + (long)(int)uVar17 * 4 + 2) = plVar11;
            param_7 = (long *)param_1[0x17];
            uVar17 = uVar17 + 1;
            if (param_7 == (long *)0x0) {
              lVar14 = param_1[0x12];
              lVar15 = param_1[0x13];
              uVar3 = 0;
              if (lVar15 - lVar14 != 0) {
                uVar3 = (lVar15 - lVar14) * 0x20 - 1;
              }
              uVar13 = param_1[0x16] + param_1[0x15];
              if (uVar3 == uVar13) {
                FUN_002d9434(param_1 + 0x11);
                uVar13 = param_1[0x15] + param_1[0x16];
                lVar14 = param_1[0x12];
                lVar15 = param_1[0x13];
              }
              if (lVar15 == lVar14) {
                puVar9 = (undefined8 *)0x0;
              }
              else {
                puVar9 = (undefined8 *)
                         (*(long *)(lVar14 + (uVar13 >> 5 & 0x7fffffffffffff8)) +
                         (uVar13 & 0xff) * 0x10);
              }
              *puVar9 = 0;
              puVar9[1] = 0;
              uVar3 = param_1[0x15] + param_1[0x16];
              param_1[0x16] = param_1[0x16] + 1;
              param_7 = (long *)(*(long *)(param_1[0x12] + (uVar3 >> 5 & 0x7fffffffffffff8)) +
                                (uVar3 & 0xff) * 0x10);
              *(int *)param_7 = 1;
              lVar14 = FUN_0049e7b0(PTR_FUN_047cba38,(long)*(int *)((long)param_1 + 0xc) << 3);
              param_7[1] = lVar14;
            }
            else {
              param_1[0x17] = *param_7;
              *(int *)param_7 = 1;
            }
            memmove((void *)param_7[1],(void *)plVar11[1],(long)*(int *)((long)param_1 + 0xc) << 3);
            *(undefined8 *)(param_7[1] + (long)iVar4 * 8) = param_6;
          }
          plVar11 = (long *)0x0;
          uVar12 = 4;
          uVar8 = *puVar1 >> 4;
          break;
        case 4:
          if ((uVar6 >> 3 & 1) == 0) {
            piVar2 = piVar18 + (long)(int)uVar17 * 4;
            uVar17 = uVar17 + 1;
            *piVar2 = uVar8 + 1;
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
          uVar8 = *(uint *)(lVar15 + lVar16 * 8 + 4);
          uVar6 = FUN_002d08f8(param_5,param_6);
          if ((uVar8 & (uVar6 ^ 0xffffffff)) != 0) goto switchD_002d8710_caseD_7;
          plVar11 = (long *)0x0;
          uVar12 = 4;
          uVar8 = *puVar1 >> 4;
          break;
        case 5:
          *(int *)plVar11 = (int)*plVar11 + 1;
          *puVar9 = plVar11;
          uVar6 = *puVar1;
LAB_002d8834:
          uVar6 = uVar6 & 8;
          uVar12 = uVar6 >> 1 ^ 4;
          uVar8 = (uVar6 >> 3 ^ 1) + uVar8;
          plVar11 = (long *)0x0;
          if (uVar6 != 0) {
            plVar11 = plVar10;
          }
          break;
        case 6:
          if ((uVar6 >> 3 & 1) == 0) {
            piVar2 = piVar18 + (long)(int)uVar17 * 4;
            *piVar2 = uVar8 + 1;
            piVar2[2] = 0;
            piVar2[3] = 0;
            uVar6 = *puVar1;
            uVar17 = uVar17 + 1;
          }
          uVar8 = uVar6 >> 4;
LAB_002d861c:
          plVar11 = (long *)0x0;
          uVar12 = 4;
          break;
        case 7:
          goto switchD_002d8710_caseD_7;
        }
        plVar10 = plVar11;
        plVar11 = param_7;
      } while (uVar12 == 4);
switchD_002d8710_caseD_7:
      param_7 = plVar11;
    } while (0 < (int)uVar17);
  }
  return;
}



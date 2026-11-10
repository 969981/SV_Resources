/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d5350; name: FUN_002d5350
 */


/* WARNING: Removing unreachable block (ram,0x002d550c) */
/* WARNING: Removing unreachable block (ram,0x002d5538) */
/* WARNING: Removing unreachable block (ram,0x002d553c) */
/* WARNING: Removing unreachable block (ram,0x002d5544) */
/* WARNING: Removing unreachable block (ram,0x002d552c) */

void FUN_002d5350(long *param_1,int *param_2,int *param_3,int param_4,undefined4 param_5,
                 char *param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  ostream *poVar5;
  uint *puVar6;
  long lVar7;
  int *piVar8;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [264];
  
  *param_3 = 0;
  param_3[0xc] = param_3[10];
  if (*param_2 != 0) {
    piVar8 = *(int **)(param_2 + 6);
    if (param_4 == 0x100) {
      do {
        if (*piVar8 < param_2[10]) {
          puVar1 = (uint *)(*(long *)(*param_1 + 0x60) + (long)*piVar8 * 8);
          uVar2 = *puVar1 & 7;
          if (uVar2 < 8) {
            if (((1 << (ulong)uVar2 & 0xdaU) == 0) && (uVar2 != 2)) {
              if (uVar2 != 5) goto LAB_002d5438;
              *param_6 = '\x01';
              if ((int)param_1[1] == 0) {
                return;
              }
            }
          }
          else {
LAB_002d5438:
            FUN_002cc810(auStack_170,"external/com_github_google_re2/re2/dfa.cc",0x3b2);
                    /* try { // try from 002d544c to 002d5467 has its CatchHandler @ 002d571c */
            poVar5 = std::__put_character_sequence<char,std::char_traits<char>>
                               (aoStack_168,"unhandled opcode: ",0x12);
            std::ostream::operator<<(poVar5,*puVar1 & 7);
            FUN_002cc97c(auStack_170);
          }
        }
        else {
          if (*param_6 != '\0') {
            return;
          }
          if ((char)param_3[0xd] == '\0') {
            uVar2 = param_3[0xc];
            param_3[0xc] = uVar2 + 1;
            lVar7 = *(long *)(param_3 + 6);
            *(undefined1 *)(param_3 + 0xd) = 0;
            if ((lVar7 != 0) && (uVar2 < (uint)param_3[8])) {
              *(int *)(*(long *)(param_3 + 2) + (long)(int)uVar2 * 4) = *param_3;
              *(uint *)(lVar7 + (long)*param_3 * 4) = uVar2;
              *param_3 = *param_3 + 1;
            }
          }
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != (int *)(*(long *)(param_2 + 6) + (long)*param_2 * 4));
    }
    else {
      do {
        if (*piVar8 < param_2[10]) {
          puVar1 = (uint *)(*(long *)(*param_1 + 0x60) + (long)*piVar8 * 8);
          uVar2 = *puVar1 & 7;
          if (uVar2 < 8) {
            if ((1 << (ulong)uVar2 & 0xdaU) == 0) {
              if (uVar2 == 2) {
                iVar3 = param_4 + 0x20;
                if ((*(byte *)((long)puVar1 + 6) & param_4 - 0x41U < 0x1a) == 0) {
                  iVar3 = param_4;
                }
                if (((int)(uint)(byte)puVar1[1] <= iVar3) &&
                   (iVar3 <= (int)(uint)*(byte *)((long)puVar1 + 5))) {
                  FUN_002d50dc(param_1,param_3,*puVar1 >> 4,param_5);
                  uVar4 = *(ushort *)((long)puVar1 + 6) >> 1;
                  if (uVar4 == 0) {
                    puVar6 = puVar1 + -2;
                    do {
                      puVar6 = puVar6 + 2;
                    } while (((byte)*puVar6 >> 3 & 1) == 0);
                    piVar8 = (int *)((long)piVar8 + ((long)puVar6 - (long)puVar1 >> 1));
                  }
                  else {
                    piVar8 = piVar8 + ((ulong)uVar4 - 1);
                  }
                }
              }
              else {
                if (uVar2 != 5) goto LAB_002d56a0;
                lVar7 = param_1[1];
                if (*(char *)(*param_1 + 1) == '\0') {
                  *param_6 = '\x01';
                  if ((int)lVar7 == 0) {
                    return;
                  }
                }
                else if ((int)lVar7 == 3) {
                  *param_6 = '\x01';
                }
              }
            }
          }
          else {
LAB_002d56a0:
            FUN_002cc810(auStack_170,"external/com_github_google_re2/re2/dfa.cc",0x3b2);
                    /* try { // try from 002d56b4 to 002d56d3 has its CatchHandler @ 002d5718 */
            poVar5 = std::__put_character_sequence<char,std::char_traits<char>>
                               (aoStack_168,"unhandled opcode: ",0x12);
            std::ostream::operator<<(poVar5,*puVar1 & 7);
            FUN_002cc97c(auStack_170);
          }
        }
        else {
          if (*param_6 != '\0') {
            return;
          }
          if ((char)param_3[0xd] == '\0') {
            uVar2 = param_3[0xc];
            param_3[0xc] = uVar2 + 1;
            lVar7 = *(long *)(param_3 + 6);
            *(undefined1 *)(param_3 + 0xd) = 0;
            if ((lVar7 != 0) && (uVar2 < (uint)param_3[8])) {
              *(int *)(*(long *)(param_3 + 2) + (long)(int)uVar2 * 4) = *param_3;
              *(uint *)(lVar7 + (long)*param_3 * 4) = uVar2;
              *param_3 = *param_3 + 1;
            }
          }
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != (int *)(*(long *)(param_2 + 6) + (long)*param_2 * 4));
    }
  }
  return;
}



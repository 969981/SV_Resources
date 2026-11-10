/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d89f0; name: FUN_002d89f0
 */


ulong FUN_002d89f0(long *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined8 param_5,long param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  ulong *__dest;
  ostream *poVar6;
  ulong *__src;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  int *piVar12;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [264];
  
  *param_3 = 0;
  if (*param_2 != 0) {
    piVar11 = *(int **)(param_2 + 6);
    uVar7 = param_6 - 1;
    piVar8 = piVar11;
    do {
      piVar12 = piVar8 + 4;
      plVar10 = *(long **)(piVar8 + 2);
      if (plVar10 != (long *)0x0) {
        cVar4 = (char)param_1[2];
        if (((cVar4 == '\0') || ((char)param_1[0x19] == '\0')) ||
           (*(ulong *)plVar10[1] <= *(ulong *)param_1[0x18])) {
          lVar9 = *(long *)(*param_1 + 0x60);
          puVar1 = (uint *)(lVar9 + (long)*piVar8 * 8);
          uVar3 = *puVar1;
          uVar2 = uVar3 & 7;
          if (uVar2 == 1) {
            if (piVar8 == piVar11) {
              uVar3 = *(uint *)(lVar9 + ((ulong)(uVar3 >> 1) & 0x7ffffff8));
              uVar2 = uVar3 & 7;
              if (uVar2 == 6) {
                if ((*(uint *)(lVar9 + ((ulong)(uVar3 >> 1) & 0x7ffffff8)) & 7) == 2 ||
                    cVar4 != '\0') goto LAB_002d8c4c;
              }
              else if (uVar2 == 2 || cVar4 != '\0') {
LAB_002d8c4c:
                memmove((void *)param_1[0x18],(void *)plVar10[1],
                        (long)*(int *)((long)param_1 + 0xc) << 3);
                *(undefined1 *)(param_1 + 0x19) = 1;
                lVar9 = *plVar10;
                iVar5 = (int)lVar9 + -1;
                *(int *)plVar10 = iVar5;
                if (iVar5 == 0 || (int)lVar9 < 1) {
                  *plVar10 = param_1[0x17];
                  param_1[0x17] = (long)plVar10;
                }
                while (piVar8 = piVar11 + 4,
                      piVar8 != (int *)(*(long *)(param_2 + 6) + (long)*param_2 * 0x10)) {
                  plVar10 = *(long **)(piVar11 + 6);
                  piVar11 = piVar8;
                  if ((plVar10 != (long *)0x0) &&
                     (lVar9 = *plVar10, iVar5 = (int)lVar9 + -1, *(int *)plVar10 = iVar5,
                     iVar5 == 0 || (int)lVar9 < 1)) {
                    *plVar10 = param_1[0x17];
                    param_1[0x17] = (long)plVar10;
                  }
                }
                *param_2 = 0;
                uVar7 = (ulong)(*puVar1 >> 4);
                uVar3 = *(uint *)(*(long *)(*param_1 + 0x60) + uVar7 * 8);
                uVar2 = uVar3 & 7;
                if (uVar2 != 2) {
                  if (uVar2 != 6) {
                    return uVar7;
                  }
                  if ((*(uint *)(*(long *)(*param_1 + 0x60) + ((ulong)(uVar3 >> 1) & 0x7ffffff8)) &
                      7) != 2) {
                    return uVar7;
                  }
                }
                return (ulong)puVar1[1];
              }
            }
          }
          else if (uVar2 == 2) {
            FUN_002d856c(param_1,param_3,uVar3 >> 4,param_4,param_5,param_6,plVar10);
          }
          else if (uVar2 == 5) {
            if (param_6 == 0) {
              memmove((void *)param_1[0x18],(void *)plVar10[1],
                      (long)*(int *)((long)param_1 + 0xc) << 3);
              *(undefined8 *)(param_1[0x18] + 8) = 0;
            }
            else {
              if ((*(char *)((long)param_1 + 0x11) != '\0') && (uVar7 != param_1[4]))
              goto LAB_002d8c2c;
              if (cVar4 == '\0') {
                memmove((void *)param_1[0x18],(void *)plVar10[1],
                        (long)*(int *)((long)param_1 + 0xc) << 3);
                *(ulong *)(param_1[0x18] + 8) = uVar7;
                *(undefined1 *)(param_1 + 0x19) = 1;
                lVar9 = *plVar10;
                iVar5 = (int)lVar9 + -1;
                *(int *)plVar10 = iVar5;
                if (iVar5 == 0 || (int)lVar9 < 1) {
                  *plVar10 = param_1[0x17];
                  param_1[0x17] = (long)plVar10;
                }
                if ((int *)(*(long *)(param_2 + 6) + (long)*param_2 * 0x10) != piVar12) {
                  do {
                    plVar10 = *(long **)(piVar12 + 2);
                    if ((plVar10 != (long *)0x0) &&
                       (lVar9 = *plVar10, iVar5 = (int)lVar9 + -1, *(int *)plVar10 = iVar5,
                       iVar5 == 0 || (int)lVar9 < 1)) {
                      *plVar10 = param_1[0x17];
                      param_1[0x17] = (long)plVar10;
                    }
                    piVar12 = piVar12 + 4;
                  } while (piVar12 != (int *)(*(long *)(param_2 + 6) + (long)*param_2 * 0x10));
                }
                break;
              }
              if ((char)param_1[0x19] == '\0') {
                __dest = (ulong *)param_1[0x18];
                __src = (ulong *)plVar10[1];
              }
              else {
                __src = (ulong *)plVar10[1];
                __dest = (ulong *)param_1[0x18];
                if ((*__dest <= *__src) && ((*__src != *__dest || (uVar7 <= __dest[1]))))
                goto LAB_002d8c2c;
              }
              memmove(__dest,__src,(long)*(int *)((long)param_1 + 0xc) << 3);
              *(ulong *)(param_1[0x18] + 8) = uVar7;
            }
            *(undefined1 *)(param_1 + 0x19) = 1;
          }
          else {
            FUN_002cc810(auStack_170,"external/com_github_google_re2/re2/nfa.cc",0x162);
                    /* try { // try from 002d8b88 to 002d8bb7 has its CatchHandler @ 002d8ddc */
            poVar6 = std::__put_character_sequence<char,std::char_traits<char>>
                               (aoStack_168,"Unhandled ",10);
            poVar6 = (ostream *)std::ostream::operator<<(poVar6,*puVar1 & 7);
            std::__put_character_sequence<char,std::char_traits<char>>(poVar6," in step",8);
            FUN_002cc97c(auStack_170);
          }
        }
LAB_002d8c2c:
        lVar9 = *plVar10;
        iVar5 = (int)lVar9 + -1;
        *(int *)plVar10 = iVar5;
        if (iVar5 == 0 || (int)lVar9 < 1) {
          *plVar10 = param_1[0x17];
          param_1[0x17] = (long)plVar10;
        }
      }
      piVar11 = *(int **)(param_2 + 6);
      piVar8 = piVar12;
    } while (piVar12 != piVar11 + (long)*param_2 * 4);
  }
  *param_2 = 0;
  return 0;
}



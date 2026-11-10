/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00888494; name: FUN_00888494
 */


long * FUN_00888494(long param_1,char param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  
  if (*(uint *)(param_1 + 0x1880) != 0) {
    uVar2 = 0;
    do {
      if (*(char *)(param_1 + uVar2 * 0x18 + 0x94) == param_2) {
        lVar4 = param_1 + uVar2 * 0x18;
        plVar6 = *(long **)(lVar4 + 0x88);
        plVar1 = (long *)(lVar4 + 0x80);
        if (plVar1 != plVar6) {
          iVar7 = 0;
          plVar3 = plVar6;
          plVar10 = plVar6;
          do {
            while (((char)plVar3[5] == '\0' && (*(int *)((long)plVar3 + 0x2c) == 0))) {
              uVar8 = (uint)*(ushort *)((long)plVar3 + 0x34);
              plVar5 = plVar3;
              if (iVar7 != 0) {
                uVar8 = ((uint)*(ushort *)(plVar3 + 6) + (uint)*(ushort *)((long)plVar3 + 0x34)) -
                        (uint)*(ushort *)(plVar10 + 6);
                plVar5 = plVar10;
              }
              if (plVar5 == plVar6) {
                uVar9 = 0;
              }
              else {
                plVar10 = plVar5;
                do {
                  plVar10 = (long *)*plVar10;
                } while (plVar6 != plVar10 && (*(byte *)(plVar10 + 5) & 8) != 0);
                uVar9 = (((uint)*(ushort *)(plVar5 + 6) - (uint)*(ushort *)(plVar10 + 6)) -
                        (uint)*(ushort *)((long)plVar10 + 0x34)) - 2;
                uVar8 = (uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)) + uVar8;
              }
              if ((param_3 & 0xffff) <= uVar8) {
                plVar1 = (long *)plVar3[1];
                if (plVar1 != plVar5) {
                  plVar6 = (long *)(param_1 + 0x60);
                  plVar3 = plVar5;
                  do {
                    if ((*(byte *)(plVar3 + 5) >> 3 & 1) == 0) {
                      *(byte *)(plVar3 + 5) = *(byte *)(plVar3 + 5) | 8;
                      lVar4 = plVar3[-2];
                      plVar3[-2] = *plVar6;
                      *(long **)(lVar4 + 8) = plVar6;
                      *(long **)(*plVar6 + 8) = plVar3 + -2;
                      *plVar6 = lVar4;
                    }
                    plVar3 = (long *)plVar3[1];
                  } while (plVar1 != plVar3);
                }
                if (0 < (int)uVar9) {
                  *(short *)(plVar5 + 6) = (short)plVar5[6] - (short)uVar9;
                }
                return plVar5 + -2;
              }
              iVar7 = iVar7 + 1;
              plVar3 = (long *)plVar3[1];
              plVar10 = plVar5;
              if (plVar1 == plVar3) goto LAB_008884ac;
            }
            iVar7 = 0;
            plVar3 = (long *)plVar3[1];
          } while (plVar1 != plVar3);
        }
      }
LAB_008884ac:
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x1880));
  }
  return (long *)0x0;
}



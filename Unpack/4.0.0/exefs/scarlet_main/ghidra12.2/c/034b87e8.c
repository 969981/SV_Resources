/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b87e8; name: FUN_034b87e8
 */


void FUN_034b87e8(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_3 != 0) {
    uVar8 = 0;
    do {
      uVar9 = 1L << (uVar8 & 0x3f);
      iVar7 = (int)uVar8;
      if ((uVar9 & param_3) != 0) {
        uVar2 = *(uint *)(param_1 + 4);
        if (uVar2 != 0) {
          uVar1 = iVar7 + (int)param_2;
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar1 / uVar2;
          }
          for (plVar6 = *(long **)(param_1[3] + (ulong)(uVar1 - uVar3 * uVar2) * 8);
              plVar6 != (long *)0x0; plVar6 = (long *)plVar6[2]) {
            if ((*plVar6 == param_2) && ((int)plVar6[1] == iVar7)) {
              uVar8 = (ulong)*(uint *)(plVar6 + 0xb);
              if (*(uint *)(plVar6 + 0xb) != 0) {
                lVar5 = plVar6[10];
                lVar10 = lVar5;
                do {
                  uVar2 = *(uint *)(param_1 + 1);
                  if (uVar2 != 0) {
                    uVar1 = *(uint *)(lVar10 + 4);
                    uVar3 = 0;
                    if (uVar2 != 0) {
                      uVar3 = uVar1 / uVar2;
                    }
                    for (puVar4 = *(uint **)(*param_1 + (ulong)(uVar1 - uVar3 * uVar2) * 8);
                        puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
                      if (*puVar4 == uVar1) {
                        FUN_034b5144(puVar4,plVar6,puVar4 + 0x12,puVar4 + 0x16);
                        lVar5 = plVar6[10];
                        uVar8 = (ulong)*(uint *)(plVar6 + 0xb);
                        break;
                      }
                    }
                  }
                  lVar10 = lVar10 + 0x20;
                } while (lVar10 != lVar5 + uVar8 * 0x20);
              }
              break;
            }
          }
        }
        param_3 = param_3 & (uVar9 ^ 0xffffffffffffffff);
      }
      uVar8 = (ulong)(iVar7 + 1);
    } while (param_3 != 0);
  }
  return;
}



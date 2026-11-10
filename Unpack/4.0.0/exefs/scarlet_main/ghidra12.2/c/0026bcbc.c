/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026bcbc; name: FUN_0026bcbc
 */


void FUN_0026bcbc(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  
  uVar1 = 0;
  if (param_1[1] != 0) {
    uVar7 = 0;
    do {
      lVar2 = param_1[4];
      puVar6 = *(undefined8 **)(lVar2 + uVar7 * 8);
      if (puVar6 == (undefined8 *)0x0) {
LAB_0026bce0:
        uVar10 = uVar7;
      }
      else {
        if (puVar6 != *(undefined8 **)(lVar2 + (uVar7 ^ 1) * 8)) {
          *(undefined8 *)(lVar2 + uVar7 * 8) = 0;
          do {
            puVar8 = (undefined8 *)puVar6[2];
            if (param_1[5] == 0) {
              FUN_0049e700(puVar6);
            }
            puVar6 = puVar8;
          } while (puVar8 != (undefined8 *)0x0);
          goto LAB_0026bce0;
        }
        uVar10 = uVar7 + 1;
        *(undefined8 *)(lVar2 + uVar10 * 8) = 0;
        *(undefined8 *)(param_1[4] + uVar7 * 8) = 0;
        plVar9 = (long *)*puVar6;
        do {
          while( true ) {
            lVar2 = plVar9[4];
            plVar4 = (long *)plVar9[1];
            if ((long *)plVar9[1] == (long *)0x0) {
              plVar4 = plVar9 + 2;
              plVar11 = (long *)*plVar4;
              if ((long *)*plVar11 != plVar9) {
                do {
                  lVar5 = *plVar4;
                  plVar4 = (long *)(lVar5 + 0x10);
                  plVar11 = (long *)*plVar4;
                } while (*plVar11 != lVar5);
              }
            }
            else {
              do {
                plVar11 = plVar4;
                plVar4 = (long *)*plVar11;
              } while ((long *)*plVar11 != (long *)0x0);
            }
            plVar4 = (long *)plVar9[1];
            if ((long *)plVar9[1] == (long *)0x0) {
              plVar4 = plVar9 + 2;
              plVar3 = (long *)*plVar4;
              if ((long *)*plVar3 != plVar9) {
                do {
                  lVar5 = *plVar4;
                  plVar4 = (long *)(lVar5 + 0x10);
                  plVar3 = (long *)*plVar4;
                } while (*plVar3 != lVar5);
              }
            }
            else {
              do {
                plVar3 = plVar4;
                plVar4 = (long *)*plVar3;
              } while ((long *)*plVar3 != (long *)0x0);
            }
            if ((long *)*puVar6 == plVar9) {
              *puVar6 = plVar3;
            }
            puVar6[3] = puVar6[3] + -1;
            FUN_01336080(puVar6[1],plVar9);
            if (puVar6[2] == 0) break;
            if (param_1[5] != 0) goto LAB_0026bd64;
LAB_0026be34:
            FUN_0049e700(lVar2);
            plVar9 = plVar11;
            if (plVar11 == puVar6 + 1) goto LAB_0026be48;
          }
          FUN_0049e700(plVar9);
          if (param_1[5] == 0) goto LAB_0026be34;
LAB_0026bd64:
          plVar9 = plVar11;
        } while (plVar11 != puVar6 + 1);
LAB_0026be48:
        lVar2 = param_1[5];
        FUN_0025a28c(puVar6,puVar6[1]);
        if (lVar2 == 0) {
          FUN_0049e700(puVar6);
        }
      }
      uVar1 = param_1[1];
      uVar7 = uVar10 + 1;
    } while (uVar7 < uVar1);
  }
  *param_1 = 0;
  param_1[3] = uVar1;
  return;
}



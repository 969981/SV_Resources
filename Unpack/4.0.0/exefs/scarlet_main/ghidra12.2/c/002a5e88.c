/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002a5e88; name: FUN_002a5e88
 */


undefined8 FUN_002a5e88(ulong *param_1,ulong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  long *plVar11;
  
  uVar3 = *param_1;
  if ((*param_2 ^ uVar3) < 2) {
    if (uVar3 < 2) {
      uVar2 = 1;
    }
    else {
      uVar8 = 0;
      do {
        puVar7 = param_1 + 1;
        if ((uVar3 & 1) != 0) {
          puVar7 = (ulong *)param_1[1];
        }
        puVar4 = param_2 + 1;
        if ((*param_2 & 1) != 0) {
          puVar4 = (ulong *)param_2[1];
        }
        if (puVar7[uVar8 * 3 + 2] != puVar4[uVar8 * 3 + 2]) goto LAB_002a609c;
        puVar10 = puVar7 + uVar8 * 3 + 1;
        puVar7 = (ulong *)puVar7[uVar8 * 3];
        if (puVar7 != puVar10) {
          plVar11 = (long *)puVar4[uVar8 * 3];
          do {
            while( true ) {
              if ((puVar7[4] != plVar11[4]) ||
                 (uVar3 = FUN_0029cf90(puVar7[5],plVar11[5]), (uVar3 & 1) == 0)) goto LAB_002a609c;
              uVar3 = puVar7[6];
              puVar4 = puVar7 + 7;
              if ((uVar3 & 1) != 0) {
                puVar4 = (ulong *)puVar7[7];
              }
              if (((uVar3 ^ plVar11[6]) >> 1 & 0xfffffffffffffff) != 0) goto LAB_002a609c;
              if (uVar3 >> 1 != 0) {
                lVar9 = (uVar3 >> 1) * 0x90;
                plVar5 = plVar11 + 7;
                if ((plVar11[6] & 1U) != 0) {
                  plVar5 = (long *)plVar11[7];
                }
                do {
                  iVar1 = FUN_003361b8(puVar4,plVar5);
                  if (iVar1 != 0) goto LAB_002a609c;
                  puVar4 = puVar4 + 0x12;
                  plVar5 = plVar5 + 0x12;
                  lVar9 = lVar9 + -0x90;
                } while (lVar9 != 0);
              }
              if (((int)puVar7[0x19] != (int)plVar11[0x19]) ||
                 (*(int *)((long)puVar7 + 0xcc) != *(int *)((long)plVar11 + 0xcc)))
              goto LAB_002a609c;
              puVar4 = (ulong *)puVar7[1];
              if ((ulong *)puVar7[1] != (ulong *)0x0) break;
              puVar4 = puVar7 + 2;
              puVar6 = (ulong *)*puVar4;
              if ((ulong *)*puVar6 != puVar7) {
                do {
                  uVar3 = *puVar4;
                  puVar4 = (ulong *)(uVar3 + 0x10);
                  puVar6 = (ulong *)*puVar4;
                } while (*puVar6 != uVar3);
                goto LAB_002a6018;
              }
              plVar5 = (long *)plVar11[1];
              if ((long *)plVar11[1] == (long *)0x0) goto LAB_002a603c;
LAB_002a6020:
              do {
                plVar11 = plVar5;
                plVar5 = (long *)*plVar11;
              } while ((long *)*plVar11 != (long *)0x0);
LAB_002a6068:
              puVar7 = puVar6;
              if (puVar6 == puVar10) goto LAB_002a6080;
            }
            do {
              puVar6 = puVar4;
              puVar4 = (ulong *)*puVar6;
            } while ((ulong *)*puVar6 != (ulong *)0x0);
LAB_002a6018:
            plVar5 = (long *)plVar11[1];
            if ((long *)plVar11[1] != (long *)0x0) goto LAB_002a6020;
LAB_002a603c:
            plVar5 = plVar11 + 2;
            if (*(long **)*plVar5 != plVar11) {
              do {
                lVar9 = *plVar5;
                plVar5 = (long *)(lVar9 + 0x10);
                plVar11 = (long *)*plVar5;
              } while (*plVar11 != lVar9);
              goto LAB_002a6068;
            }
            puVar7 = puVar6;
            plVar11 = (long *)*plVar5;
          } while (puVar6 != puVar10);
LAB_002a6080:
          uVar3 = *param_1;
        }
        uVar8 = uVar8 + 1;
        uVar2 = 1;
      } while (uVar8 < uVar3 >> 1);
    }
  }
  else {
LAB_002a609c:
    uVar2 = 0;
  }
  return uVar2;
}



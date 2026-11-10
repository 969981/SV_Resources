/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e207c; name: FUN_004e207c
 */


void FUN_004e207c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  long *plVar5;
  byte *pbVar6;
  ulong uVar7;
  
  puVar3 = PTR_DAT_047cba80;
  puVar2 = PTR_LAB_047cba48;
  puVar4 = (uint *)param_1[2];
  if ((puVar4 != (uint *)0x0) && (*param_1 == 0)) {
    uVar7 = (ulong)*puVar4;
    if (0 < (int)*puVar4) {
      puVar1 = PTR_DAT_047cd9b8 + 0x10;
      do {
        puVar4 = puVar4 + 2;
        plVar5 = *(long **)puVar4;
        if (plVar5 != (long *)0x0) {
          pbVar6 = (byte *)plVar5[3];
          *plVar5 = (long)puVar1;
          if (pbVar6 != puVar3 && pbVar6 != (byte *)0x0) {
            if ((*pbVar6 & 1) != 0) {
              FUN_0049e790(puVar2,*(undefined8 *)(pbVar6 + 0x10));
            }
            FUN_0049e790(puVar2,pbVar6);
          }
                    /* try { // try from 004e20e4 to 004e20e7 has its CatchHandler @ 004e2158 */
          FUN_004ca714(plVar5 + 1);
          FUN_0049e790(puVar2,plVar5);
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      puVar4 = (uint *)param_1[2];
    }
    FUN_0049e700(puVar4);
  }
  param_1[2] = 0;
  return;
}



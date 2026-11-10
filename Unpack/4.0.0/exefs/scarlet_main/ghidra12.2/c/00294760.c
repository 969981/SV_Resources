/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00294760; name: FUN_00294760
 */


ulong * FUN_00294760(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    puVar4 = param_1 + 1;
    uVar5 = 1;
    puVar1 = puVar4;
    if (uVar2 >> 1 == 1) {
LAB_002947bc:
      uVar9 = uVar5 << 1;
      puVar1 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar5 * 0x120);
      puVar7 = puVar1;
      goto LAB_002947dc;
    }
  }
  else {
    puVar4 = (ulong *)param_1[1];
    uVar5 = param_1[2];
    puVar1 = puVar4;
    if (uVar2 >> 1 == uVar5) goto LAB_002947bc;
  }
  uVar9 = 0;
  puVar7 = (ulong *)0x0;
  puVar4 = puVar1;
LAB_002947dc:
  uVar2 = uVar2 >> 1;
                    /* try { // try from 002947e8 to 002947f3 has its CatchHandler @ 002948d4 */
  FUN_00336158(puVar1 + uVar2 * 0x12,param_2,*param_3);
  if (puVar7 == (ulong *)0x0) {
    uVar5 = *param_1;
  }
  else {
    if (uVar2 != 0) {
      puVar3 = puVar7;
      uVar5 = uVar2;
      puVar6 = puVar4;
      do {
        uVar10 = *puVar6;
        uVar5 = uVar5 - 1;
        puVar3[1] = puVar6[1];
        *puVar3 = uVar10;
        uVar11 = puVar6[3];
        uVar10 = puVar6[2];
        uVar13 = puVar6[5];
        uVar12 = puVar6[4];
        uVar14 = puVar6[6];
        uVar16 = puVar6[9];
        uVar15 = puVar6[8];
        puVar3[7] = puVar6[7];
        puVar3[6] = uVar14;
        puVar3[9] = uVar16;
        puVar3[8] = uVar15;
        puVar3[3] = uVar11;
        puVar3[2] = uVar10;
        puVar3[5] = uVar13;
        puVar3[4] = uVar12;
        uVar15 = puVar6[0xf];
        uVar14 = puVar6[0xe];
        uVar11 = puVar6[0xb];
        uVar10 = puVar6[10];
        uVar13 = puVar6[0xd];
        uVar12 = puVar6[0xc];
        *(int *)(puVar3 + 0x10) = (int)puVar6[0x10];
        puVar3[0xd] = uVar13;
        puVar3[0xc] = uVar12;
        puVar3[0xf] = uVar15;
        puVar3[0xe] = uVar14;
        puVar3[0xb] = uVar11;
        puVar3[10] = uVar10;
        puVar3[0x11] = puVar6[0x11];
        puVar6[0x11] = 0;
        puVar3 = puVar3 + 0x12;
        puVar6 = puVar6 + 0x12;
      } while (uVar5 != 0);
    }
    if (puVar4 != (ulong *)0x0) {
      puVar4 = puVar4 + uVar2 * 0x12 + -1;
      lVar8 = uVar2 + 1;
      while (lVar8 = lVar8 + -1, lVar8 != 0) {
        uVar5 = *puVar4;
        puVar4 = puVar4 + -0x12;
                    /* try { // try from 00294878 to 0029487b has its CatchHandler @ 002948f4 */
        FUN_00343d90(uVar5);
      }
    }
    uVar5 = *param_1;
    if ((uVar5 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      uVar5 = *param_1;
    }
    uVar5 = uVar5 | 1;
    param_1[1] = (ulong)puVar7;
    param_1[2] = uVar9;
  }
  *param_1 = uVar5 + 2;
  return puVar1 + uVar2 * 0x12;
}



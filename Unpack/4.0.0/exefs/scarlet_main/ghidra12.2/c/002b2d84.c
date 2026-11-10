/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b2d84; name: FUN_002b2d84
 */


ulong * FUN_002b2d84(ulong *param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar3 = *param_1;
  if ((uVar3 & 1) == 0) {
    puVar9 = param_1 + 1;
    uVar5 = 2;
    puVar2 = puVar9;
    if (uVar3 >> 1 == 2) {
LAB_002b2dd8:
      uVar8 = uVar5 << 1;
      puVar2 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar5 << 6);
      puVar7 = puVar2;
      goto LAB_002b2df4;
    }
  }
  else {
    puVar9 = (ulong *)param_1[1];
    uVar5 = param_1[2];
    puVar2 = puVar9;
    if (uVar3 >> 1 == uVar5) goto LAB_002b2dd8;
  }
  uVar8 = 0;
  puVar7 = (ulong *)0x0;
  puVar9 = puVar2;
LAB_002b2df4:
  uVar3 = uVar3 >> 1;
  uVar10 = param_2[1];
  uVar5 = *param_2;
  puVar2 = puVar2 + uVar3 * 4;
  puVar2[2] = param_2[2];
  puVar2[1] = uVar10;
  *puVar2 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(int *)(puVar2 + 3) = (int)param_2[3];
  if (puVar7 == (ulong *)0x0) {
    uVar3 = *param_1;
  }
  else {
    if (uVar3 != 0) {
      puVar4 = puVar7;
      uVar5 = uVar3;
      puVar6 = puVar9;
      do {
        uVar11 = puVar6[1];
        uVar10 = *puVar6;
        uVar5 = uVar5 - 1;
        puVar4[2] = puVar6[2];
        puVar4[1] = uVar11;
        *puVar4 = uVar10;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        *(int *)(puVar4 + 3) = (int)puVar6[3];
        puVar1 = PTR_LAB_047cba48;
        puVar4 = puVar4 + 4;
        puVar6 = puVar6 + 4;
      } while (uVar5 != 0);
      if (puVar9 != (ulong *)0x0) {
        puVar9 = puVar9 + uVar3 * 4 + -2;
        do {
          uVar3 = uVar3 - 1;
          if ((puVar9[-2] & 1) != 0) {
            FUN_0049e790(puVar1,*puVar9);
          }
          puVar9 = puVar9 + -4;
        } while (uVar3 != 0);
      }
    }
    uVar3 = *param_1;
    if ((uVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      uVar3 = *param_1;
    }
    uVar3 = uVar3 | 1;
    param_1[1] = (ulong)puVar7;
    param_1[2] = uVar8;
  }
  *param_1 = uVar3 + 2;
  return puVar2;
}



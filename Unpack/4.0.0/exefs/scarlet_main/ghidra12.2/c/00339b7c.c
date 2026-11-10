/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00339b7c; name: FUN_00339b7c
 */


ulong * FUN_00339b7c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  
  uVar10 = *param_1;
  if ((uVar10 & 1) == 0) {
    puVar9 = param_1 + 1;
    uVar5 = 4;
    puVar4 = puVar9;
    if (uVar10 >> 1 == 4) {
LAB_00339bd4:
      uVar12 = uVar5 << 1;
      puVar4 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar5 << 4);
      puVar8 = puVar4;
      goto LAB_00339bf0;
    }
  }
  else {
    puVar9 = (ulong *)param_1[1];
    uVar5 = param_1[2];
    puVar4 = puVar9;
    if (uVar10 >> 1 == uVar5) goto LAB_00339bd4;
  }
  uVar12 = 0;
  puVar8 = (ulong *)0x0;
  puVar9 = puVar4;
LAB_00339bf0:
  puVar13 = (ulong *)(uVar10 >> 1);
  uVar5 = *param_2;
  *param_2 = 0;
  puVar4[(long)puVar13] = uVar5;
  if (puVar8 == (ulong *)0x0) {
    uVar10 = *param_1;
  }
  else {
    if (puVar13 != (ulong *)0x0) {
      puVar6 = puVar9;
      if (puVar13 == (ulong *)0x1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          uVar7 = *puVar6;
          puVar1 = puVar8 + uVar5;
          *puVar6 = 0;
          *puVar1 = uVar7;
          uVar7 = puVar6[1];
          uVar5 = uVar5 + 2;
          puVar6[1] = 0;
          puVar6 = puVar6 + 2;
          puVar1[1] = uVar7;
        } while (((ulong)puVar13 & 0x7ffffffffffffffe) != uVar5);
      }
      puVar1 = puVar13;
      puVar2 = PTR_LAB_047cba48;
      puVar14 = puVar9;
      puVar3 = PTR_LAB_047cba48;
      if (((uint)uVar10 >> 1 & 1) != 0) {
        uVar10 = *puVar6;
        *puVar6 = 0;
        puVar8[uVar5] = uVar10;
        puVar2 = PTR_LAB_047cba48;
        puVar3 = PTR_LAB_047cba48;
      }
      while (PTR_LAB_047cba48 = puVar3, puVar3 = PTR_LAB_047cba48, PTR_LAB_047cba48 = puVar2,
            puVar14 != (ulong *)0x0) {
        puVar14 = (ulong *)((long)puVar1 + -1);
        puVar11 = (undefined8 *)puVar9[(long)puVar1 + -1];
        puVar9[(long)puVar1 + -1] = 0;
        puVar1 = puVar14;
        puVar2 = PTR_LAB_047cba48;
        if (puVar11 != (undefined8 *)0x0) {
          (**(code **)*puVar11)(puVar11);
          FUN_0049e790(puVar3,puVar11);
          puVar2 = PTR_LAB_047cba48;
        }
      }
    }
    uVar10 = *param_1;
    if ((uVar10 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      uVar10 = *param_1;
    }
    uVar10 = uVar10 | 1;
    param_1[1] = (ulong)puVar8;
    param_1[2] = uVar12;
  }
  *param_1 = uVar10 + 2;
  return puVar4 + (long)puVar13;
}



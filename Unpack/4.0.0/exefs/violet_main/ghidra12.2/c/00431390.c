/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00431390; name: FUN_00431390
 */


undefined8 FUN_00431390(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar13 = FUN_00430b70();
  if ((int)uVar13 != 0) {
    return uVar13;
  }
  puVar12 = param_3 + (ulong)param_3[0x44] * 4;
  uVar16 = *(undefined8 *)(param_3 + 2);
  uVar13 = *(undefined8 *)param_3;
  uVar17 = *(undefined8 *)puVar12;
  *(undefined8 *)(param_3 + 2) = *(undefined8 *)(puVar12 + 2);
  *(undefined8 *)param_3 = uVar17;
  *(undefined8 *)(puVar12 + 2) = uVar16;
  *(undefined8 *)puVar12 = uVar13;
  while( true ) {
    puVar15 = param_3 + 4;
    puVar14 = puVar12 + -4;
    uVar1 = *puVar15;
    uVar3 = param_3[5];
    uVar6 = uVar3 >> 8 | uVar3 << 0x18;
    uVar3 = uVar6 ^ uVar3;
    uVar2 = param_3[6];
    uVar4 = param_3[7];
    uVar7 = uVar2 >> 8 | uVar2 << 0x18;
    uVar2 = uVar7 ^ uVar2;
    uVar7 = uVar7 ^ (uVar2 >> 0x10 | uVar2 << 0x10);
    uVar8 = uVar4 >> 8 | uVar4 << 0x18;
    uVar4 = uVar8 ^ uVar4;
    uVar8 = uVar8 ^ (uVar4 >> 0x10 | uVar4 << 0x10);
    uVar4 = uVar1 >> 8 | uVar1 << 0x18;
    uVar1 = uVar4 ^ uVar1;
    uVar4 = uVar4 ^ (uVar1 >> 0x10 | uVar1 << 0x10);
    uVar3 = uVar6 ^ (uVar3 >> 0x10 | uVar3 << 0x10) ^ uVar7;
    uVar7 = uVar8 ^ uVar7;
    uVar2 = uVar3 ^ uVar4;
    uVar4 = uVar7 ^ uVar4;
    uVar8 = uVar8 ^ uVar3;
    uVar7 = uVar7 ^ uVar2;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar3 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    uVar1 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar4 = ((uVar4 & 0xff00ff) << 8 | uVar4 >> 8 & 0xff00ff) ^ uVar7;
    uVar7 = uVar7 ^ uVar1;
    uVar3 = uVar4 ^ uVar2;
    uVar4 = uVar4 ^ uVar1;
    uVar1 = uVar3 ^ uVar7;
    uVar7 = uVar7 ^ uVar2;
    if (puVar14 <= puVar15) break;
    uVar2 = *puVar14;
    uVar5 = puVar12[-3];
    uVar9 = uVar2 >> 8 | uVar2 << 0x18;
    uVar8 = puVar12[-2];
    uVar6 = puVar12[-1];
    uVar2 = uVar9 ^ uVar2;
    uVar9 = uVar9 ^ (uVar2 >> 0x10 | uVar2 << 0x10);
    uVar10 = uVar8 >> 8 | uVar8 << 0x18;
    uVar8 = uVar10 ^ uVar8;
    uVar10 = uVar10 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
    uVar11 = uVar6 >> 8 | uVar6 << 0x18;
    uVar6 = uVar11 ^ uVar6;
    uVar11 = uVar11 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
    uVar2 = uVar5 >> 8 | uVar5 << 0x18;
    uVar5 = uVar2 ^ uVar5;
    uVar2 = uVar2 ^ (uVar5 >> 0x10 | uVar5 << 0x10) ^ uVar10;
    uVar10 = uVar11 ^ uVar10;
    uVar8 = uVar2 ^ uVar9;
    uVar9 = uVar10 ^ uVar9;
    uVar11 = uVar11 ^ uVar2;
    uVar10 = uVar10 ^ uVar8;
    uVar2 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uVar11 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar6 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar2 = uVar6 ^ uVar11;
    uVar6 = ((uVar9 & 0xff00ff) << 8 | uVar9 >> 8 & 0xff00ff) ^ uVar6;
    uVar5 = uVar6 ^ uVar8;
    *puVar15 = uVar5;
    param_3[5] = uVar2 ^ uVar8;
    param_3[6] = uVar5 ^ uVar2;
    param_3[7] = uVar6 ^ uVar11;
    *puVar14 = uVar3;
    puVar12[-3] = uVar7;
    puVar12[-2] = uVar1;
    puVar12[-1] = uVar4;
    puVar12 = puVar14;
    param_3 = puVar15;
  }
  *puVar14 = uVar3;
  puVar12[-3] = uVar7;
  puVar12[-2] = uVar1;
  puVar12[-1] = uVar4;
  return 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a4d0c; name: FUN_008a4d0c
 */


void FUN_008a4d0c(undefined8 param_1,long param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  
  fVar7 = (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20);
  fVar12 = (float)*(undefined8 *)(param_3 + 0x78);
  fVar3 = (float)((ulong)*(undefined8 *)(param_3 + 0x60) >> 0x20);
  fVar5 = (float)*(undefined8 *)(param_3 + 0x50);
  fVar8 = (float)*(undefined8 *)(param_3 + 0x58);
  fVar2 = (float)*(undefined8 *)(param_3 + 0x68);
  fVar6 = (float)*(undefined8 *)(param_3 + 0x70);
  fVar4 = (float)((ulong)*(undefined8 *)(param_3 + 0x70) >> 0x20);
  fVar1 = (float)*(undefined8 *)(param_3 + 0x60);
  fVar20 = (((fVar8 * fVar1 * fVar4 + fVar5 * fVar3 * fVar12 + fVar7 * fVar2 * fVar6) -
            fVar3 * fVar6 * fVar8) - fVar7 * fVar1 * fVar12) - fVar5 * fVar4 * fVar2;
  if (fVar20 == 0.0) {
    fVar20 = 0.0;
  }
  else {
    fVar20 = 1.0 / fVar20;
  }
  fVar26 = fVar3 * fVar12 - fVar2 * fVar4;
  fVar25 = fVar2 * fVar6 - fVar1 * fVar12;
  fVar15 = fVar1 * fVar4 - fVar3 * fVar6;
  fVar17 = fVar26 * fVar20;
  fVar21 = (fVar8 * fVar4 - fVar7 * fVar12) * fVar20;
  fVar31 = fVar15 * fVar20;
  uVar14 = *(undefined8 *)(param_3 + 0x88);
  uVar13 = *(undefined8 *)(param_3 + 0x80);
  uVar35 = *(undefined8 *)(param_3 + 0x98);
  uVar16 = *(undefined8 *)(param_3 + 0x90);
  fVar9 = (fVar5 * fVar3 - fVar7 * fVar1) * fVar20;
  fVar23 = (fVar5 * fVar12 - fVar8 * fVar6) * fVar20;
  fVar24 = fVar25 * fVar20;
  fVar18 = (fVar7 * fVar6 - fVar5 * fVar4) * fVar20;
  fVar4 = (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20);
  fVar22 = (fVar7 * fVar2 - fVar8 * fVar3) * fVar20;
  fVar12 = (fVar8 * fVar1 - fVar5 * fVar2) * fVar20;
  fVar1 = (float)((ulong)*(undefined8 *)(param_3 + 0x68) >> 0x20);
  fVar27 = (float)uVar13;
  fVar28 = (float)((ulong)uVar13 >> 0x20);
  fVar29 = (float)uVar14;
  fVar30 = (float)((ulong)uVar14 >> 0x20);
  fVar32 = (float)uVar16;
  fVar33 = (float)((ulong)uVar16 >> 0x20);
  fVar34 = (float)uVar35;
  fVar36 = (float)((ulong)uVar35 >> 0x20);
  fVar2 = (float)((ulong)*(undefined8 *)(param_3 + 0x78) >> 0x20);
  uVar11 = *(undefined8 *)(param_3 + 0xa8);
  uVar10 = *(undefined8 *)(param_3 + 0xa0);
  fVar5 = (float)uVar10;
  fVar7 = (float)((ulong)uVar10 >> 0x20);
  fVar8 = (float)uVar11;
  fVar19 = (float)((ulong)uVar11 >> 0x20);
  fVar6 = (-(fVar26 * fVar20) * fVar4 - fVar21 * fVar1) - fVar22 * fVar2;
  fVar3 = (-(fVar25 * fVar20) * fVar4 - fVar23 * fVar1) - fVar12 * fVar2;
  fVar1 = (-(fVar15 * fVar20) * fVar4 - fVar18 * fVar1) - fVar9 * fVar2;
  *(undefined8 *)(param_2 + 0x88) = uVar14;
  *(undefined8 *)(param_2 + 0x80) = uVar13;
  *(undefined8 *)(param_2 + 0x98) = uVar35;
  *(undefined8 *)(param_2 + 0x90) = uVar16;
  *(undefined8 *)(param_2 + 0xa8) = uVar11;
  *(undefined8 *)(param_2 + 0xa0) = uVar10;
  *(ulong *)(param_2 + 0xb8) =
       CONCAT44(fVar6 + fVar30 * fVar17 + fVar36 * fVar21 + fVar19 * fVar22,
                fVar29 * fVar17 + fVar34 * fVar21 + fVar8 * fVar22 + 0.0);
  *(ulong *)(param_2 + 0xb0) =
       CONCAT44(fVar28 * fVar17 + fVar33 * fVar21 + fVar7 * fVar22 + 0.0,
                fVar27 * fVar17 + fVar32 * fVar21 + fVar5 * fVar22 + 0.0);
  *(ulong *)(param_2 + 200) =
       CONCAT44(fVar3 + fVar30 * fVar24 + fVar36 * fVar23 + fVar19 * fVar12,
                fVar29 * fVar24 + fVar34 * fVar23 + fVar8 * fVar12 + 0.0);
  *(ulong *)(param_2 + 0xc0) =
       CONCAT44(fVar28 * fVar24 + fVar33 * fVar23 + fVar7 * fVar12 + 0.0,
                fVar27 * fVar24 + fVar32 * fVar23 + fVar5 * fVar12 + 0.0);
  *(ulong *)(param_2 + 0xd8) =
       CONCAT44(fVar1 + fVar30 * fVar31 + fVar36 * fVar18 + fVar19 * fVar9,
                fVar29 * fVar31 + fVar34 * fVar18 + fVar8 * fVar9 + 0.0);
  *(ulong *)(param_2 + 0xd0) =
       CONCAT44(fVar28 * fVar31 + fVar33 * fVar18 + fVar7 * fVar9 + 0.0,
                fVar27 * fVar31 + fVar32 * fVar18 + fVar5 * fVar9 + 0.0);
  uVar16 = *(undefined8 *)(param_3 + 0x70);
  uVar11 = *(undefined8 *)(param_3 + 0x58);
  uVar10 = *(undefined8 *)(param_3 + 0x50);
  uVar14 = *(undefined8 *)(param_3 + 0x68);
  uVar13 = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(param_3 + 0x78);
  *(undefined8 *)(param_2 + 0x100) = uVar16;
  *(undefined8 *)(param_2 + 0xe8) = uVar11;
  *(undefined8 *)(param_2 + 0xe0) = uVar10;
  *(undefined8 *)(param_2 + 0xf8) = uVar14;
  *(undefined8 *)(param_2 + 0xf0) = uVar13;
  *(ulong *)(param_2 + 0x110) = CONCAT44(fVar3,fVar6);
  *(float *)(param_2 + 0x118) = fVar1;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d8fbd8; name: FUN_00d8fbd8
 */


void FUN_00d8fbd8(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *__src;
  undefined8 *__src_00;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  undefined1 auStack_b0 [112];
  
  if (*(char *)(param_1 + 0x2d1) != '\0') {
    if (*(char *)(param_1 + 0xd0) != '\0') {
      *(undefined1 *)(param_1 + 0xd0) = 0;
      FUN_00d903c4(auStack_b0,*(undefined4 *)(param_1 + 0x110),param_1 + 0xe0,1);
      memcpy((void *)(param_1 + 0x120),auStack_b0,100);
    }
    fVar4 = *(float *)(param_1 + 0x430) - *(float *)(param_1 + 0x434);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (1.1920929e-07 < *(float *)(param_1 + 0x430)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar4)) {
        bVar1 = fVar4 < 1.1920929e-07;
        bVar2 = fVar4 == 1.1920929e-07;
        bVar3 = false;
      }
    }
    if ((!bVar2 && bVar1 == bVar3) && (*(char *)(param_1 + 0x370) != '\0')) {
      *(undefined1 *)(param_1 + 0x370) = 0;
      FUN_00d903c4(auStack_b0,*(undefined4 *)(param_1 + 0x3b0),param_1 + 0x380,1);
      memcpy((void *)(param_1 + 0x3c0),auStack_b0,100);
    }
  }
  *(undefined1 *)(param_1 + 0x2d1) = 0;
  fVar4 = *(float *)(param_1 + 0x430);
  fVar23 = fVar4 - *(float *)(param_1 + 0x434);
  __src = (undefined8 *)FUN_00d8fdd4(param_1 + 0x40);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (1.1920929e-07 < fVar4) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar23)) {
      bVar1 = fVar23 < 1.1920929e-07;
      bVar2 = fVar23 == 1.1920929e-07;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    memcpy((void *)(param_1 + 0x1f0),__src,100);
    memmove((void *)(param_1 + 0x260),__src,100);
  }
  else {
    __src_00 = (undefined8 *)FUN_00d8fdd4(param_1 + 0x2e0);
    if (*(float *)(param_1 + 0x430) < 1.1920929e-07) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (float)(**(code **)(PTR_PTR_047d9248 + (ulong)*(uint *)(param_1 + 0x438) * 8))
                               (*(float *)(param_1 + 0x434) / *(float *)(param_1 + 0x430));
      fVar4 = fVar4 + 0.0;
    }
    uVar5 = *__src_00;
    uVar8 = __src_00[3];
    uVar7 = __src_00[2];
    fVar13 = (float)__src[2];
    fVar14 = (float)((ulong)__src[2] >> 0x20);
    fVar15 = (float)__src[3];
    fVar16 = (float)((ulong)__src[3] >> 0x20);
    fVar9 = (float)*__src;
    fVar10 = (float)((ulong)*__src >> 0x20);
    fVar11 = (float)__src[1];
    fVar12 = (float)((ulong)__src[1] >> 0x20);
    uVar18 = __src_00[5];
    uVar17 = __src_00[4];
    uVar20 = __src_00[7];
    uVar19 = __src_00[6];
    uVar22 = __src[5];
    uVar21 = __src[4];
    uVar25 = __src[7];
    uVar24 = __src[6];
    uVar27 = __src_00[9];
    uVar26 = __src_00[8];
    uVar29 = __src_00[0xb];
    uVar28 = __src_00[10];
    uVar34 = __src[9];
    uVar31 = __src[8];
    uVar40 = __src[0xb];
    uVar37 = __src[10];
    fVar23 = *(float *)(__src + 0xc);
    fVar6 = *(float *)(__src_00 + 0xc);
    *(ulong *)(param_1 + 0x1f8) =
         CONCAT44(fVar12 + ((float)((ulong)__src_00[1] >> 0x20) - fVar12) * fVar4,
                  fVar11 + ((float)__src_00[1] - fVar11) * fVar4);
    *(ulong *)(param_1 + 0x1f0) =
         CONCAT44(fVar10 + ((float)((ulong)uVar5 >> 0x20) - fVar10) * fVar4,
                  fVar9 + ((float)uVar5 - fVar9) * fVar4);
    *(ulong *)(param_1 + 0x208) =
         CONCAT44(fVar16 + ((float)((ulong)uVar8 >> 0x20) - fVar16) * fVar4,
                  fVar15 + ((float)uVar8 - fVar15) * fVar4);
    *(ulong *)(param_1 + 0x200) =
         CONCAT44(fVar14 + ((float)((ulong)uVar7 >> 0x20) - fVar14) * fVar4,
                  fVar13 + ((float)uVar7 - fVar13) * fVar4);
    fVar30 = (float)uVar31;
    fVar32 = (float)((ulong)uVar31 >> 0x20);
    fVar33 = (float)uVar34;
    fVar35 = (float)((ulong)uVar34 >> 0x20);
    fVar13 = (float)uVar24;
    fVar14 = (float)((ulong)uVar24 >> 0x20);
    fVar15 = (float)uVar25;
    fVar16 = (float)((ulong)uVar25 >> 0x20);
    fVar9 = (float)uVar21;
    fVar10 = (float)((ulong)uVar21 >> 0x20);
    fVar11 = (float)uVar22;
    fVar12 = (float)((ulong)uVar22 >> 0x20);
    fVar36 = (float)uVar37;
    fVar38 = (float)((ulong)uVar37 >> 0x20);
    fVar39 = (float)uVar40;
    fVar41 = (float)((ulong)uVar40 >> 0x20);
    *(float *)(param_1 + 0x250) = (1.0 - fVar4) * fVar23 + fVar4 * fVar6;
    *(ulong *)(param_1 + 0x218) =
         CONCAT44(fVar12 + ((float)((ulong)uVar18 >> 0x20) - fVar12) * fVar4,
                  fVar11 + ((float)uVar18 - fVar11) * fVar4);
    *(ulong *)(param_1 + 0x210) =
         CONCAT44(fVar10 + ((float)((ulong)uVar17 >> 0x20) - fVar10) * fVar4,
                  fVar9 + ((float)uVar17 - fVar9) * fVar4);
    *(ulong *)(param_1 + 0x228) =
         CONCAT44(fVar16 + ((float)((ulong)uVar20 >> 0x20) - fVar16) * fVar4,
                  fVar15 + ((float)uVar20 - fVar15) * fVar4);
    *(ulong *)(param_1 + 0x220) =
         CONCAT44(fVar14 + ((float)((ulong)uVar19 >> 0x20) - fVar14) * fVar4,
                  fVar13 + ((float)uVar19 - fVar13) * fVar4);
    *(ulong *)(param_1 + 0x238) =
         CONCAT44(fVar35 + ((float)((ulong)uVar27 >> 0x20) - fVar35) * fVar4,
                  fVar33 + ((float)uVar27 - fVar33) * fVar4);
    *(ulong *)(param_1 + 0x230) =
         CONCAT44(fVar32 + ((float)((ulong)uVar26 >> 0x20) - fVar32) * fVar4,
                  fVar30 + ((float)uVar26 - fVar30) * fVar4);
    *(ulong *)(param_1 + 0x248) =
         CONCAT44(fVar41 + ((float)((ulong)uVar29 >> 0x20) - fVar41) * fVar4,
                  fVar39 + ((float)uVar29 - fVar39) * fVar4);
    *(ulong *)(param_1 + 0x240) =
         CONCAT44(fVar38 + ((float)((ulong)uVar28 >> 0x20) - fVar38) * fVar4,
                  fVar36 + ((float)uVar28 - fVar36) * fVar4);
    memcpy((void *)(param_1 + 0x260),__src_00,100);
  }
  return;
}



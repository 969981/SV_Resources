/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0082b300; name: FUN_0082b300
 */


undefined1  [16] FUN_0082b300(long param_1,long param_2,int param_3,undefined8 *param_4)

{
  ushort *puVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar17;
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  uVar11 = *(uint *)(param_1 + 0x28 + (long)param_3 * 4 + (long)*(int *)(param_1 + 0x28));
  piVar9 = (int *)(param_1 + 0x10);
  puVar1 = (ushort *)((long)piVar9 + (ulong)(ushort)uVar11 * 4 + (long)*piVar9);
  bVar3 = (byte)puVar1[1];
  uVar12 = (uVar11 >> 0x10 & 0xff) + 1;
  uVar7 = 0;
  if (bVar3 != 0) {
    uVar7 = uVar12 / bVar3;
  }
  piVar10 = (int *)(param_1 + 0x18);
  puVar13 = (undefined8 *)(param_2 + (long)param_3 * 0xc);
  bVar3 = *(byte *)((long)piVar10 +
                   (ulong)*puVar1 + (ulong)(uVar12 - uVar7 * bVar3) + (long)*piVar10);
  uVar15 = *puVar13;
  fVar8 = *(float *)(puVar13 + 1);
  puVar13 = (undefined8 *)(param_2 + (ulong)bVar3 * 0xc);
  uVar21 = *puVar13;
  uVar12 = uVar11 >> 0x10;
  fVar14 = (float)uVar15;
  fVar18 = (float)*param_4 - fVar14;
  fVar17 = (float)((ulong)uVar15 >> 0x20);
  fVar19 = (float)((ulong)*param_4 >> 0x20) - fVar17;
  fVar20 = (float)param_4[1] - fVar8;
  fVar24 = fVar14 - (float)uVar21;
  fVar25 = fVar17 - (float)((ulong)uVar21 >> 0x20);
  fVar26 = fVar8 - *(float *)(puVar13 + 1);
  fVar22 = fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26;
  fVar23 = fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26;
  fVar27 = (float)(0x5f2fed52 - ((int)fVar22 >> 1));
  fVar28 = (float)(0x5f2fed52 - ((int)fVar23 >> 1));
  fVar24 = fVar18 * fVar24;
  fVar25 = fVar19 * fVar25;
  fVar26 = fVar20 * fVar26;
  uVar15 = CONCAT44((fVar24 + fVar25 + fVar26) *
                    (fVar23 * -0.5557 * fVar28 * fVar28 + 1.55452) * fVar28,
                    (fVar24 + fVar25 + fVar26) *
                    (fVar22 * -0.5557 * fVar27 * fVar27 + 1.55452) * fVar27);
  do {
    puVar1 = (ushort *)((long)piVar9 + (ulong)(uVar11 & 0xffff) * 4 + (long)*piVar9);
    bVar4 = (byte)puVar1[1];
    iVar6 = (uint)bVar4 + (uVar12 & 0xff) + -1;
    iVar5 = 0;
    if (bVar4 != 0) {
      iVar5 = iVar6 / (int)(uint)bVar4;
    }
    lVar2 = (ulong)(iVar6 - iVar5 * (uint)bVar4 & 0xff) + (ulong)*puVar1;
    bVar4 = *(byte *)((long)piVar10 + lVar2 + *piVar10);
    uVar11 = *(uint *)(param_1 + 0x20 + lVar2 * 4 + (long)*(int *)(param_1 + 0x20));
    puVar13 = (undefined8 *)(param_2 + (ulong)bVar4 * 0xc);
    uVar21 = *puVar13;
    uVar12 = uVar11 >> 0x10;
    fVar22 = fVar14 - (float)uVar21;
    fVar24 = fVar17 - (float)((ulong)uVar21 >> 0x20);
    fVar26 = fVar8 - *(float *)(puVar13 + 1);
    fVar23 = fVar18 * fVar22;
    fVar25 = fVar19 * fVar24;
    fVar27 = fVar20 * fVar26;
    fVar28 = fVar22 * fVar22 + fVar24 * fVar24 + fVar26 * fVar26;
    fVar22 = fVar22 * fVar22 + fVar24 * fVar24 + fVar26 * fVar26;
    fVar24 = (float)(0x5f2fed52 - ((int)fVar28 >> 1));
    fVar26 = (float)(0x5f2fed52 - ((int)fVar22 >> 1));
    uVar15 = NEON_fmin(uVar15,CONCAT44((fVar23 + fVar25 + fVar27) *
                                       (fVar22 * -0.5557 * fVar26 * fVar26 + 1.55452) * fVar26,
                                       (fVar23 + fVar25 + fVar27) *
                                       (fVar28 * -0.5557 * fVar24 * fVar24 + 1.55452) * fVar24),4);
  } while (bVar4 != bVar3);
  auVar16._0_8_ = NEON_fmax(*(undefined8 *)(PTR_DAT_047d19b0 + 0x50),uVar15,4);
  auVar16._8_8_ = 0;
  return auVar16;
}



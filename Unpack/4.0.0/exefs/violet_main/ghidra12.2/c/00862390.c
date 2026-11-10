/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00862390; name: FUN_00862390
 */


void FUN_00862390(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  ulong uVar11;
  float fVar13;
  float fVar14;
  ulong uVar15;
  float fVar17;
  ulong uVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  ulong local_80;
  ulong uStack_78;
  undefined1 local_70 [4];
  float fStack_6c;
  float local_60 [4];
  
  puVar2 = PTR_DAT_047d19b0;
  fVar20 = (float)*param_1;
  fVar21 = (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x70);
  fVar5 = (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x70) >> 0x20);
  fVar9 = (float)((ulong)*param_1 >> 0x20);
  fVar18 = (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
  fVar3 = fVar21 * fVar20 - fVar18;
  fVar19 = (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x60) >> 0x20);
  fVar4 = fVar5 * fVar20 - fVar19;
  fVar8 = fVar21 * fVar9 - fVar18;
  fVar9 = fVar5 * fVar9 - fVar19;
  fVar10 = fVar8 + fVar3;
  fVar12 = fVar9 + fVar4;
  fVar13 = fVar8 - fVar3;
  fVar14 = fVar9 - fVar4;
  fVar20 = (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x40);
  if (0.0 <= fVar8) {
    uVar15 = CONCAT44(-(uint)(fVar14 <= fVar19),-(uint)(fVar13 <= fVar18));
    uVar11 = CONCAT44(fVar5 - fVar14,fVar21 - fVar13);
    uVar11 = uVar11 ^ (uVar11 ^ CONCAT44(fVar14,fVar13)) & uVar15;
    uVar22 = CONCAT44(fVar19 - fVar9,fVar18 - fVar8);
    uVar22 = uVar22 ^ (uVar22 ^ CONCAT44(fVar4,fVar3)) & uVar15;
    fVar14 = (float)uVar22 / (float)uVar11;
    fVar17 = (float)(uVar22 >> 0x20) / (float)(uVar11 >> 0x20);
    uVar22 = CONCAT44(fVar17,fVar14);
    uVar22 = uVar22 ^ (uVar22 ^ CONCAT44(-fVar17,-fVar14)) & uVar15;
    uVar16 = CONCAT44(-(uint)(fVar12 <= fVar19),-(uint)(fVar10 <= fVar18));
    uVar23 = CONCAT44(fVar5 - fVar12,fVar21 - fVar10);
    uVar15 = CONCAT44(fVar19 - fVar4,fVar18 - fVar3);
    uVar23 = uVar23 ^ (uVar23 ^ CONCAT44(fVar12,fVar10)) & uVar16;
    uVar15 = uVar15 ^ (uVar15 ^ CONCAT44(fVar9,fVar8)) & uVar16;
    fVar4 = fVar18 + (float)uVar22;
    fVar5 = fVar19 + (float)(uVar22 >> 0x20);
    uVar1 = ((uint)fVar20 ^ (uint)fVar18) & -(uint)(fVar13 <= fVar18);
    if (0.0 <= fVar3) {
      uVar11 = uVar23;
      fVar4 = (float)uVar15 / (float)uVar23;
      fVar5 = (float)(uVar15 >> 0x20) / (float)(uVar23 >> 0x20);
      uVar1 = ((uint)fVar20 ^ (uint)fVar18) & -(uint)(fVar10 <= fVar18);
    }
    fVar20 = (float)((uint)fVar20 ^ uVar1);
  }
  else {
    fVar17 = (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x40) >> 0x20);
    if (fVar3 < 0.0) {
      uVar22 = CONCAT44(-(uint)(fVar17 <= fVar12),-(uint)(fVar20 <= fVar10));
      uVar11 = CONCAT44(fVar5 + fVar12,fVar21 + fVar10);
      uVar15 = CONCAT44(fVar19 + fVar4,fVar18 + fVar3);
      fVar20 = (float)((uint)fVar20 ^ ((uint)fVar20 ^ (uint)fVar18) & -(uint)(fVar20 <= fVar10));
      uVar11 = uVar11 ^ (uVar11 ^ CONCAT44(-fVar12,-fVar10)) & uVar22;
      uVar15 = uVar15 ^ (uVar15 ^ CONCAT44(fVar9,fVar8)) & uVar22;
      fVar3 = (float)uVar15 / (float)uVar11;
      fVar4 = (float)(uVar15 >> 0x20) / (float)(uVar11 >> 0x20);
      uVar15 = CONCAT44(fVar4,fVar3);
      uVar15 = uVar15 ^ (uVar15 ^ CONCAT44(-fVar4,-fVar3)) & uVar22;
      fVar4 = fVar21 + (float)uVar15;
      fVar5 = fVar5 + (float)(uVar15 >> 0x20);
    }
    else {
      uVar22 = CONCAT44(-(uint)(fVar17 <= fVar14),-(uint)(fVar20 <= fVar13));
      uVar11 = CONCAT44(fVar5 + fVar14,fVar21 + fVar13);
      fVar20 = (float)((uint)fVar20 ^ ((uint)fVar20 ^ (uint)fVar18) & -(uint)(fVar20 <= fVar13));
      uVar15 = CONCAT44(fVar19 + fVar9,fVar18 + fVar8);
      uVar11 = uVar11 ^ (uVar11 ^ CONCAT44(-fVar14,-fVar13)) & uVar22;
      uVar15 = uVar15 ^ (uVar15 ^ CONCAT44(fVar4,fVar3)) & uVar22;
      fVar4 = (float)uVar15 / (float)uVar11 + (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x80);
      fVar5 = (float)(uVar15 >> 0x20) / (float)(uVar11 >> 0x20) +
              (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x80) >> 0x20);
    }
  }
  fVar3 = (float)uVar11;
  iVar6 = -(uint)(fVar3 == 0.0);
  iVar7 = -(uint)((float)(uVar11 >> 0x20) == 0.0);
  fVar21 = fVar3 * SQRT(fVar21 - fVar3 * fVar3);
  local_80 = CONCAT44(fVar5 * (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x370) >> 0x20),
                      fVar4 * (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x370)) &
             CONCAT17(~(byte)((uint)iVar7 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar7 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar7 >> 8),
                                        CONCAT14(~(byte)iVar7,
                                                 CONCAT13(~(byte)((uint)iVar6 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar6 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar6 >> 8
                                                                                   ),~(byte)iVar6)))
                                                ))));
  uStack_78 = local_80;
  FUN_01170160(&local_80,local_60,local_70);
  param_2[1] = CONCAT44(*(undefined4 *)(puVar2 + 0x50),fVar20 * (fVar18 - fVar3 * fVar3));
  *param_2 = CONCAT44(fVar21 * local_60[0],fVar21 * fStack_6c);
  return;
}



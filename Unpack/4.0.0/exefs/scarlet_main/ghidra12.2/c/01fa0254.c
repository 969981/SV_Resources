/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa0254; name: FUN_01fa0254
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01fa0254(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  if (lVar1 == 0) {
    FUN_00ff050c(_DAT_03d63460,&local_30);
  }
  else {
    uStack_28 = *(undefined8 *)(lVar1 + 0xa8);
    local_30 = *(undefined8 *)(lVar1 + 0xa0);
    fVar2 = (float)local_30;
    fVar6 = (float)*(undefined8 *)(lVar1 + 0xb0);
    iVar10 = -(uint)(fVar6 < fVar2);
    fVar4 = (float)((ulong)local_30 >> 0x20);
    fVar7 = (float)((ulong)*(undefined8 *)(lVar1 + 0xb0) >> 0x20);
    iVar12 = -(uint)(fVar7 < fVar4);
    fVar5 = (float)uStack_28;
    fVar8 = (float)*(undefined8 *)(lVar1 + 0xb8);
    iVar14 = -(uint)(fVar8 < fVar5);
    if (CONCAT13((byte)((uint)iVar12 >> 0x18) | (byte)((uint)iVar10 >> 0x18) |
                 (byte)((uint)iVar14 >> 0x18),
                 CONCAT12((byte)((uint)iVar12 >> 0x10) | (byte)((uint)iVar10 >> 0x10) |
                          (byte)((uint)iVar14 >> 0x10),
                          CONCAT11((byte)((uint)iVar12 >> 8) | (byte)((uint)iVar10 >> 8) |
                                   (byte)((uint)iVar14 >> 8),
                                   (byte)iVar12 | (byte)iVar10 | (byte)iVar14))) == 0) {
      fVar11 = (fVar2 + fVar6) * 0.5;
      fVar13 = (fVar4 + fVar7) * 0.5;
      fVar15 = (fVar5 + fVar8) * 0.5;
      fVar2 = (fVar6 - fVar2) * 0.5;
      fVar4 = (fVar7 - fVar4) * 0.5;
      fVar5 = (fVar8 - fVar5) * 0.5;
      fVar16 = (float)*(undefined8 *)(lVar1 + 0x70);
      fVar17 = (float)((ulong)*(undefined8 *)(lVar1 + 0x70) >> 0x20);
      fVar18 = (float)*(undefined8 *)(lVar1 + 0x78);
      fVar19 = (float)((ulong)*(undefined8 *)(lVar1 + 0x78) >> 0x20);
      fVar6 = (float)*(undefined8 *)(lVar1 + 0x60);
      fVar7 = (float)((ulong)*(undefined8 *)(lVar1 + 0x60) >> 0x20);
      fVar8 = (float)*(undefined8 *)(lVar1 + 0x68);
      fVar9 = (float)((ulong)*(undefined8 *)(lVar1 + 0x68) >> 0x20);
      fVar20 = (float)*(undefined8 *)(lVar1 + 0x80);
      fVar21 = (float)((ulong)*(undefined8 *)(lVar1 + 0x80) >> 0x20);
      fVar22 = (float)*(undefined8 *)(lVar1 + 0x88);
      fVar23 = (float)((ulong)*(undefined8 *)(lVar1 + 0x88) >> 0x20);
      local_30 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar1 + 0x90) >> 0x20) +
                          fVar21 * fVar15 + fVar7 * fVar11 + fVar17 * fVar13) -
                          (ABS(fVar21 * fVar5) + ABS(fVar7 * fVar2) + ABS(fVar17 * fVar4)),
                          ((float)*(undefined8 *)(lVar1 + 0x90) +
                          fVar20 * fVar15 + fVar6 * fVar11 + fVar16 * fVar13) -
                          (ABS(fVar20 * fVar5) + ABS(fVar6 * fVar2) + ABS(fVar16 * fVar4)));
      uStack_28 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar1 + 0x98) >> 0x20) +
                           fVar23 * fVar15 + fVar9 * fVar11 + fVar19 * fVar13) -
                           (ABS(fVar23 * fVar5) + ABS(fVar9 * fVar2) + ABS(fVar19 * fVar4)),
                           ((float)*(undefined8 *)(lVar1 + 0x98) +
                           fVar22 * fVar15 + fVar8 * fVar11 + fVar18 * fVar13) -
                           (ABS(fVar22 * fVar5) + ABS(fVar8 * fVar2) + ABS(fVar18 * fVar4)));
    }
  }
  auVar3._8_8_ = uStack_28;
  auVar3._0_8_ = local_30;
  return auVar3;
}



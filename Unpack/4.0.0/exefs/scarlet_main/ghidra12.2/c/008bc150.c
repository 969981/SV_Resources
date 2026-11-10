/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008bc150; name: FUN_008bc150
 */


undefined1  [16] FUN_008bc150(long param_1)

{
  long lVar1;
  float fVar3;
  undefined1 auVar2 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return *(undefined1 (*) [16])(param_1 + 0x70);
  }
  fVar5 = (float)((ulong)*(undefined8 *)(lVar1 + 0x70) >> 0x20);
  fVar4 = (float)*(undefined8 *)(lVar1 + 0x98);
  fVar10 = (float)((ulong)*(undefined8 *)(lVar1 + 0x80) >> 0x20);
  fVar11 = (float)*(undefined8 *)(lVar1 + 0x70);
  fVar6 = (float)*(undefined8 *)(lVar1 + 0x78);
  fVar3 = (float)*(undefined8 *)(lVar1 + 0x88);
  fVar7 = (float)*(undefined8 *)(lVar1 + 0x90);
  fVar9 = (float)((ulong)*(undefined8 *)(lVar1 + 0x90) >> 0x20);
  fVar8 = (float)*(undefined8 *)(lVar1 + 0x80);
  fVar8 = (((fVar6 * fVar8 * fVar9 + fVar11 * fVar10 * fVar4 + fVar5 * fVar3 * fVar7) -
           fVar10 * fVar7 * fVar6) - fVar5 * fVar8 * fVar4) - fVar11 * fVar9 * fVar3;
  if (fVar8 == 0.0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = 1.0 / fVar8;
  }
  fVar11 = fVar10 * fVar4 - fVar3 * fVar9;
  fVar7 = fVar11 * fVar8;
  fVar9 = (fVar6 * fVar9 - fVar5 * fVar4) * fVar8;
  fVar10 = (fVar5 * fVar3 - fVar6 * fVar10) * fVar8;
  auVar2._0_4_ = (float)*(undefined8 *)(param_1 + 0x70) * fVar7 +
                 (float)*(undefined8 *)(param_1 + 0x80) * fVar9 +
                 (float)*(undefined8 *)(param_1 + 0x90) * fVar10 + 0.0;
  auVar2._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) * fVar7 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) * fVar9 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) * fVar10 + 0.0;
  auVar2._8_4_ = (float)*(undefined8 *)(param_1 + 0x78) * fVar7 +
                 (float)*(undefined8 *)(param_1 + 0x88) * fVar9 +
                 (float)*(undefined8 *)(param_1 + 0x98) * fVar10 + 0.0;
  auVar2._12_4_ =
       ((-(fVar11 * fVar8) * (float)((ulong)*(undefined8 *)(lVar1 + 0x78) >> 0x20) -
        fVar9 * (float)((ulong)*(undefined8 *)(lVar1 + 0x88) >> 0x20)) -
       fVar10 * (float)((ulong)*(undefined8 *)(lVar1 + 0x98) >> 0x20)) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar7 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar9 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) * fVar10;
  return auVar2;
}



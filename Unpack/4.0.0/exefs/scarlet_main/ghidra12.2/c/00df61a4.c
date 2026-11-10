/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00df61a4; name: FUN_00df61a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00df61a4(int *param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  undefined8 uVar4;
  ulong uVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (param_1 == (int *)0x0) {
    auVar6._8_8_ = _UNK_03caa988;
    auVar6._0_8_ = _DAT_03caa980;
    return auVar6;
  }
  puVar3 = (ushort *)((long)param_1 - (long)*param_1);
  uVar7 = 0;
  uVar4 = 0;
  if (4 < *puVar3) {
    uVar7 = 0;
    uVar4 = 0;
    if ((ulong)puVar3[2] != 0) {
      puVar2 = (undefined8 *)((long)param_1 + (ulong)puVar3[2]);
      uVar4 = *puVar2;
      uVar7 = (ulong)*(uint *)(puVar2 + 1);
    }
  }
  pfVar1 = (float *)((long)param_1 + (ulong)puVar3[3]);
  fVar10 = pfVar1[2] * 0.5;
  fVar11 = *pfVar1 * 0.5;
  fVar12 = pfVar1[1] * 0.5;
  auVar9._0_4_ = (int)((float)(-(uint)(0.0 <= fVar10) & 0x80000000 ^ 0xbf000000) +
                      fVar10 * 0.15915494);
  auVar9._4_4_ = (int)((float)(-(uint)(0.0 <= fVar11) & 0x80000000 ^ 0xbf000000) +
                      fVar11 * 0.15915494);
  auVar9._8_4_ = (int)((float)(-(uint)(0.0 <= fVar12) & 0x80000000 ^ 0xbf000000) +
                      fVar12 * 0.15915494);
  auVar9._12_4_ = 0;
  NEON_scvtf(auVar9,4);
  auVar8._0_4_ = (int)((float)(~-(uint)(0.0 <= fVar10 + 1.5707964) & 0x80000000 ^ 0x3f000000) +
                      (fVar10 + 1.5707964) * 0.15915494);
  auVar8._4_4_ = (int)((float)(~-(uint)(0.0 <= fVar11 + 1.5707964) & 0x80000000 ^ 0x3f000000) +
                      (fVar11 + 1.5707964) * 0.15915494);
  auVar8._8_4_ = (int)((float)(~-(uint)(0.0 <= fVar12 + 1.5707964) & 0x80000000 ^ 0x3f000000) +
                      (fVar12 + 1.5707964) * 0.15915494);
  auVar8._12_4_ = 0;
  NEON_scvtf(auVar8,4);
  NEON_fmov(0x3f800000,4);
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



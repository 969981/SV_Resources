/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a9cad0; name: _INIT_227
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_227(void)

{
  ulong uVar1;
  float fVar2;
  
  DAT_04838128 = NEON_fmov(0x3f780000,4);
  DAT_04838130 = 0x3f8400003f840000;
  DAT_04838138 = 0;
  DAT_04838140 = 0;
  DAT_04838148 = 0x3f8000003f800000;
  DAT_04838150 = 0x3f8000003f800000;
  DAT_04838158 = 0;
  DAT_04838160 = 0x3f800000;
  DAT_04838168 = 0;
  DAT_04838170 = 0x3f80000000000000;
  uRam0000000004838188 = DAT_03cab628;
  _DAT_04838180 = DAT_03cab620;
  uRam0000000004838198 = _UNK_03cabe68;
  _DAT_04838190 = _DAT_03cabe60;
  DAT_048381b0 = 7;
  DAT_048381b8 = 0x3f;
  DAT_048381c0 = 0x100000000;
  DAT_048381c8 = 0x700000;
  DAT_048381d0 = 0x600000;
  DAT_048381d8 = 0x20000;
  uRam00000000048381a8 = _UNK_03caa5b8;
  _DAT_048381a0 = _DAT_03caa5b0;
  DAT_048381e0 = 0x1e00;
  DAT_048381e8 = 9;
  DAT_048381f0 = 0x12;
  DAT_048381f8 = 0x800024;
  DAT_04838200 = 0x40000;
  DAT_04838208 = 0x20000;
  DAT_04838210 = 0x1000;
  DAT_04838218 = 0x981861e3f;
  DAT_04838220 = 0x1800024;
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
  uVar1 = (ulong)((fVar2 / *(float *)PTR_FloatDegree180_047d2390) * 0.0);
  DAT_04838248 = *(float *)(PTR_SinCosSampleTable_047d2398 + (uVar1 >> 0x18 & 0xff) * 0x10) +
                 *(float *)((long)(PTR_SinCosSampleTable_047d2398 + (uVar1 >> 0x18 & 0xff) * 0x10) +
                           8) * (float)((uint)uVar1 & 0xffffff) * 5.9604645e-08;
  return;
}



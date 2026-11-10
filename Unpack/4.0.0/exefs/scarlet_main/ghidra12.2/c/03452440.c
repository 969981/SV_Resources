/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03452440; name: FUN_03452440
 */


ulong FUN_03452440(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  float fVar6;
  
  uVar4 = FUN_0349f034(0);
  if (*PTR_DAT_047e6980 == '\0') {
    if (*PTR_DAT_047e7010 != '\0') {
      if (*(int *)PTR_DAT_047e6ff8 == 2 && (*PTR_DAT_047e7000 & 1) == 0) {
        *(undefined4 *)(param_1 + 0xa0) = 0;
        return 1;
      }
      if (*(long *)(param_1 + 0x90) < *(long *)(param_1 + 0x88)) {
        return 0;
      }
      uVar1 = *(uint *)PTR_DAT_047e6fa0;
      uVar2 = *(ushort *)PTR_DAT_047e6d08;
      fVar6 = ((float)uVar1 * (float)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88))) /
              (*(float *)PTR_DAT_047e6d28 * 1000.0 * (float)uVar2) + *(float *)(param_1 + 0xa0);
      uVar5 = (uint)fVar6;
      if (uVar5 != 0) {
        *(float *)(param_1 + 0xa0) = fVar6 - (float)uVar5;
      }
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      if (uVar3 < uVar5) {
        uVar5 = 1;
      }
      return (ulong)uVar5;
    }
  }
  else if (0.0 < *(float *)PTR_DAT_047e7090) {
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_047e6fa0);
    fVar6 = (*(float *)PTR_DAT_047e7090 * fVar6) / (float)*(ushort *)PTR_DAT_047e6d08 +
            *(float *)(param_1 + 0xa0);
    *(float *)(param_1 + 0xa0) = fVar6 - (float)(int)fVar6;
    return (ulong)(uint)(int)fVar6;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return uVar4;
}



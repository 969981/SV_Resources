/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216c090; name: FUN_0216c090
 */


undefined8 FUN_0216c090(float param_1,long param_2)

{
  ushort uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((*(long *)(param_2 + 0x10) != 0) && (*(char *)(param_2 + 0xb) != '\0')) {
    fVar5 = *(float *)(*(long *)(param_2 + 0x10) + 0x20);
    uVar1 = FUN_02169b64();
    fVar6 = (float)uVar1;
    uVar2 = FUN_00dfcf48(*(undefined8 *)(param_2 + 0x10));
    if ((uVar2 & 1) == 0) {
      if (((0.0 < param_1) && (fVar5 == fVar6)) || ((param_1 < 0.0 && (fVar5 == 0.0)))) {
        return 1;
      }
      fVar5 = fVar5 + param_1;
      fVar4 = fVar5;
      if (fVar6 < fVar5) {
        fVar4 = fVar6;
      }
      fVar3 = 0.0;
      if (0.0 <= fVar5) {
        fVar3 = fVar4;
      }
    }
    else {
      fVar5 = fVar5 + param_1;
      fVar3 = fVar5;
      if (fVar6 <= fVar5) {
        fVar3 = fVar5 - fVar6;
      }
      if (fVar5 <= 0.0) {
        fVar3 = fVar5 + fVar6;
      }
    }
    *(float *)(*(long *)(param_2 + 0x10) + 0x20) = fVar3;
  }
  return 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02255130; name: FUN_02255130
 */


void FUN_02255130(long param_1,float *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_1 + 0xfc);
  uVar1 = (ushort)(*(float *)(param_1 + 0xf8) != *param_2 || fVar3 != param_2[1]);
  *(ushort *)(param_1 + 0x114) =
       *(ushort *)(param_1 + 0x114) & 0xfffb | (*(ushort *)(param_1 + 0x114) >> 2 & 1 | uVar1) << 2;
  if (uVar1 != 0) {
    if (fVar3 == 0.0) {
      *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)param_2;
      return;
    }
    fVar3 = *(float *)(param_1 + 0xf8) / fVar3;
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0xf8) = uVar2;
    fVar4 = (float)((ulong)uVar2 >> 0x20) / (float)uVar2;
    *(float *)(param_1 + 0x118) = fVar3 * *(float *)(param_1 + 0x118) * fVar4;
    *(float *)(param_1 + 0x134) = fVar3 * *(float *)(param_1 + 0x134) * fVar4;
  }
  return;
}



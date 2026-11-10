/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029af564; name: FUN_029af564
 */


void FUN_029af564(long param_1)

{
  undefined1 auVar1 [12];
  float fVar2;
  float __x;
  float fVar3;
  float fVar4;
  
  fVar4 = 6.36e+06 / *(float *)(param_1 + 0xe8);
  fVar3 = 6.42e+06 / *(float *)(param_1 + 0xe8);
  *(ulong *)(param_1 + 0x68) = (ulong)*(uint *)(param_1 + 0xf4);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0xec);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x100);
  *(ulong *)(param_1 + 0x70) =
       CONCAT44(*(undefined4 *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0xf8));
  __x = fVar3 * fVar3 - fVar4 * fVar4;
  fVar2 = SQRT(__x);
  *(ulong *)(param_1 + 0x58) = CONCAT44(fVar3 * fVar3,fVar4 * fVar4);
  *(ulong *)(param_1 + 0x50) = CONCAT44(fVar3,fVar4);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(__x);
  }
  *(ulong *)(param_1 + 0x48) = CONCAT44(fVar3 - fVar4,fVar2);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x98) =
       CONCAT44(*(undefined4 *)(param_1 + 0xe4),(int)*(undefined8 *)(param_1 + 0x98));
  *(ulong *)(param_1 + 0x90) =
       CONCAT44(*(float *)(param_1 + 0xe0) - fVar4,(int)*(undefined8 *)(param_1 + 0x90));
  if (*(char *)(param_1 + 0x110) != '\0') {
    *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) + 0.05235988;
  }
  auVar1 = (**(code **)(param_1 + 0x120))(param_1 + 0x140);
  *(ulong *)(param_1 + 0xa8) = CONCAT44(*(undefined4 *)(param_1 + 0x114),auVar1._8_4_);
  *(long *)(param_1 + 0xa0) = auVar1._0_8_;
  return;
}



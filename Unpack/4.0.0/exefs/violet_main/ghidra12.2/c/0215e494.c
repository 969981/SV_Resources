/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215e494; name: FUN_0215e494
 */


float FUN_0215e494(long param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  
  fVar1 = 0.0;
  if ((*(char *)(param_1 + 8) != '\0') && (fVar4 = *(float *)(param_1 + 0x100), 0.0 < fVar4)) {
    fVar2 = (float)(**(code **)(**(long **)(param_1 + 0x10) + 0xe0))(0);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
                      (*(long **)(param_1 + 0x10),param_1 + 0x18);
    fVar1 = -(fVar4 - (float)((ulong)uVar3 >> 0x20));
    if (*(int *)(param_1 + 0xd0) != 0) {
      fVar1 = fVar2 - (float)uVar3;
    }
    fVar1 = (fVar1 - *(float *)(param_1 + 0xf0)) / *(float *)(param_1 + 0x100);
  }
  return fVar1;
}



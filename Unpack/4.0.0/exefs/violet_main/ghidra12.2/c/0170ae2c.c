/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0170ae2c; name: FUN_0170ae2c
 */


uint FUN_0170ae2c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_0170aeec(*(undefined8 *)(param_1 + 0x10));
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (1 << (*(char *)(param_1 + 8) != '\0')) << (*(char *)(param_1 + 9) != '\0');
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    uVar2 = uVar2 * *(int *)(param_1 + 0xc);
    FUN_0170aedc(*(undefined8 *)(param_1 + 0x10));
    fVar3 = (float)FUN_0170aee4();
    if (1.0 < fVar3) {
      FUN_0170aedc(*(undefined8 *)(param_1 + 0x10));
      fVar3 = (float)FUN_0170aee4();
      fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xc));
      uVar2 = uVar2 + (int)(fVar3 * fVar4);
    }
    if (0x1869e < uVar2) {
      uVar2 = 99999;
    }
  }
  return uVar2;
}



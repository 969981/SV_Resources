/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f7e454; name: FUN_00f7e454
 */


uint FUN_00f7e454(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 6) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(long *)*param_1 + 0x208))();
    uVar1 = uVar1 & 1;
    if (1 < *(byte *)(param_1 + 6)) {
      uVar2 = (**(code **)(*(long *)param_1[1] + 0x208))();
      uVar1 = uVar1 + (uVar2 & 1);
      if (2 < *(byte *)(param_1 + 6)) {
        uVar2 = (**(code **)(*(long *)param_1[2] + 0x208))();
        uVar1 = uVar1 + (uVar2 & 1);
        if (3 < *(byte *)(param_1 + 6)) {
          uVar3 = 3;
          do {
            uVar2 = (**(code **)(*(long *)param_1[uVar3] + 0x208))();
            uVar1 = uVar1 + (uVar2 & 1);
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(byte *)(param_1 + 6));
        }
      }
    }
  }
  return uVar1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001037a0; name: FUN_001037a0
 */


ulong FUN_001037a0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x2d0);
    uVar3 = *(ulong *)(param_1 + 0x2c8);
    if ((((uVar3 != 0) && (*(int *)(param_1 + 0x2d8) == 0)) && (*(int *)(param_1 + 0x4c) == 0)) &&
       ((*(code **)(param_1 + 0x240) == (code *)0x0 ||
        (uVar1 = (**(code **)(param_1 + 0x240))(param_1 + 0x210,0), (uVar1 & 1) == 0)))) {
      if (uVar3 <= uVar2) {
        return 0x80;
      }
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = (uVar2 << 7) / uVar3;
      }
      return uVar1;
    }
  }
  return 0x81;
}



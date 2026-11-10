/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02978714; name: FUN_02978714
 */


undefined8 FUN_02978714(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  
  if (((int)param_2 < 0xe) && (*(int *)(param_1 + (ulong)param_2 * 4 + 0xa8) != 0)) {
    uVar3 = (ulong)param_2;
    puVar2 = (uint *)(param_1 + uVar3 * 4 + 0x70);
    uVar1 = *puVar2;
    uVar4 = (ulong)uVar1;
    if (uVar1 < 0xb) {
      if (uVar1 == 0) {
        uVar4 = 0;
      }
      else {
        piVar5 = (int *)(param_1 + uVar3 * 0x2c + 0xe0);
        uVar6 = uVar4;
        do {
          if (*piVar5 == param_3) {
            return 0;
          }
          uVar6 = uVar6 - 1;
          piVar5 = piVar5 + 1;
        } while (uVar6 != 0);
      }
      *(int *)(param_1 + uVar3 * 0x2c + uVar4 * 4 + 0xe0) = param_3;
      *puVar2 = uVar1 + 1;
      return 1;
    }
  }
  return 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001002f0; name: FUN_001002f0
 */


void FUN_001002f0(long param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong extraout_x1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = ((long)PTR_DAT_047cb800 - (long)PTR_DAT_047cb7f8) / 0x18;
  if (uVar2 <= param_3) {
    param_3 = uVar2;
  }
  if (param_2 < param_3) {
    plVar3 = (long *)(PTR_DAT_047cb7f8 + param_3 * 0x18 + -8);
    uVar2 = param_2;
    do {
      uVar1 = DAT_047ec0d8;
      param_3 = param_3 - 1;
      if (*plVar3 == param_1) {
        (*(code *)plVar3[-2])(plVar3[-1],uVar2,DAT_047ec0d8);
      }
      FUN_001002f0(param_1,uVar1,DAT_047ec0d8);
      plVar3 = plVar3 + -3;
      uVar2 = extraout_x1;
    } while (param_2 < param_3);
  }
  return;
}



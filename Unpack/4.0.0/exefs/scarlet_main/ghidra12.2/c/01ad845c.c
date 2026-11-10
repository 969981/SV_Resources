/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ad845c; name: FUN_01ad845c
 */


void FUN_01ad845c(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    do {
      FUN_01ad84a8(param_1);
      uVar1 = uVar1 - 1;
      *param_1 = &PTR_LAB_04519a10;
      param_1 = param_1 + 4;
    } while (uVar1 != 0);
  }
  return;
}



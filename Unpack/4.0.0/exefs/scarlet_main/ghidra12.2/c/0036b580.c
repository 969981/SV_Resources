/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036b580; name: FUN_0036b580
 */


void FUN_0036b580(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  param_1 = param_1 + (ulong)param_2 * 0x10;
  if (*(code **)(param_1 + 0x618) != (code *)0x0) {
    (**(code **)(param_1 + 0x618))(*(undefined8 *)(param_1 + 0x610));
  }
  *(undefined8 *)(param_1 + 0x610) = param_3;
  *(undefined8 *)(param_1 + 0x618) = param_4;
  return;
}



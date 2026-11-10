/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01588dd4; name: FUN_01588dd4
 */


void FUN_01588dd4(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (param_2 < 3000) {
    puVar1 = (undefined8 *)(param_1 + (ulong)param_2 * 0x10);
    *puVar1 = param_3;
    puVar1[1] = param_4;
  }
  return;
}



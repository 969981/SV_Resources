/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f12a1c; name: FUN_00f12a1c
 */


void FUN_00f12a1c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00f12a48(param_1 + 0x100);
  uVar1 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar1;
  return;
}



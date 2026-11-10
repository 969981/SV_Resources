/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ccc1c; name: FUN_028ccc1c
 */


void FUN_028ccc1c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  (**(code **)(*param_1 + 0x88))(param_1,0);
  puVar1 = (undefined8 *)param_1[0x81];
  for (puVar2 = (undefined8 *)param_1[0x80]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_028ccc68(*puVar2);
  }
  return;
}



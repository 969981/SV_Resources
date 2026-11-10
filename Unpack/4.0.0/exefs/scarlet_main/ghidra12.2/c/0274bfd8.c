/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0274bfd8; name: FUN_0274bfd8
 */


void FUN_0274bfd8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047db018;
  *param_1 = &PTR_LAB_045dac60;
  *(undefined8 *)puVar1 = 0;
  if (param_1[2] == 0) {
    param_1[2] = 0;
  }
  else {
    FUN_0274c6b4();
    lVar2 = param_1[2];
    param_1[2] = 0;
    if (lVar2 != 0) {
      FUN_0274c0e4(param_1 + 3);
    }
  }
  FUN_0274c59c(param_1);
  return;
}



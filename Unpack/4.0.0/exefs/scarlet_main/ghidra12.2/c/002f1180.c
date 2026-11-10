/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f1180; name: FUN_002f1180
 */


bool FUN_002f1180(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (param_1 != (undefined8 *)0x0) {
    iVar2 = strcmp((char *)*param_1,"invalid");
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}



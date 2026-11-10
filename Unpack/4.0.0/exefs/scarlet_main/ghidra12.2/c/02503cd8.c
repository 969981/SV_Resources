/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02503cd8; name: FUN_02503cd8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_02503cd8(char *param_1)

{
  undefined1 auVar1 [16];
  
  if (*param_1 == '\x01') {
    auVar1 = FUN_02503d64(param_1 + 8);
  }
  else {
    auVar1 = _DAT_03caa980;
    if (*param_1 == '\0') {
      auVar1 = FUN_02503d24(*(undefined8 *)(param_1 + 8));
    }
  }
  return auVar1;
}



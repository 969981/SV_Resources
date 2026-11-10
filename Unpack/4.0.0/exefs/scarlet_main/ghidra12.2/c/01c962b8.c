/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c962b8; name: FUN_01c962b8
 */


void FUN_01c962b8(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined4 local_8 [2];
  
  puVar1 = &LAB_00970a14;
  if (DAT_04816cc8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_8[0] = FUN_01c981f8(param_2,puVar1,0);
  *param_1 = 1;
  FUN_01c98240(param_1 + 8,local_8);
  return;
}



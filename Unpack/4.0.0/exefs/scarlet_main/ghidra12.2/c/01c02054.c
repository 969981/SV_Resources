/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c02054; name: FUN_01c02054
 */


void FUN_01c02054(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = &LAB_0095fccc;
  if (DAT_04810eb8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_4 = param_3;
  local_8 = FUN_01c03f88(param_2,puVar1,0,&local_4);
  *param_1 = 1;
  FUN_01c03fd0(param_1 + 8,&local_8);
  return;
}



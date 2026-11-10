/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c01bf4; name: FUN_01c01bf4
 */


void FUN_01c01bf4(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = &LAB_0095fc94;
  if (DAT_04810ea8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_4 = param_3;
  local_8 = FUN_01c036c8(param_2,puVar1,0,&local_4);
  *param_1 = 1;
  FUN_01c03710(param_1 + 8,&local_8);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024bb104; name: FUN_024bb104
 */


void FUN_024bb104(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 local_24;
  undefined8 local_8;
  
  puVar1 = &LAB_024bbd88;
  if (DAT_0484c8c8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_24 = param_3;
  local_8 = FUN_024bbe48(param_2,puVar1,0,&local_24);
  *param_1 = 1;
  FUN_024a9cf0(param_1 + 8,&local_8);
  return;
}



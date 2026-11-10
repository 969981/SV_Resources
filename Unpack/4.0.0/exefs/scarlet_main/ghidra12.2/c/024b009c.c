/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024b009c; name: FUN_024b009c
 */


void FUN_024b009c(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 local_24;
  undefined8 local_8;
  
  puVar1 = &LAB_024b0b40;
  if (DAT_0484c890 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_24 = param_3;
  local_8 = FUN_024b0c00(param_2,puVar1,0,&local_24);
  *param_1 = 1;
  FUN_024a5820(param_1 + 8,&local_8);
  return;
}



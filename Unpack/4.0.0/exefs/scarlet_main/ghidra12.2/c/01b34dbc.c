/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b34dbc; name: FUN_01b34dbc
 */


void FUN_01b34dbc(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_01b36694;
  if (DAT_048061b8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_01b36934(auStack_30,param_2,puVar1,0);
  FUN_01b369b0(param_1,auStack_30);
  FUN_01b352b0(auStack_30);
  return;
}



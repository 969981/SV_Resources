/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bd92dc; name: FUN_01bd92dc
 */


void FUN_01bd92dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_01bd9d8c;
  if (DAT_0480efc0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_01bd9fb4(auStack_30,param_2,puVar1,0);
  FUN_01bda030(param_1,auStack_30);
  FUN_010191d8(auStack_30);
  return;
}



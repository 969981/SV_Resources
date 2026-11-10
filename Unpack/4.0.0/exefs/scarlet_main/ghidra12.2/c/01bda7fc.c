/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bda7fc; name: FUN_01bda7fc
 */


void FUN_01bda7fc(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_01bdb2b4;
  if (DAT_0480efc8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_01bdb4dc(auStack_30,param_2,puVar1,0);
  FUN_01bdb550(param_1,auStack_30);
  FUN_010192e8(auStack_30);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0259d23c; name: FUN_0259d23c
 */


void FUN_0259d23c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_0259e5a4;
  if (DAT_04852090 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_0259e92c(auStack_30,param_2,puVar1,0);
  FUN_0259e9a0(param_1,auStack_30);
  FUN_0259d5d4(auStack_30);
  return;
}



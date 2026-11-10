/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0265c9dc; name: FUN_0265c9dc
 */


void FUN_0265c9dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_0265debc;
  if (DAT_048559b8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_0265e248(auStack_30,param_2,puVar1,0);
  FUN_0265e2c0(param_1,auStack_30);
  FUN_0265cca0(auStack_30);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0257fa6c; name: FUN_0257fa6c
 */


void FUN_0257fa6c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_02580b3c;
  if (DAT_04851f28 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_02580ddc(auStack_30,param_2,puVar1,0);
  FUN_02580e50(param_1,auStack_30);
  FUN_0257fd98(auStack_30);
  return;
}



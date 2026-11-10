/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02572cec; name: FUN_02572cec
 */


void FUN_02572cec(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_02574190;
  if (DAT_04851f00 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_02574520(auStack_30,param_2,puVar1,0);
  FUN_025745a0(param_1,auStack_30);
  FUN_02573084(auStack_30);
  return;
}



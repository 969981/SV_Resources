/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0228f27c; name: FUN_0228f27c
 */


void FUN_0228f27c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = FUN_02294aec;
  if (DAT_04843b80 == '\0') {
    pcVar1 = (code *)0x0;
  }
  uVar2 = FUN_02294d00(param_2);
  FUN_02294db4(param_1,pcVar1,0,uVar2);
  return;
}



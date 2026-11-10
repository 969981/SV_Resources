/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023695dc; name: FUN_023695dc
 */


void FUN_023695dc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = FUN_02370118;
  if (DAT_048491a0 == '\0') {
    pcVar1 = (code *)0x0;
  }
  uVar2 = FUN_016af0b8(param_2);
  FUN_02370208(param_1,pcVar1,0,uVar2);
  return;
}



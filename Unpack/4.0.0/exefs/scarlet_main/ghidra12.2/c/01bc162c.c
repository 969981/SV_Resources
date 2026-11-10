/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bc162c; name: FUN_01bc162c
 */


void FUN_01bc162c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_FUN_047d55d8;
  if (DAT_0480ef78 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01bb84dc(param_2);
  FUN_01bc4774(param_1,puVar1,0,uVar2);
  return;
}



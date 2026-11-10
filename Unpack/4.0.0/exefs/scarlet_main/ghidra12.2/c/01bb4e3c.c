/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bb4e3c; name: FUN_01bb4e3c
 */


void FUN_01bb4e3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_FUN_047d53e8;
  if (DAT_0480ef20 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01bb58ac(param_2);
  FUN_01bb59d0(param_1,puVar1,0,uVar2);
  return;
}



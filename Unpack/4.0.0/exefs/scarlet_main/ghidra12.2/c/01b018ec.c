/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b018ec; name: FUN_01b018ec
 */


void FUN_01b018ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_LAB_047d3e00;
  if (DAT_04802a68 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01b02710(param_2);
  FUN_01b02790(param_1,puVar1,0,uVar2);
  return;
}



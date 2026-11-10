/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d3392c; name: FUN_01d3392c
 */


void FUN_01d3392c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_LAB_047d7930;
  if (DAT_0482f078 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01d33ddc(param_2);
  FUN_01d33e54(param_1,puVar1,0,uVar2);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024cf63c; name: FUN_024cf63c
 */


void FUN_024cf63c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_LAB_047def48;
  if (DAT_0484f020 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_024c8c84(param_2);
  FUN_024d2590(param_1,puVar1,0,uVar2);
  return;
}



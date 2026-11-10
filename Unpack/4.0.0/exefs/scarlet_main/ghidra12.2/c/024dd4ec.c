/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024dd4ec; name: FUN_024dd4ec
 */


void FUN_024dd4ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_LAB_047df038;
  if (DAT_0484f0d8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_024d0e00(param_2);
  FUN_024e0dec(param_1,puVar1,0,uVar2);
  return;
}



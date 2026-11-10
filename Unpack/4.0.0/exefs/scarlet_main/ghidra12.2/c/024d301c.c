/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d301c; name: FUN_024d301c
 */


uint FUN_024d301c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  byte local_14 [4];
  
  puVar1 = PTR_FUN_047def78;
  if (DAT_0484f048 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar3 = FUN_016af0b8(param_2);
  local_14[0] = param_3 & 1;
  uVar2 = FUN_024d9c3c(param_1,puVar1,0,uVar3,local_14);
  return uVar2 & 1;
}



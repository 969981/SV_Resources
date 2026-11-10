/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c355c8; name: FUN_01c355c8
 */


uint FUN_01c355c8(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 local_24 [4];
  
  puVar1 = PTR_LAB_047d5f50;
  if (DAT_048125d8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_24[0] = param_2;
  uVar3 = FUN_01b6fb4c(param_3);
  uVar2 = FUN_01c369e0(param_1,puVar1,0,local_24,uVar3);
  return uVar2 & 1;
}



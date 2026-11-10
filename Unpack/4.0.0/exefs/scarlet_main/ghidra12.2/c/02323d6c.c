/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02323d6c; name: FUN_02323d6c
 */


uint FUN_02323d6c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 local_20;
  float local_14;
  
  local_14 = (float)param_1;
  puVar1 = PTR_LAB_047de5b8;
  if (DAT_04847758 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_20 = param_3;
  uVar2 = FUN_02327f80(param_2,puVar1,0,&local_14,&local_20);
  return uVar2 & 1;
}



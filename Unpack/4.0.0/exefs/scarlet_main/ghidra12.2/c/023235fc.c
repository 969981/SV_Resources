/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023235fc; name: FUN_023235fc
 */


uint FUN_023235fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  puVar1 = PTR_FUN_047de5b0;
  if (DAT_04847748 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_48 = param_5;
  local_40[0] = param_3;
  local_30[0] = param_2;
  local_20[0] = param_1;
  uVar2 = FUN_02327d9c(param_4,puVar1,0,local_20,local_30,local_40,&local_48);
  return uVar2 & 1;
}



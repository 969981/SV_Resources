/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0191fbe0; name: FUN_0191fbe0
 */


long FUN_0191fbe0(undefined8 *param_1,undefined8 param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,byte param_6)

{
  int iVar1;
  byte local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  if ((*param_3 == '\x01') || (*param_3 == '\0')) {
    local_18 = *(undefined8 *)(param_3 + 8);
  }
  else {
    local_18 = 0;
  }
  local_24[0] = param_6 & 1;
  local_20 = param_5;
  local_1c = param_4;
  iVar1 = FUN_0191fc50(param_2,*param_1,param_1[1],&local_18,&local_1c,&local_20,local_24);
  return (long)iVar1;
}



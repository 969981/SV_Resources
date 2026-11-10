/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0169bc78; name: FUN_0169bc78
 */


long FUN_0169bc78(undefined8 *param_1,undefined8 param_2,char *param_3,byte param_4)

{
  int iVar1;
  byte local_1c [4];
  undefined8 local_18;
  
  if ((*param_3 == '\x01') || (*param_3 == '\0')) {
    local_18 = *(undefined8 *)(param_3 + 8);
  }
  else {
    local_18 = 0;
  }
  local_1c[0] = param_4 & 1;
  iVar1 = FUN_0169bcd8(param_2,*param_1,param_1[1],&local_18,local_1c);
  return (long)iVar1;
}



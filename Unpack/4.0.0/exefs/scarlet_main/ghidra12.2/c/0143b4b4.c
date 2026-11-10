/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0143b4b4; name: FUN_0143b4b4
 */


uint FUN_0143b4b4(undefined2 param_1,undefined2 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined *local_30;
  undefined2 local_28;
  undefined2 local_26;
  
  local_30 = PTR_DAT_047d8ee0 + 0x10;
  local_28 = param_1;
  local_26 = param_2;
  iVar2 = FUN_00f512a0(&local_30);
  uVar1 = iVar2 - 1U;
  if ((2 < (iVar2 - 1U & 0xff)) && (uVar1 = 0, (param_3 & 0xff) != 2)) {
    uVar1 = param_3;
  }
  return uVar1;
}



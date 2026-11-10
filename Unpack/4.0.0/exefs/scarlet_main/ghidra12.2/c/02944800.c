/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02944800; name: FUN_02944800
 */


uint FUN_02944800(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined1 local_28;
  
  local_30 = FUN_0293d610();
  local_28 = 1;
  uVar2 = FUN_029422f0(param_1,&local_30);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_02942e80(param_1,param_2);
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}



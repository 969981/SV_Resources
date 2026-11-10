/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fac10; name: FUN_003fac10
 */


undefined8 FUN_003fac10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  iVar2 = FUN_003fa8f0(param_2,&local_28);
  lVar1 = local_28;
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    local_30 = *(undefined8 *)(local_28 + 8);
    uVar3 = FUN_003e1880(param_3,&local_30,iVar2,param_1);
  }
  FUN_003f3160(lVar1);
  return uVar3;
}



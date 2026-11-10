/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0296d850; name: FUN_0296d850
 */


uint FUN_0296d850(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = FUN_02943ff0();
  if (((uVar4 & 1) == 0) || (iVar1 = FUN_0293d8d0(param_1), iVar1 != 0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_0293d690(param_1,param_2);
    uVar3 = FUN_0293d8e0(param_1,uVar2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3 & 1;
}



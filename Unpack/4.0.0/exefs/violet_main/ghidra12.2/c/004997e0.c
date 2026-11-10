/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004997e0; name: FUN_004997e0
 */


undefined8 FUN_004997e0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00483b40();
  uVar3 = FUN_00483ac0(param_2);
  iVar1 = FUN_00483880(uVar2,uVar3);
  if (iVar1 != 0) {
    return 0x1d;
  }
  FUN_00498ee0(param_1);
  if ((*(char *)(param_1 + 0xe0) < '\0') ||
     (FUN_00498ee0(param_2), *(char *)(param_2 + 0xe0) < '\0')) {
    return 1;
  }
  if ((*(long *)(param_2 + 0xf8) == 0) || (uVar2 = FUN_00499880(param_1), (int)uVar2 == 0)) {
    uVar2 = FUN_00483c90(param_1);
    uVar2 = FUN_00499980(uVar2,param_2);
    return uVar2;
  }
  return uVar2;
}



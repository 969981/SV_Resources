/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03530ba8; name: FUN_03530ba8
 */


undefined4 FUN_03530ba8(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  char local_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  uVar2 = (**(code **)*param_2)(param_2,auStack_28,4,auStack_24);
  if (((((uVar2 & 1) != 0) &&
       (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x20,4,auStack_24), (uVar2 & 1) != 0)) &&
      (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x24,4,auStack_24), (uVar2 & 1) != 0)) &&
     ((uVar2 = (**(code **)*param_2)(param_2,local_2c,1,auStack_24), (uVar2 & 1) != 0 &&
      (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x2a,2,auStack_24), (uVar2 & 1) != 0)))) {
    *(bool *)(param_1 + 0x28) = local_2c[0] != '\0';
    iVar1 = FUN_03530cb4(param_1,param_2);
    if (iVar1 == 1) {
      iVar1 = FUN_03530ff8(param_1,param_2);
      uVar3 = 1;
      if (iVar1 != 1) {
        uVar3 = 2;
      }
      return uVar3;
    }
  }
  return 2;
}



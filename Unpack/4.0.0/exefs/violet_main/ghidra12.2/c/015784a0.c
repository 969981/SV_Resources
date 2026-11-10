/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015784a0; name: FUN_015784a0
 */


long FUN_015784a0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(long *)*param_1 + 0x30))();
    *(int *)(param_1 + 1) = iVar1;
  }
  lVar2 = FUN_01578678(param_2,param_3,iVar1,param_4,param_5);
  if (lVar2 != 0) {
    uVar4 = *param_1;
    *(undefined4 *)(lVar2 + 0x60) = *(undefined4 *)(param_1 + 1);
    *(undefined8 *)(lVar2 + 0x58) = uVar4;
    lVar3 = (**(code **)(*(long *)*param_1 + 0x20))();
    *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(lVar3 + 0x20);
    *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar3 + 0x18);
  }
  return lVar2;
}



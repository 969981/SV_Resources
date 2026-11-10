/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013f755c; name: FUN_013f755c
 */


uint FUN_013f755c(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (0xfb < param_3) {
    param_3 = 0xfc;
  }
  if (param_2 <= param_3 && param_3 - param_2 != 0) {
    iVar2 = FUN_00e8fae8(*(undefined8 *)(param_1 + 0x70));
    iVar3 = FUN_00e8fe2c(*(undefined8 *)(param_1 + 0x70));
    iVar4 = FUN_00e90170(*(undefined8 *)(param_1 + 0x70));
    iVar5 = FUN_00e904b4(*(undefined8 *)(param_1 + 0x70));
    iVar6 = FUN_00e90b3c(*(undefined8 *)(param_1 + 0x70));
    iVar7 = FUN_00e907f8(*(undefined8 *)(param_1 + 0x70));
    uVar1 = (param_3 - param_2) + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7;
    iVar2 = 0;
    if (0x1fd < uVar1) {
      iVar2 = uVar1 - 0x1fe;
    }
    param_3 = param_3 - iVar2;
  }
  return param_3;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8bf60; name: FUN_01f8bf60
 */


void FUN_01f8bf60(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_1 + 0x1ec);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x220);
  lVar2 = FUN_00d3ccd4();
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x470);
    if (iVar1 == 1) {
      FUN_00da77d0(param_1,param_2,1);
      return;
    }
    if (iVar1 == 4) {
      FUN_00da87d4(param_1,param_2,1);
      return;
    }
    if (iVar1 - 2U < 2) {
      FUN_00dab564(param_1,param_2,1);
      return;
    }
  }
  return;
}



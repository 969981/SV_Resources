/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e2c94c; name: FUN_01e2c94c
 */


void FUN_01e2c94c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x144) = uVar4;
  lVar3 = *(long *)(param_1 + 0x130);
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x148);
    uVar2 = *(undefined4 *)(param_1 + 0x144);
    *(undefined4 *)(lVar3 + 0xac) = *(undefined4 *)(param_1 + 0x14c);
    *(undefined4 *)(lVar3 + 0xb0) = uVar2;
    *(undefined4 *)(lVar3 + 0xb4) = uVar1;
  }
  return;
}



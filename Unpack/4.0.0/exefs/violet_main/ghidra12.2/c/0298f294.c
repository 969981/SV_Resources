/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298f294; name: FUN_0298f294
 */


undefined4 FUN_0298f294(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_0157190c(param_1,0xd,2);
  lVar4 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < 0x1a) {
    FUN_0157184c(param_1,0x1a);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x30) = lVar4 + -0x1a;
  uVar5 = param_2[2];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined2 *)(lVar4 + -2) = *(undefined2 *)(param_2 + 3);
  *(undefined8 *)(lVar4 + -10) = uVar5;
  *(undefined8 *)(lVar4 + -0x12) = uVar2;
  *(undefined8 *)(lVar4 + -0x1a) = uVar1;
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar3 = FUN_015713f8(param_1,0xd);
  return uVar3;
}



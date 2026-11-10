/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0151073c; name: FUN_0151073c
 */


void FUN_0151073c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  lVar1 = param_1 + 0x10;
  FUN_015107a4(lVar1);
  uVar5 = DAT_03d61ef4;
  uVar4 = DAT_03d61eec;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  uVar3 = DAT_03d61ee4;
  uVar2 = DAT_03d61edc;
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined1 *)(param_1 + 0x5d) = 1;
  FUN_012b4424(lVar1);
  FUN_012b427c(lVar1,&DAT_03d61f30);
  return;
}



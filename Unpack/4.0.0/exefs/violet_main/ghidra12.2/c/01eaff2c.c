/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eaff2c; name: FUN_01eaff2c
 */


void FUN_01eaff2c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  uVar1 = 0;
  if (lVar3 - lVar2 != 0) {
    uVar1 = (lVar3 - lVar2 >> 3) * 0xaa - 1;
  }
  uVar4 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40);
  if (uVar1 == uVar4) {
    FUN_01eb2d7c(param_1);
    uVar4 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48);
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  if (lVar3 == lVar2) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(lVar2 + (uVar4 / 0xaa) * 8) + (uVar4 % 0xaa) * 0x18;
  }
  FUN_01eb2fa4(param_1 + 0x50,lVar2,param_2);
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0086f504; name: FUN_0086f504
 */


void FUN_0086f504(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_1 + 0x18);
  FUN_008702bc(lVar3 + 0x18,lVar2 + 0x18);
  uVar1 = *(undefined4 *)(lVar2 + 0x34);
  *(undefined8 *)(lVar3 + 0x2c) = *(undefined8 *)(lVar2 + 0x2c);
  *(undefined4 *)(lVar3 + 0x34) = uVar1;
  return;
}



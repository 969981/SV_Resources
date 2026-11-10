/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a82bc; name: FUN_008a82bc
 */


void FUN_008a82bc(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  uVar1 = (bVar2 & 0x10) >> 4;
  if (((bVar2 >> 6 & 1) == 0) && ((param_3 & 1) != 0 || uVar1 != 0)) {
    *(byte *)(param_1 + 0x58) = bVar2 & 0xef;
    FUN_008a7534(param_1,param_2);
  }
  for (lVar3 = *(long *)(param_1 + 0x28); lVar3 != param_1 + 0x20; lVar3 = *(long *)(lVar3 + 8)) {
    FUN_008a82bc(lVar3 + -8,param_2,param_3 & 1 | uVar1);
  }
  return;
}



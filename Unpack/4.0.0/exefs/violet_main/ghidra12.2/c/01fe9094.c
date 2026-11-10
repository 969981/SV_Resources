/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fe9094; name: FUN_01fe9094
 */


bool FUN_01fe9094(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = FUN_01fe9164(param_1,*param_2);
  if (((*(long *)(lVar2 + 0x88) != 0) && (*(short *)(*(long *)(lVar2 + 0x88) + 0x1a) != 0)) ||
     (uVar3 = FUN_013f7d04(lVar2 + 0x70), (uVar3 & 1) != 0)) {
    if (*(long *)(lVar2 + 0x80) == 0) {
      return false;
    }
    uVar1 = FUN_01e0d720();
    lVar2 = *param_2;
    lVar4 = *(long *)(lVar2 + (ulong)*(uint *)(param_1 + 100));
    if (lVar4 == 0x133a8707be4aa423) {
      return *(uint *)(lVar2 + (ulong)*(uint *)(param_1 + 0x60)) != (uVar1 & 0xffff);
    }
    if (lVar4 == 0x137e8707be8470ef) {
      return *(uint *)(lVar2 + (ulong)*(uint *)(param_1 + 0x60)) == (uVar1 & 0xffff);
    }
  }
  return false;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019bc388; name: FUN_019bc388
 */


ulong FUN_019bc388(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  
  plVar3 = (long *)FUN_01465a74();
  uVar4 = 0;
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0xb0))(plVar3,0xd);
    uVar2 = (uint)uVar4;
    if (uVar2 != 0) {
      if (uVar2 < *(ushort *)(param_1 + 0x17a)) {
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = ((*(ushort *)(param_1 + 0x17a) - uVar2) * 100) / uVar2;
        }
        uVar4 = (ulong)uVar1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



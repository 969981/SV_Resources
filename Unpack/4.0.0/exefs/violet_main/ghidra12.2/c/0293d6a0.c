/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293d6a0; name: FUN_0293d6a0
 */


void FUN_0293d6a0(long param_1,ushort param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x290);
  if ((param_2 < 0x86) &&
     (lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + (ulong)param_2 * 8 + 8),
     lVar2 != 0)) {
    FUN_0154e790(uVar1,*(undefined4 *)(lVar2 + 0xc));
    return;
  }
  FUN_0154e790(uVar1,0);
  return;
}



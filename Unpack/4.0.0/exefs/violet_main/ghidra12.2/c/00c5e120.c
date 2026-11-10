/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5e120; name: FUN_00c5e120
 */


long FUN_00c5e120(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_0013c1c0();
  plVar3 = *(long **)(param_1 + 0x10);
  *plVar3 = lVar2;
  *(undefined1 *)(plVar3 + 1) = 0x47;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_0012ac30(param_1);
  }
  lVar1 = 0x20;
  if (*(ushort *)(lVar2 + 10) != 0) {
    lVar1 = (ulong)*(ushort *)(lVar2 + 10) * 0x10 + 0x28;
  }
  return lVar2 + lVar1;
}



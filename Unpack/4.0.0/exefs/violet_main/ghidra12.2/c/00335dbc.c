/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00335dbc; name: FUN_00335dbc
 */


bool FUN_00335dbc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while (lVar1 = lVar2, lVar1 != 0) {
    param_1 = lVar1;
    lVar2 = *(long *)(lVar1 + 0x28);
  }
  lVar1 = FUN_0038c8b0(param_1 + 0x20,0xfffffffffffffc18,0,*(undefined8 *)(param_1 + 0x10));
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 < 0) {
    lVar2 = lVar2 + 1;
  }
  return lVar2 >> 1 < lVar1;
}



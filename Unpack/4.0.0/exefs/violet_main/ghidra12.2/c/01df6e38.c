/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df6e38; name: FUN_01df6e38
 */


void FUN_01df6e38(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
    lVar1 = FUN_0111b030(param_2 & 1);
    if ((ulong)(*(long *)(lVar2 + 0x18) + lVar1) <= *(ulong *)(lVar2 + 0x10)) {
      *(byte *)(*(long *)(lVar2 + 8) + *(long *)(lVar2 + 0x18)) = param_2 & 1;
      *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
    }
  }
  return;
}



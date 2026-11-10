/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038b470; name: FUN_0038b470
 */


bool FUN_0038b470(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = *param_1;
  bVar2 = true;
  if (lVar3 != 0) {
    uVar1 = 0;
    if (*(byte *)(lVar3 + 0x10) != 0) {
      uVar1 = (long)(1 << (ulong)(*(byte *)(lVar3 + 0x10) & 0x1f));
    }
    if ((ulong)param_1[1] < uVar1) {
      bVar2 = *(long *)(*(long *)(lVar3 + 0x18) + param_1[1] * 0x18) == 0;
    }
  }
  return bVar2;
}



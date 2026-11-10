/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02982788; name: FUN_02982788
 */


void FUN_02982788(long param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x68);
  lVar1 = param_1 + 0x70;
  *(undefined1 *)(lVar1 + (ulong)uVar2) = 0;
  *(undefined1 *)(lVar1 + (ulong)(uVar2 + 1)) = 0xd1;
  *(undefined1 *)(lVar1 + (ulong)(uVar2 + 2)) = 1;
  *(uint *)(param_1 + 0x68) = uVar2 + 4;
  *(undefined1 *)(lVar1 + (ulong)(uVar2 + 3)) = 0;
  return;
}



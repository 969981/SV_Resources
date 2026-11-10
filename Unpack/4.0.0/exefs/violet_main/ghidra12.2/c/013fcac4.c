/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013fcac4; name: FUN_013fcac4
 */


long FUN_013fcac4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x170);
  lVar1 = param_1 + 0x1a8;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (lVar2 != *(long *)(param_1 + 0x178)) {
    FUN_013fcb68(lVar1,lVar2 + 8);
    if (lVar2 + 0x10 != *(long *)(param_1 + 0x178)) {
      FUN_013fcb68(lVar1,lVar2 + 0x18);
      if (lVar2 + 0x20 != *(long *)(param_1 + 0x178)) {
        FUN_013fcb68(lVar1,lVar2 + 0x28);
        for (lVar2 = lVar2 + 0x30; lVar2 != *(long *)(param_1 + 0x178); lVar2 = lVar2 + 0x10) {
          FUN_013fcb68(lVar1,lVar2 + 8);
        }
      }
    }
  }
  return lVar1;
}



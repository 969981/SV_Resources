/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016fa4dc; name: FUN_016fa4dc
 */


undefined8 FUN_016fa4dc(long param_1,ushort param_2,undefined4 param_3)

{
  long lVar1;
  
  if (((0x85 < param_2) ||
      (lVar1 = *(long *)(*(long *)(param_1 + 0x78) + (ulong)param_2 * 8 + 8), lVar1 == 0)) ||
     (1 < *(byte *)(lVar1 + 10))) {
    return 0;
  }
  *(undefined4 *)(lVar1 + 0xc) = param_3;
  if (*(byte *)(lVar1 + 10) == 1) {
    *(undefined1 *)(lVar1 + 10) = 2;
  }
  return 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033d6504; name: FUN_033d6504
 */


void FUN_033d6504(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x158);
  if (((*(char *)(lVar1 + 0x98) != '\0') && (*(int *)(lVar1 + 0x80) != 0)) &&
     ((*(int *)(lVar1 + 0x80) != 1 || (*(char *)(param_1 + 0x138) != '\0')))) {
    uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
    FUN_033c6b68(uVar2,*(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x18),
                 *(undefined4 *)(lVar1 + 0x20),
                 *(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x135) * 0xa0 + 0x10,
                 *(undefined4 *)(lVar1 + 0x84));
    *(undefined4 *)(*(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x135) * 0xa0 + 0x90) =
         *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x80);
    lVar1 = *(long *)(param_1 + 0x158);
    if ((*(int *)(lVar1 + 0x80) == 1) && (*(char *)(param_1 + 0x138) == '\x02')) {
      uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
      FUN_033c6b68(uVar2,*(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x18),
                   *(undefined4 *)(lVar1 + 0x20),
                   *(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x135) * 0xa0 + 0xb0,
                   *(undefined4 *)(lVar1 + 0x84));
      *(undefined4 *)(*(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x135) * 0xa0 + 0x130)
           = *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x80);
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033d65e8; name: FUN_033d65e8
 */


void FUN_033d65e8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x158);
  if (((*(char *)(lVar1 + 0x98) != '\0') && (*(int *)(lVar1 + 0x88) != 0)) &&
     ((*(int *)(lVar1 + 0x88) != 1 || (*(char *)(param_1 + 0x138) != '\0')))) {
    uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
    FUN_033c6b68(uVar2,*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x24),
                 *(undefined4 *)(lVar1 + 0x2c),
                 *(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x136) * 0xa0 + 0x10,
                 *(undefined4 *)(lVar1 + 0x8c));
    *(undefined4 *)(*(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x136) * 0xa0 + 0x90) =
         *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x88);
    lVar1 = *(long *)(param_1 + 0x158);
    if ((*(int *)(lVar1 + 0x88) == 1) && (*(char *)(param_1 + 0x138) == '\x02')) {
      uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
      FUN_033c6b68(uVar2,*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x24),
                   *(undefined4 *)(lVar1 + 0x2c),
                   *(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x136) * 0xa0 + 0xb0,
                   *(undefined4 *)(lVar1 + 0x8c));
      *(undefined4 *)(*(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x136) * 0xa0 + 0x130)
           = *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x88);
    }
  }
  return;
}



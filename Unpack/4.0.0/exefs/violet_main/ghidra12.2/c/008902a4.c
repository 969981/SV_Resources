/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008902a4; name: FUN_008902a4
 */


undefined4 FUN_008902a4(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((int)param_2 < 5) && ((uVar1 >> 0x10 & 1) != 0)) {
    puVar2 = (undefined4 *)
             (*(long *)(param_1 + 0x18) +
              ((ulong)(uVar1 >> 4) & 0x1c) + ((ulong)(uVar1 >> 8) & 0xc) +
              ((ulong)(uVar1 >> 0xc) & 8) + ((ulong)(uVar1 >> 0xc) & 1) * 0xc +
              (((ulong)(uVar1 << 4) & 0x30) + ((ulong)uVar1 & 0x30) | (ulong)(uVar1 >> 6) & 8) +
              (((ulong)(uVar1 >> 0xd) & 3) + ((ulong)(uVar1 >> 2) & 3)) * 0x14 +
              (ulong)(param_2 % 5) * 4 + 4);
  }
  else {
    if (4 < (int)param_2) {
      return 0xffffffff;
    }
    if ((uVar1 >> 0x11 & 1) == 0) {
      return 0xffffffff;
    }
    puVar2 = (undefined4 *)
             (*(long *)(param_1 + 0x18) +
              (long)(int)((uVar1 >> 4 & 0x1c) + (uVar1 >> 8 & 0xc) + (uVar1 >> 0xc & 8) +
                          (uVar1 >> 0xc & 1) * 0xc + (uVar1 >> 0x10 & 1) * 0x1c +
                          (uVar1 >> 0xc & 0x10) * (uVar1 >> 6 & 7) +
                          ((uVar1 & 3) * 0x10 + (uVar1 & 0x30) | uVar1 >> 6 & 8) +
                         ((uVar1 >> 0xd & 3) + (uVar1 >> 2 & 3)) * 0x14) + (ulong)(param_2 % 5) * 4
             + 0x60);
  }
  return *puVar2;
}



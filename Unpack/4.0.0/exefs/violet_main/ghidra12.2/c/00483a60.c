/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00483a60; name: FUN_00483a60
 */


undefined4 FUN_00483a60(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = (*(ulong *)(param_1 + 0xb8) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0xb8) & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar3 = uVar4 >> 0x20 | uVar4 << 0x20;
  uVar4 = (*(ulong *)(param_2 + 0xb8) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_2 + 0xb8) & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
  if (uVar3 == uVar4) {
    uVar4 = (*(ulong *)(param_1 + 0xc0) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 0xc0) & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar4 >> 0x20 | uVar4 << 0x20;
    uVar4 = (*(ulong *)(param_2 + 0xc0) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 0xc0) & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
    if (uVar3 == uVar4) {
      uVar1 = (*(uint *)(param_1 + 200) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 200) & 0xff00ff) << 8;
      uVar3 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
      uVar1 = (*(uint *)(param_2 + 200) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 200) & 0xff00ff) << 8;
      uVar4 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
      if (uVar3 == uVar4) {
        return 0;
      }
    }
  }
  uVar2 = 1;
  if (uVar3 < uVar4) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



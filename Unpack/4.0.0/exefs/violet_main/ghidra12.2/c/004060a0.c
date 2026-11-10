/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004060a0; name: FUN_004060a0
 */


ulong FUN_004060a0(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int local_28 [2];
  undefined1 *local_20;
  undefined1 local_4 [4];
  
  uVar4 = 0;
  if ((param_1 != 0) && (lVar3 = FUN_0040c210(), uVar4 = 0, lVar3 != 0)) {
    uVar4 = FUN_0040d500();
    iVar1 = (int)uVar4;
    if (iVar1 != 0) {
      local_28[0] = iVar1 + 0xe;
      if (-1 < iVar1 + 7) {
        local_28[0] = iVar1 + 7;
      }
      local_28[0] = local_28[0] >> 3;
      local_20 = local_4;
      local_28[1] = 2;
      local_4[0] = 0xff;
      iVar1 = FUN_003e5020(local_28,0);
      uVar2 = FUN_003def90(1,iVar1 << 1,0x10);
      uVar4 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    }
  }
  return uVar4;
}



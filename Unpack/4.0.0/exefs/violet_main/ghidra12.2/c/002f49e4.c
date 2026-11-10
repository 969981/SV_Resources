/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f49e4; name: FUN_002f49e4
 */


uint FUN_002f49e4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  if ((uVar2 == 0) || (uVar3 = *(ulong *)(param_2 + 0x18), uVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar2 < uVar3) {
    return 0xffffffff;
  }
  if (uVar2 != uVar3) {
    return 1;
  }
  uVar1 = 0xffffffff;
  if (*(ulong *)(param_2 + 0x20) <= *(ulong *)(param_1 + 0x20)) {
    uVar1 = (uint)(*(ulong *)(param_2 + 0x20) < *(ulong *)(param_1 + 0x20));
  }
  return uVar1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033a53d0; name: FUN_033a53d0
 */


long FUN_033a53d0(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_033a527c();
  if (*(uint *)(param_1 + 1) == uVar1) {
    uVar2 = uVar1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar1) {
      FUN_031d32c4(param_1,PTR_PTR_047d1a50,(long)(int)(uVar1 + 1));
      uVar2 = *(uint *)(param_1 + 1);
    }
    *(undefined8 *)(*param_1 + (long)(int)uVar2 * 8) = *param_2;
    *(uint *)(param_1 + 1) = uVar1 + 1;
  }
  return *param_1 + ((long)((ulong)uVar1 << 0x20) >> 0x1d);
}



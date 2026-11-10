/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00127230; name: FUN_00127230
 */


void FUN_00127230(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if ((*(uint *)(param_1 + 0xc0) & 1) != 0) {
    lVar1 = *(long *)(*(long *)*param_2 + 0x18);
    param_2[4] = param_2[4] + 4;
    FUN_00127080(param_1,*(ushort *)((long)param_2 + 0x3e) >> 3 & 4,0xffffffff,1,
                 *(undefined1 *)(lVar1 + 10));
    param_2[4] = param_2[4] + -4;
  }
  return;
}



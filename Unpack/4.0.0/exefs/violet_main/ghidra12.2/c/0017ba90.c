/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0017ba90; name: FUN_0017ba90
 */


uint * FUN_0017ba90(uint *param_1,long param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (ulong)(param_3 & 0x1f);
  if (param_2 < (long)((-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3) + 0x1f &
                      0xfffffffffffffff0)) {
    return (uint *)0x0;
  }
  *param_1 = uVar1;
  param_1[1] = param_3;
  *(ulong *)(param_1 + 2) = (long)param_1 + 0x1fU & 0xfffffffffffffff0;
  return param_1;
}



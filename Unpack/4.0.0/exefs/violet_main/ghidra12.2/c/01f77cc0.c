/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f77cc0; name: FUN_01f77cc0
 */


ulong * FUN_01f77cc0(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *__dest;
  
  if (((byte)*param_1 & 1) == 0) {
    if (param_3 < 0x17) {
      __dest = (byte *)((long)param_1 + 1);
joined_r0x01f77d4c:
      if (param_3 != 0) {
        memmove(__dest,param_2,param_3);
      }
      __dest[param_3] = 0;
      if ((*param_1 & 1) == 0) {
        *(byte *)param_1 = (byte)((int)param_3 << 1);
        return param_1;
      }
      param_1[1] = param_3;
      return param_1;
    }
    uVar2 = (ulong)(byte)((byte)*param_1 >> 1);
    uVar1 = 0x16;
  }
  else {
    uVar1 = (*param_1 & 0xfffffffffffffffe) - 1;
    if (param_3 <= uVar1) {
      __dest = (byte *)param_1[2];
      goto joined_r0x01f77d4c;
    }
    uVar2 = param_1[1];
  }
  FUN_01d0e2f8(param_1,uVar1,param_3 - uVar1,uVar2,0,uVar2,param_3);
  return param_1;
}



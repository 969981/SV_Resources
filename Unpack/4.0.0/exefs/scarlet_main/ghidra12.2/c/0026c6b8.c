/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026c6b8; name: FUN_0026c6b8
 */


ulong * FUN_0026c6b8(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((*param_1 & 1) == 0) {
    if (param_3 < 0x17) {
      pbVar2 = (byte *)((long)param_1 + 1);
      goto joined_r0x0026c768;
    }
    if (0xffffffffffffffd7 < param_3 - 0x16 && param_3 != 0xffffffffffffffee) goto LAB_0026c800;
    pbVar2 = (byte *)((long)param_1 + 1);
    uVar4 = 0x16;
  }
  else {
    uVar4 = (*param_1 & 0xfffffffffffffffe) - 1;
    if (param_3 <= uVar4) {
      pbVar2 = (byte *)param_1[2];
joined_r0x0026c768:
      if (param_3 != 0) {
        memmove(pbVar2,param_2,param_3);
      }
      pbVar2[param_3] = 0;
      if ((*param_1 & 1) == 0) {
        *(byte *)param_1 = (byte)((int)param_3 << 1);
        return param_1;
      }
      param_1[1] = param_3;
      return param_1;
    }
    if (-(*param_1 & 0xfffffffffffffffe) - 0x11 < param_3 - uVar4) {
LAB_0026c800:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pbVar2 = (byte *)param_1[2];
    if (0x7fffffffffffffe6 < uVar4) {
      uVar3 = 0xffffffffffffffef;
      goto LAB_0026c7a0;
    }
  }
  uVar1 = uVar4 * 2;
  if (uVar4 * 2 <= param_3) {
    uVar1 = param_3;
  }
  uVar3 = 0x17;
  if (0x16 < uVar1) {
    uVar3 = uVar1 + 0x10 & 0xfffffffffffffff0;
  }
LAB_0026c7a0:
  __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
  memcpy(__dest,param_2,param_3);
  if (uVar4 != 0x16) {
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  param_1[1] = param_3;
  param_1[2] = (ulong)__dest;
  *param_1 = uVar3 | 1;
  *(undefined1 *)((long)__dest + param_3) = 0;
  return param_1;
}



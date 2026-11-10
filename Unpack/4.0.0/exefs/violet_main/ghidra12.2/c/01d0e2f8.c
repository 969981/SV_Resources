/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d0e2f8; name: FUN_01d0e2f8
 */


void FUN_01d0e2f8(ulong *param_1,ulong param_2,ulong param_3,long param_4,size_t param_5,
                 long param_6,size_t param_7,void *param_8)

{
  ulong uVar1;
  size_t __n;
  void *__dest;
  byte *__src;
  ulong uVar2;
  
  if (-param_2 - 0x12 < param_3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if ((*param_1 & 1) == 0) {
    __src = (byte *)((long)param_1 + 1);
  }
  else {
    __src = (byte *)param_1[2];
  }
  if (param_2 < 0x7fffffffffffffe7) {
    uVar1 = param_2 << 1;
    if (param_2 << 1 <= param_3 + param_2) {
      uVar1 = param_3 + param_2;
    }
    uVar2 = 0x17;
    if (0x16 < uVar1) {
      uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
    }
  }
  else {
    uVar2 = 0xffffffffffffffef;
  }
  __dest = (void *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar2,1);
  if (param_5 != 0) {
    memcpy(__dest,__src,param_5);
  }
  if (param_7 != 0) {
    memcpy((void *)((long)__dest + param_5),param_8,param_7);
  }
  __n = (param_4 - param_6) - param_5;
  if (__n != 0) {
    memcpy((void *)((long)__dest + param_7 + param_5),__src + param_6 + param_5,__n);
  }
  if (param_2 + 1 != 0x17) {
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],__src,param_2 + 1,1);
  }
  uVar1 = (param_4 - param_6) + param_7;
  *param_1 = uVar2 | 1;
  param_1[1] = uVar1;
  param_1[2] = (ulong)__dest;
  *(undefined1 *)((long)__dest + uVar1) = 0;
  return;
}



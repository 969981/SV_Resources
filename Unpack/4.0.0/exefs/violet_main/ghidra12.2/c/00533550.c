/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00533550; name: FUN_00533550
 */


void FUN_00533550(ulong *param_1,double param_2)

{
  ulong __n;
  undefined1 *__dest;
  ulong uVar1;
  double dVar2;
  undefined4 local_50;
  undefined1 local_4c;
  
  if (param_2 == INFINITY) {
    local_50 = 0x666e69;
LAB_005335a0:
    __n = strlen((char *)&local_50);
  }
  else {
    if (param_2 == -INFINITY) {
      local_50 = 0x666e692d;
      local_4c = 0;
      goto LAB_005335a0;
    }
    if (NAN(param_2)) {
      local_50 = 0x6e616e;
      goto LAB_005335a0;
    }
    snprintf((char *)&local_50,0x20,"%.*g",param_2,0xf);
    dVar2 = (double)FUN_00533960(&local_50,0);
    if (dVar2 != param_2) {
      snprintf((char *)&local_50,0x20,"%.*g",param_2,0x11);
    }
    FUN_00533860(&local_50);
    __n = strlen((char *)&local_50);
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00533608;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
  }
  memcpy(__dest,&local_50,__n);
LAB_00533608:
  __dest[__n] = 0;
  return;
}



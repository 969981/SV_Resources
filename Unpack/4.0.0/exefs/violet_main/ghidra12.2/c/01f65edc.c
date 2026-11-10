/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f65edc; name: FUN_01f65edc
 */


bool FUN_01f65edc(long *param_1,char *param_2)

{
  size_t __n;
  void *__dest;
  ulong uVar1;
  long lVar2;
  ulong local_70;
  size_t local_68;
  void *local_60;
  undefined1 *local_58;
  long local_50 [4];
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return false;
  }
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 01f65fe0 to 01f65fe7 has its CatchHandler @ 01f65fe8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_70 | 1);
    if (__n == 0) goto LAB_01f65f64;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar1);
    local_70 = uVar1 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_01f65f64:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 01f65f74 to 01f65f83 has its CatchHandler @ 01f65fec */
  local_58 = (undefined1 *)&local_70;
  FUN_0025998c(local_50,*(undefined8 *)(lVar2 + 0x20),&local_58,0);
  if ((local_70 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_60);
  }
  if ((local_50[0] == 0) || (*(int *)(*(long *)(local_50[0] + 8) + 0x34) != 2)) {
    return false;
  }
  return *(char *)(*(long *)(local_50[0] + 8) + 0x28) != '\0';
}



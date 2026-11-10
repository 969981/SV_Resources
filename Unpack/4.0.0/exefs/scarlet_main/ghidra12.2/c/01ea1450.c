/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea1450; name: FUN_01ea1450
 */


undefined4 FUN_01ea1450(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  size_t __n;
  long lVar3;
  char *__s;
  void *__dest;
  ulong uVar4;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long *local_48;
  
  uVar1 = FUN_0024da10();
  __s = *(char **)PTR_PTR_047cc178;
  plVar2 = (long *)FUN_01cf7e20();
  local_48 = plVar2;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 01ea156c to 01ea1573 has its CatchHandler @ 01ea1574 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_60 | 1);
    if (__n == 0) goto LAB_01ea14fc;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
    local_60 = uVar4 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_01ea14fc:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 01ea1500 to 01ea150b has its CatchHandler @ 01ea157c */
  lVar3 = FUN_01f785ec(param_2,&local_60);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  if (param_2 + 8 != lVar3) {
    uVar1 = FUN_0024dce0(uVar1,lVar3 + 0x40);
  }
  return uVar1;
}



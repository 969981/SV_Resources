/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001fc8c0; name: FUN_001fc8c0
 */


void FUN_001fc8c0(ulong *param_1,undefined8 param_2)

{
  char *__format;
  int iVar1;
  char *__s1;
  long *plVar2;
  size_t __n;
  undefined1 *__dest;
  ulong uVar3;
  char acStack_54 [32];
  undefined1 local_34;
  EnvironmentIdentifier aEStack_28 [8];
  
  nn::nsd::GetEnvironmentIdentifier(aEStack_28);
  __s1 = (char *)FUN_0025bcb0(param_2);
  iVar1 = strncmp(__s1,"t-",2);
  __format = "%s-%s";
  if (iVar1 != 0) {
    __format = "t-%s-%s";
  }
  iVar1 = snprintf(acStack_54,0x21,__format,__s1,aEStack_28);
  local_34 = 0;
  plVar2 = (long *)FUN_01cf7e20(iVar1);
  param_1[3] = (ulong)plVar2;
  __n = strlen(acStack_54);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 001fc9bc to 001fc9c3 has its CatchHandler @ 001fc9c4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_001fc9a4;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar3,1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
  }
  memcpy(__dest,acStack_54,__n);
LAB_001fc9a4:
  __dest[__n] = 0;
  return;
}



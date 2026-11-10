/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006eb310; name: FUN_006eb310
 */


void FUN_006eb310(undefined8 param_1,byte *param_2)

{
  long *plVar1;
  size_t __n;
  byte *pbVar2;
  char *__s;
  char *__dest;
  ulong uVar3;
  ulong local_60;
  size_t local_58;
  char *local_50;
  long *local_48;
  
  __s = *(char **)PTR_PTR_047cbd00;
  plVar1 = (long *)FUN_01cf7e20();
  local_48 = plVar1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006eb448 to 006eb44f has its CatchHandler @ 006eb450 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    __dest = (char *)((ulong)&local_60 | 1);
    if (__n == 0) goto LAB_006eb3b8;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (char *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    local_60 = uVar3 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_006eb3b8:
  __dest[__n] = '\0';
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  if ((local_60 & 1) == 0) {
    if (1 < (byte)local_60) {
      __s = (char *)((ulong)&local_60 | 1);
    }
  }
  else if (local_58 != 0) {
    __s = local_50;
  }
                    /* try { // try from 006eb400 to 006eb40b has its CatchHandler @ 006eb454 */
  FUN_006fe630(param_1,*(undefined8 *)PTR_PTR_047cbcf8,pbVar2,__s);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  return;
}



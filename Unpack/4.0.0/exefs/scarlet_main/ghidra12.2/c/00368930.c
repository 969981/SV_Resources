/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00368930; name: FUN_00368930
 */


void FUN_00368930(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *__src;
  long *__src_00;
  long *__dest;
  long *__src_01;
  size_t __n;
  long lVar3;
  long lVar4;
  long lVar5;
  long alStack_150 [32];
  
  __src_01 = alStack_150;
  __src = (long *)*param_2;
  __src_00 = (long *)*param_1;
  lVar5 = param_2[1] - (long)__src >> 5;
  plVar1 = param_1 + 5;
  lVar4 = param_1[1] - (long)__src_00 >> 5;
  __dest = param_2 + 5;
  lVar3 = lVar5 + param_2[2];
  if (__src_00 == plVar1) {
    lVar2 = param_1[2] + lVar4;
    if (__src == __dest) {
      __n = lVar2 * 0x20;
      memcpy(alStack_150,__src_00,__n);
      memcpy(__src_00,__src,lVar3 * 0x20);
      __dest = (long *)*param_2;
    }
    else {
      __n = lVar2 * 0x20;
      *param_1 = (long)__src;
      *param_2 = (long)__dest;
      __src_01 = __src_00;
    }
  }
  else {
    if (__src != __dest) {
      *param_1 = (long)__src;
      *param_2 = (long)__src_00;
      goto LAB_00368a04;
    }
    __n = lVar3 * 0x20;
    *param_2 = (long)__src_00;
    *param_1 = (long)plVar1;
    __dest = plVar1;
    __src_01 = __src;
  }
  memcpy(__dest,__src_01,__n);
LAB_00368a04:
  param_1[1] = *param_1 + lVar5 * 0x20;
  param_2[1] = *param_2 + lVar4 * 0x20;
  lVar4 = param_1[3];
  lVar3 = param_1[2];
  lVar5 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = lVar5;
  param_2[3] = lVar4;
  param_2[2] = lVar3;
  lVar3 = param_1[4];
  param_1[4] = param_2[4];
  param_2[4] = lVar3;
  return;
}



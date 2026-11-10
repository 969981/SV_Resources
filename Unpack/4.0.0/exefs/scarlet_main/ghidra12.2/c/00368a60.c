/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00368a60; name: FUN_00368a60
 */


void FUN_00368a60(long *param_1,long *param_2)

{
  long *plVar1;
  long *__src;
  long *__src_00;
  long *__dest;
  long *plVar2;
  size_t __n;
  size_t __n_00;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  
  plVar2 = &local_150;
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    return;
  }
  if (param_2[2] != 0) {
    plVar2 = (long *)param_1[1];
    do {
      lStack_148 = plVar2[1];
      local_150 = *plVar2;
      lStack_138 = plVar2[3];
      lStack_140 = plVar2[2];
      FUN_003686e0(param_2,&local_150);
      lVar3 = lVar3 + -1;
      plVar2 = plVar2 + 4;
    } while (lVar3 != 0);
    param_1[2] = 0;
    param_1[4] = 0;
    return;
  }
  __src = (long *)*param_1;
  __src_00 = (long *)*param_2;
  __n_00 = param_2[1] - (long)__src_00;
  lVar4 = param_1[1] - (long)__src >> 5;
  plVar1 = param_1 + 5;
  __dest = param_2 + 5;
  if (__src == plVar1) {
    lVar3 = lVar4 + lVar3;
    if (__src_00 == __dest) {
      __n = lVar3 * 0x20;
      memcpy(&local_150,__src,__n);
      memcpy(__src,__src_00,__n_00);
      __dest = (long *)*param_2;
    }
    else {
      __n = lVar3 * 0x20;
      *param_1 = (long)__src_00;
      *param_2 = (long)__dest;
      plVar2 = __src;
    }
  }
  else {
    if (__src_00 != __dest) {
      *param_1 = (long)__src_00;
      *param_2 = (long)__src;
      goto LAB_00368b64;
    }
    *param_2 = (long)__src;
    *param_1 = (long)plVar1;
    __dest = plVar1;
    plVar2 = __src_00;
    __n = __n_00;
  }
  memcpy(__dest,plVar2,__n);
LAB_00368b64:
  param_1[1] = *param_1 + ((long)__n_00 >> 5) * 0x20;
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



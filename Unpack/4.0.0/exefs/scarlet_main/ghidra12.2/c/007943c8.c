/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007943c8; name: FUN_007943c8
 */


void FUN_007943c8(long *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (ulong)*(uint *)(param_1 + 3) & 0x3f;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) + param_3;
  uVar2 = 0x40 - (int)uVar3;
  if (param_3 < uVar2) {
    if (param_3 == 0) {
      return;
    }
    __dest = (void *)((long)param_1 + uVar3 + 0x1c);
  }
  else {
    __dest = (void *)((long)param_1 + 0x1c);
    memcpy((void *)((long)__dest + uVar3),param_2,(ulong)uVar2);
    (**(code **)(*param_1 + 0x38))(param_1);
    param_2 = (void *)((ulong)uVar2 + (long)param_2);
    uVar1 = param_3 - uVar2 >> 6;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 + 1;
      do {
        memcpy(__dest,param_2,0x40);
        param_2 = (void *)((long)param_2 + 0x40);
        (**(code **)(*param_1 + 0x38))(param_1);
        lVar4 = lVar4 + -1;
      } while (1 < lVar4);
    }
    param_3 = param_3 - uVar2 & 0x3f;
    if (param_3 == 0) {
      return;
    }
  }
  memcpy(__dest,param_2,(ulong)param_3);
  return;
}



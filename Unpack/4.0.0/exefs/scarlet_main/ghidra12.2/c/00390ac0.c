/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00390ac0; name: FUN_00390ac0
 */


undefined8 FUN_00390ac0(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *__src;
  ulong __n;
  void *__dest;
  undefined8 uVar3;
  
  uVar2 = (uint)param_2 & 0xff;
  if ((uVar2 == 0x14) || (uVar2 != 2)) {
    return 0;
  }
  __src = (void *)*param_1;
  __n = param_1[1];
  if (((uint)param_2 >> 8 & 1) == 0) {
    uVar3 = FUN_00391cac(param_4,__src,__n,param_2 >> 0x20,param_3,param_2 >> 9 & 1);
    return uVar3;
  }
  if (__n != 0) {
    __dest = (void *)param_4[3];
    param_4[2] = param_4[2] + __n;
    if (__n < (ulong)((long)param_4 + (0x420 - (long)__dest))) {
      memcpy(__dest,__src,__n);
      param_4[3] = param_4[3] + __n;
    }
    else {
      puVar1 = param_4 + 4;
      (*(code *)param_4[1])(*param_4,puVar1,(long)__dest - (long)puVar1);
      param_4[3] = puVar1;
      (*(code *)param_4[1])(*param_4,__src,__n);
    }
  }
  return 1;
}



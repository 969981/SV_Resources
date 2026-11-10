/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00464cf0; name: FUN_00464cf0
 */


undefined8 FUN_00464cf0(undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  void *__dest;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_1[5];
  lVar4 = param_1[1];
  if (param_2 <= uVar6 - lVar4) {
    return 1;
  }
  if ((*(int *)(param_1 + 2) == 0) && (uVar5 = param_1[4], param_2 <= uVar5 - lVar4)) {
    do {
      bVar1 = uVar5 >> 1 <= uVar6;
      uVar6 = uVar6 << 1;
      if (bVar1) {
        uVar6 = uVar5;
      }
    } while (uVar6 - lVar4 < param_2);
    if (*(int *)((long)param_1 + 0x14) == 0) {
      __dest = (void *)FUN_00452ce0(uVar6,"external/openssl/crypto/rand/rand_lib.c",0x27f);
    }
    else {
      __dest = (void *)thunk_FUN_00452ce0(uVar6,"external/openssl/crypto/rand/rand_lib.c",0x27d);
    }
    if (__dest != (void *)0x0) {
      memcpy(__dest,(void *)*param_1,param_1[1]);
      if (*(int *)((long)param_1 + 0x14) == 0) {
        FUN_00453260(*param_1,param_1[5],"external/openssl/crypto/rand/rand_lib.c",0x288);
      }
      else {
        FUN_00453360();
      }
      *param_1 = __dest;
      param_1[5] = uVar6;
      return 1;
    }
    uVar2 = 0x41;
    uVar3 = 0x281;
  }
  else {
    uVar2 = 0x44;
    uVar3 = 0x274;
  }
  FUN_004806c0(0x24,0x7d,uVar2,"external/openssl/crypto/rand/rand_lib.c",uVar3);
  return 0;
}



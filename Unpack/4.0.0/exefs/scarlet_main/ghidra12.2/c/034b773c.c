/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b773c; name: FUN_034b773c
 */


void FUN_034b773c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 ulong param_5)

{
  undefined4 uVar1;
  undefined ***pppuVar2;
  size_t __n;
  undefined8 *__dest;
  undefined **appuStack_70 [4];
  
  appuStack_70[3] = (undefined **)(param_3 + 8);
  uVar1 = *param_3;
  appuStack_70[1] = &PTR_LAB_047c45a8;
  pppuVar2 = appuStack_70 + 1;
  if ((param_5 & 1) == 0) {
    pppuVar2 = (undefined ***)0x0;
  }
  if (param_3[0x14] != 0) {
    __n = (ulong)(uint)param_3[0x14] * 8;
    __dest = (undefined8 *)((long)appuStack_70 - (__n + 0xf & 0xffffffff0));
    appuStack_70[2] = (undefined **)param_4;
    memcpy(__dest,*(void **)(param_3 + 0x12),__n);
    do {
      FUN_034b77f8(param_1,param_2,*__dest,uVar1,param_4,pppuVar2);
      __n = __n - 8;
      __dest = __dest + 1;
    } while (__n != 0);
  }
  return;
}



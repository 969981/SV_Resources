/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002fd7b0; name: FUN_002fd7b0
 */


undefined8 FUN_002fd7b0(void *param_1,ulong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  size_t __n;
  void *__src;
  ulong __n_00;
  size_t __n_01;
  
  if (*(int *)(param_3 + 4) != 0) {
    return 7;
  }
  __n = *param_2;
  puVar1 = (uint *)*param_3;
  if (puVar1 == (uint *)0x0) {
    param_3[2] = 0x40;
    puVar1 = (uint *)FUN_0038c780(0x40);
    *param_3 = puVar1;
    uVar4 = param_3[3];
  }
  else {
    uVar4 = param_3[3];
  }
  if (uVar4 < 4) {
    __n_00 = 4 - uVar4;
    if (__n < __n_00) {
      memcpy((void *)((long)puVar1 + uVar4),param_1,__n);
      param_3[3] = param_3[3] + __n;
      *param_2 = __n;
      return 4;
    }
    memcpy((void *)((long)puVar1 + uVar4),param_1,__n_00);
    uVar4 = param_3[3] + __n_00;
    puVar1 = (uint *)*param_3;
    param_3[3] = uVar4;
    uVar3 = (ulong)*puVar1;
    param_3[1] = uVar3;
    if ((ulong)param_3[2] < uVar3) {
      puVar1 = (uint *)FUN_0038c7f0();
      uVar3 = param_3[1];
      *param_3 = puVar1;
      param_3[2] = uVar3;
      uVar4 = param_3[3];
    }
    __n = __n - __n_00;
    __src = (void *)((long)param_1 + __n_00);
  }
  else {
    uVar3 = param_3[1];
    __src = param_1;
  }
  __n_01 = uVar3 - uVar4;
  if (__n < __n_01) {
    memcpy((void *)((long)puVar1 + uVar4),__src,__n);
    param_3[3] = param_3[3] + __n;
    *param_2 = (long)__src + (__n - (long)param_1);
    uVar2 = 4;
  }
  else {
    memcpy((void *)((long)puVar1 + uVar4),__src,__n_01);
    uVar2 = 0;
    *param_2 = (long)__src + (__n_01 - (long)param_1);
    param_3[3] = 0;
    *(undefined4 *)(param_3 + 4) = 1;
  }
  return uVar2;
}



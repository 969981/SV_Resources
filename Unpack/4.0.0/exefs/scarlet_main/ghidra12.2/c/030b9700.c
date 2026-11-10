/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030b9700; name: FUN_030b9700
 */


undefined8 * FUN_030b9700(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (param_2 != param_1) {
    iVar1 = *(int *)(param_2 + 1);
    pvVar2 = (void *)*param_2;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < iVar1) {
      FUN_030bb8c8(param_1,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)*param_1,pvVar2,(long)iVar1 << 2);
    *(int *)(param_1 + 1) = iVar1;
    iVar1 = *(int *)(param_2 + 3);
    pvVar2 = (void *)param_2[2];
    if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) < iVar1) {
      FUN_03041abc(param_1 + 2,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[2],pvVar2,(long)iVar1 << 2);
    *(int *)(param_1 + 3) = iVar1;
    iVar1 = *(int *)(param_2 + 5);
    pvVar2 = (void *)param_2[4];
    if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x7fffffff) < iVar1) {
      FUN_030bb8c8(param_1 + 4,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[4],pvVar2,(long)iVar1 << 2);
    *(int *)(param_1 + 5) = iVar1;
    iVar1 = *(int *)(param_2 + 7);
    pvVar2 = (void *)param_2[6];
    if ((int)(*(uint *)((long)param_1 + 0x3c) & 0x7fffffff) < iVar1) {
      FUN_03041abc(param_1 + 6,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[6],pvVar2,(long)iVar1 << 2);
    *(int *)(param_1 + 7) = iVar1;
  }
  memcpy(param_1 + 8,param_2 + 8,0x60);
  return param_1;
}



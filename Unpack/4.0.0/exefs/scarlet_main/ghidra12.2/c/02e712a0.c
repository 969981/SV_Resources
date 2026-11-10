/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e712a0; name: FUN_02e712a0
 */


long * FUN_02e712a0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  void *__src;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  void *pvVar6;
  long lVar7;
  long local_28;
  
  puVar5 = PTR_DAT_047d1a08;
  if (param_2 != param_1) {
    __src = (void *)0x0;
    if (*param_2 != 0) {
      __src = (void *)(*param_2 + (long)param_2);
    }
    uVar4 = *(uint *)(param_2 + 1);
    uVar1 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    if ((int)uVar1 <= (int)uVar4) {
      uVar1 = uVar4;
    }
    lVar7 = *param_1;
    if (__src == (void *)0x0 || uVar1 == 0) {
      if (*(int *)((long)param_1 + 0xc) < 0) {
        lVar3 = 0;
        if (lVar7 != 0) {
          lVar3 = lVar7 + (long)param_1;
        }
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar3,0);
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      pvVar6 = (void *)0x0;
      if (lVar7 != 0) {
        pvVar6 = (void *)(lVar7 + (long)param_1);
      }
      uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_1 + 1)) {
        uVar2 = *(uint *)(param_1 + 1);
      }
      if (uVar1 != uVar2) {
        if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
          pvVar6 = (void *)0x0;
          if (lVar7 != 0) {
            pvVar6 = (void *)(lVar7 + (long)param_1);
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,pvVar6,0);
        }
        local_28 = (ulong)uVar1 << 7;
        pvVar6 = (void *)(**(code **)puVar5)(0,&local_28,0);
        uVar4 = *(uint *)(param_2 + 1);
      }
      memcpy(pvVar6,__src,-(ulong)(uVar4 >> 0x1f) & 0xffffff8000000000 | (ulong)uVar4 << 7);
      lVar7 = 0;
      if (pvVar6 != (void *)0x0) {
        lVar7 = (long)pvVar6 - (long)param_1;
      }
      *param_1 = lVar7;
      *(int *)(param_1 + 1) = (int)param_2[1];
      uVar1 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_2 + 1)) {
        uVar1 = *(uint *)(param_2 + 1);
      }
      *(uint *)((long)param_1 + 0xc) = uVar1 | 0x80000000;
    }
  }
  *(char *)(param_1 + 2) = (char)param_2[2];
  return param_1;
}



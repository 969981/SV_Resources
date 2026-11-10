/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c6590; name: FUN_031c6590
 */


void FUN_031c6590(long *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  void *pvVar6;
  size_t __n;
  int iVar7;
  void *__s;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  
  *(undefined4 *)(param_2 + 1) = 0;
  puVar5 = PTR_PTR_047d1a50;
  pvVar8 = (void *)*param_1;
  lVar9 = param_1[1];
  __n = lVar9 - (long)pvVar8;
  if (__n == 0) {
    iVar7 = 0;
  }
  else {
    __s = pvVar8;
    uVar10 = 0;
    do {
      pvVar6 = memchr(__s,param_3 & 0xff,__n);
      pvVar8 = __s;
      if (pvVar6 == (void *)0x0) goto LAB_031c6650;
      pvVar8 = (void *)((long)pvVar6 + 1);
      uVar4 = uVar10 + 1;
      iVar7 = (int)uVar10;
      if (((ulong)*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= uVar10) {
        FUN_031c66ec(param_2,puVar5,uVar4);
        iVar7 = (int)param_2[1];
      }
      puVar1 = (undefined8 *)(*param_2 + (long)iVar7 * 0x10);
      __n = lVar9 - (long)pvVar8;
      *puVar1 = __s;
      puVar1[1] = pvVar6;
      *(int *)(param_2 + 1) = (int)uVar10 + 1;
      __s = pvVar8;
      uVar10 = uVar4;
    } while (__n != 0);
    uVar10 = uVar4 & 0xffffffff;
LAB_031c6650:
    iVar7 = (int)uVar10;
    lVar9 = param_1[1];
  }
  iVar3 = iVar7 + 1;
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar7) {
    FUN_031c66ec(param_2,PTR_PTR_047d1a50,(long)iVar3);
    iVar7 = (int)param_2[1];
  }
  plVar2 = (long *)(*param_2 + (long)iVar7 * 0x10);
  *plVar2 = (long)pvVar8;
  plVar2[1] = lVar9;
  *(int *)(param_2 + 1) = iVar3;
  return;
}



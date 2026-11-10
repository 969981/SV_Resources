/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb4bd8; name: FUN_00cb4bd8
 */


void FUN_00cb4bd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  undefined *puVar5;
  ulong uVar6;
  bool bVar7;
  void *__s;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  ulong local_68;
  
  puVar5 = PTR_DAT_047d1a08;
  uVar3 = 0x1b0;
  if (*(char *)(param_4 + 0x4d) != '\0') {
    uVar3 = 0x230;
  }
  local_68 = uVar3;
  __s = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  uVar6 = local_68;
  uVar12 = local_68 >> 2;
  pvVar11 = __s;
  if (((ulong)__s & 0xf) == 0) {
    uVar8 = uVar12;
  }
  else {
    uVar8 = 4 - (((ulong)__s & 0xf) >> 2);
    uVar9 = uVar12;
    if (uVar8 <= uVar12) {
      uVar9 = uVar8;
    }
    pvVar2 = (void *)((long)__s + uVar9 * 4);
    uVar8 = uVar12 - uVar9;
    if (__s < pvVar2) {
      memset(__s,0,uVar9 * 4);
      uVar9 = uVar9 * 4 - 1;
      uVar1 = ((uint)(uVar9 >> 2) & 0x3fffffff) + 1;
      if ((uVar1 & 7) != 0) {
        lVar10 = -((ulong)uVar1 & 7);
        do {
          pvVar11 = (void *)((long)pvVar11 + 4);
          bVar7 = lVar10 != -1;
          lVar10 = lVar10 + 1;
        } while (bVar7);
      }
      if (0x1b < uVar9) {
        do {
          pvVar11 = (void *)((long)pvVar11 + 0x20);
        } while (pvVar11 < pvVar2);
      }
    }
    else {
    }
  }
  if ((3 < uVar8) && (0 < (long)(uVar8 & 0xfffffffffffffffc))) {
    pvVar2 = (void *)((long)pvVar11 + (uVar8 & 0xfffffffffffffffc) * 4);
    pvVar4 = pvVar2;
    if (pvVar2 <= (void *)((long)pvVar11 + 0x10U)) {
      pvVar4 = (void *)((long)pvVar11 + 0x10U);
    }
    memset(pvVar11,0,(long)pvVar4 + ~(ulong)pvVar11 + 0x10 & 0xfffffffffffffff0);
    do {
      pvVar11 = (void *)((long)pvVar11 + 0x10);
    } while (pvVar11 < pvVar2);
  }
  if (pvVar11 < (void *)((long)__s + uVar12 * 4)) {
    memset(pvVar11,0,
           (long)__s + (uVar6 & 0xfffffffffffffffc) + ~(ulong)pvVar11 + 4 & 0xfffffffffffffffc);
  }
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(__s,"hknpConvexShape");
  }
  FUN_02ee1498(param_2,__s,param_3,param_4);
  *(ulong *)((long)__s + 8) = uVar3;
  *param_1 = __s;
  return;
}



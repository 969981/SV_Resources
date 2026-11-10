/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb0eb4; name: FUN_00cb0eb4
 */


void FUN_00cb0eb4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined *puVar4;
  ulong uVar5;
  bool bVar6;
  void *__s;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  int local_78 [3];
  undefined8 local_6c;
  ulong local_48;
  
  puVar4 = PTR_DAT_047d1a08;
  local_6c = 0;
  local_78[2] = *(int *)(param_2 + 8);
  if (*(int *)(param_2 + 8) <= *(int *)(param_2 + 0xc)) {
    local_78[2] = *(int *)(param_2 + 0xc);
  }
  local_78[0] = local_78[2] * 0x40 + 0x110;
  local_78[1] = 0x110;
  if (local_78[2] < 5 && *(int *)(param_2 + 0x14) == 2) {
    local_6c = CONCAT44(3,local_78[0]);
    local_78[0] = local_78[2] * 0x40 + 0x290;
  }
  local_48 = (ulong)local_78[0];
  __s = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
  uVar5 = local_48;
  uVar11 = local_48 >> 2;
  pvVar10 = __s;
  if (((ulong)__s & 0xf) == 0) {
    uVar7 = uVar11;
  }
  else {
    uVar7 = 4 - (((ulong)__s & 0xf) >> 2);
    uVar8 = uVar11;
    if (uVar7 <= uVar11) {
      uVar8 = uVar7;
    }
    pvVar2 = (void *)((long)__s + uVar8 * 4);
    uVar7 = uVar11 - uVar8;
    if (__s < pvVar2) {
      memset(__s,0,uVar8 * 4);
      uVar8 = uVar8 * 4 - 1;
      uVar1 = ((uint)(uVar8 >> 2) & 0x3fffffff) + 1;
      if ((uVar1 & 7) != 0) {
        lVar9 = -((ulong)uVar1 & 7);
        do {
          pvVar10 = (void *)((long)pvVar10 + 4);
          bVar6 = lVar9 != -1;
          lVar9 = lVar9 + 1;
        } while (bVar6);
      }
      if (0x1b < uVar8) {
        do {
          pvVar10 = (void *)((long)pvVar10 + 0x20);
        } while (pvVar10 < pvVar2);
      }
    }
    else {
    }
  }
  if ((3 < uVar7) && (0 < (long)(uVar7 & 0xfffffffffffffffc))) {
    pvVar2 = (void *)((long)pvVar10 + (uVar7 & 0xfffffffffffffffc) * 4);
    pvVar3 = pvVar2;
    if (pvVar2 <= (void *)((long)pvVar10 + 0x10U)) {
      pvVar3 = (void *)((long)pvVar10 + 0x10U);
    }
    memset(pvVar10,0,(long)pvVar3 + ~(ulong)pvVar10 + 0x10 & 0xfffffffffffffff0);
    do {
      pvVar10 = (void *)((long)pvVar10 + 0x10);
    } while (pvVar10 < pvVar2);
  }
  if (pvVar10 < (void *)((long)__s + uVar11 * 4)) {
    memset(pvVar10,0,
           (long)__s + (uVar5 & 0xfffffffffffffffc) + ~(ulong)pvVar10 + 4 & 0xfffffffffffffffc);
  }
  if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
    (**(code **)(puVar4 + 0x10))(__s,"hknpCompoundShape");
  }
  FUN_02e81ce0(__s,param_2,local_78);
  *(long *)((long)__s + 8) = (long)local_78[0];
  *param_1 = __s;
  return;
}



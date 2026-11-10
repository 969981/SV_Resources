/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324e488; name: FUN_0324e488
 */


bool FUN_0324e488(long *param_1,byte *param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  void *__s;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  size_t __n;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  puVar1 = PTR_PTR_047d1a50;
  uVar6 = (uint)*param_2;
  uVar3 = 0x811c9dc5;
  if (*param_2 != 0) {
    pbVar5 = param_2;
    do {
      pbVar5 = pbVar5 + 1;
      uVar3 = (uVar3 ^ uVar6) * 0x1000193;
      uVar6 = (uint)*pbVar5;
    } while (uVar6 != 0);
  }
  iVar7 = (int)param_1[1];
  uVar6 = *(uint *)((long)param_1 + 0xc);
  if ((int)uVar6 < iVar7 * 2) {
    lVar8 = *param_1;
    __n = (long)(int)uVar6 * 0x30 + 0x30;
    __s = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,__n);
    *param_1 = (long)__s;
    memset(__s,0xff,__n);
    *(undefined4 *)(param_1 + 1) = 0;
    *(uint *)((long)param_1 + 0xc) = uVar6 << 1 | 1;
    if (-1 < (int)uVar6) {
      lVar9 = (ulong)uVar6 + 1;
      puVar11 = (undefined8 *)(lVar8 + 0x10);
      do {
        if (puVar11[-2] != -1) {
          FUN_0324e488(param_1,puVar11[-1],*puVar11);
        }
        lVar9 = lVar9 + -1;
        puVar11 = puVar11 + 3;
      } while (lVar9 != 0);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar1[8],lVar8,0);
    iVar7 = (int)param_1[1];
    uVar6 = *(uint *)((long)param_1 + 0xc);
  }
  uVar10 = (ulong)(uVar6 & uVar3);
  lVar8 = *param_1;
  uVar4 = *(ulong *)(lVar8 + uVar10 * 0x18);
  while (uVar4 != 0xffffffffffffffff) {
    if ((uVar4 == uVar3) &&
       (iVar2 = strcmp((char *)param_2,*(char **)(lVar8 + uVar10 * 0x18 + 8)), iVar2 == 0))
    goto LAB_0324e5ec;
    uVar10 = uVar10 + 1 & (long)(int)uVar6;
    uVar4 = *(ulong *)(lVar8 + uVar10 * 0x18);
  }
  *(int *)(param_1 + 1) = iVar7 + 1;
LAB_0324e5ec:
  *(ulong *)(lVar8 + uVar10 * 0x18) = (ulong)uVar3;
  *(byte **)(*param_1 + uVar10 * 0x18 + 8) = param_2;
  *(undefined8 *)(*param_1 + uVar10 * 0x18 + 0x10) = param_3;
  return iVar7 != (int)param_1[1];
}



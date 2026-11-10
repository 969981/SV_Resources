/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038b4e0; name: FUN_0038b4e0
 */


undefined8 FUN_0038b4e0(long *param_1,void *param_2,size_t param_3,long param_4,undefined8 *param_5)

{
  byte bVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (((bVar1 == 0) ||
      (0.85 < (double)(*param_1 + 1) / (double)(ulong)(long)(1 << (ulong)(bVar1 & 0x1f)))) &&
     (uVar2 = FUN_0038b240(param_1,(ulong)bVar1 + 1,param_5), (uVar2 & 1) == 0)) {
    return 0;
  }
  puVar3 = (undefined4 *)(*(code *)*param_5)(param_5,0,0,param_3 + 5);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar3 = (int)param_3;
  if (param_3 != 0) {
    memcpy(puVar3 + 1,param_2,param_3);
  }
  *(undefined1 *)((long)puVar3 + param_3 + 4) = 0;
  uVar4 = FUN_0038b710(param_2,param_3,0);
  uVar2 = param_1[1];
  lVar11 = param_1[3];
  *param_1 = *param_1 + 1;
  uVar4 = uVar2 & uVar4 & 0xffffffff;
  plVar10 = (long *)(lVar11 + uVar4 * 0x18);
  puVar5 = (undefined4 *)*plVar10;
  if (puVar5 != (undefined4 *)0x0) {
    lVar12 = 0;
    if (*(byte *)(param_1 + 2) != 0) {
      lVar12 = (long)(1 << (ulong)(*(byte *)(param_1 + 2) & 0x1f));
    }
    plVar9 = (long *)(lVar11 + lVar12 * 0x18);
    do {
      plVar8 = plVar9;
      plVar9 = plVar8 + -3;
    } while (*plVar9 != 0);
    uVar6 = FUN_0038b710(puVar5 + 1,*puVar5,0);
    uVar2 = uVar2 & uVar6 & 0xffffffff;
    if (uVar2 == uVar4) {
      lVar11 = lVar11 + uVar4 * 0x18;
      plVar8[-1] = *(long *)(lVar11 + 0x10);
      *(long **)(lVar11 + 0x10) = plVar9;
      plVar10 = plVar9;
      goto LAB_0038b66c;
    }
    lVar13 = plVar10[1];
    lVar12 = *plVar10;
    plVar8[-1] = plVar10[2];
    plVar8[-2] = lVar13;
    *plVar9 = lVar12;
    plVar8 = (long *)(lVar11 + uVar2 * 0x18);
    do {
      plVar7 = plVar8;
      plVar8 = (long *)plVar7[2];
    } while (plVar8 != plVar10);
    plVar7[2] = (long)plVar9;
  }
  *(undefined8 *)(lVar11 + uVar4 * 0x18 + 0x10) = 0;
LAB_0038b66c:
  *plVar10 = (long)puVar3;
  plVar10[1] = param_4;
  return 1;
}



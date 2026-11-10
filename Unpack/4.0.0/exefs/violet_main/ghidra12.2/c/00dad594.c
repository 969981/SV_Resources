/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dad594; name: FUN_00dad594
 */


void FUN_00dad594(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  byte *pbVar7;
  uint *__s;
  undefined1 *puVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar8 = &DAT_cbf29ce484222645;
  *param_1 = param_2;
  param_1[1] = &DAT_cbf29ce484222645;
  param_1[2] = &DAT_03c886bc;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_2 == (int *)0x0) {
    FUN_00dadbb8(param_1 + 5);
    lVar6 = 0;
  }
  else {
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
       (uVar10 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar10 == 0)) {
      lVar6 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar10);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
    }
    FUN_00dadbb8(param_1 + 5,lVar6);
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
       (uVar10 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar10 == 0)) {
      lVar6 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar10);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_00dadbb8(param_1 + 0x1a,lVar6);
  piVar9 = (int *)*param_1;
  if (((piVar9 != (int *)0x0) && (4 < *(ushort *)((long)piVar9 - (long)*piVar9))) &&
     (uVar10 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar10 != 0)) {
    uVar11 = (ulong)*(uint *)((long)piVar9 + uVar10);
    puVar1 = (uint *)((long)((long)piVar9 + uVar10) + uVar11);
    __s = puVar1 + 1;
    uVar2 = *puVar1;
    uVar4 = (ulong)uVar2;
    if (uVar2 == 0) {
      uVar4 = strlen((char *)__s);
    }
    bVar3 = (byte)*__s;
    if (bVar3 != 0) {
      pbVar7 = (byte *)((long)piVar9 + uVar11 + uVar10 + 5);
      do {
        puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    param_1[3] = uVar4;
    plVar5 = (long *)param_1[4];
    param_1[4] = 0;
    param_1[1] = puVar8;
    param_1[2] = __s;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    param_1[4] = 0;
  }
  return;
}



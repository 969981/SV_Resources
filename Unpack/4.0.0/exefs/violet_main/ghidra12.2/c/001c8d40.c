/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c8d40; name: FUN_001c8d40
 */


undefined8 FUN_001c8d40(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar2 = (undefined8 *)0x0;
  if (param_1[2] != 0) {
    puVar2 = *(undefined8 **)(param_1[2] + 0x10);
    param_1[2] = (long)puVar2;
    puVar7 = puVar2;
    if (puVar2 != (undefined8 *)0x0) goto LAB_001c8d90;
  }
  iVar5 = (int)param_1[1];
  lVar4 = (long)iVar5;
  iVar1 = (int)((long *)*param_1)[4];
  puVar7 = puVar2;
  if (iVar5 < iVar1) {
    puVar6 = (undefined8 *)(*(long *)*param_1 + lVar4 * 0x20);
    do {
      iVar5 = iVar5 + 1;
      puVar7 = (undefined8 *)*puVar6;
      if (puVar7 != (undefined8 *)0x0) {
        param_1[2] = (long)puVar7;
        *(int *)(param_1 + 1) = iVar5;
        goto LAB_001c8da8;
      }
      lVar4 = lVar4 + 1;
      puVar6 = puVar6 + 4;
      puVar7 = puVar2;
    } while (lVar4 < iVar1);
  }
LAB_001c8d90:
  if (puVar7 == (undefined8 *)0x0) {
    param_1[2] = 0;
    uVar3 = 0;
  }
  else {
LAB_001c8da8:
    uVar3 = *puVar7;
  }
  return uVar3;
}



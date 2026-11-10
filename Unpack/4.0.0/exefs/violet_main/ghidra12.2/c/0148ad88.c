/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0148ad88; name: FUN_0148ad88
 */


void FUN_0148ad88(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  ushort *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  puVar6 = (ushort *)((long)param_2 - (long)*param_2);
  uVar2 = *puVar6;
  if (uVar2 < 5) {
    lVar7 = 4;
  }
  else {
    lVar7 = 0;
    if ((ulong)puVar6[2] != 0) {
      puVar1 = (uint *)((long)param_2 + (ulong)puVar6[2]);
      lVar7 = (long)puVar1 + (ulong)*puVar1;
    }
    lVar7 = lVar7 + 4;
    if (6 < uVar2) {
      lVar8 = 0;
      if ((ulong)puVar6[3] != 0) {
        puVar1 = (uint *)((long)param_2 + (ulong)puVar6[3]);
        lVar8 = (long)puVar1 + (ulong)*puVar1;
      }
      lVar8 = lVar8 + 4;
      if (uVar2 < 9) {
        bVar4 = false;
      }
      else {
        bVar4 = false;
        if ((ulong)puVar6[4] != 0) {
          bVar4 = *(char *)((long)param_2 + (ulong)puVar6[4]) != '\0';
        }
        if ((10 < uVar2) && ((ulong)puVar6[5] != 0)) {
          bVar5 = *(char *)((long)param_2 + (ulong)puVar6[5]) != '\0';
          goto LAB_0148ae24;
        }
      }
      bVar5 = false;
      goto LAB_0148ae24;
    }
  }
  bVar5 = false;
  bVar4 = false;
  lVar8 = 4;
LAB_0148ae24:
  FUN_0111badc(param_1,bVar4,0);
  *param_1 = &DAT_04602830;
  param_1[4] = &PTR_LAB_046029d0;
  param_1[5] = &DAT_04602af8;
  param_1[6] = &PTR_LAB_04602b50;
  plVar9 = param_1 + 7;
  *plVar9 = (long)&PTR_LAB_04602b78;
  param_1[0x24] = &PTR_LAB_04602bb0;
  FUN_00ddaef8(param_1 + 0x7c,lVar7,0);
  FUN_00ddaef8(param_1 + 0x7d,lVar8,0);
  *(bool *)(param_1 + 0x7e) = bVar5;
  *(undefined1 *)(param_1 + 0x62) = 0;
  if (bVar5) {
    if ((*(char *)(param_1 + 0xb) == '\0') && (*(char *)((long)param_1 + 0x59) == '\0')) {
      return;
    }
    uVar3 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0xb) == -0x7e) && (*(char *)((long)param_1 + 0x59) == -0x7e)) {
      return;
    }
    uVar3 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0x8282;
  }
  if (param_1[9] != 0) {
    FUN_00c6a584(param_1[9],plVar9);
  }
  (**(code **)(*plVar9 + 0x20))(plVar9,uVar3);
  return;
}



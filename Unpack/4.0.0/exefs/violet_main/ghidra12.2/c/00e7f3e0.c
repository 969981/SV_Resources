/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e7f3e0; name: FUN_00e7f3e0
 */


void FUN_00e7f3e0(undefined8 *param_1,int *param_2,byte param_3)

{
  uint *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  bool bVar4;
  ushort *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  
  puVar5 = (ushort *)((long)param_2 - (long)*param_2);
  uVar2 = *puVar5;
  if (uVar2 < 5) {
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
    if ((ulong)puVar5[2] != 0) {
      puVar1 = (uint *)((long)param_2 + (ulong)puVar5[2]);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
    }
    lVar6 = lVar6 + 4;
    if (6 < uVar2) {
      lVar7 = 0;
      if ((ulong)puVar5[3] != 0) {
        puVar1 = (uint *)((long)param_2 + (ulong)puVar5[3]);
        lVar7 = (long)puVar1 + (ulong)*puVar1;
      }
      lVar7 = lVar7 + 4;
      if (uVar2 < 0x13) {
        if (uVar2 < 0xb) {
          iVar9 = 0;
          bVar4 = false;
          goto LAB_00e7f46c;
        }
LAB_00e7f590:
        iVar9 = 0;
      }
      else {
        if ((ulong)puVar5[9] == 0) goto LAB_00e7f590;
        iVar9 = *(int *)((long)param_2 + (ulong)puVar5[9]);
      }
      bVar4 = false;
      if ((ulong)puVar5[5] != 0) {
        bVar4 = *(char *)((long)param_2 + (ulong)puVar5[5]) != '\0';
      }
      goto LAB_00e7f46c;
    }
  }
  iVar9 = 0;
  bVar4 = false;
  lVar7 = 4;
LAB_00e7f46c:
  FUN_0111badc(param_1,iVar9 == 1 | bVar4,1);
  *param_1 = &DAT_046010a0;
  param_1[4] = &PTR_LAB_04601250;
  param_1[5] = &DAT_04601378;
  param_1[6] = &PTR_LAB_046013d0;
  plVar8 = param_1 + 7;
  *plVar8 = (long)&PTR_LAB_046013f8;
  param_1[0x24] = &PTR_LAB_04601430;
  FUN_00ddaef8(param_1 + 0x7c,lVar6,0);
  FUN_00ddaef8(param_1 + 0x7d,lVar7,0);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(int *)((long)param_1 + 0x3f4) = iVar9;
  memset(param_1 + 0x7f,0,0x6b);
  *(byte *)((long)param_1 + 0x463) = param_3 & 1;
  if ((*(char *)(param_1 + 0xb) == -0x7e) && (*(char *)((long)param_1 + 0x59) == -0x7e)) {
    return;
  }
  uVar3 = *(undefined2 *)(param_1 + 0xb);
  *(undefined2 *)(param_1 + 0xb) = 0x8282;
  if (param_1[9] != 0) {
    FUN_00c6a584(param_1[9],plVar8);
  }
  (**(code **)(*plVar8 + 0x20))(plVar8,uVar3);
  return;
}



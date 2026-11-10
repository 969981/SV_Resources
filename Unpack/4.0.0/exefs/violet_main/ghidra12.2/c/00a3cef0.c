/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a3cef0; name: FUN_00a3cef0
 */


void FUN_00a3cef0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_04540ed8;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar3 = PTR_DAT_047d8e68;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(long *)puVar3 == 0) {
    *(long **)puVar3 = param_2;
  }
  puVar4 = PTR_DAT_047d8e70;
  if (*(long *)PTR_DAT_047d8e70 == 0) {
    *(long **)PTR_DAT_047d8e70 = param_2;
  }
  plVar6 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x88,8);
  puVar1 = PTR_DAT_047d8e78 + 0x10;
  *(undefined1 *)(plVar6 + 1) = 1;
  *plVar6 = (long)puVar1;
  lVar7 = *(long *)puVar3;
  plVar6[2] = 0;
  plVar6[3] = 0;
  *(undefined4 *)(plVar6 + 8) = 0;
  plVar6[4] = 0;
  plVar6[5] = lVar7;
  *(undefined4 *)(plVar6 + 0xf) = 0;
  plVar6[6] = 0x3fffffffffffffff;
  plVar6[7] = 0;
  plVar6[0x10] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = lVar7;
  plVar6[0xd] = 0x3fffffffffffffff;
  plVar6[0xe] = 0;
  param_1[2] = plVar6;
  plVar6 = (long *)(**(code **)(*(long *)param_1[1] + 0x30))((long *)param_1[1],0x88,8);
  puVar5 = PTR_DAT_047d8e80;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  puVar2 = PTR_DAT_047d8e88 + 0x10;
  *plVar6 = (long)(puVar5 + 0x10);
  plVar6[1] = (long)puVar2;
  lVar7 = *(long *)puVar4;
  plVar6[10] = 0;
  plVar6[0xb] = lVar7;
  plVar6[0xc] = 0x1c71c71c71c71c7;
  plVar6[0xd] = 0;
  *(undefined4 *)(plVar6 + 0xe) = 0;
  plVar6[0xf] = 0;
  *(undefined4 *)(plVar6 + 0x10) = 0;
  plVar6[8] = 0;
  plVar6[9] = (long)(plVar6 + 10);
  param_1[7] = plVar6;
  plVar6 = (long *)(**(code **)(*(long *)param_1[1] + 0x30))((long *)param_1[1],0x88,8);
  *plVar6 = (long)puVar1;
  *(undefined1 *)(plVar6 + 1) = 1;
  lVar7 = *(long *)puVar3;
  *(undefined4 *)(plVar6 + 8) = 0;
  *(undefined4 *)(plVar6 + 0xf) = 0;
  plVar6[0x10] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = lVar7;
  plVar6[6] = 0x3fffffffffffffff;
  plVar6[7] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = lVar7;
  plVar6[0xd] = 0x3fffffffffffffff;
  plVar6[0xe] = 0;
  param_1[8] = plVar6;
  plVar6 = (long *)(**(code **)(*(long *)param_1[1] + 0x30))((long *)param_1[1],0x88,8);
  *plVar6 = (long)puVar1;
  *(undefined1 *)(plVar6 + 1) = 1;
  lVar7 = *(long *)puVar3;
  *(undefined4 *)(plVar6 + 8) = 0;
  *(undefined4 *)(plVar6 + 0xf) = 0;
  plVar6[0x10] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[6] = 0x3fffffffffffffff;
  plVar6[7] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[4] = 0;
  plVar6[5] = lVar7;
  plVar6[0xb] = 0;
  plVar6[0xc] = lVar7;
  plVar6[0xd] = 0x3fffffffffffffff;
  plVar6[0xe] = 0;
  param_1[9] = plVar6;
  return;
}



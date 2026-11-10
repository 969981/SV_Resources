/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb44e4; name: FUN_00cb44e4
 */


void FUN_00cb44e4(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  param_1[4] = &DAT_03d7702c;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[10] = 0x8000000000000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x1000001;
  *(undefined2 *)((long)param_1 + 0x5c) = 0x101;
  puVar5 = param_1 + 0xc;
  *puVar5 = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x14] = &DAT_03d7702c;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xd] = 0x8000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  param_1[0x10] = &DAT_03d7702c;
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000000000;
  FUN_031fe380();
  puVar1 = PTR_DAT_047d1a08;
  local_28 = 8;
  plVar2 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar2,"IntAndFloatConversionPass");
  }
  *plVar2 = (long)(PTR_DAT_047e5e30 + 0x10);
  iVar3 = *(int *)(param_1 + 0xd);
  lVar4 = (long)iVar3;
  if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x7fffffff) <= iVar3) {
    FUN_031fd660(puVar5,PTR_PTR_047d1a50,lVar4 + 1);
    iVar3 = *(int *)(param_1 + 0xd);
  }
  *(long **)(param_1[0xc] + (long)iVar3 * 8) = plVar2;
  *(int *)(param_1 + 0xd) = (int)(lVar4 + 1);
  local_28 = 8;
  plVar2 = (long *)(**(code **)puVar1)(0,&local_28,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar2,"GenerateConvertNumericKindPass");
  }
  *plVar2 = (long)(PTR_DAT_047e5e38 + 0x10);
  iVar3 = *(int *)(param_1 + 0xd);
  lVar4 = (long)iVar3;
  if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x7fffffff) <= iVar3) {
    FUN_031fd660(puVar5,PTR_PTR_047d1a50,lVar4 + 1);
    iVar3 = *(int *)(param_1 + 0xd);
  }
  *(long **)(param_1[0xc] + (long)iVar3 * 8) = plVar2;
  *(int *)(param_1 + 0xd) = (int)(lVar4 + 1);
  local_28 = 8;
  plVar2 = (long *)(**(code **)puVar1)(0,&local_28,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar2,"CheckTypeKindsPass");
  }
  *plVar2 = (long)(PTR_DAT_047e5e40 + 0x10);
  iVar3 = *(int *)(param_1 + 0xd);
  lVar4 = (long)iVar3;
  if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x7fffffff) <= iVar3) {
    FUN_031fd660(puVar5,PTR_PTR_047d1a50,lVar4 + 1);
    iVar3 = *(int *)(param_1 + 0xd);
  }
  *(long **)(param_1[0xc] + (long)iVar3 * 8) = plVar2;
  *(int *)(param_1 + 0xd) = (int)(lVar4 + 1);
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  return;
}



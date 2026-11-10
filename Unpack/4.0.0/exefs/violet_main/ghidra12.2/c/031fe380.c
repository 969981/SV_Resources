/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031fe380; name: FUN_031fe380
 */


void FUN_031fe380(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 local_28;
  
  puVar2 = PTR_DAT_047d1a08;
  local_28 = 8;
  puVar3 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(puVar3,"InlineFixedArrayPass");
  }
  *puVar3 = &PTR_LAB_046a83b0;
  iVar4 = *(int *)(param_1 + 0x10);
  lVar5 = (long)iVar4;
  lVar1 = param_1 + 8;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) <= iVar4) {
    FUN_031fd660(lVar1,PTR_PTR_047d1a50,lVar5 + 1);
    iVar4 = *(int *)(param_1 + 0x10);
  }
  *(undefined8 **)(*(long *)(param_1 + 8) + (long)iVar4 * 8) = puVar3;
  *(int *)(param_1 + 0x10) = (int)(lVar5 + 1);
  local_28 = 0x10;
  puVar3 = (undefined8 *)(**(code **)puVar2)(0,&local_28,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(puVar3,"InlineRecordPass");
  }
  *puVar3 = &PTR_LAB_046a83e0;
  *(undefined1 *)(puVar3 + 1) = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  lVar5 = (long)iVar4;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) <= iVar4) {
    FUN_031fd660(lVar1,PTR_PTR_047d1a50,lVar5 + 1);
    iVar4 = *(int *)(param_1 + 0x10);
  }
  *(undefined8 **)(*(long *)(param_1 + 8) + (long)iVar4 * 8) = puVar3;
  *(int *)(param_1 + 0x10) = (int)(lVar5 + 1);
  local_28 = 8;
  puVar3 = (undefined8 *)(**(code **)puVar2)(0,&local_28,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(puVar3,"BlockPass");
  }
  *puVar3 = &PTR_LAB_046a8380;
  iVar4 = *(int *)(param_1 + 0x10);
  lVar5 = (long)iVar4;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) <= iVar4) {
    FUN_031fd660(lVar1,PTR_PTR_047d1a50,lVar5 + 1);
    iVar4 = *(int *)(param_1 + 0x10);
  }
  *(undefined8 **)(*(long *)(param_1 + 8) + (long)iVar4 * 8) = puVar3;
  *(int *)(param_1 + 0x10) = (int)(lVar5 + 1);
  return;
}



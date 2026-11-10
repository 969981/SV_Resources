/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eca8f8; name: FUN_02eca8f8
 */


void FUN_02eca8f8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_48;
  
  puVar1 = PTR_DAT_047d1a08;
  local_48 = 0x70;
  plVar3 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar3,"hknpExternMeshShape");
  }
  puVar2 = PTR_DAT_047e3368;
  plVar3[1] = 0xffffffff;
  plVar3[2] = 1;
  *plVar3 = (long)(puVar2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  lVar6 = *(long *)(param_2 + 0x28);
  plVar3[4] = *(long *)(param_2 + 0x20);
  plVar3[5] = lVar6;
  plVar3[3] = lVar4;
  FUN_02ef63a0(plVar3 + 6,param_2 + 0x30);
  *plVar3 = (long)(PTR_DAT_047e3370 + 0x10);
  puVar2 = PTR_DAT_047e34c0;
  *(undefined4 *)(plVar3 + 8) = *(undefined4 *)(param_2 + 0x40);
  *plVar3 = (long)(puVar2 + 0x10);
  (**(code **)(**(long **)(param_2 + 0x50) + 0x98))(&local_48);
  plVar3[10] = local_48;
  local_48 = 0x70;
  lVar4 = (**(code **)puVar1)(0,&local_48,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(lVar4,"hknpExternMeshShapeData");
  }
  lVar5 = *(long *)(param_2 + 0x58);
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = lVar5 + param_2 + 0x58;
  }
  FUN_02ed24a8(lVar4,lVar6);
  lVar6 = 0;
  if (lVar4 != 0) {
    lVar6 = lVar4 - (long)(plVar3 + 0xb);
  }
  plVar3[0xb] = lVar6;
  *(undefined1 *)(plVar3 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  *param_1 = plVar3;
  return;
}



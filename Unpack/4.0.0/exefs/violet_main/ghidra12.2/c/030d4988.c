/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d4988; name: FUN_030d4988
 */


undefined8 FUN_030d4988(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_48;
  
  plVar3 = *(long **)(param_1 + 0x4e0);
  if ((plVar3 == (long *)0x0) || (*(int *)(*plVar3 + 8) + *(int *)((long)plVar3 + 0x1c) == 0)) {
    uVar8 = 0;
  }
  else {
    FUN_031c34c8();
    puVar2 = PTR_DAT_047d1a08;
    uVar8 = *(undefined8 *)(param_1 + 0x4d8);
    local_48 = 0x100;
    puVar4 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(puVar4,"hkTypedBlockStream");
    }
    puVar9 = *(undefined8 **)(param_1 + 0x4d0);
    puVar4[2] = puVar4 + 6;
    puVar4[3] = 0x8000001800000000;
    plVar3 = (long *)*puVar9;
    *puVar4 = plVar3;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined1 *)((long)puVar4 + 0xc) = 0;
    uVar1 = *(int *)(puVar9 + 0xb) - 1;
    if (*(int *)(puVar9 + 0xb) < 1) {
      lVar6 = puVar9[1];
      (**(code **)(*plVar3 + 0x20))(plVar3,lVar6,6);
      *(undefined4 *)(puVar9 + 0xb) = 5;
      puVar9 = (undefined8 *)(lVar6 + 0x28);
    }
    else {
      *(uint *)(puVar9 + 0xb) = uVar1;
      puVar9 = (undefined8 *)(puVar9[1] + (ulong)uVar1 * 8);
    }
    puVar9 = (undefined8 *)*puVar9;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined4 *)((long)puVar9 + 4) = *(undefined4 *)(puVar4 + 3);
    iVar5 = *(int *)(puVar4 + 3);
    lVar6 = (long)iVar5;
    if ((int)(*(uint *)((long)puVar4 + 0x1c) & 0x7fffffff) <= iVar5) {
      FUN_031c25b4(puVar4 + 2,PTR_PTR_047d1a50,lVar6 + 1);
      iVar5 = *(int *)(puVar4 + 3);
    }
    *(undefined8 **)(puVar4[2] + (long)iVar5 * 8) = puVar9;
    *(int *)(puVar4 + 3) = (int)(lVar6 + 1);
    puVar4[0x1e] = 0;
    *(undefined8 **)(param_1 + 0x4d8) = puVar4;
    plVar3 = *(long **)(param_1 + 0x4e0);
    lVar6 = *(long *)(param_1 + 0x4d0);
    puVar7 = *(uint **)(puVar4[2] + (long)*(int *)(puVar4 + 3) * 8 + -8);
    *plVar3 = (long)puVar4;
    plVar3[1] = lVar6;
    *(uint *)(plVar3 + 3) = *puVar7 >> 0x10;
    uVar1 = *puVar7;
    *(uint *)((long)plVar3 + 0x1c) = uVar1 & 0xffff;
    *(uint *)(puVar4 + 1) = *(int *)(puVar4 + 1) - (uVar1 & 0xffff);
    plVar3[2] = (long)puVar7;
  }
  return uVar8;
}



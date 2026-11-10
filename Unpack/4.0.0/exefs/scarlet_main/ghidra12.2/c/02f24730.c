/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f24730; name: FUN_02f24730
 */


void FUN_02f24730(long param_1,long *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 local_38;
  
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    *(undefined8 *)(param_1 + 0x4e8) = 0;
  }
  else {
    *(long *)(param_1 + 8) = param_3;
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_3 + 0x490);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_3 + 0x8f8);
    lVar8 = *(long *)(param_3 + 0x8b8);
    *(long *)(param_1 + 0x10) = lVar8 + 0x20;
    *(long *)(param_1 + 0x18) = lVar8 + 0xa20;
    lVar8 = *(long *)(*(long *)(param_3 + 0x8a8) + 0x48);
    uVar1 = *(uint *)(*(long *)(param_3 + 0x8a8) + 0x50);
    *(long *)(param_1 + 0x20) = lVar8;
    *(ulong *)(param_1 + 0x28) = lVar8 + (ulong)uVar1 * 0x50;
    lVar8 = *(long *)(*(long *)(param_3 + 0x8b0) + 0x40);
    iVar7 = *(int *)(*(long *)(param_3 + 0x8b0) + 0x48);
    *(long *)(param_1 + 0x30) = lVar8;
    *(long *)(param_1 + 0x38) = lVar8 + (long)iVar7 * 0x70;
    *(undefined8 *)(param_1 + 0x500) = *(undefined8 *)(param_3 + 0x118);
    FUN_02f224ac(param_1 + 0x768,param_3 + 0x820);
    plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x658);
    (**(code **)(*plVar4 + 0x30))(plVar4,3,param_1 + 0x4e8);
  }
  puVar2 = PTR_DAT_047d1a08;
  local_38 = 0x60;
  puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(puVar5,"hkThreadLocalBlockStreamAllocator");
  }
  iVar7 = 8;
  if ((*(long *)(param_1 + 8) != 0) &&
     (iVar7 = 0x20, *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x4a8) + 0x18) != 0)) {
    iVar7 = 8;
  }
  *puVar5 = param_2;
  puVar5[1] = puVar5 + 3;
  puVar5[2] = 0x8000000800000000;
  *(undefined4 *)(puVar5 + 0xb) = 0;
  iVar3 = (**(code **)(*param_2 + 0x50))(param_2);
  if (iVar7 <= iVar3) {
    iVar3 = iVar7;
  }
  *(int *)((long)puVar5 + 0x5c) = iVar3;
  if ((int)(*(uint *)((long)puVar5 + 0x14) & 0x7fffffff) < iVar3) {
    FUN_031c2ad4(puVar5 + 1,PTR_PTR_047d1a50,(long)iVar3);
  }
  if (*(int *)(puVar5 + 2) != iVar3) {
    *(int *)(puVar5 + 2) = iVar3;
  }
  *(undefined8 **)(param_1 + 0x4e0) = puVar5;
  plVar4 = (long *)*puVar5;
  *(undefined4 *)(param_1 + 0x538) = 0;
  *(long **)(param_1 + 0x530) = plVar4;
  *(undefined1 *)(param_1 + 0x53c) = 0;
  uVar1 = *(int *)(puVar5 + 0xb) - 1;
  if (*(int *)(puVar5 + 0xb) < 1) {
    lVar8 = puVar5[1];
    (**(code **)(*plVar4 + 0x20))(plVar4,lVar8,6);
    *(undefined4 *)(puVar5 + 0xb) = 5;
    puVar5 = (undefined8 *)(lVar8 + 0x28);
  }
  else {
    *(uint *)(puVar5 + 0xb) = uVar1;
    puVar5 = (undefined8 *)(puVar5[1] + (ulong)uVar1 * 8);
  }
  puVar5 = (undefined8 *)*puVar5;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)(param_1 + 0x548);
  iVar7 = *(int *)(param_1 + 0x548);
  lVar8 = (long)iVar7;
  if ((int)(*(uint *)(param_1 + 0x54c) & 0x7fffffff) <= iVar7) {
    FUN_031c25b4(param_1 + 0x540,PTR_PTR_047d1a50,lVar8 + 1);
    iVar7 = *(int *)(param_1 + 0x548);
  }
  *(undefined8 **)(*(long *)(param_1 + 0x540) + (long)iVar7 * 8) = puVar5;
  *(int *)(param_1 + 0x548) = (int)(lVar8 + 1);
  puVar5 = *(undefined8 **)(param_1 + 0x4e0);
  *(char **)(param_1 + 0x620) = "hknpSimulationThreadContext::m_commandBlockStream";
  *(undefined8 *)(param_1 + 0x730) = param_4;
  plVar4 = (long *)*puVar5;
  *(undefined4 *)(param_1 + 0x638) = 0;
  *(long **)(param_1 + 0x630) = plVar4;
  *(undefined1 *)(param_1 + 0x63c) = 0;
  uVar1 = *(int *)(puVar5 + 0xb) - 1;
  if (*(int *)(puVar5 + 0xb) < 1) {
    lVar8 = puVar5[1];
    (**(code **)(*plVar4 + 0x20))(plVar4,lVar8,6);
    *(undefined4 *)(puVar5 + 0xb) = 5;
    puVar5 = (undefined8 *)(lVar8 + 0x28);
  }
  else {
    *(uint *)(puVar5 + 0xb) = uVar1;
    puVar5 = (undefined8 *)(puVar5[1] + (ulong)uVar1 * 8);
  }
  puVar5 = (undefined8 *)*puVar5;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)(param_1 + 0x648);
  iVar7 = *(int *)(param_1 + 0x648);
  lVar8 = (long)iVar7;
  if ((int)(*(uint *)(param_1 + 0x64c) & 0x7fffffff) <= iVar7) {
    FUN_031c25b4(param_1 + 0x640,PTR_PTR_047d1a50,lVar8 + 1);
    iVar7 = *(int *)(param_1 + 0x648);
  }
  *(undefined8 **)(*(long *)(param_1 + 0x640) + (long)iVar7 * 8) = puVar5;
  *(char **)(param_1 + 0x720) = "hknpSimulationThreadContext::m_highPriorityCommandBlockStream";
  *(long *)(param_1 + 0x490) = param_1 + 0x50;
  *(long *)(param_1 + 0x498) = param_1 + 0x160;
  *(long *)(param_1 + 0x4a0) = param_1 + 0x270;
  *(int *)(param_1 + 0x648) = (int)(lVar8 + 1);
  *(long *)(param_1 + 0x4a8) = param_1 + 0x380;
  local_38 = 0x80;
  puVar6 = (undefined4 *)(**(code **)puVar2)(0,&local_38,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(puVar6,"hknpManifoldBuffer");
  }
  *puVar6 = 0xffffff;
  *(undefined2 *)(puVar6 + 1) = 0;
  puVar6[2] = 0;
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined8 *)(puVar6 + 0xe) = 0;
  puVar6[0x1d] = 0;
  *(undefined2 *)(puVar6 + 0x1e) = 0;
  *(undefined8 *)(puVar6 + 0x17) = 0;
  *(undefined8 *)(puVar6 + 0x19) = 0;
  puVar6[0x1b] = 0;
  *(undefined1 *)((long)puVar6 + 0x7b) = 1;
  lVar8 = *(long *)(param_1 + 0x4b0);
  *(undefined4 **)(param_1 + 0x4b0) = puVar6;
  if (lVar8 != 0) {
    (**(code **)(puVar2 + 8))(0,lVar8,0);
  }
  return;
}



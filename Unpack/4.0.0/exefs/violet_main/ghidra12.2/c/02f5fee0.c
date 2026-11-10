/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f5fee0; name: FUN_02f5fee0
 */


void FUN_02f5fee0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  plVar2 = (long *)*param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = plVar2;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  uVar1 = *(int *)(param_2 + 0xb) - 1;
  if (*(int *)(param_2 + 0xb) < 1) {
    lVar4 = param_2[1];
    (**(code **)(*plVar2 + 0x20))(plVar2,lVar4,6);
    *(undefined4 *)(param_2 + 0xb) = 5;
    puVar5 = (undefined8 *)(lVar4 + 0x28);
  }
  else {
    *(uint *)(param_2 + 0xb) = uVar1;
    puVar5 = (undefined8 *)(param_2[1] + (ulong)uVar1 * 8);
  }
  puVar5 = (undefined8 *)*puVar5;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)(param_1 + 3);
  iVar3 = *(int *)(param_1 + 3);
  lVar4 = (long)iVar3;
  if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) <= iVar3) {
    FUN_031c25b4(param_1 + 2,PTR_PTR_047d1a50,lVar4 + 1);
    iVar3 = *(int *)(param_1 + 3);
  }
  *(undefined8 **)(param_1[2] + (long)iVar3 * 8) = puVar5;
  *(int *)(param_1 + 3) = (int)(lVar4 + 1);
  param_1[0x1e] = param_3;
  plVar2 = (long *)*param_2;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x20] = plVar2;
  *(undefined1 *)((long)param_1 + 0x10c) = 0;
  uVar1 = *(int *)(param_2 + 0xb) - 1;
  if (*(int *)(param_2 + 0xb) < 1) {
    lVar4 = param_2[1];
    (**(code **)(*plVar2 + 0x20))(plVar2,lVar4,6);
    *(undefined4 *)(param_2 + 0xb) = 5;
    puVar5 = (undefined8 *)(lVar4 + 0x28);
  }
  else {
    *(uint *)(param_2 + 0xb) = uVar1;
    puVar5 = (undefined8 *)(param_2[1] + (ulong)uVar1 * 8);
  }
  puVar5 = (undefined8 *)*puVar5;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)(param_1 + 0x23);
  iVar3 = *(int *)(param_1 + 0x23);
  lVar4 = (long)iVar3;
  if ((int)(*(uint *)((long)param_1 + 0x11c) & 0x7fffffff) <= iVar3) {
    FUN_031c25b4(param_1 + 0x22,PTR_PTR_047d1a50,lVar4 + 1);
    iVar3 = *(int *)(param_1 + 0x23);
  }
  *(undefined8 **)(param_1[0x22] + (long)iVar3 * 8) = puVar5;
  *(int *)(param_1 + 0x23) = (int)(lVar4 + 1);
  param_1[0x3e] = param_3;
  return;
}



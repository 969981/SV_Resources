/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e1ea78; name: FUN_02e1ea78
 */


ulong FUN_02e1ea78(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  *param_2 = *(undefined8 *)(param_1 + 0x198);
  if (*(char *)(param_1 + 0x58) == '\0') {
    uVar8 = 8;
  }
  else {
    uVar10 = 0;
    uVar8 = 8;
    do {
      plVar9 = *(long **)(param_1 + 0x28 + uVar10 * 8);
      uVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
      plVar5 = (long *)(**(code **)(*plVar9 + 0x1d8))(plVar9);
      uVar6 = (**(code **)(*plVar5 + 0x68))();
      puVar1 = (undefined8 *)((long)param_2 + uVar8);
      uVar2 = (int)uVar8 + 0x10;
      *puVar1 = uVar6;
      *(undefined4 *)(puVar1 + 1) = uVar3;
      *(undefined1 *)((long)puVar1 + 0xc) = 0;
      *(char *)((long)puVar1 + 0xd) = (char)uVar10;
      *(undefined2 *)((long)puVar1 + 0xe) = 0;
      lVar7 = (**(code **)(*plVar9 + 0x1d8))(plVar9);
      iVar4 = (*(code *)**(undefined8 **)(lVar7 + 0x40))
                        ((undefined8 *)(lVar7 + 0x40),(long)param_2 + (ulong)uVar2);
      uVar2 = iVar4 + uVar2;
      iVar4 = (**(code **)(*plVar9 + 2000))(plVar9,(long)param_2 + (ulong)uVar2);
      uVar10 = uVar10 + 1;
      uVar8 = (ulong)(iVar4 + uVar2);
    } while (uVar10 < *(byte *)(param_1 + 0x58));
  }
  if (*(char *)(param_1 + 0x90) != '\0') {
    uVar10 = 0;
    do {
      plVar9 = *(long **)(param_1 + 0x60 + uVar10 * 8);
      uVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
      plVar5 = (long *)(**(code **)(*plVar9 + 0x1d8))(plVar9);
      uVar6 = (**(code **)(*plVar5 + 0x68))();
      puVar1 = (undefined8 *)((long)param_2 + uVar8);
      uVar2 = (int)uVar8 + 0x10;
      *puVar1 = uVar6;
      *(undefined4 *)(puVar1 + 1) = uVar3;
      *(undefined1 *)((long)puVar1 + 0xc) = 1;
      *(char *)((long)puVar1 + 0xd) = (char)uVar10;
      *(undefined2 *)((long)puVar1 + 0xe) = 0;
      lVar7 = (**(code **)(*plVar9 + 0x1d8))(plVar9);
      iVar4 = (*(code *)**(undefined8 **)(lVar7 + 0x40))
                        ((undefined8 *)(lVar7 + 0x40),(long)param_2 + (ulong)uVar2);
      uVar2 = iVar4 + uVar2;
      iVar4 = (**(code **)(*plVar9 + 2000))(plVar9,(long)param_2 + (ulong)uVar2);
      uVar10 = uVar10 + 1;
      uVar8 = (ulong)(iVar4 + uVar2);
    } while (uVar10 < *(byte *)(param_1 + 0x90));
  }
  if (*(char *)(param_1 + 200) != '\0') {
    uVar10 = 0;
    do {
      plVar9 = *(long **)(param_1 + 0x98 + uVar10 * 8);
      uVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
      plVar5 = (long *)(**(code **)(*plVar9 + 0x1d8))(plVar9);
      uVar6 = (**(code **)(*plVar5 + 0x68))();
      puVar1 = (undefined8 *)((long)param_2 + uVar8);
      uVar2 = (int)uVar8 + 0x10;
      *puVar1 = uVar6;
      *(undefined4 *)(puVar1 + 1) = uVar3;
      *(undefined1 *)((long)puVar1 + 0xc) = 2;
      *(char *)((long)puVar1 + 0xd) = (char)uVar10;
      *(undefined2 *)((long)puVar1 + 0xe) = 0;
      lVar7 = (**(code **)(*plVar9 + 0x1d8))(plVar9);
      iVar4 = (*(code *)**(undefined8 **)(lVar7 + 0x40))
                        ((undefined8 *)(lVar7 + 0x40),(long)param_2 + (ulong)uVar2);
      uVar2 = iVar4 + uVar2;
      iVar4 = (**(code **)(*plVar9 + 2000))(plVar9,(long)param_2 + (ulong)uVar2);
      uVar10 = uVar10 + 1;
      uVar8 = (ulong)(iVar4 + uVar2);
    } while (uVar10 < *(byte *)(param_1 + 200));
  }
  if (*(char *)(param_1 + 0x100) != '\0') {
    uVar10 = 0;
    do {
      plVar9 = *(long **)(param_1 + 0xd0 + uVar10 * 8);
      uVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
      plVar5 = (long *)(**(code **)(*plVar9 + 0x1d8))(plVar9);
      uVar6 = (**(code **)(*plVar5 + 0x68))();
      puVar1 = (undefined8 *)((long)param_2 + uVar8);
      uVar2 = (int)uVar8 + 0x10;
      *puVar1 = uVar6;
      *(undefined4 *)(puVar1 + 1) = uVar3;
      *(undefined1 *)((long)puVar1 + 0xc) = 3;
      *(char *)((long)puVar1 + 0xd) = (char)uVar10;
      *(undefined2 *)((long)puVar1 + 0xe) = 0;
      lVar7 = (**(code **)(*plVar9 + 0x1d8))(plVar9);
      iVar4 = (*(code *)**(undefined8 **)(lVar7 + 0x40))
                        ((undefined8 *)(lVar7 + 0x40),(long)param_2 + (ulong)uVar2);
      uVar2 = iVar4 + uVar2;
      iVar4 = (**(code **)(*plVar9 + 2000))(plVar9,(long)param_2 + (ulong)uVar2);
      uVar10 = uVar10 + 1;
      uVar8 = (ulong)(iVar4 + uVar2);
    } while (uVar10 < *(byte *)(param_1 + 0x100));
  }
  if (*(char *)(param_1 + 0x138) != '\0') {
    uVar10 = 0;
    do {
      plVar9 = *(long **)(param_1 + 0x108 + uVar10 * 8);
      uVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
      plVar5 = (long *)(**(code **)(*plVar9 + 0x1d8))(plVar9);
      uVar6 = (**(code **)(*plVar5 + 0x68))();
      puVar1 = (undefined8 *)((long)param_2 + uVar8);
      uVar2 = (int)uVar8 + 0x10;
      *puVar1 = uVar6;
      *(undefined4 *)(puVar1 + 1) = uVar3;
      *(undefined1 *)((long)puVar1 + 0xc) = 4;
      *(char *)((long)puVar1 + 0xd) = (char)uVar10;
      *(undefined2 *)((long)puVar1 + 0xe) = 0;
      lVar7 = (**(code **)(*plVar9 + 0x1d8))(plVar9);
      iVar4 = (*(code *)**(undefined8 **)(lVar7 + 0x40))
                        ((undefined8 *)(lVar7 + 0x40),(long)param_2 + (ulong)uVar2);
      uVar2 = iVar4 + uVar2;
      iVar4 = (**(code **)(*plVar9 + 2000))(plVar9,(long)param_2 + (ulong)uVar2);
      uVar10 = uVar10 + 1;
      uVar8 = (ulong)(iVar4 + uVar2);
    } while (uVar10 < *(byte *)(param_1 + 0x138));
  }
  return uVar8;
}



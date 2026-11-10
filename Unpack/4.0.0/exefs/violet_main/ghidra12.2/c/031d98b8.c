/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d98b8; name: FUN_031d98b8
 */


void FUN_031d98b8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  *(uint *)(param_1 + 0x18) = -(uint)(*(int *)(param_1 + 0x30) < 1);
  iVar3 = *(int *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < iVar3) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
      (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),*puVar1,puVar1[1]);
      iVar3 = *(int *)(param_1 + 0x40);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < iVar3);
  }
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  plVar2 = *(long **)(param_1 + 8);
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar5 = 0;
    do {
      (**(code **)(*plVar2 + 0x20))
                (plVar2,*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar5 * 8),
                 *(undefined8 *)(param_1 + 0x10));
      lVar5 = lVar5 + 1;
      plVar2 = *(long **)(param_1 + 8);
    } while (lVar5 < *(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(long *)(param_1 + 0x28) != 0)) {
    (**(code **)(*plVar2 + 0x20))
              (plVar2,*(long *)(param_1 + 0x28),(ulong)*(uint *)(param_1 + 0x34) << 3);
    plVar2 = *(long **)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    (**(code **)(*plVar2 + 0x20))
              (plVar2,*(long *)(param_1 + 0x38),(ulong)*(uint *)(param_1 + 0x44) << 4);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



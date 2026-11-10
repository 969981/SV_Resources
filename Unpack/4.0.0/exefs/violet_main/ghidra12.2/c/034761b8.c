/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034761b8; name: FUN_034761b8
 */


undefined4 FUN_034761b8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 == (long *)0x0) {
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x50) == 0) {
      iVar2 = 0x3c;
    }
    else {
      iVar2 = FUN_034762c4(param_1);
      iVar2 = iVar2 + 0x3c;
      plVar4 = *(long **)(param_1 + 0x60);
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 0x5c) + iVar2;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x5c);
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4,param_1,0x44);
    (**(code **)(**(long **)(param_1 + 0x60) + 0x20))();
    *(undefined8 *)(param_1 + 0x60) = 0;
    puVar1 = PTR_DAT_047e2fd0;
    lVar5 = *(long *)(param_1 + 0x48);
    if (*(int *)(param_1 + 0x50) != 0) {
      uVar6 = 0;
      lVar7 = 8;
      do {
        (**(code **)(puVar1 + 0x30))(0,*(undefined8 *)(lVar5 + lVar7));
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
        lVar5 = *(long *)(param_1 + 0x48);
      } while (uVar6 < *(uint *)(param_1 + 0x50));
    }
    if (lVar5 != 0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      (**(code **)(puVar1 + 0x30))(0);
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    (**(code **)(puVar1 + 0x30))(0,param_1);
  }
  return uVar3;
}



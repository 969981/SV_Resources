/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ee59c; name: FUN_004ee59c
 */


undefined8 FUN_004ee59c(long param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long local_58;
  undefined *puStack_50;
  undefined ***local_48;
  undefined **local_40;
  long *plStack_38;
  
  lVar3 = FUN_004a49dc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),param_2);
  puVar1 = PTR_LAB_047cd728;
  uVar6 = 0;
  if (lVar3 != 0) {
    puVar4 = *(ulong **)(lVar3 + 0x30);
    puVar5 = (ulong *)0x0;
    if (puVar4 != (ulong *)0x0) {
      puStack_50 = PTR_LAB_047cd728;
      local_58 = lVar3;
      if (*puVar4 != 0xffffffffffffffff) {
        local_40 = &puStack_50;
        plStack_38 = &local_58;
        local_48 = &local_40;
        std::__call_once(puVar4,&local_48,(_func_void_void_ptr *)&LAB_004ef690);
      }
      puVar5 = *(ulong **)(lVar3 + 0x30);
    }
    uVar7 = *(uint *)(lVar3 + 0x38);
    *param_3 = (char)uVar7;
    param_3[1] = *(int *)(lVar3 + 0x3c) == 3;
    param_3[2] = *(undefined1 *)(*(long *)(lVar3 + 0x78) + 0x4c);
    *(long *)(param_3 + 0x18) = lVar3;
    if (puVar5 != (ulong *)0x0) {
      puStack_50 = puVar1;
      local_58 = lVar3;
      if (*puVar5 != 0xffffffffffffffff) {
        local_40 = &puStack_50;
        plStack_38 = &local_58;
        local_48 = &local_40;
        std::__call_once(puVar5,&local_48,(_func_void_void_ptr *)&LAB_004ef690);
      }
      uVar7 = *(uint *)(lVar3 + 0x38);
    }
    puVar2 = PTR_DAT_047cd750;
    iVar8 = *(int *)(PTR_DAT_047cd750 + (ulong)uVar7 * 4);
    if (iVar8 == 10) {
      plVar9 = *(long **)(param_1 + 0x10);
      uVar6 = FUN_004a5124(lVar3);
      uVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,uVar6);
      *(undefined8 *)(param_3 + 8) = uVar6;
    }
    else {
      puVar5 = *(ulong **)(lVar3 + 0x30);
      if (puVar5 != (ulong *)0x0) {
        puStack_50 = puVar1;
        local_58 = lVar3;
        if (*puVar5 != 0xffffffffffffffff) {
          local_40 = &puStack_50;
          plStack_38 = &local_58;
          local_48 = &local_40;
          std::__call_once(puVar5,&local_48,(_func_void_void_ptr *)&LAB_004ef690);
        }
        iVar8 = *(int *)(puVar2 + (ulong)*(uint *)(lVar3 + 0x38) * 4);
      }
      if (iVar8 == 8) {
        *(code **)(param_3 + 8) = FUN_004ee730;
        uVar6 = FUN_004a86e0(lVar3);
        *(undefined8 *)(param_3 + 0x10) = uVar6;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



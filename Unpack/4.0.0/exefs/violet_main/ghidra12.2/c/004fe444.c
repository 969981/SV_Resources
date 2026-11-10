/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fe444; name: FUN_004fe444
 */


void FUN_004fe444(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 extraout_x1;
  undefined4 uVar8;
  long local_58;
  undefined *puStack_50;
  undefined ***local_48;
  undefined **local_40;
  long *plStack_38;
  
  (**(code **)(**(long **)(param_1 + 0x58) + 0x98))();
  lVar3 = FUN_004a53b0();
  puVar1 = PTR_LAB_047cd728;
  puVar4 = *(ulong **)(lVar3 + 0x30);
  puVar5 = (ulong *)0x0;
  if (puVar4 != (ulong *)0x0) {
    puStack_50 = PTR_LAB_047cd728;
    local_58 = lVar3;
    if (*puVar4 != 0xffffffffffffffff) {
      local_40 = &puStack_50;
      plStack_38 = &local_58;
      local_48 = &local_40;
      std::__call_once(puVar4,&local_48,(_func_void_void_ptr *)&LAB_00500440);
    }
    puVar5 = *(ulong **)(lVar3 + 0x30);
  }
  puVar2 = PTR_DAT_047cd750;
  uVar8 = *(undefined4 *)(PTR_DAT_047cd750 + (ulong)*(uint *)(lVar3 + 0x38) * 4);
  *(undefined4 *)(param_2 + 1) = uVar8;
  if (puVar5 != (ulong *)0x0) {
    puStack_50 = puVar1;
    local_58 = lVar3;
    if (*puVar5 != 0xffffffffffffffff) {
      local_40 = &puStack_50;
      plStack_38 = &local_58;
      local_48 = &local_40;
      std::__call_once(puVar5,&local_48,(_func_void_void_ptr *)&LAB_00500440);
    }
    uVar8 = *(undefined4 *)(puVar2 + (ulong)*(uint *)(lVar3 + 0x38) * 4);
  }
  switch(uVar8) {
  case 1:
  case 3:
  case 6:
  case 8:
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,4);
      if (puVar7 == (undefined8 *)0x0) break;
    }
    else {
      if (*(long *)(lVar3 + 0x70) != 0) {
        FUN_00520d08(lVar3,0,8);
      }
      puVar7 = (undefined8 *)FUN_00520c00(lVar3,8);
    }
    *(undefined4 *)puVar7 = 0;
    break;
  case 2:
  case 4:
  case 5:
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,8);
      if (puVar7 == (undefined8 *)0x0) break;
    }
    else {
      if (*(long *)(lVar3 + 0x70) != 0) {
        FUN_00520d08(lVar3,0,8);
      }
      puVar7 = (undefined8 *)FUN_00520c00(lVar3,8);
    }
    *puVar7 = 0;
    break;
  case 7:
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,1);
      if (puVar7 == (undefined8 *)0x0) break;
    }
    else {
      if (*(long *)(lVar3 + 0x70) != 0) {
        FUN_00520d08(lVar3,0,8);
      }
      puVar7 = (undefined8 *)FUN_00520c00(lVar3,8);
    }
    *(undefined1 *)puVar7 = 0;
    break;
  case 9:
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
      if (puVar7 == (undefined8 *)0x0) break;
    }
    else {
      if (*(long *)(lVar3 + 0x70) != 0) {
        FUN_00520d08(lVar3,0,0x18);
      }
      puVar7 = (undefined8 *)FUN_00520544(lVar3,0x18,PTR_LAB_047cba90);
    }
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    break;
  case 10:
    (**(code **)(**(long **)(param_1 + 0x58) + 0x98))();
    plVar6 = (long *)FUN_004f72a0(extraout_x1,*(undefined8 *)(param_1 + 0x58),lVar3,0);
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,*(undefined8 *)(param_1 + 8));
    break;
  default:
    goto switchD_004fe530_default;
  }
  *param_2 = puVar7;
switchD_004fe530_default:
  return;
}



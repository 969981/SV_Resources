/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02aced58; name: FUN_02aced58
 */


void FUN_02aced58(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined1 *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined **local_78;
  undefined1 *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar4 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar4;
  switch(param_1) {
  case 0:
    local_70 = &DAT_e4d07a996e5ef5e8;
    puStack_68 = &DAT_03c60f6f;
    local_60 = 4;
    local_58 = (undefined **)0x0;
    lVar2 = FUN_00f844f4(lVar4,&local_70);
    FUN_02b68ecc(lVar2 + 0x198,*(undefined1 *)(lVar4 + 0x630));
    break;
  case 1:
    local_90 = &DAT_e4d07a996e5ef5e8;
    puStack_88 = &DAT_03c60f6f;
    local_80 = 4;
    local_78 = (undefined **)0x0;
    lVar4 = FUN_00f844f4(lVar4,&local_90);
    if (*(long *)(lVar4 + 0x1b0) != 0) {
      FUN_021e33d4(*(undefined8 *)(lVar4 + 0x1a0));
      uStack_48 = *(undefined8 *)(lVar4 + 0x1a8);
      local_50 = *(undefined8 *)(lVar4 + 0x1b0);
      local_60 = 0;
      local_58 = &PTR_LAB_04580c30;
      local_40 = 0;
      local_70 = PTR_DAT_047dcc08 + 0x10;
      local_38 = &DAT_03d626d4;
      uStack_30 = 0x7f;
      local_28 = 0;
      puStack_68 = PTR_DAT_047dcc10 + 0x10;
      FUN_0172de20(*(undefined8 *)(lVar4 + 0x1a0),&local_70);
    }
    ppuVar3 = local_78;
    if (local_78 == (undefined **)0x0) {
      return;
    }
    goto LAB_02acee94;
  case 2:
    local_70 = &DAT_e4d07a996e5ef5e8;
    puStack_68 = &DAT_03c60f6f;
    local_60 = 4;
    local_58 = (undefined **)0x0;
    lVar4 = FUN_00f844f4(lVar4,&local_70);
    FUN_021e34b4(lVar4 + 0x1b0,0);
    *(undefined8 *)(lVar4 + 0x1a8) = 0;
    break;
  case 3:
    local_70 = &DAT_e4d07a996e5ef5e8;
    puStack_68 = &DAT_03c60f6f;
    local_60 = 4;
    local_58 = (undefined **)0x0;
    FUN_00f844f4(lVar4,&local_70);
    break;
  default:
    goto switchD_02acedb0_default;
  }
  ppuVar3 = local_58;
  if (local_58 != (undefined **)0x0) {
LAB_02acee94:
    (**(code **)(*ppuVar3 + 0x20))();
  }
switchD_02acedb0_default:
  return;
}



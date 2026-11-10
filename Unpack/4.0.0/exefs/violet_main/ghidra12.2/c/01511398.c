/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01511398; name: FUN_01511398
 */


void FUN_01511398(undefined4 param_1,long param_2,undefined8 param_3,undefined4 param_4,long param_5
                 ,long param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long local_68;
  
  uVar1 = nn::util::BinaryFileHeader::GetAlignment();
  pvVar2 = (void *)FUN_00896e5c(0x241c0,uVar1);
  *(void **)(param_2 + 0x40) = pvVar2;
  memcpy(pvVar2,&DAT_044f3000,0x241c0);
  FUN_00893dbc(param_2,param_3,*(undefined8 *)(param_2 + 0x40));
  if (param_5 == 0) {
    if (param_8 == 0) {
      lVar3 = 0;
      goto LAB_01511454;
    }
    *(long *)(param_2 + 0x80) = param_8;
    *(undefined1 *)(param_2 + 0x3b5) = 0;
LAB_01511510:
    param_5 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_0088562c(param_3,param_4);
    if (param_8 == 0) {
LAB_01511454:
      lVar4 = FUN_00896e78(0x418);
      if (lVar4 != 0) {
        FUN_0088570c(lVar4);
      }
      *(long *)(param_2 + 0x80) = lVar4;
      *(undefined1 *)(param_2 + 0x3b5) = 1;
      uVar1 = FUN_00885540();
      lVar4 = FUN_0088554c(param_3,param_4);
      if (param_5 == 0) {
        plVar10 = *(long **)(param_2 + 0x80);
        uVar1 = FUN_00896e5c(lVar4,uVar1);
        (**(code **)(*plVar10 + 0x10))(plVar10,param_3,uVar1,param_4,0,0,0);
        goto LAB_01511510;
      }
      plVar10 = *(long **)(param_2 + 0x80);
      uVar1 = FUN_00896e5c(lVar4 - lVar3,uVar1);
      (**(code **)(*plVar10 + 0x10))(plVar10,param_3,uVar1,param_4,param_5,param_6,lVar3);
    }
    else {
      *(long *)(param_2 + 0x80) = param_8;
      *(undefined1 *)(param_2 + 0x3b5) = 0;
    }
    lVar3 = lVar3 + param_6;
  }
  FUN_00893228(param_2,param_3,param_5,lVar3);
  pvVar2 = (void *)FUN_00896e78(0x1158);
  *(void **)(param_2 + 600) = pvVar2;
  memset(pvVar2,0,0x1158);
  pvVar2 = (void *)FUN_00896e78(0x128);
  *(void **)(param_2 + 0x260) = pvVar2;
  memset(pvVar2,0,0x128);
  lVar3 = 0;
  uVar9 = 0;
  *(undefined4 *)(param_2 + 0x268) = param_1;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  do {
    FUN_008f0478(&local_a8);
    local_98 = CONCAT44(local_98._4_4_,param_1);
    if (uVar9 == 0x24) {
      uVar6 = 3;
      local_a8._0_5_ = CONCAT14(1,(undefined4)local_a8);
      uVar7 = 3;
      uVar8 = 0x29;
    }
    else {
      uVar6 = (undefined1)*(undefined4 *)(&DAT_03d0f648 + ((ulong)((uint)uVar9 & 0xff) / 3 & 0x7c));
      uVar7 = (undefined1)
              *(undefined4 *)(&DAT_03d0f648 + (ulong)(((uint)uVar9 >> 2 & 0x3f) % 3) * 4);
      uVar8 = (undefined2)(&DAT_03caad50)[uVar9 & 3];
    }
    local_a8._0_2_ = CONCAT11(uVar7,uVar6);
    local_a8 = CONCAT26(uVar8,(undefined6)local_a8);
    FUN_008f1bd8(*(long *)(param_2 + 600) + lVar3,param_3,&local_a8);
    *(undefined8 *)(*(long *)(param_2 + 0x260) + uVar9 * 8) = 0xffffffffffffffff;
    uVar9 = uVar9 + 1;
    lVar3 = lVar3 + 0x78;
  } while (uVar9 != 0x25);
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_008f0470(&local_c8);
  local_c8 = CONCAT44(0x10,(undefined4)local_c8);
  uVar1 = FUN_008f06e0(param_3,&local_c8);
  *(undefined8 *)(param_2 + 0x68) = uVar1;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_008f0470(&local_a8);
  local_a8 = CONCAT44(4,(undefined4)local_a8);
  uVar1 = FUN_008f06e0(param_3,&local_a8);
  *(undefined8 *)(param_2 + 0x70) = uVar1;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_008f0470(&local_a8);
  local_a8 = CONCAT44(8,(undefined4)local_a8);
  uVar1 = FUN_008f06e0(param_3,&local_a8);
  *(undefined8 *)(param_2 + 0x78) = uVar1;
  FUN_0089344c(&local_68,&local_78);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar1 = FUN_00893584(&local_a8,&local_c8,local_68,local_78);
  uVar5 = FUN_00896e5c(uVar1,8);
  FUN_00fac5dc(param_2 + 0x270,uVar5,uVar1);
  FUN_00fad338(param_2 + 0x270,param_3,&local_a8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar1 = FUN_00893584(&local_a8,&local_c8,local_68 + 4,local_78 + 4);
  uVar5 = FUN_00896e5c(uVar1,8);
  FUN_00fac5dc(param_2 + 0x298,uVar5,uVar1);
  FUN_00fad338(param_2 + 0x298,param_3,&local_a8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar1 = FUN_00893584(&local_a8,&local_c8,local_68 + 8,local_78 + 8);
  uVar5 = FUN_00896e5c(uVar1,8);
  FUN_00fac5dc(param_2 + 0x2c0,uVar5,uVar1);
  FUN_00fad338(param_2 + 0x2c0,param_3,&local_a8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar1 = FUN_00893584(&local_a8,&local_c8,local_68 + 0xc,local_78 + 0xc);
  uVar5 = FUN_00896e5c(uVar1,8);
  FUN_00fac5dc(param_2 + 0x2e8,uVar5,uVar1);
  FUN_00fad338(param_2 + 0x2e8,param_3,&local_a8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar1 = FUN_00893584(&local_a8,&local_c8,local_68 + 0x10,local_78 + 0x10);
  uVar5 = FUN_00896e5c(uVar1,8);
  FUN_00fac5dc(param_2 + 0x310,uVar5,uVar1);
  FUN_00fad338(param_2 + 0x310,param_3,&local_a8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar1 = FUN_00893584(&local_a8,&local_c8,local_68 + 0x14,local_78 + 0x14);
  uVar5 = FUN_00896e5c(uVar1,8);
  FUN_00fac5dc(param_2 + 0x338,uVar5,uVar1);
  FUN_00fad338(param_2 + 0x338,param_3,&local_a8);
  FUN_008938d8(param_2,param_3);
  *(undefined1 *)(param_2 + 0x3b4) = 1;
  return;
}



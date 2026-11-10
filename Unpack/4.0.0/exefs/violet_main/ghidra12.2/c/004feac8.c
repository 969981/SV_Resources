/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004feac8; name: FUN_004feac8
 */


void FUN_004feac8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  long *local_b8;
  long lStack_b0;
  ulong local_a8;
  long local_a0;
  undefined *puStack_98;
  undefined **local_90;
  long *plStack_88;
  undefined ***local_70;
  undefined8 uStack_68;
  
  lVar4 = (**(code **)(*param_1 + 0xa0))();
  puVar2 = PTR_DAT_047cd750;
  puVar1 = PTR_LAB_047cd728;
  lStack_b0 = *(long *)(param_2 + 0x50);
  local_a8 = *(ulong *)(lStack_b0 + 0x18);
  uVar8 = *(ulong *)(lStack_b0 + 8);
  if (local_a8 < uVar8) {
    do {
      local_b8 = *(long **)(*(long *)(lStack_b0 + 0x20) + local_a8 * 8);
      if (local_b8 != (long *)0x0) {
        if (local_b8 == *(long **)(*(long *)(lStack_b0 + 0x20) + (local_a8 ^ 1) * 8)) {
          local_b8 = *(long **)(*local_b8 + 0x20);
        }
        goto LAB_004feb54;
      }
      local_a8 = local_a8 + 1;
    } while (uVar8 != local_a8);
    local_b8 = (long *)0x0;
    local_a8 = uVar8;
  }
  else {
    local_b8 = (long *)0x0;
  }
LAB_004feb54:
  if (local_b8 != (long *)0x0) {
    do {
      local_70 = (undefined ***)local_b8[1];
      FUN_00500a68(&local_90,*(undefined8 *)(lVar4 + 0x10),&local_70,0);
      if (local_90 == (undefined **)0x0) {
        pppuVar9 = (undefined ***)local_b8[1];
        uStack_68 = 0;
        local_70 = pppuVar9;
        FUN_00500ef8(&local_90,param_1[10],&local_70);
        ppuVar3 = local_90;
        puVar5 = local_90[1];
        if (puVar5 == (undefined *)0x0) {
          puVar5 = (undefined *)FUN_00500e54(param_1 + 8,pppuVar9);
          *ppuVar3 = puVar5;
          ppuVar3[1] = puVar5;
        }
        puVar10 = (undefined8 *)(puVar5 + 0x20);
        FUN_004fe444(param_1,puVar10);
      }
      else {
        puVar10 = (undefined8 *)(local_90[1] + 0x20);
      }
      (**(code **)(*(long *)param_1[0xb] + 0x98))();
      lVar6 = FUN_004a53b0();
      puVar7 = *(ulong **)(lVar6 + 0x30);
      if ((puVar7 != (ulong *)0x0) &&
         (puStack_98 = puVar1, local_a0 = lVar6, *puVar7 != 0xffffffffffffffff)) {
        local_90 = &puStack_98;
        plStack_88 = &local_a0;
        local_70 = &local_90;
        std::__call_once(puVar7,&local_70,(_func_void_void_ptr *)&LAB_00500440);
      }
      switch(*(undefined4 *)(puVar2 + (ulong)*(uint *)(lVar6 + 0x38) * 4)) {
      case 1:
      case 3:
      case 6:
      case 8:
        *(undefined4 *)*puVar10 = **(undefined4 **)(local_b8[1] + 0x20);
        break;
      case 2:
      case 4:
      case 5:
        *(undefined8 *)*puVar10 = **(undefined8 **)(local_b8[1] + 0x20);
        break;
      case 7:
        *(undefined1 *)*puVar10 = **(undefined1 **)(local_b8[1] + 0x20);
        break;
      case 9:
        FUN_001fcec0(*puVar10,*(undefined8 *)(local_b8[1] + 0x20));
        break;
      case 10:
        (**(code **)(*(long *)*puVar10 + 0x70))
                  ((long *)*puVar10,*(undefined8 *)(local_b8[1] + 0x20));
      }
      FUN_00501a20(&local_b8);
    } while (local_b8 != (long *)0x0);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018640c8; name: FUN_018640c8
 */


void FUN_018640c8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined4 local_c0 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  long local_b0;
  undefined8 local_a8;
  ulong local_a0 [2];
  long local_90;
  long *local_88;
  undefined1 *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  
  if (param_1[8] == 0) {
    if (param_1[9] != 0) {
      lVar12 = param_1[1];
      lVar2 = tpidr_el0;
      if (*(long *)(lVar2 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar2 + 0x30) = DAT_04859430;
      }
      local_b0 = *(long *)(lVar2 + 0x30);
      local_a8 = *(undefined8 *)(lVar2 + 0x38);
      *(long *)(lVar2 + 0x30) = lVar12;
      *(undefined2 *)(lVar2 + 0x38) = 1;
      uVar5 = (**(code **)(*param_1 + 0xa0))(param_1);
      puVar4 = PTR_DAT_047d8b70;
      puVar3 = PTR_DAT_047d4ca0;
      if (uVar5 != 0) {
        lVar12 = 0;
        uVar8 = 0;
        do {
          (**(code **)(*param_1 + 0x80))(&local_80,param_1);
          std::to_string((int)uVar8);
          FUN_01499758(&local_b8,&local_80,local_a0);
          lVar11 = local_90;
          if (((local_a0[0] & 1) != 0) && (local_90 != 0)) {
            plVar13 = *(long **)(lVar2 + 0x30);
            if (plVar13 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar13 = DAT_04859430;
              *(long **)(lVar2 + 0x30) = DAT_04859430;
            }
            uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
            if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
              (**(code **)(*plVar13 + 0x18))(plVar13,lVar11,0,8);
            }
            else {
              FUN_00c48fe8(plVar13,lVar11,0,8);
            }
          }
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if (((*PTR_DAT_047d4c98 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d4cb0,puVar3,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4c98);
          }
          uVar7 = *(undefined8 *)puVar3;
          *(undefined8 *)PTR_DAT_047d4ca8 = uVar7;
          local_70 = 4;
          local_68 = (long *)0x0;
          local_80 = &DAT_e4d07a996e5ef5e8;
          puStack_78 = &DAT_03c60f6f;
          uVar7 = FUN_00f844f4(uVar7,&local_80);
          puVar1 = (undefined8 *)puVar4;
          if (CONCAT44(uStack_b4,local_b8) != 0) {
            puVar1 = (undefined8 *)(CONCAT44(uStack_b4,local_b8) + 0x30);
          }
          local_c0[0] = (undefined4)*puVar1;
          lVar11 = param_1[9];
          uVar9 = (**(code **)(*param_1 + 0x88))(param_1);
          local_a0[0] = (uVar9 & 0xffffffff) << 4;
          FUN_0186458c(uVar7,local_c0,lVar11 + lVar12,local_a0);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if ((long *)CONCAT44(uStack_b4,local_b8) != (long *)0x0) {
            (**(code **)(*(long *)CONCAT44(uStack_b4,local_b8) + 0x20))();
          }
          uVar8 = uVar8 + 1;
          lVar12 = lVar12 + 8;
        } while (uVar5 != uVar8);
      }
      *(long *)(lVar2 + 0x30) = local_b0;
      *(undefined2 *)(lVar2 + 0x38) = (undefined2)local_a8;
    }
  }
  else {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    uVar7 = *(undefined8 *)PTR_DAT_047d4ca0;
    local_80 = &DAT_e4d07a996e5ef5e8;
    puStack_78 = &DAT_03c60f6f;
    local_70 = 4;
    local_68 = (long *)0x0;
    *(undefined8 *)PTR_DAT_047d4ca8 = uVar7;
    uVar7 = FUN_00f844f4(uVar7,&local_80);
    (**(code **)(*param_1 + 0x80))(local_a0,param_1);
    local_b8 = (undefined4)local_a0[0];
    uVar8 = (**(code **)(*param_1 + 0x88))(param_1);
    local_b0 = (uVar8 & 0xffffffff) << 4;
    FUN_0186458c(uVar7,&local_b8,param_1 + 8,&local_b0);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}



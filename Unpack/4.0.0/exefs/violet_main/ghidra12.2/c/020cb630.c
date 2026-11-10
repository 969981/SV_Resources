/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020cb630; name: FUN_020cb630
 */


void FUN_020cb630(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  byte local_d0;
  undefined7 uStack_cf;
  long local_c0;
  long *local_b8;
  byte local_b0;
  undefined7 uStack_af;
  long local_a0;
  long *local_98;
  undefined1 auStack_90 [24];
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  lVar2 = tpidr_el0;
  if (*(long *)(lVar2 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar2 + 0x30) = DAT_04859430;
  }
  local_70 = *(undefined8 *)(lVar2 + 0x30);
  local_68 = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(lVar2 + 0x30) = uVar7;
  *(undefined2 *)(lVar2 + 0x38) = 1;
  lVar8 = 0;
  do {
    lVar1 = lVar8 + 1;
    std::to_string((int)lVar1);
    FUN_010c7d18(&local_d0,"ProbabilityKey_",&local_b0);
    FUN_0135d26c(auStack_90,&local_d0);
    if ((long *)CONCAT71(uStack_cf,local_d0) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT71(uStack_cf,local_d0) + 0x20))();
    }
    lVar3 = local_a0;
    if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
      plVar9 = *(long **)(lVar2 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar2 + 0x30) = DAT_04859430;
      }
      uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if ((uVar5 & 1) != 0) {
        lVar6 = FUN_00c4e600();
        if (0 < *(int *)(lVar6 + 0x12c8)) {
          FUN_00c48fe8(plVar9,lVar3,0,8);
          goto LAB_020cb6f8;
        }
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar3,0,8);
    }
LAB_020cb6f8:
    FUN_00c97fdc(&local_b0,param_1,auStack_90);
    if (CONCAT71(uStack_af,local_b0) != 0) {
      uVar7 = FUN_00d09600();
      *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60) + lVar8 * 8) = uVar7;
    }
    std::to_string((int)lVar1);
    FUN_00d98b24(&local_b8,"ActionIDKey_",&local_d0);
    FUN_0135d26c(&local_b0,&local_b8);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    lVar3 = local_c0;
    if (((local_d0 & 1) != 0) && (local_c0 != 0)) {
      plVar9 = *(long **)(lVar2 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar2 + 0x30) = DAT_04859430;
      }
      uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if ((uVar5 & 1) != 0) {
        lVar6 = FUN_00c4e600();
        if (0 < *(int *)(lVar6 + 0x12c8)) {
          FUN_00c48fe8(plVar9,lVar3,0,8);
          goto LAB_020cb75c;
        }
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar3,0,8);
    }
LAB_020cb75c:
    FUN_00c97fdc(&local_d0,param_1,&local_b0);
    if (CONCAT71(uStack_cf,local_d0) != 0) {
      uVar7 = FUN_00d09600();
      *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 100) + lVar8 * 8) = uVar7;
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    lVar8 = lVar1;
    if (lVar1 == 4) {
      *(undefined8 *)(lVar2 + 0x30) = local_70;
      *(undefined2 *)(lVar2 + 0x38) = (undefined2)local_68;
      return;
    }
  } while( true );
}



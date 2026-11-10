/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020c1090; name: FUN_020c1090
 */


void FUN_020c1090(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  byte local_80;
  undefined7 uStack_7f;
  long local_70;
  long *local_68;
  
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = &DAT_cbf29ce484222645;
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  local_90 = *(undefined8 *)(lVar1 + 0x30);
  local_88 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x30) = uVar9;
  *(undefined2 *)(lVar1 + 0x38) = 1;
  lVar12 = *(long *)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar12 == lVar11) {
    lVar11 = lVar12;
  }
  else {
    do {
      FUN_00c98090(&local_80,lVar12);
      lVar13 = CONCAT71(uStack_7f,local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (lVar13 == -0xd52fe1dc84be10b) goto LAB_020c118c;
      lVar12 = lVar12 + 0x10;
    } while (lVar11 != lVar12);
    lVar12 = lVar11;
LAB_020c118c:
    lVar11 = *(long *)(param_1 + 0x10);
  }
  if ((lVar12 != 0) && (lVar11 != lVar12)) {
    FUN_00d09648(&local_80);
    uVar9 = CONCAT71(uStack_7f,local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = uVar9;
    lVar11 = *(long *)(param_1 + 0x10);
  }
  lVar12 = *(long *)(param_1 + 8);
  if (lVar12 != lVar11) {
    do {
      FUN_00c98090(&local_80,lVar12);
      lVar13 = CONCAT71(uStack_7f,local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (lVar13 == 0x220afd46ff73e055) goto LAB_020c1234;
      lVar12 = lVar12 + 0x10;
    } while (lVar11 != lVar12);
    lVar12 = lVar11;
LAB_020c1234:
    lVar11 = *(long *)(param_1 + 0x10);
  }
  if ((lVar12 != 0) && (lVar11 != lVar12)) {
    FUN_00d09648(&local_80,lVar12);
    uVar9 = CONCAT71(uStack_7f,local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = uVar9;
  }
  plVar10 = (long *)PTR_DAT_047d8b70;
  lVar12 = 0;
  do {
    lVar11 = lVar12 + 1;
    std::to_string((int)lVar11);
    FUN_010c7d18(&local_98,"ProbabilityKey_",&local_80);
    plVar3 = local_98;
    plVar14 = plVar10;
    if (local_98 != (long *)0x0) {
      plVar14 = local_98 + 6;
    }
    lVar13 = *plVar14;
    if ((local_98 != (long *)0x0) &&
       ((**(code **)(*local_98 + 0x18))(local_98), local_98 != (long *)0x0)) {
      (**(code **)(*local_98 + 0x20))();
    }
    lVar6 = local_70;
    if (((local_80 & 1) != 0) && (local_70 != 0)) {
      plVar14 = *(long **)(lVar1 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar14 = DAT_04859430;
        *(long **)(lVar1 + 0x30) = DAT_04859430;
        plVar10 = (long *)PTR_DAT_047d8b70;
      }
      uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar14,lVar6,0,8);
      }
    }
    lVar6 = *(long *)(param_1 + 8);
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar6 == lVar8) {
      lVar13 = lVar6;
    }
    else {
      do {
        FUN_00c98090(&local_80,lVar6);
        lVar2 = CONCAT71(uStack_7f,local_80);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (lVar2 == lVar13) goto LAB_020c131c;
        lVar6 = lVar6 + 0x10;
      } while (lVar8 != lVar6);
      lVar6 = lVar8;
LAB_020c131c:
      lVar13 = *(long *)(param_1 + 0x10);
    }
    if ((lVar6 != 0) && (lVar13 != lVar6)) {
      FUN_00d09648(&local_80);
      uVar9 = CONCAT71(uStack_7f,local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x68) + lVar12 * 8) = uVar9;
    }
    std::to_string((int)lVar11);
    FUN_00d98b24(&local_98,"ActionIDKey_",&local_80);
    plVar4 = local_98;
    plVar14 = plVar10;
    if (local_98 != (long *)0x0) {
      plVar14 = local_98 + 6;
    }
    lVar13 = *plVar14;
    if ((local_98 != (long *)0x0) &&
       ((**(code **)(*local_98 + 0x18))(local_98), local_98 != (long *)0x0)) {
      (**(code **)(*local_98 + 0x20))();
    }
    lVar6 = local_70;
    if (((local_80 & 1) != 0) && (local_70 != 0)) {
      plVar14 = *(long **)(lVar1 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar14 = DAT_04859430;
        *(long **)(lVar1 + 0x30) = DAT_04859430;
        plVar10 = (long *)PTR_DAT_047d8b70;
      }
      uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar14,lVar6,0,8);
      }
    }
    lVar6 = *(long *)(param_1 + 8);
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar6 == lVar8) {
      lVar13 = lVar6;
    }
    else {
      do {
        FUN_00c98090(&local_80,lVar6);
        lVar2 = CONCAT71(uStack_7f,local_80);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (lVar2 == lVar13) goto LAB_020c13f8;
        lVar6 = lVar6 + 0x10;
      } while (lVar8 != lVar6);
      lVar6 = lVar8;
LAB_020c13f8:
      plVar10 = (long *)PTR_DAT_047d8b70;
      lVar13 = *(long *)(param_1 + 0x10);
    }
    if ((lVar6 != 0) && (lVar13 != lVar6)) {
      FUN_00d09648(&local_80);
      uVar9 = CONCAT71(uStack_7f,local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c) + lVar12 * 8) = uVar9;
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3);
    }
    lVar12 = lVar11;
    if (lVar11 == 4) {
      *(undefined8 *)(lVar1 + 0x30) = local_90;
      *(undefined2 *)(lVar1 + 0x38) = (undefined2)local_88;
      return;
    }
  } while( true );
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0143f8a8; name: FUN_0143f8a8
 */


void FUN_0143f8a8(long param_1,undefined4 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long **pplVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long **pplVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plVar13;
  long *local_98;
  long lStack_90;
  long local_88;
  long *local_80;
  long **local_78;
  long **local_70;
  long **local_68;
  long *local_60;
  long *local_58;
  long *local_38;
  
  plVar7 = (long *)**(undefined8 **)(param_1 + 0x8c0);
  plVar13 = (long *)(*(undefined8 **)(param_1 + 0x8c0))[1];
  if ((plVar7 != plVar13) && ((char)plVar7[4] == '\0')) {
    do {
      plVar8 = plVar7 + 6;
      if (plVar13 == plVar8) {
        plVar7 = plVar13;
        break;
      }
      plVar1 = plVar7 + 10;
      plVar7 = plVar8;
    } while ((char)*plVar1 == '\0');
  }
  plVar8 = (long *)0x0;
  if (plVar13 != plVar7) {
    plVar8 = plVar7;
  }
  *(undefined4 *)((long)plVar8 + 0x24) = param_2;
  pplVar4 = (long **)*plVar8;
  pplVar10 = (long **)plVar8[1];
  *(undefined1 *)(plVar8 + 4) = 0;
  plVar7 = (long *)plVar8[2];
  plVar13 = (long *)plVar8[3];
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  local_78 = &local_98;
  local_98 = (long *)0x0;
  local_70 = pplVar4;
  local_68 = pplVar10;
  local_60 = plVar7;
  local_58 = plVar13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  FUN_0116c820(param_1,&local_78,0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  plVar7 = local_98;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  uVar5 = plVar7[0x1a];
  if (((~(uint)uVar5 & 0xf) == 0) != ((uVar5 & 0xe) == 0xe)) {
    (**(code **)(*plVar7 + 0xe0))(plVar7,(uVar5 & 0xe) == 0xe);
    uVar5 = plVar7[0x1a];
  }
  plVar7[0x1a] = uVar5 | 1;
  (**(code **)(*plVar7 + 0x138))(plVar7);
  *(undefined1 *)(param_1 + 0xb39) = 1;
  puVar11 = *(undefined4 **)(param_1 + 0xb50);
  plVar7 = (long *)(param_1 + 0xb60);
  if (puVar11 == *(undefined4 **)(param_1 + 0xb58)) {
    uVar9 = *(ulong *)(param_1 + 0xb68);
    lVar12 = (long)puVar11 - *(long *)(param_1 + 0xb48) >> 2;
    uVar5 = lVar12 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = (long)*(undefined4 **)(param_1 + 0xb58) - *(long *)(param_1 + 0xb48);
    uVar6 = lVar3 >> 1;
    local_60 = (long *)0x0;
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if (uVar9 >> 1 <= (ulong)(lVar3 >> 2)) {
      uVar5 = uVar9;
    }
    local_58 = plVar7;
    if (uVar5 == 0) {
      pplVar4 = (long **)0x0;
    }
    else {
      pplVar4 = (long **)(**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar5 << 2,4);
      if (pplVar4 == (long **)0x0) {
        (**(code **)(*(long *)*plVar7 + 0xe8))();
      }
    }
    pplVar10 = (long **)((long)pplVar4 + lVar12 * 4);
    local_60 = (long *)((long)pplVar4 + uVar5 * 4);
    lVar12 = *plVar7;
    local_78 = pplVar4;
    local_70 = pplVar10;
    local_68 = pplVar10;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      *(undefined4 *)pplVar10 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_0143fe70;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *(undefined4 *)pplVar10 = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      pplVar10 = local_68;
    }
    local_68 = (long **)((long)pplVar10 + 4);
    FUN_01440030(plVar7,*(undefined8 *)(param_1 + 0xb48),*(undefined8 *)(param_1 + 0xb50),&local_70)
    ;
    pplVar10 = *(long ***)(param_1 + 0xb48);
    *(long ***)(param_1 + 0xb48) = local_70;
    pplVar4 = *(long ***)(param_1 + 0xb50);
    *(long ***)(param_1 + 0xb50) = local_68;
    plVar7 = *(long **)(param_1 + 0xb58);
    *(long **)(param_1 + 0xb58) = local_60;
    local_68 = pplVar4;
    if ((long)pplVar4 - (long)pplVar10 != 0) {
      local_68 = (long **)((long)pplVar4 +
                          (((long)pplVar4 - (long)pplVar10) - 4U >> 2 ^ 0xffffffffffffffff) * 4);
    }
    local_78 = pplVar10;
    local_70 = pplVar10;
    local_60 = plVar7;
    if (pplVar10 != (long **)0x0) {
      plVar13 = (long *)*local_58;
      uVar5 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar5 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,pplVar10,(long)plVar7 - (long)pplVar10,4);
      }
      else {
        FUN_00c48fe8(plVar13,pplVar10,(long)plVar7 - (long)pplVar10,4);
      }
    }
  }
  else {
    lVar12 = *plVar7;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      *puVar11 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0143fe70:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar11 = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    *(undefined4 **)(param_1 + 0xb50) = puVar11 + 1;
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    local_98 = (long *)*plVar8;
    lStack_90 = plVar8[1];
    local_88 = plVar8[2];
    local_80 = (long *)plVar8[3];
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x18))();
    }
    pplVar4 = (long **)*plVar8;
    lVar3 = plVar8[1];
    lVar12 = plVar8[2];
    plVar7 = (long *)plVar8[3];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    local_78 = &local_38;
    local_38 = (long *)0x0;
    local_70 = pplVar4;
    local_68 = (long **)lVar3;
    local_60 = (long *)lVar12;
    local_58 = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    FUN_00f30ef8(param_1,&local_78,0);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    plVar13 = local_38;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    local_78 = (long **)plVar13[0x11];
    local_70 = (long **)plVar13[0x12];
    local_68 = (long **)plVar13[0x13];
    local_60 = (long *)plVar13[0x14];
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x18))();
    }
    local_38 = (long *)CONCAT44(local_38._4_4_,param_2);
    (**(code **)(param_1 + 0x150))(param_1 + 0x170,&local_38,&local_98,&local_78);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
  }
  FUN_0143fe84(param_1);
  return;
}



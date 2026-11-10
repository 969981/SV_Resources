/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d0cb8; name: FUN_015d0cb8
 */


void FUN_015d0cb8(undefined8 *param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  long local_70;
  undefined8 *puStack_68;
  
  lVar5 = (**(code **)(**(long **)(param_2 + 0x40) + 0x10))(*(long **)(param_2 + 0x40),param_4);
  if (lVar5 == 0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    if ((*(long **)(param_2 + 0x60) != (long *)0x0) &&
       (*(long *)(param_2 + 0x10) == *(long *)(param_2 + 0x18))) {
      (**(code **)(**(long **)(param_2 + 0x60) + 0x10))();
    }
    puVar13 = *(undefined4 **)(param_2 + 0x10);
    puVar1 = (undefined8 *)(param_2 + 0x20);
    if (puVar13 < *(undefined4 **)(param_2 + 0x18)) {
      uVar12 = *puVar1;
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 != 0) {
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_015d105c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      }
      uVar3 = *param_3;
      *(long *)(puVar13 + 2) = lVar5;
      *(undefined8 *)(puVar13 + 4) = param_4;
      *puVar13 = uVar3;
      *(undefined8 *)(puVar13 + 6) = param_4;
      *(undefined1 *)(puVar13 + 8) = 0;
      *(undefined1 *)(puVar13 + 0xb) = 0;
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      puVar13 = puVar13 + 0xc;
      *(undefined4 **)(param_2 + 0x10) = puVar13;
    }
    else {
      uVar10 = *(ulong *)(param_2 + 0x28);
      lVar6 = (long)puVar13 - *(long *)(param_2 + 8) >> 4;
      if (0x7ffffffffffffffe < uVar10) {
        uVar10 = 0x7fffffffffffffff;
      }
      uVar2 = lVar6 * -0x5555555555555555 + 1;
      if (uVar10 < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar8 = (long)*(undefined4 **)(param_2 + 0x18) - *(long *)(param_2 + 8) >> 4;
      local_70 = 0;
      uVar9 = lVar8 * 0x5555555555555556;
      if (uVar2 <= uVar9) {
        uVar2 = uVar9;
      }
      if (uVar10 >> 1 <= (ulong)(lVar8 * -0x5555555555555555)) {
        uVar2 = uVar10;
      }
      puStack_68 = puVar1;
      if (uVar2 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar2 * 0x30,8);
        if (lVar8 == 0) {
          (**(code **)(*(long *)*puVar1 + 0xe8))();
        }
      }
      puVar13 = (undefined4 *)(lVar8 + lVar6 * 0x10);
      local_70 = lVar8 + uVar2 * 0x30;
      uVar12 = *puVar1;
      local_88 = lVar8;
      local_80 = puVar13;
      local_78 = puVar13;
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 != 0) {
        if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_015d105c;
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar12;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      }
      lVar8 = lVar8 + lVar6 * 0x10;
      *puVar13 = *param_3;
      *(long *)(lVar8 + 8) = lVar5;
      *(undefined8 *)(lVar8 + 0x10) = param_4;
      *(undefined8 *)(lVar8 + 0x18) = param_4;
      *(undefined1 *)(lVar8 + 0x20) = 0;
      *(undefined1 *)(lVar8 + 0x2c) = 0;
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      local_78 = local_78 + 0xc;
      FUN_015f2470(param_2 + 8,&local_88);
      lVar5 = local_88;
      puVar13 = local_78;
      while (local_78 = puVar13, local_78 != local_80) {
        puVar13 = local_78 + -0xc;
        if (*(char *)(local_78 + -4) != '\0') {
          *(undefined1 *)(local_78 + -4) = 0;
        }
      }
      if (local_88 != 0) {
        lVar6 = local_70 - local_88;
        plVar11 = (long *)*puStack_68;
        uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,lVar5,lVar6,8);
        }
        else {
          FUN_00c48fe8(plVar11,lVar5,lVar6,8);
        }
      }
      puVar13 = *(undefined4 **)(param_2 + 0x10);
    }
    puVar13 = puVar13 + -0xc;
  }
  *param_1 = puVar13;
  return;
}



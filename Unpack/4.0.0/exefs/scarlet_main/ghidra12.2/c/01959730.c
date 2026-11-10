/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01959730; name: FUN_01959730
 */


void FUN_01959730(long param_1,ushort *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ushort local_78;
  undefined6 uStack_76;
  undefined8 local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  
  plVar12 = (long *)(param_1 + 0x80);
  pbVar4 = (byte *)*plVar12;
  pbVar6 = *(byte **)(param_1 + 0x88);
  local_78 = *param_2;
  pbVar10 = pbVar4;
  if (pbVar4 == pbVar6) {
LAB_01959798:
    if (pbVar10 != pbVar6) {
      if (pbVar10[0x10] != 0) {
        return;
      }
      pbVar10[0x10] = 1;
      goto LAB_01959968;
    }
  }
  else {
    do {
      if (((ushort)*pbVar10 == (local_78 & 0xff)) && ((ushort)pbVar10[1] == local_78 >> 8))
      goto LAB_01959798;
      pbVar10 = pbVar10 + 0x18;
    } while (pbVar6 != pbVar10);
  }
  local_70 = 0;
  local_68 = 1;
  if (pbVar6 < *(byte **)(param_1 + 0x90)) {
    FUN_01959acc(plVar12,&local_78);
  }
  else {
    uVar11 = *(ulong *)(param_1 + 0xa0);
    lVar7 = (long)pbVar6 - (long)pbVar4 >> 3;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar1 = lVar7 * -0x5555555555555555 + 1;
    if (uVar11 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = (long)*(byte **)(param_1 + 0x90) - (long)pbVar4 >> 3;
    uVar8 = lVar5 * 0x5555555555555556;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (uVar11 >> 1 <= (ulong)(lVar5 * -0x5555555555555555)) {
      uVar1 = uVar11;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(**(long **)(param_1 + 0x98) + 0x10))
                        (*(long **)(param_1 + 0x98),uVar1 * 0x18,8);
      if (lVar5 == 0) {
        (**(code **)(**(long **)(param_1 + 0x98) + 0xe8))();
      }
    }
    puVar16 = (undefined8 *)(lVar5 + lVar7 * 8);
    uVar13 = *(undefined8 *)(param_1 + 0x98);
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 == 0) {
      puVar16[1] = local_70;
      puVar16[2] = CONCAT71(uStack_67,local_68);
      *puVar16 = CONCAT62(uStack_76,local_78);
    }
    else {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_01959aac:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar13;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *puVar16 = CONCAT62(uStack_76,local_78);
      puVar16[1] = local_70;
      puVar16[2] = CONCAT71(uStack_67,local_68);
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    lVar7 = *(long *)(param_1 + 0x80);
    lVar14 = *(long *)(param_1 + 0x88);
    puVar15 = puVar16;
    if (lVar14 != lVar7) {
      do {
        uVar13 = *(undefined8 *)(param_1 + 0x98);
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar3 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar3 == 0) {
          uVar13 = *(undefined8 *)(lVar14 + -0x18);
          uVar9 = *(undefined8 *)(lVar14 + -8);
          puVar15[-2] = *(undefined8 *)(lVar14 + -0x10);
          puVar15[-1] = uVar9;
          puVar15[-3] = uVar13;
        }
        else {
          if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_01959aac;
          *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar13;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          uVar9 = *(undefined8 *)(lVar14 + -8);
          uVar13 = *(undefined8 *)(lVar14 + -0x10);
          puVar15[-3] = *(undefined8 *)(lVar14 + -0x18);
          puVar15[-2] = uVar13;
          puVar15[-1] = uVar9;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        }
        lVar14 = lVar14 + -0x18;
        puVar15 = puVar15 + -3;
      } while (lVar7 != lVar14);
      lVar7 = *plVar12;
    }
    *(undefined8 **)(param_1 + 0x80) = puVar15;
    *(undefined8 **)(param_1 + 0x88) = puVar16 + 3;
    lVar14 = *(long *)(param_1 + 0x90);
    *(ulong *)(param_1 + 0x90) = lVar5 + uVar1 * 0x18;
    if (lVar7 != 0) {
      plVar12 = *(long **)(param_1 + 0x98);
      lVar14 = lVar14 - lVar7;
      uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar11 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar7,lVar14,8);
      }
      else {
        FUN_00c48fe8(plVar12,lVar7,lVar14,8);
      }
    }
  }
LAB_01959968:
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



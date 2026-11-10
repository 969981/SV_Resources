/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0120200c; name: FUN_0120200c
 */


void FUN_0120200c(long param_1,int param_2)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  
  puVar2 = (ulong *)(param_1 + 0x19c88);
  plVar13 = (long *)*puVar2;
  plVar3 = *(long **)(param_1 + 0x19c90);
  plVar11 = plVar13;
  if ((plVar13 != plVar3) && (*plVar13 != (long)param_2)) {
    plVar10 = plVar13;
    do {
      if (plVar3 + -1 == plVar10) {
        plVar11 = plVar3;
        break;
      }
      plVar11 = plVar10 + 1;
      plVar1 = plVar10 + 1;
      plVar10 = plVar11;
    } while (*plVar1 != (long)param_2);
  }
  if (plVar3 == plVar11) {
    if (plVar3 < *(long **)(param_1 + 0x19c98)) {
      uVar12 = *(undefined8 *)(param_1 + 0x19ca0);
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        *plVar3 = (long)param_2;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_012023fc;
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *plVar3 = (long)param_2;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      *(long **)(param_1 + 0x19c90) = plVar3 + 1;
    }
    else {
      uVar9 = *(ulong *)(param_1 + 0x19ca8);
      lVar5 = (long)plVar3 - (long)plVar13 >> 3;
      uVar6 = lVar5 + 1;
      if (0x7ffffffffffffffe < uVar9) {
        uVar9 = 0x7fffffffffffffff;
      }
      if (uVar9 < uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar7 = (long)*(long **)(param_1 + 0x19c98) - (long)plVar13;
      uVar8 = lVar7 >> 2;
      if (uVar6 <= uVar8) {
        uVar6 = uVar8;
      }
      if (uVar9 >> 1 <= (ulong)(lVar7 >> 3)) {
        uVar6 = uVar9;
      }
      if (uVar6 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = (**(code **)(**(long **)(param_1 + 0x19ca0) + 0x10))
                          (*(long **)(param_1 + 0x19ca0),uVar6 << 3,8);
        if (lVar7 == 0) {
          (**(code **)(**(long **)(param_1 + 0x19ca0) + 0xe8))();
        }
      }
      plVar11 = (long *)(lVar7 + lVar5 * 8);
      uVar12 = *(undefined8 *)(param_1 + 0x19ca0);
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        *plVar11 = (long)param_2;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_012023fc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *plVar11 = (long)param_2;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      uVar9 = *puVar2;
      uVar8 = *(ulong *)(param_1 + 0x19c90);
      plVar13 = plVar11;
      if (uVar8 != uVar9) {
        do {
          uVar12 = *(undefined8 *)(param_1 + 0x19ca0);
          if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar5 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar5 == 0) {
            plVar13[-1] = *(long *)(uVar8 - 8);
          }
          else {
            if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_012023fc;
            *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
            plVar13[-1] = *(long *)(uVar8 - 8);
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
          }
          uVar8 = uVar8 - 8;
          plVar13 = plVar13 + -1;
        } while (uVar9 != uVar8);
        uVar9 = *puVar2;
      }
      *puVar2 = (ulong)plVar13;
      *(long **)(param_1 + 0x19c90) = plVar11 + 1;
      lVar5 = *(long *)(param_1 + 0x19c98);
      *(ulong *)(param_1 + 0x19c98) = lVar7 + uVar6 * 8;
      if (uVar9 != 0) {
        plVar11 = *(long **)(param_1 + 0x19ca0);
        lVar5 = lVar5 - uVar9;
        uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01202300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar11 + 0x18))(plVar11,uVar9,lVar5,8);
          return;
        }
        FUN_00c48fe8(plVar11,uVar9,lVar5,8);
        return;
      }
    }
  }
  return;
}



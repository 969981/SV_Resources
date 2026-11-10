/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4d770; name: FUN_00a4d770
 */


void FUN_00a4d770(long param_1,undefined4 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_64;
  
  iVar11 = 0;
  *(undefined8 *)(param_1 + 0x6488) = *(undefined8 *)(param_1 + 0x6480);
  do {
    FUN_00a4dbbc(auStack_a0,param_1,param_2,iVar11);
    if (local_64 != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0x6488);
      if (puVar10 == *(undefined8 **)(param_1 + 0x6490)) {
        uVar9 = *(ulong *)(param_1 + 0x64a0);
        lVar4 = (long)puVar10 - *(long *)(param_1 + 0x6480) >> 5;
        uVar6 = lVar4 + 1;
        if (0x7ffffffffffffffe < uVar9) {
          uVar9 = 0x7fffffffffffffff;
        }
        if (uVar9 < uVar6) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = (long)*(undefined8 **)(param_1 + 0x6490) - *(long *)(param_1 + 0x6480);
        uVar8 = lVar7 >> 4;
        if (uVar6 <= uVar8) {
          uVar6 = uVar8;
        }
        if (uVar9 >> 1 <= (ulong)(lVar7 >> 5)) {
          uVar6 = uVar9;
        }
        if (uVar6 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(code **)(**(long **)(param_1 + 0x6498) + 0x10))
                            (*(long **)(param_1 + 0x6498),uVar6 << 5,4);
          if (lVar7 == 0) {
            (**(code **)(**(long **)(param_1 + 0x6498) + 0xe8))();
          }
        }
        puVar10 = (undefined8 *)(lVar7 + lVar4 * 0x20);
        uVar12 = *(undefined8 *)(param_1 + 0x6498);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          puVar10[2] = local_78;
          puVar10[3] = uStack_70;
          *puVar10 = local_88;
          puVar10[1] = uStack_80;
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00a4dbb0;
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar12;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          puVar10[2] = local_78;
          puVar10[3] = uStack_70;
          *puVar10 = local_88;
          puVar10[1] = uStack_80;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        lVar4 = *(long *)(param_1 + 0x6480);
        lVar13 = *(long *)(param_1 + 0x6488);
        puVar15 = puVar10;
        if (lVar13 != lVar4) {
          do {
            uVar12 = *(undefined8 *)(param_1 + 0x6498);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar5 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar5 == 0) {
              uVar12 = *(undefined8 *)(lVar13 + -0x20);
              uVar1 = *(undefined8 *)(lVar13 + -0x18);
              uVar2 = *(undefined8 *)(lVar13 + -8);
              puVar15[-2] = *(undefined8 *)(lVar13 + -0x10);
              puVar15[-1] = uVar2;
              puVar15[-4] = uVar12;
              puVar15[-3] = uVar1;
            }
            else {
              if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00a4dbb0;
              *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
              uVar12 = *(undefined8 *)(lVar13 + -0x20);
              uVar1 = *(undefined8 *)(lVar13 + -0x18);
              uVar2 = *(undefined8 *)(lVar13 + -8);
              puVar15[-2] = *(undefined8 *)(lVar13 + -0x10);
              puVar15[-1] = uVar2;
              puVar15[-4] = uVar12;
              puVar15[-3] = uVar1;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            }
            lVar13 = lVar13 + -0x20;
            puVar15 = puVar15 + -4;
          } while (lVar4 != lVar13);
          lVar4 = *(long *)(param_1 + 0x6480);
        }
        *(undefined8 **)(param_1 + 0x6480) = puVar15;
        *(undefined8 **)(param_1 + 0x6488) = puVar10 + 4;
        lVar13 = *(long *)(param_1 + 0x6490);
        *(ulong *)(param_1 + 0x6490) = lVar7 + uVar6 * 0x20;
        if (lVar4 != 0) {
          plVar14 = *(long **)(param_1 + 0x6498);
          lVar13 = lVar13 - lVar4;
          uVar6 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,lVar4,lVar13,4);
          }
          else {
            FUN_00c48fe8(plVar14,lVar4,lVar13,4);
          }
        }
      }
      else {
        uVar12 = *(undefined8 *)(param_1 + 0x6498);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          puVar10[2] = local_78;
          puVar10[3] = uStack_70;
          *puVar10 = local_88;
          puVar10[1] = uStack_80;
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00a4dbb0:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar12;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          puVar10[2] = local_78;
          puVar10[3] = uStack_70;
          *puVar10 = local_88;
          puVar10[1] = uStack_80;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        *(undefined8 **)(param_1 + 0x6488) = puVar10 + 4;
      }
    }
    iVar11 = iVar11 + 1;
    if (iVar11 == 5) {
      *(undefined2 *)(param_1 + 0x6228) = param_3;
      *(undefined1 *)(param_1 + 0x622a) = 0;
      *(undefined4 *)(param_1 + 0x64b8) = 1;
      return;
    }
  } while( true );
}



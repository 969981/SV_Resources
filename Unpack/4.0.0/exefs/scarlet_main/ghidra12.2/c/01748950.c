/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01748950; name: FUN_01748950
 */


void FUN_01748950(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  long lVar12;
  undefined1 *puVar13;
  
  puVar2 = PTR_LAB_047d3900;
  puVar13 = (undefined1 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar13)) {
    puVar1 = puVar13 + param_2;
    do {
      lVar8 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 == 0) {
        *puVar13 = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_01748d00;
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar8;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *puVar13 = 0;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      puVar13 = puVar13 + 1;
      param_2 = param_2 - 1;
      if (param_2 == 0) {
        param_1[1] = (long)puVar1;
        return;
      }
    } while( true );
  }
  lVar8 = *param_1;
  puVar10 = (undefined1 *)param_1[4];
  puVar1 = puVar13 + (param_2 - lVar8);
  if ((undefined1 *)0x7ffffffffffffffe < puVar10) {
    puVar10 = (undefined1 *)0x7fffffffffffffff;
  }
  if (puVar10 < puVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar7 = param_1[2] - lVar8;
  puVar9 = (undefined1 *)(uVar7 * 2);
  if (puVar1 <= puVar9) {
    puVar1 = puVar9;
  }
  if ((ulong)puVar10 >> 1 <= uVar7) {
    puVar1 = puVar10;
  }
  if (puVar1 != (undefined1 *)0x0) {
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],puVar1,1);
    if (lVar4 != 0) goto LAB_017489e0;
    (**(code **)(*(long *)param_1[3] + 0xe8))();
  }
  lVar4 = 0;
LAB_017489e0:
  puVar13 = puVar13 + (lVar4 - lVar8);
  puVar9 = puVar13 + param_2;
  puVar10 = puVar13;
  do {
    lVar8 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *puVar10 = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01748d00;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar10 = 0;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    puVar10 = puVar10 + 1;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  lVar8 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 != lVar8) {
    do {
      lVar12 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 == 0) {
        puVar13[-1] = *(undefined1 *)(lVar5 + -1);
      }
      else {
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_01748d00:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        puVar13[-1] = *(undefined1 *)(lVar5 + -1);
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      lVar5 = lVar5 + -1;
      puVar13 = puVar13 + -1;
    } while (lVar8 != lVar5);
    lVar8 = *param_1;
  }
  lVar5 = param_1[2];
  *param_1 = (long)puVar13;
  param_1[1] = (long)puVar9;
  param_1[2] = (long)(puVar1 + lVar4);
  if (lVar8 == 0) {
    return;
  }
  plVar11 = (long *)param_1[3];
  uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
  if (((uVar7 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01748ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar8,lVar5 - lVar8,1);
    return;
  }
  FUN_00c48fe8(plVar11,lVar8,lVar5 - lVar8,1);
  return;
}



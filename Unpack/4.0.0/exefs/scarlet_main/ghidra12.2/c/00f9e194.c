/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f9e194; name: FUN_00f9e194
 */


void FUN_00f9e194(long *param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  puVar1 = PTR_LAB_047d3900;
  puVar11 = (undefined1 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar11)) {
    puVar10 = puVar11;
    if (param_2 != 0) {
      puVar10 = puVar11 + param_2;
      do {
        lVar6 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar1,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar3 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar3 == 0) {
          *puVar11 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00f9e470;
          *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar6;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          *puVar11 = 0;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        }
        puVar11 = puVar11 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    param_1[1] = (long)puVar10;
    return;
  }
  lVar6 = *param_1;
  puVar8 = (undefined1 *)param_1[4];
  puVar10 = puVar11 + (param_2 - lVar6);
  if ((undefined1 *)0x7ffffffffffffffe < puVar8) {
    puVar8 = (undefined1 *)0x7fffffffffffffff;
  }
  if (puVar8 < puVar10) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar5 = param_1[2] - lVar6;
  puVar7 = (undefined1 *)(uVar5 * 2);
  if (puVar10 <= puVar7) {
    puVar10 = puVar7;
  }
  plVar9 = param_1 + 3;
  if ((ulong)puVar8 >> 1 <= uVar5) {
    puVar10 = puVar8;
  }
  if (puVar10 != (undefined1 *)0x0) {
    lVar3 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,puVar10,1);
    if (lVar3 != 0) goto LAB_00f9e228;
    (**(code **)(*(long *)*plVar9 + 0xe8))();
  }
  lVar3 = 0;
LAB_00f9e228:
  puVar11 = puVar11 + (lVar3 - lVar6);
  puVar7 = puVar11 + param_2;
  puVar8 = puVar11;
  do {
    lVar6 = *plVar9;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      *puVar8 = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00f9e470:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar6;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar8 = 0;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    puVar8 = puVar8 + 1;
    param_2 = param_2 - 1;
    if (param_2 == 0) {
      lVar6 = *param_1;
      lVar4 = param_1[1];
      if (lVar4 != lVar6) {
        puVar11 = puVar11 + -1;
        FUN_00fa2554(plVar9,puVar11,lVar4 + -1);
        if (lVar4 + -1 != lVar6) {
          do {
            puVar11 = puVar11 + -1;
            FUN_00fa2554(plVar9,puVar11,lVar4 + -2);
            lVar4 = lVar4 + -1;
          } while (lVar6 + 1 != lVar4);
        }
        lVar6 = *param_1;
      }
      lVar4 = param_1[2];
      *param_1 = (long)puVar11;
      param_1[1] = (long)puVar7;
      param_1[2] = (long)(puVar10 + lVar3);
      if (lVar6 == 0) {
        return;
      }
      plVar9 = (long *)*plVar9;
      uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar5 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00f9e410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar6,lVar4 - lVar6,1);
        return;
      }
      FUN_00c48fe8(plVar9,lVar6,lVar4 - lVar6,1);
      return;
    }
  } while( true );
}



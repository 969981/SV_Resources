/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02afddcc; name: FUN_02afddcc
 */


void FUN_02afddcc(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  puVar2 = (undefined1 *)param_1[1];
  if (puVar2 < (undefined1 *)param_1[2]) {
    lVar11 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      *puVar2 = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_02afe11c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar2 = 0;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar2 + 1);
  }
  else {
    lVar11 = *param_1;
    puVar9 = (undefined1 *)param_1[4];
    puVar1 = puVar2 + (1 - lVar11);
    if ((undefined1 *)0x7ffffffffffffffe < puVar9) {
      puVar9 = (undefined1 *)0x7fffffffffffffff;
    }
    if (puVar9 < puVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = param_1[2] - lVar11;
    puVar8 = (undefined1 *)(uVar7 * 2);
    if (puVar1 <= puVar8) {
      puVar1 = puVar8;
    }
    if ((ulong)puVar9 >> 1 <= uVar7) {
      puVar1 = puVar9;
    }
    if (puVar1 == (undefined1 *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],puVar1,1);
      if (lVar4 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    puVar2 = puVar2 + (lVar4 - lVar11);
    lVar11 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *puVar2 = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_02afe11c;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar11;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar2 = 0;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    lVar11 = *param_1;
    lVar5 = param_1[1];
    puVar9 = puVar2;
    if (lVar5 != lVar11) {
      do {
        lVar12 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          puVar9[-1] = *(undefined1 *)(lVar5 + -1);
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_02afe11c;
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar12;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          puVar9[-1] = *(undefined1 *)(lVar5 + -1);
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar5 = lVar5 + -1;
        puVar9 = puVar9 + -1;
      } while (lVar11 != lVar5);
      lVar11 = *param_1;
    }
    *param_1 = (long)puVar9;
    param_1[1] = (long)(puVar2 + 1);
    lVar5 = param_1[2];
    param_1[2] = (long)(puVar1 + lVar4);
    if (lVar11 != 0) {
      plVar10 = (long *)param_1[3];
      uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar7 & 1) != 0) && (lVar4 = FUN_00c4e600(), 0 < *(int *)(lVar4 + 0x12c8))) {
        FUN_00c48fe8(plVar10,lVar11,lVar5 - lVar11,1);
        return;
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar5 - lVar11,1);
    }
  }
  return;
}



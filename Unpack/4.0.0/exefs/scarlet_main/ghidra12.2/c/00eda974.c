/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eda974; name: FUN_00eda974
 */


void FUN_00eda974(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar5 = *param_1;
  if ((ulong)(param_1[2] - lVar5 >> 1) < param_2) {
    lVar6 = param_1[1];
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 1,2);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    lVar5 = lVar2 + (lVar6 - lVar5 >> 1) * 2;
    lVar6 = *param_1;
    lVar8 = param_1[1];
    lVar10 = lVar5;
    if (lVar8 != lVar6) {
      do {
        lVar9 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar3 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar3 == 0) {
          *(undefined2 *)(lVar10 + -2) = *(undefined2 *)(lVar8 + -2);
        }
        else {
          if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          *(undefined2 *)(lVar10 + -2) = *(undefined2 *)(lVar8 + -2);
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        }
        lVar8 = lVar8 + -2;
        lVar10 = lVar10 + -2;
      } while (lVar6 != lVar8);
      lVar6 = *param_1;
    }
    lVar8 = param_1[2];
    param_1[2] = lVar2 + param_2 * 2;
    *param_1 = lVar10;
    param_1[1] = lVar5;
    if (lVar6 != 0) {
      plVar7 = (long *)param_1[3];
      uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00edaab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,lVar8 - lVar6,2);
        return;
      }
      FUN_00c48fe8(plVar7,lVar6,lVar8 - lVar6,2);
      return;
    }
  }
  return;
}



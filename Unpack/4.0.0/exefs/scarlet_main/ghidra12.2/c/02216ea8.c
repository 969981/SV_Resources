/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02216ea8; name: FUN_02216ea8
 */


void FUN_02216ea8(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  plVar7 = param_1 + 3;
  lVar2 = FUN_0221a0c0(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar6 = *param_1;
  lVar8 = param_1[1];
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,lVar2 << 3,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*plVar7 + 0xe8))();
    }
  }
  lVar6 = lVar3 + (lVar8 - lVar6 >> 3) * 8;
  FUN_02216dcc(plVar7,lVar6,param_2);
  lVar8 = *param_1;
  lVar11 = param_1[1];
  lVar9 = lVar6;
  if (lVar11 != lVar8) {
    do {
      lVar10 = *plVar7;
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 == 0) {
        *(undefined8 *)(lVar9 + -8) = *(undefined8 *)(lVar11 + -8);
      }
      else {
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *(undefined8 *)(lVar9 + -8) = *(undefined8 *)(lVar11 + -8);
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      lVar11 = lVar11 + -8;
      lVar9 = lVar9 + -8;
    } while (lVar8 != lVar11);
    lVar8 = *param_1;
  }
  *param_1 = lVar9;
  param_1[1] = lVar6 + 8;
  lVar6 = param_1[2];
  param_1[2] = lVar3 + lVar2 * 8;
  if (lVar8 == 0) {
    return;
  }
  plVar7 = (long *)*plVar7;
  uVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar5 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x02217008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,lVar6 - lVar8,8);
    return;
  }
  FUN_00c48fe8(plVar7,lVar8,lVar6 - lVar8,8);
  return;
}



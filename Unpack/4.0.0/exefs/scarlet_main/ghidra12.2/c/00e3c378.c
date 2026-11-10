/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e3c378; name: FUN_00e3c378
 */


void FUN_00e3c378(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = param_2[3];
  lVar1 = param_2[4];
  lVar7 = param_2[5];
  lVar2 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar7;
  param_1[6] = lVar2;
  param_1[3] = lVar10;
  param_1[4] = lVar1;
  lVar10 = param_2[1] - *param_2;
  if (lVar10 != 0) {
    uVar9 = param_1[4];
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < (ulong)(lVar10 >> 3)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    plVar6 = (long *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar10,8);
    if (plVar6 == (long *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar6;
    param_1[2] = (long)(plVar6 + (lVar10 >> 3));
    puVar4 = PTR_LAB_047d3900;
    plVar3 = (long *)param_2[1];
    for (param_2 = (long *)*param_2; param_2 != plVar3; param_2 = param_2 + 1) {
      lVar10 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar4,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 != 0) {
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar10;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      }
      plVar8 = (long *)*param_2;
      *plVar6 = (long)plVar8;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))();
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      plVar6 = plVar6 + 1;
    }
    param_1[1] = (long)plVar6;
  }
  return;
}



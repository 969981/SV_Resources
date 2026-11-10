/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ed52ac; name: FUN_00ed52ac
 */


void FUN_00ed52ac(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 3)) {
    FUN_00ee464c(param_1,param_2);
    return;
  }
  uVar11 = param_1[4];
  lVar17 = param_1[1] - *param_1 >> 3;
  uVar7 = param_2 + lVar17;
  if (0x7ffffffffffffffe < uVar11) {
    uVar11 = 0x7fffffffffffffff;
  }
  if (uVar11 < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1;
  uVar10 = lVar9 >> 2;
  if (uVar7 <= uVar10) {
    uVar7 = uVar10;
  }
  plVar12 = param_1 + 3;
  if (uVar11 >> 1 <= (ulong)(lVar9 >> 3)) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,uVar7 << 3,8);
    if (lVar9 == 0) {
      (**(code **)(*(long *)*plVar12 + 0xe8))();
    }
  }
  puVar18 = (undefined8 *)(lVar9 + lVar17 * 8);
  lVar17 = param_2 << 3;
  puVar2 = puVar18 + param_2;
  puVar13 = puVar18;
  do {
    lVar16 = *plVar12;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      *puVar13 = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar16;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar13 = 0;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    puVar13 = puVar13 + 1;
    lVar17 = lVar17 + -8;
  } while (lVar17 != 0);
  plVar15 = (long *)*param_1;
  plVar14 = (long *)param_1[1];
  if (plVar14 == plVar15) {
    plVar14 = plVar15;
  }
  else {
    puVar18 = puVar18 + -1;
    FUN_00ee42a8(plVar12,puVar18,plVar14 + -1);
    if (plVar14 + -1 != plVar15) {
      do {
        puVar18 = puVar18 + -1;
        FUN_00ee42a8(plVar12,puVar18,plVar14 + -2);
        plVar14 = plVar14 + -1;
      } while (plVar15 + 1 != plVar14);
    }
    plVar15 = (long *)*param_1;
    plVar14 = (long *)param_1[1];
  }
  lVar17 = param_1[2];
  param_1[2] = lVar9 + uVar7 * 8;
  *param_1 = (long)puVar18;
  param_1[1] = (long)puVar2;
  while (plVar14 != plVar15) {
    plVar14 = plVar14 + -1;
    plVar8 = (long *)*plVar14;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        lVar9 = *plVar1;
        iVar5 = (int)lVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  if (plVar15 == (long *)0x0) {
    return;
  }
  plVar12 = (long *)*plVar12;
  uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
  if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00ed54a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar12 + 0x18))(plVar12,plVar15,lVar17 - (long)plVar15,8);
    return;
  }
  FUN_00c48fe8(plVar12,plVar15,lVar17 - (long)plVar15,8);
  return;
}



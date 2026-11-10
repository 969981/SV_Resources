/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0143bd00; name: FUN_0143bd00
 */


void FUN_0143bd00(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  
  lVar15 = *(long *)(param_1 + 0x40);
  puVar1 = (undefined8 *)(param_1 + 0x50);
  if (lVar15 == *(long *)(param_1 + 0x48)) {
    uVar13 = *(ulong *)(param_1 + 0x58);
    lVar15 = lVar15 - *(long *)(param_1 + 0x38) >> 3;
    uVar9 = lVar15 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x38);
    uVar11 = lVar10 >> 2;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar13 >> 1 <= (ulong)(lVar10 >> 3)) {
      uVar9 = uVar13;
    }
    if (uVar9 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar9 << 3,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    lVar15 = lVar10 + lVar15 * 8;
    FUN_0143c018(puVar1,lVar15,param_2);
    plVar17 = *(long **)(param_1 + 0x38);
    plVar14 = *(long **)(param_1 + 0x40);
    lVar16 = lVar15;
    if (plVar14 == plVar17) {
      plVar14 = plVar17;
    }
    else {
      do {
        uVar18 = *puVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 == 0) {
          lVar7 = plVar14[-1];
          plVar14[-1] = 0;
          *(long *)(lVar16 + -8) = lVar7;
        }
        else {
          if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar18;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          lVar12 = plVar14[-1];
          plVar14[-1] = 0;
          *(long *)(lVar16 + -8) = lVar12;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        plVar14 = plVar14 + -1;
        lVar16 = lVar16 + -8;
      } while (plVar17 != plVar14);
      plVar17 = *(long **)(param_1 + 0x38);
      plVar14 = *(long **)(param_1 + 0x40);
    }
    lVar7 = *(long *)(param_1 + 0x48);
    *(long *)(param_1 + 0x38) = lVar16;
    *(long *)(param_1 + 0x40) = lVar15 + 8;
    *(ulong *)(param_1 + 0x48) = lVar10 + uVar9 * 8;
    while (plVar14 != plVar17) {
      plVar14 = plVar14 + -1;
      plVar8 = (long *)*plVar14;
      if (plVar8 != (long *)0x0) {
        lVar15 = plVar8[6];
        psVar2 = (short *)(lVar15 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    if (plVar17 != (long *)0x0) {
      plVar14 = (long *)*puVar1;
      lVar7 = lVar7 - (long)plVar17;
      uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar9 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0143bf34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar14 + 0x18))(plVar14,plVar17,lVar7,8);
        return;
      }
      FUN_00c48fe8(plVar14,plVar17,lVar7,8);
      return;
    }
  }
  else {
    FUN_0143c018(puVar1,lVar15,param_2);
    *(long *)(param_1 + 0x40) = lVar15 + 8;
  }
  return;
}



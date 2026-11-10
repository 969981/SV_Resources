/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0220f500; name: FUN_0220f500
 */


void FUN_0220f500(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    lVar16 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 == 0) {
      uVar12 = *param_2;
      *param_2 = 0;
      *puVar3 = uVar12;
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0220f92c;
      *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar16;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      uVar12 = *param_2;
      *param_2 = 0;
      *puVar3 = uVar12;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar3 + 1);
  }
  else {
    uVar13 = param_1[4];
    lVar16 = (long)puVar3 - *param_1 >> 3;
    uVar9 = lVar16 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = param_1[2] - *param_1;
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
      lVar10 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 << 3,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    puVar3 = (undefined8 *)(lVar10 + lVar16 * 8);
    lVar16 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 == 0) {
      uVar12 = *param_2;
      *param_2 = 0;
      *puVar3 = uVar12;
    }
    else {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_0220f92c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar16;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      uVar12 = *param_2;
      *param_2 = 0;
      *puVar3 = uVar12;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    plVar15 = (long *)*param_1;
    plVar14 = (long *)param_1[1];
    puVar17 = puVar3;
    if (plVar14 == plVar15) {
      plVar14 = plVar15;
    }
    else {
      do {
        lVar16 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 == 0) {
          lVar16 = plVar14[-1];
          plVar14[-1] = 0;
          puVar17[-1] = lVar16;
        }
        else {
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_0220f92c;
          *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar16;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          lVar16 = plVar14[-1];
          plVar14[-1] = 0;
          puVar17[-1] = lVar16;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        plVar14 = plVar14 + -1;
        puVar17 = puVar17 + -1;
      } while (plVar15 != plVar14);
      plVar15 = (long *)*param_1;
      plVar14 = (long *)param_1[1];
    }
    lVar16 = param_1[2];
    *param_1 = (long)puVar17;
    param_1[1] = (long)(puVar3 + 1);
    param_1[2] = lVar10 + uVar9 * 8;
    while (plVar14 != plVar15) {
      plVar14 = plVar14 + -1;
      plVar8 = (long *)*plVar14;
      if (plVar8 != (long *)0x0) {
        lVar10 = plVar8[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    if (plVar15 != (long *)0x0) {
      plVar14 = (long *)param_1[3];
      uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if ((uVar9 & 1) != 0) {
        lVar10 = FUN_00c4e600();
        if (0 < *(int *)(lVar10 + 0x12c8)) {
          FUN_00c48fe8(plVar14,plVar15,lVar16 - (long)plVar15,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0220f890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar15,lVar16 - (long)plVar15,8);
      return;
    }
  }
  return;
}



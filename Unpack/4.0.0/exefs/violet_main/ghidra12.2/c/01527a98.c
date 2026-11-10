/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01527a98; name: FUN_01527a98
 */


void FUN_01527a98(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  
  lVar13 = *(long *)(param_1 + 0x298);
  puVar1 = (undefined8 *)(param_1 + 0x2a8);
  if (lVar13 == *(long *)(param_1 + 0x2a0)) {
    uVar12 = *(ulong *)(param_1 + 0x2b0);
    lVar13 = lVar13 - *(long *)(param_1 + 0x290) >> 3;
    uVar8 = lVar13 + 1;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = *(long *)(param_1 + 0x2a0) - *(long *)(param_1 + 0x290);
    uVar11 = lVar10 >> 2;
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
    if (uVar12 >> 1 <= (ulong)(lVar10 >> 3)) {
      uVar8 = uVar12;
    }
    if (uVar8 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar8 << 3,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    lVar15 = lVar10 + lVar13 * 8;
    FUN_01527d44(puVar1,lVar15,param_2);
    plVar16 = *(long **)(param_1 + 0x290);
    lVar13 = lVar15 + 8;
    plVar14 = *(long **)(param_1 + 0x298);
    if (plVar14 == plVar16) {
      plVar14 = plVar16;
    }
    else {
      do {
        lVar15 = lVar15 + -8;
        plVar14 = plVar14 + -1;
        FUN_01528e20(puVar1,lVar15,plVar14);
      } while (plVar16 != plVar14);
      plVar16 = *(long **)(param_1 + 0x290);
      plVar14 = *(long **)(param_1 + 0x298);
    }
    *(long *)(param_1 + 0x290) = lVar15;
    lVar15 = *(long *)(param_1 + 0x2a0);
    *(long *)(param_1 + 0x298) = lVar13;
    *(ulong *)(param_1 + 0x2a0) = lVar10 + uVar8 * 8;
    while (plVar14 != plVar16) {
      plVar14 = plVar14 + -1;
      plVar9 = (long *)*plVar14;
      if (plVar9 != (long *)0x0) {
        lVar13 = plVar9[6];
        psVar2 = (short *)(lVar13 + 0x1a);
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
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    if (plVar16 != (long *)0x0) {
      plVar14 = (long *)*puVar1;
      lVar15 = lVar15 - (long)plVar16;
      uVar8 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar8 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,plVar16,lVar15,8);
      }
      else {
        FUN_00c48fe8(plVar14,plVar16,lVar15,8);
      }
    }
  }
  else {
    FUN_01527d44(puVar1,lVar13,param_2);
    *(long *)(param_1 + 0x298) = lVar13 + 8;
  }
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar7 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar7;
  FUN_01527f9c(uVar7,*param_2);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219cb58; name: FUN_0219cb58
 */


void FUN_0219cb58(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar8 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar8;
  lVar10 = *param_1;
  plVar11 = *(long **)(lVar10 + 0x48);
  if (plVar11 != (long *)0x0) {
    lVar8 = *(long *)(lVar8 + 0x38);
    plVar6 = *(long **)(lVar8 + 0x40);
    (**(code **)(*plVar6 + 0x70))(plVar6,plVar11[2]);
    FUN_00e60020(plVar11[2] + 0x40);
    for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      plVar6 = *(long **)(lVar8 + 0x40);
      (**(code **)(*plVar6 + 0x70))(plVar6,plVar11[2]);
      FUN_00e60020(plVar11[2] + 0x40);
    }
    lVar10 = *param_1;
  }
  if (*(long *)(lVar10 + 0x58) != 0) {
    plVar11 = (long *)*(long *)(lVar10 + 0x48);
    while (plVar11 != (long *)0x0) {
      plVar12 = (long *)*plVar11;
      plVar6 = (long *)plVar11[2];
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar6 = *(long **)(lVar10 + 0x50);
      uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar11,0x18,8);
        plVar11 = plVar12;
      }
      else {
        FUN_00c48fe8(plVar6,plVar11,0x18,8);
        plVar11 = plVar12;
      }
    }
    lVar8 = *(long *)(lVar10 + 0x38);
    *(undefined8 *)(lVar10 + 0x48) = 0;
    if (((((lVar8 != 0) && (**(undefined8 **)(lVar10 + 0x30) = 0, lVar8 != 1)) &&
         (*(undefined8 *)(*(long *)(lVar10 + 0x30) + 8) = 0, lVar8 != 2)) &&
        ((*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x10) = 0, lVar8 != 3 &&
         (*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x18) = 0, lVar8 != 4)))) &&
       ((*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x20) = 0, lVar8 != 5 &&
        ((*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x28) = 0, lVar8 != 6 &&
         (*(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x30) = 0, lVar8 != 7)))))) {
      lVar9 = 7;
      do {
        *(undefined8 *)(*(long *)(lVar10 + 0x30) + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    *(undefined8 *)(lVar10 + 0x58) = 0;
  }
  return;
}



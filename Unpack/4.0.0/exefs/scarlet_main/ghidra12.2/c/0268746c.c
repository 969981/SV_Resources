/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0268746c; name: FUN_0268746c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0268746c(undefined1 *param_1,undefined1 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  puVar7 = auStack_50;
  uVar6 = FUN_026704d4();
  if ((uVar6 & 1) != 0) {
switchD_026874cc_default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  switch(*param_2) {
  case 0:
    lVar10 = *(long *)(param_2 + 8);
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))();
    if (((*PTR_DAT_047d9050 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d9050), iVar5 != 0)) {
      uVar9 = FUN_00ea2d24();
      *(undefined8 *)PTR_DAT_047d9058 = uVar9;
      __cxa_guard_release(PTR_DAT_047d9050);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)PTR_DAT_047d9058) goto LAB_02687518;
    }
    lVar10 = 0;
LAB_02687518:
    *param_1 = 0;
    *(long *)(param_1 + 8) = lVar10;
    return;
  case 1:
    lVar10 = *(long *)(param_2 + 8);
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))((undefined8 *)(lVar10 + 0x28));
    if (((*PTR_DAT_047d9050 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d9050), iVar5 != 0)) {
      uVar9 = FUN_00ea2d24();
      *(undefined8 *)PTR_DAT_047d9058 = uVar9;
      __cxa_guard_release(PTR_DAT_047d9050);
    }
    do {
      if (plVar8 == (long *)0x0) {
        lVar10 = 0;
LAB_02687604:
        *param_1 = 1;
        *(long *)(param_1 + 8) = lVar10;
        return;
      }
      if (plVar8 == (long *)PTR_DAT_047d9058) {
        lVar11 = *(long *)(lVar10 + 0x30);
        if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          *(undefined8 *)(lVar11 + 8) = uVar9;
          *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        goto LAB_02687604;
      }
      plVar8 = (long *)*plVar8;
    } while( true );
  case 2:
    FUN_02688300(auStack_40,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_02688348(param_1 + 8,auStack_40);
    puVar7 = auStack_40;
    break;
  case 3:
    FUN_02688300(auStack_50,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_02688348(param_1 + 8,auStack_50);
    break;
  default:
    goto switchD_026874cc_default;
  }
  FUN_0267de98(puVar7);
  return;
}



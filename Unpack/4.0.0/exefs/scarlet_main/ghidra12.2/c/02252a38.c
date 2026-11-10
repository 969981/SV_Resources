/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02252a38; name: FUN_02252a38
 */


void FUN_02252a38(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 local_68;
  
  puVar9 = PTR_DAT_047d3918;
  puVar8 = PTR_DAT_047d3910;
  puVar7 = PTR_DAT_047d3908;
  lVar4 = *param_1;
  lVar13 = param_1[1];
  do {
    if (lVar13 == lVar4) {
      param_1[1] = lVar4;
      return;
    }
    lVar11 = *(long *)(lVar13 + -0x20);
    *(undefined8 *)(lVar13 + -0x20) = 0;
    if (lVar11 != 0) {
      FUN_00c832cc(lVar13 + -0x18);
    }
    if (*(long **)(lVar13 + -0x30) != (long *)0x0) {
      (**(code **)(**(long **)(lVar13 + -0x30) + 0x20))();
    }
    puVar12 = *(undefined8 **)(lVar13 + -0x60);
    if (puVar12 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar12 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar12 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,puVar8,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar7);
          }
          lVar11 = *(long *)puVar8;
          *(long *)puVar9 = lVar11;
          local_68 = *puVar12;
          FUN_00c44438(lVar11 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar13 = lVar13 + -0x68;
  } while( true );
}



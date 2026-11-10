/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011f2ec0; name: FUN_011f2ec0
 */


void FUN_011f2ec0(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 local_68;
  
  puVar9 = PTR_DAT_047d3918;
  puVar8 = PTR_DAT_047d3910;
  puVar7 = PTR_DAT_047d3908;
  puVar6 = *(undefined8 **)(param_1 + 8);
  do {
    while( true ) {
      do {
        if (puVar6 == param_2) {
          *(undefined8 **)(param_1 + 8) = param_2;
          return;
        }
        puVar14 = puVar6 + -0x12;
        pcVar12 = (code *)puVar6[-0xf];
        if (pcVar12 != (code *)0x0) {
          puVar6[-0xe] = 0;
          puVar6[-0xd] = 0;
          puVar6[-0x10] = 0;
          puVar6[-0xf] = 0;
          (*pcVar12)(puVar6 + -0xc);
        }
        puVar13 = (undefined8 *)*puVar14;
        puVar6 = puVar14;
      } while (puVar13 == (undefined8 *)0x0);
      psVar1 = (short *)(puVar13 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 != 1) break;
      piVar2 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,puVar8,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar7);
        }
        lVar11 = *(long *)puVar8;
        *(long *)puVar9 = lVar11;
        local_68 = *puVar13;
        FUN_00c44438(lVar11 + 0x8040,&local_68);
      }
    }
  } while (sVar3 != 0);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x33,"Reference counter underflows.");
}



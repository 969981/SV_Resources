/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0244c124; name: FUN_0244c124
 */


bool FUN_0244c124(long param_1)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  undefined8 *puVar12;
  
  lVar10 = *(long *)(param_1 + 0x18);
  if ((lVar10 != 0) && (sVar11 = *(short *)(lVar10 + 0x1a), sVar11 != 0)) {
    puVar12 = *(undefined8 **)(lVar10 + 8);
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar7 != 0)) {
      uVar8 = FUN_01cd650c();
      *(undefined8 *)PTR_DAT_047d6c50 = uVar8;
      __cxa_guard_release(PTR_DAT_047d6c48);
    }
    if (puVar12 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar10 + 0x1a);
      while (puVar12 != (undefined8 *)PTR_DAT_047d6c50) {
        puVar12 = (undefined8 *)*puVar12;
        if (puVar12 == (undefined8 *)0x0) {
          return false;
        }
      }
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_0244c1b0;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0244c1b0:
          bVar5 = false;
        }
        if (bVar5) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) {
            return false;
          }
          uVar6 = FUN_0244c2a4(param_1);
          bVar5 = (uVar6 & 0xff) != 0 && 0xff < uVar6;
          lVar9 = *(long *)(lVar10 + 8);
          psVar1 = (short *)(lVar9 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar3) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
            return bVar5;
          }
          if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return bVar5;
        }
        sVar11 = sVar2;
        if (sVar2 == 0) {
          return false;
        }
      } while( true );
    }
  }
  return false;
}



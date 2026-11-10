/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013261b0; name: FUN_013261b0
 */


void FUN_013261b0(long *param_1,long param_2,long *param_3)

{
  short *psVar1;
  undefined8 *puVar2;
  byte *__s;
  byte bVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  lVar10 = *(long *)(param_2 + 0x80);
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar11) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_0132623c;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0132623c:
        bVar6 = false;
      }
      if (bVar6) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          puVar2 = (undefined8 *)PTR_PTR_047d4508;
          if (*param_3 != 0) {
            puVar2 = (undefined8 *)(*param_3 + 0x38);
          }
          plVar12 = (long *)(lVar10 + -0x28);
          pcVar8 = strrchr((char *)*puVar2,0x2f);
          if (pcVar8 == (char *)0x0) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            local_60 = *(undefined1 **)PTR_DAT_047d3e30;
            pbStack_58 = *(byte **)(PTR_DAT_047d3e30 + 8);
            local_50 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
            local_48 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (local_48 != (long *)0x0) {
              (**(code **)(*local_48 + 0x18))();
            }
          }
          else {
            __s = (byte *)(pcVar8 + 1);
            puVar13 = &DAT_cbf29ce484222645;
            local_50 = strlen((char *)__s);
            bVar3 = *__s;
            if (bVar3 != 0) {
              pbVar9 = (byte *)(pcVar8 + 2);
              do {
                puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
                bVar3 = *pbVar9;
                pbVar9 = pbVar9 + 1;
              } while (bVar3 != 0);
            }
            local_48 = (long *)0x0;
            local_60 = puVar13;
            pbStack_58 = __s;
          }
          FUN_029ed76c(param_1,plVar12,&local_60);
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 0x20))();
          }
          lVar10 = *(long *)(lVar10 + 8);
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar12 + 0x50))(plVar12);
            return;
          }
          if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
        break;
      }
      sVar11 = sVar4;
    } while (sVar4 != 0);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_047e32b8 + 0x10);
  param_1[1] = 0;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f1e1dc; name: FUN_00f1e1dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f1e1dc(long param_1,undefined8 *param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  MutexType *pMVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  long *plVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xe0));
  puVar14 = *(undefined8 **)(param_1 + 0xa8);
  puVar4 = *(undefined8 **)(param_1 + 0xb0);
  do {
    if (puVar14 == puVar4) {
      nn::os::UnlockMutex((MutexType *)(param_1 + 0xe0));
      puVar14 = *(undefined8 **)(param_1 + 0x70);
      puVar4 = *(undefined8 **)(param_1 + 0x78);
      do {
        if (puVar14 == puVar4) {
          return;
        }
        plVar15 = (long *)*puVar14;
        if (plVar15 == (long *)0x0) {
          FUN_00f1e1dc(0,param_2,_DAT_00000050 + param_3);
        }
        else {
          lVar17 = plVar15[6];
          if (*(long *)(lVar17 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar17 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
            *(undefined8 *)(lVar17 + 8) = uVar11;
            *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
          }
          else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
          FUN_00f1e1dc(plVar15,param_2,(int)plVar15[10] + param_3);
          lVar17 = plVar15[6];
          psVar1 = (short *)(lVar17 + 0x1a);
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
            *(undefined8 *)(lVar17 + 0x10) = 0;
            (**(code **)(*plVar15 + 0x50))(plVar15);
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        puVar14 = puVar14 + 1;
      } while( true );
    }
    plVar15 = (long *)*puVar14;
    pMVar8 = (MutexType *)(**(code **)(*plVar15 + 0x10))(plVar15);
    nn::os::LockMutex(pMVar8);
    iVar7 = (**(code **)*plVar15)(plVar15);
    if (0 < iVar7) {
      iVar16 = 0;
      do {
        puVar9 = (undefined8 *)(**(code **)(*plVar15 + 8))(plVar15,iVar16);
        if (puVar9 == (undefined8 *)0x0) break;
        iVar2 = *(int *)((long)puVar9 + 0x24) + param_3;
        if (iVar2 < *(int *)((long)param_2 + 0x24)) {
LAB_00f1e2b8:
          *param_2 = *puVar9;
          param_2[1] = puVar9[1];
          param_2[2] = puVar9[2];
          plVar18 = (long *)puVar9[3];
          if (plVar18 != (long *)0x0) {
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
          plVar10 = (long *)param_2[3];
          param_2[3] = plVar18;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x20))();
          }
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar9 + 4);
          *(int *)((long)param_2 + 0x24) = iVar2;
        }
        else if (iVar2 == *(int *)((long)param_2 + 0x24)) {
          if (*(char *)(param_1 + 0x60) == '\0') {
            uVar12 = *(uint *)(param_2 + 4);
            uVar13 = *(uint *)(puVar9 + 4);
          }
          else {
            uVar12 = *(uint *)(puVar9 + 4);
            uVar13 = *(uint *)(param_2 + 4);
          }
          if (uVar12 < uVar13) goto LAB_00f1e2b8;
        }
        iVar16 = iVar16 + 1;
      } while (iVar7 != iVar16);
    }
    nn::os::UnlockMutex(pMVar8);
    puVar14 = puVar14 + 1;
  } while( true );
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0268c0fc; name: FUN_0268c0fc
 */


void FUN_0268c0fc(undefined1 *param_1,undefined1 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_50 [16];
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  uVar7 = FUN_026704d4();
  if ((uVar7 & 1) == 0) {
    switch(*param_2) {
    case 0:
      lVar11 = *(long *)(param_2 + 8);
      plVar8 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x28))();
      if (((*PTR_DAT_047dd040 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047dd040), iVar6 != 0)) {
        uVar10 = FUN_00ea2d24();
        *(undefined8 *)PTR_DAT_047dd048 = uVar10;
        __cxa_guard_release(PTR_DAT_047dd040);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)PTR_DAT_047dd048) goto LAB_0268c1a8;
      }
      lVar11 = 0;
LAB_0268c1a8:
      *param_1 = 0;
      *(long *)(param_1 + 8) = lVar11;
      break;
    case 1:
      lVar11 = *(long *)(param_2 + 8);
      puVar9 = (undefined8 *)
               (*(code *)**(undefined8 **)(lVar11 + 0x28))((undefined8 *)(lVar11 + 0x28));
      if (((*PTR_DAT_047dd040 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047dd040), iVar6 != 0)) {
        uVar10 = FUN_00ea2d24();
        *(undefined8 *)PTR_DAT_047dd048 = uVar10;
        __cxa_guard_release(PTR_DAT_047dd040);
      }
      if (puVar9 != (undefined8 *)0x0) {
LAB_0268c290:
        if (puVar9 != (undefined8 *)PTR_DAT_047dd048) goto code_r0x0268c298;
        lVar12 = *(long *)(lVar11 + 0x30);
        if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          *(undefined8 *)(lVar12 + 8) = uVar10;
          *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        goto LAB_0268c2a4;
      }
LAB_0268c2a0:
      lVar11 = 0;
LAB_0268c2a4:
      *param_1 = 1;
      *(long *)(param_1 + 8) = lVar11;
      break;
    case 2:
      FUN_0268ccac(local_40,param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *param_1 = 2;
      *(undefined8 *)(param_1 + 8) = 0;
      FUN_01517110(param_1 + 8,local_40);
      if (local_40[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_40[0] + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_40[0] + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_18 = *local_40[0];
            FUN_00c44438(lVar11 + 0x8040,&local_18);
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
      break;
    case 3:
      FUN_0268ccac(auStack_50,param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *param_1 = 3;
      *(undefined8 *)(param_1 + 8) = 0;
      FUN_01517110(param_1 + 8,auStack_50);
      FUN_0268b098(auStack_50);
      break;
    default:
      goto switchD_0268c15c_default;
    }
  }
  else {
switchD_0268c15c_default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
code_r0x0268c298:
  puVar9 = (undefined8 *)*puVar9;
  if (puVar9 == (undefined8 *)0x0) goto LAB_0268c2a0;
  goto LAB_0268c290;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0264f7dc; name: FUN_0264f7dc
 */


void FUN_0264f7dc(undefined1 *param_1,undefined1 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_58 [16];
  undefined8 *local_48 [2];
  undefined8 local_38;
  undefined8 local_18;
  
  uVar7 = FUN_02650c90();
  if ((uVar7 & 1) == 0) {
    switch(*param_2) {
    case 0:
      lVar10 = *(long *)(param_2 + 8);
      plVar8 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))();
      if (((*PTR_DAT_047e0370 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047e0370), iVar6 != 0)) {
        uVar9 = FUN_02650ce4();
        *(undefined8 *)PTR_DAT_047e0378 = uVar9;
        __cxa_guard_release(PTR_DAT_047e0370);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)PTR_DAT_047e0378) goto LAB_0264f888;
      }
      lVar10 = 0;
LAB_0264f888:
      *param_1 = 0;
      *(long *)(param_1 + 8) = lVar10;
      break;
    case 1:
      lVar10 = *(long *)(param_2 + 8);
      plVar8 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))((undefined8 *)(lVar10 + 0x28));
      if (((*PTR_DAT_047e0370 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047e0370), iVar6 != 0)) {
        uVar9 = FUN_02650ce4();
        *(undefined8 *)PTR_DAT_047e0378 = uVar9;
        __cxa_guard_release(PTR_DAT_047e0370);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)PTR_DAT_047e0378) goto LAB_0264f984;
      }
      lVar10 = 0;
LAB_0264f984:
      FUN_02650d80(&local_38,lVar10);
      uVar9 = local_38;
      *param_1 = 1;
      local_38 = 0;
      *(undefined8 *)(param_1 + 8) = uVar9;
      FUN_0127add4(&local_38);
      break;
    case 2:
      FUN_02650e3c(local_48,param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *param_1 = 2;
      *(undefined8 *)(param_1 + 8) = 0;
      FUN_0127a9cc(param_1 + 8,local_48);
      if (local_48[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_48[0] + 3);
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
          piVar2 = (int *)((long)local_48[0] + 0x1c);
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
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_18 = *local_48[0];
            FUN_00c44438(lVar10 + 0x8040,&local_18);
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
      FUN_02650e3c(auStack_58,param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *param_1 = 3;
      *(undefined8 *)(param_1 + 8) = 0;
      FUN_0127a9cc(param_1 + 8,auStack_58);
      FUN_0127ae4c(auStack_58);
      break;
    default:
      goto switchD_0264f83c_default;
    }
  }
  else {
switchD_0264f83c_default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



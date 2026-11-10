/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a24268; name: FUN_02a24268
 */


void FUN_02a24268(undefined1 *param_1,long param_2,long *param_3)

{
  short *psVar1;
  uint *puVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  short sVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)(param_2 + 0x40);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar12 = *(short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar12) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02a242b8;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a242b8:
        bVar6 = false;
      }
      if (bVar6) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 != 0) {
          puVar10 = *(undefined8 **)(lVar8 + 0x1a8);
          if (puVar10 == *(undefined8 **)(lVar8 + 0x1b0)) goto LAB_02a24358;
          goto LAB_02a242f0;
        }
        break;
      }
      sVar12 = sVar4;
    } while (sVar4 != 0);
  }
  *param_1 = 0;
  return;
LAB_02a242f0:
  plVar3 = (long *)PTR_DAT_047d8b70;
  if (puVar10[0x13] != 0) {
    plVar3 = (long *)(puVar10[0x13] + 0x30);
  }
  if (*plVar3 == *param_3) {
    piVar11 = (int *)puVar10[1];
    if ((piVar11 != (int *)0x0) &&
       (puVar2 = (uint *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (6 - (long)*piVar11))),
       *(int *)((long)puVar2 + (ulong)*puVar2) != 0)) {
      uVar13 = *puVar10;
      *(undefined8 *)(param_1 + 0x18) = puVar10[2];
      uVar9 = 1;
      *(undefined8 *)(param_1 + 8) = uVar13;
      *(int **)(param_1 + 0x10) = piVar11;
      goto LAB_02a2435c;
    }
    goto LAB_02a24358;
  }
  puVar10 = puVar10 + 0x16;
  if (*(undefined8 **)(lVar8 + 0x1b0) == puVar10) {
LAB_02a24358:
    uVar9 = 0;
LAB_02a2435c:
    *param_1 = uVar9;
    lVar7 = *(long *)(lVar8 + 0x70);
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x02a243bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))();
      return;
    }
    if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  goto LAB_02a242f0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eac3cc; name: FUN_01eac3cc
 */


undefined2 * FUN_01eac3cc(long param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  long *plVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  
  puVar14 = *(undefined2 **)(param_1 + 8);
  puVar12 = param_2 + 0x24;
  puVar13 = param_2;
  if (puVar12 != puVar14) {
    do {
      *puVar13 = *puVar12;
      FUN_00ca1ea4(puVar13 + 4,puVar12 + 4);
      plVar8 = *(long **)(puVar13 + 0xc);
      *(undefined8 *)(puVar13 + 0xc) = 0;
      if (plVar8 != (long *)0x0) {
        lVar10 = plVar8[6];
        psVar3 = (short *)(lVar10 + 0x1a);
        do {
          sVar4 = *psVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar6) {
            *psVar3 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))();
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      uVar9 = *(undefined8 *)(puVar12 + 0xc);
      *(undefined8 *)(puVar12 + 0xc) = 0;
      *(undefined8 *)(puVar13 + 0xc) = uVar9;
      *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar12 + 0x10);
      if (*(char *)(puVar13 + 0x12) == '\0') {
        if (*(char *)(puVar12 + 0x12) != '\0') {
          uVar9 = *(undefined8 *)(puVar12 + 0x14);
          uVar11 = *(undefined8 *)(puVar12 + 0x18);
          *(undefined1 *)(puVar13 + 0x12) = 1;
          goto LAB_01eac4d0;
        }
      }
      else if (*(char *)(puVar12 + 0x12) == '\0') {
        *(undefined1 *)(puVar13 + 0x12) = 0;
      }
      else {
        uVar9 = *(undefined8 *)(puVar12 + 0x14);
        uVar11 = *(undefined8 *)(puVar12 + 0x18);
LAB_01eac4d0:
        *(undefined8 *)(puVar13 + 0x14) = uVar9;
        *(undefined8 *)(puVar13 + 0x18) = uVar11;
      }
      plVar8 = *(long **)(puVar13 + 0x1c);
      *(undefined8 *)(puVar13 + 0x1c) = 0;
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 5;
        do {
          lVar10 = *plVar2;
          iVar7 = (int)lVar10 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      uVar9 = *(undefined8 *)(puVar12 + 0x1c);
      *(undefined8 *)(puVar12 + 0x1c) = 0;
      *(undefined8 *)(puVar13 + 0x1c) = uVar9;
      puVar1 = puVar12 + 0x20;
      puVar12 = puVar12 + 0x24;
      puVar13[0x20] = *puVar1;
      puVar13 = puVar13 + 0x24;
    } while (puVar12 != puVar14);
    puVar12 = *(undefined2 **)(param_1 + 8);
    if (puVar12 == puVar13) goto LAB_01eac518;
  }
  do {
    puVar12 = puVar12 + -0x24;
    FUN_01eab838(puVar12);
  } while (puVar13 != puVar12);
LAB_01eac518:
  *(undefined2 **)(param_1 + 8) = puVar13;
  return param_2;
}



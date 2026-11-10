/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dea5b4; name: FUN_00dea5b4
 */


void FUN_00dea5b4(long param_1,char *param_2)

{
  char *pcVar1;
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
  char *pcVar12;
  char *pcVar13;
  
  pcVar13 = *(char **)(param_1 + 8);
  pcVar12 = param_2 + 0x68;
  if (pcVar12 != pcVar13) {
    do {
      if (*param_2 == '\0') {
        if (*pcVar12 != '\0') {
          *(undefined2 *)(param_2 + 2) = *(undefined2 *)(pcVar12 + 2);
          *param_2 = '\x01';
        }
      }
      else if (*pcVar12 == '\0') {
        *param_2 = '\0';
      }
      else {
        *(undefined2 *)(param_2 + 2) = *(undefined2 *)(pcVar12 + 2);
      }
      FUN_00ca1ea4(param_2 + 8,pcVar12 + 8);
      plVar8 = *(long **)(param_2 + 0x18);
      param_2[0x18] = '\0';
      param_2[0x19] = '\0';
      param_2[0x1a] = '\0';
      param_2[0x1b] = '\0';
      param_2[0x1c] = '\0';
      param_2[0x1d] = '\0';
      param_2[0x1e] = '\0';
      param_2[0x1f] = '\0';
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
      uVar9 = *(undefined8 *)(pcVar12 + 0x18);
      pcVar12[0x18] = '\0';
      pcVar12[0x19] = '\0';
      pcVar12[0x1a] = '\0';
      pcVar12[0x1b] = '\0';
      pcVar12[0x1c] = '\0';
      pcVar12[0x1d] = '\0';
      pcVar12[0x1e] = '\0';
      pcVar12[0x1f] = '\0';
      *(undefined8 *)(param_2 + 0x18) = uVar9;
      memcpy(param_2 + 0x20,pcVar12 + 0x20,0x24);
      if (param_2[0x44] == '\0') {
        if (pcVar12[0x44] != '\0') {
          uVar9 = *(undefined8 *)(pcVar12 + 0x48);
          uVar11 = *(undefined8 *)(pcVar12 + 0x50);
          param_2[0x44] = '\x01';
LAB_00dea6b4:
          *(undefined8 *)(param_2 + 0x48) = uVar9;
          *(undefined8 *)(param_2 + 0x50) = uVar11;
        }
      }
      else {
        if (pcVar12[0x44] != '\0') {
          uVar9 = *(undefined8 *)(pcVar12 + 0x48);
          uVar11 = *(undefined8 *)(pcVar12 + 0x50);
          goto LAB_00dea6b4;
        }
        param_2[0x44] = '\0';
      }
      plVar8 = *(long **)(param_2 + 0x58);
      param_2[0x58] = '\0';
      param_2[0x59] = '\0';
      param_2[0x5a] = '\0';
      param_2[0x5b] = '\0';
      param_2[0x5c] = '\0';
      param_2[0x5d] = '\0';
      param_2[0x5e] = '\0';
      param_2[0x5f] = '\0';
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
      uVar9 = *(undefined8 *)(pcVar12 + 0x58);
      pcVar12[0x58] = '\0';
      pcVar12[0x59] = '\0';
      pcVar12[0x5a] = '\0';
      pcVar12[0x5b] = '\0';
      pcVar12[0x5c] = '\0';
      pcVar12[0x5d] = '\0';
      pcVar12[0x5e] = '\0';
      pcVar12[0x5f] = '\0';
      *(undefined8 *)(param_2 + 0x58) = uVar9;
      pcVar1 = pcVar12 + 0x60;
      pcVar12 = pcVar12 + 0x68;
      param_2[0x60] = *pcVar1;
      param_2 = param_2 + 0x68;
    } while (pcVar12 != pcVar13);
    pcVar12 = *(char **)(param_1 + 8);
    if (pcVar12 == param_2) goto LAB_00dea6f0;
  }
  FUN_00dea7e0(pcVar12 + -0x68);
  if ((pcVar12 + -0x68 != param_2) && (FUN_00dea7e0(pcVar12 + -0xd0), pcVar12 + -0xd0 != param_2)) {
    do {
      FUN_00dea7e0(pcVar12 + -0x138);
      pcVar12 = pcVar12 + -0x68;
    } while (param_2 + 0xd0 != pcVar12);
  }
LAB_00dea6f0:
  *(char **)(param_1 + 8) = param_2;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f4a884; name: FUN_00f4a884
 */


void FUN_00f4a884(long param_1)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  undefined1 auStack_f0 [24];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  
  lVar10 = *(long *)(param_1 + 0x70);
  if ((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) {
    plVar12 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00f4ac18;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f4ac18:
        bVar5 = false;
      }
      if (bVar5) {
        plVar12 = (long *)0x0;
        if (*(long *)(lVar10 + 0x10) != 0) {
          plVar12 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
        }
        break;
      }
      plVar12 = (long *)0x0;
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  uVar9 = *(uint *)(param_1 + 0x15cc);
  if (uVar9 < 8) {
    iVar2 = *(int *)((long)plVar12 + 0x17c);
    switch(uVar9) {
    case 0:
      *(undefined4 *)(param_1 + 0x15cc) = 1;
      break;
    case 2:
      goto switchD_00f4a8d0_caseD_2;
    case 3:
      goto switchD_00f4a8d0_caseD_3;
    case 4:
      goto switchD_00f4a8d0_caseD_4;
    case 5:
      goto switchD_00f4a8d0_caseD_5;
    case 6:
      goto switchD_00f4a8d0_caseD_6;
    case 7:
      goto switchD_00f4a8d0_caseD_7;
    }
    if (iVar2 == 0) {
      uVar7 = FUN_00f4b5c8(param_1);
      if ((uVar7 & 1) == 0) goto LAB_00f4a908;
      iVar8 = *(int *)(param_1 + 0x15cc);
    }
    else {
      iVar8 = 1;
    }
    uVar9 = iVar8 + 1;
    *(uint *)(param_1 + 0x15cc) = uVar9;
switchD_00f4a8d0_caseD_2:
    if (iVar2 == 0) {
      uVar7 = FUN_00f4ef24(param_1);
      if ((uVar7 & 1) == 0) goto LAB_00f4a908;
      uVar9 = *(uint *)(param_1 + 0x15cc);
    }
    *(uint *)(param_1 + 0x15cc) = uVar9 + 1;
switchD_00f4a8d0_caseD_3:
    if (((*(char *)(param_1 + 0xa0) == '\0') ||
        ((((*(long *)(param_1 + 0x9e8) != 0 &&
           ((*(byte *)(*(long *)(param_1 + 0x9e8) + 0x1e8) & 1) != 0)) &&
          (*(long *)(param_1 + 0xa28) != 0)) &&
         ((*(byte *)(*(long *)(param_1 + 0xa28) + 0x1e8) & 1) != 0)))) &&
       ((*(char *)(param_1 + 0xb00) == '\0' ||
        (((*(long *)(param_1 + 0x1448) != 0 &&
          ((*(byte *)(*(long *)(param_1 + 0x1448) + 0x1e8) & 1) != 0)) &&
         ((*(long *)(param_1 + 0x1488) != 0 &&
          ((*(byte *)(*(long *)(param_1 + 0x1488) + 0x1e8) & 1) != 0)))))))) {
      *(int *)(param_1 + 0x15cc) = *(int *)(param_1 + 0x15cc) + 1;
switchD_00f4a8d0_caseD_4:
      if (*(char *)(param_1 + 0xa0) != '\0') {
        FUN_00fb9e50(&local_d8,param_1 + 0xa20,param_1 + 0x9e0);
        *(undefined8 *)(param_1 + 0xa68) = uStack_d0;
        *(undefined8 *)(param_1 + 0xa70) = local_c8;
        *(undefined8 *)(param_1 + 0xa60) = local_d8;
        FUN_00fb9ce0(param_1 + 0xa78,auStack_c0);
        FUN_00fb9ce0(param_1 + 0xab8,auStack_80);
        FUN_00db239c(auStack_80);
        FUN_00db239c(auStack_c0);
        FUN_00fb4dd0(auStack_f0,param_1 + 0xa60);
        FUN_00f4cde4(param_1 + 0xb0,auStack_f0,*(undefined8 *)(param_1 + 8));
      }
      if (*(char *)(param_1 + 0xb00) != '\0') {
        FUN_00fb9e50(&local_d8,param_1 + 0x1480,param_1 + 0x1440);
        *(undefined8 *)(param_1 + 0x14c0) = local_d8;
        *(undefined8 *)(param_1 + 0x14d0) = local_c8;
        *(undefined8 *)(param_1 + 0x14c8) = uStack_d0;
        FUN_00fb9ce0(param_1 + 0x14d8,auStack_c0);
        FUN_00fb9ce0(param_1 + 0x1518,auStack_80);
        FUN_00db239c(auStack_80);
        FUN_00db239c(auStack_c0);
        FUN_00fb4dd0(auStack_f0,param_1 + 0x14c0);
        FUN_00f4cde4(param_1 + 0xb10,auStack_f0,*(undefined8 *)(param_1 + 8));
      }
      *(int *)(param_1 + 0x15cc) = *(int *)(param_1 + 0x15cc) + 1;
switchD_00f4a8d0_caseD_5:
      lVar10 = *(long *)(param_1 + 0x70);
      if ((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) {
        plVar6 = (long *)0x0;
      }
      else {
        psVar1 = (short *)(lVar10 + 0x1a);
        sVar11 = *(short *)(lVar10 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar11) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_00f4ac78;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00f4ac78:
            bVar5 = false;
          }
          if (bVar5) {
            plVar6 = (long *)0x0;
            if (*(long *)(lVar10 + 0x10) != 0) {
              plVar6 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
            }
            break;
          }
          plVar6 = (long *)0x0;
          sVar11 = sVar3;
        } while (sVar3 != 0);
      }
      if ((char)plVar6[0x2f] == '\0') {
        if (plVar6 != (long *)0x0) {
          lVar10 = plVar6[0x13];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar6 + 0x50))();
          }
          else if (sVar11 == 0) goto LAB_00f4ab68;
        }
      }
      else {
        *(int *)(param_1 + 0x15cc) = *(int *)(param_1 + 0x15cc) + 1;
        if (plVar6 != (long *)0x0) {
          lVar10 = plVar6[0x13];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar6 + 0x50))();
          }
          else if (sVar11 == 0) goto LAB_00f4ab68;
        }
switchD_00f4a8d0_caseD_6:
        uVar7 = FUN_00f4bce8(param_1);
        if ((uVar7 & 1) != 0) {
          *(int *)(param_1 + 0x15cc) = *(int *)(param_1 + 0x15cc) + 1;
switchD_00f4a8d0_caseD_7:
          *(undefined4 *)(param_1 + 0x15c8) = 1;
        }
      }
    }
  }
LAB_00f4a908:
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0x13];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar11 == 0) {
LAB_00f4ab68:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d6606c; name: FUN_00d6606c
 */


void FUN_00d6606c(undefined8 param_1,long param_2)

{
  long lVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  char cVar5;
  undefined8 *puVar6;
  bool bVar7;
  byte bVar8;
  undefined4 uVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  short sVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar1 = param_2 + 0x2e0;
  *(undefined2 *)(param_2 + 0x364) = 0;
  if (*(char *)(param_2 + 0x4ae) != '\0') {
    FUN_00d707f0(*(undefined8 *)(param_2 + 0x4f0),*(undefined8 *)(param_2 + 0x500),param_2 + 0x170,
                 param_2 + 0x30);
  }
  if (*(char *)(param_2 + 0x4ac) != '\0') {
    if (*(char *)(param_2 + 0x4ad) == '\0') {
      iVar12 = *(int *)(param_2 + 0x4e0);
      if (iVar12 == 0x22) {
        if (*(char *)(param_2 + 0x544) == '\0') {
          iVar12 = 0x22;
        }
        else {
          iVar12 = 0;
          *(undefined4 *)(param_2 + 0x4e0) = 0;
        }
      }
      bVar8 = FUN_00d6c288(*(undefined8 *)(param_2 + 0x4b0),*(undefined8 *)(param_2 + 0x4c0),
                           *(undefined4 *)(param_2 + 0x4e4),lVar1,param_2 + 0x30,
                           *(undefined4 *)(param_2 + 0x4d4),*(undefined4 *)(param_2 + 0x4d8),
                           *(undefined4 *)(param_2 + 0x4dc),*(undefined4 *)(param_2 + 0x4d0),iVar12)
      ;
      iVar12 = *(int *)(param_2 + 0x540);
      if (0 < iVar12) {
        uVar3 = *(uint *)(param_2 + 0x360);
        if (uVar3 < 2) {
          uVar17 = *(undefined8 *)(param_2 + 0x520);
          *(uint *)(param_2 + 0x360) = uVar3 + 1;
          lVar14 = param_2 + (ulong)uVar3 * 0x10;
          *(undefined8 *)(lVar14 + 0x348) = *(undefined8 *)(param_2 + 0x528);
          *(undefined8 *)(lVar14 + 0x340) = uVar17;
          iVar12 = *(int *)(param_2 + 0x540);
        }
        if (1 < iVar12) {
          lVar14 = 0x53;
          do {
            uVar3 = *(uint *)(param_2 + 0x360);
            if (uVar3 < 2) {
              puVar6 = (undefined8 *)(param_2 + lVar14 * 0x10);
              uVar18 = puVar6[1];
              uVar17 = *puVar6;
              *(uint *)(param_2 + 0x360) = uVar3 + 1;
              lVar15 = param_2 + (ulong)uVar3 * 0x10;
              *(undefined8 *)(lVar15 + 0x348) = uVar18;
              *(undefined8 *)(lVar15 + 0x340) = uVar17;
              iVar12 = *(int *)(param_2 + 0x540);
            }
            lVar15 = lVar14 + -0x51;
            lVar14 = lVar14 + 1;
          } while (lVar15 < iVar12);
        }
      }
      *(byte *)(param_2 + 0x364) = bVar8 & 1;
    }
    else {
      *(undefined2 *)(param_2 + 0x365) = 1;
    }
  }
  if (*(char *)(param_2 + 0x544) == '\0') {
    bVar7 = *(int *)(param_2 + 0x32c) == 0x22;
  }
  else {
    bVar7 = false;
  }
  *(bool *)(param_2 + 0x2a7) = bVar7;
  if (*(int *)(param_2 + 0x548) != -1) {
    *(int *)(param_2 + 0x318) = *(int *)(param_2 + 0x548);
    lVar14 = *(long *)(param_2 + 0x100);
    if ((lVar14 != 0) && (*(short *)(lVar14 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar14 + 0x1a);
      sVar16 = *(short *)(lVar14 + 0x1a);
      do {
        sVar4 = *psVar2;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00d6621c;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d6621c:
          bVar7 = false;
        }
        if (bVar7) {
          lVar14 = *(long *)(lVar14 + 0x10);
          if (lVar14 != 0) {
            plVar10 = (long *)(lVar14 + -0x28);
            uVar11 = FUN_00e052a4(lVar14 + 0x10,plVar10);
            lVar14 = *(long *)(lVar14 + 0x70);
            psVar2 = (short *)(lVar14 + 0x1a);
            do {
              sVar16 = *psVar2;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar7) {
                *psVar2 = sVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar16 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*plVar10 + 0x50))(plVar10);
            }
            else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            if ((uVar11 & 1) != 0) {
              *(undefined4 *)(param_2 + 0x548) = 0xffffffff;
            }
          }
          break;
        }
        sVar16 = sVar4;
      } while (sVar4 != 0);
    }
  }
  if (*(int *)(param_2 + 0x32c) == 0x27) {
    FUN_00d70658(*(undefined4 *)(param_2 + 0x3f4),lVar1,param_2 + 0x30);
  }
  *(undefined1 *)(param_2 + 0x2a4) = 0;
  if ((*(char *)(param_2 + 0x4ac) != '\0') || (1 < *(int *)(param_2 + 0x4a8) - 1U)) {
    if (*(int *)(&DAT_03d30718 + (long)*(int *)(param_2 + 0x2a0) * 0x1c) == 2) {
      puVar13 = (uint *)(param_2 + 0x144);
    }
    else if (*(int *)(&DAT_03d30718 + (long)*(int *)(param_2 + 0x2a0) * 0x1c) == 1) {
      puVar13 = (uint *)(param_2 + 0x140);
    }
    else {
      puVar13 = (uint *)(param_2 + 0x13c);
    }
    *(byte *)(param_2 + 0x2a4) = (byte)(0x2100240 >> ((ulong)*puVar13 & 0x3f)) & 1;
  }
  uVar9 = 1;
  if ((*(uint *)(param_2 + 0x32c) & 0xfffffffe) == 0x24) {
    uVar9 = 2;
  }
  FUN_00d67358(param_2,uVar9);
  plVar10 = *(long **)(param_2 + 0x488);
  if (plVar10 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar10 + 0x28))
                      (param_1,*(undefined4 *)(param_2 + 0x510),plVar10,param_2 + 0x30,
                       param_2 + 0x170,lVar1,param_2 + 0x370);
    *(undefined4 *)(param_2 + 0x4a8) = uVar9;
  }
  FUN_00d6654c(param_1,param_2 + 0x170,param_2 + 0x30);
  *(undefined2 *)(param_2 + 0x364) = 0;
  *(undefined2 *)(param_2 + 0x4ac) = 0;
  *(undefined1 *)(param_2 + 0x4ae) = 0;
  if (*(int *)(param_2 + 0x4a8) - 1U < 2) {
    *(undefined1 *)(param_2 + 0x366) = 0;
  }
  FUN_00d663e4(param_2);
  return;
}



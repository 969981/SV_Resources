/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0195e930; name: FUN_0195e930
 */


void FUN_0195e930(undefined8 param_1,undefined8 param_2)

{
  short *psVar1;
  int *piVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  ushort *puVar10;
  short sVar11;
  uint uVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uVar15;
  float fVar16;
  undefined1 *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  int *local_70;
  int *piStack_68;
  char *local_58 [3];
  long *local_28;
  
  uVar15 = FUN_0195ecb4(&local_28);
  if (local_28 != (long *)0x0) {
    fVar16 = 0.0;
    local_90 = &DAT_ef6385841d796acf;
    pcStack_88 = "orbit";
    local_80 = 5;
    local_78 = (long *)0x0;
    lVar8 = local_28[8];
    if (lVar8 != 0) {
      if (*(short *)(lVar8 + 0x1a) != 0) {
        psVar1 = (short *)(lVar8 + 0x1a);
        sVar11 = *(short *)(lVar8 + 0x1a);
LAB_0195ea48:
        sVar4 = *psVar1;
        if (sVar4 == sVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_0195ea6c;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0195ea6c:
          bVar6 = false;
        }
        if (!bVar6) goto code_r0x0195ea74;
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 != 0) {
          plVar14 = (long *)(lVar8 + -0x28);
          FUN_01bc9ec8(local_58,uVar15,0,plVar14);
          FUN_00d996a8(&local_70,local_58,&local_90);
          lVar8 = *(long *)(lVar8 + 0x70);
          psVar1 = (short *)(lVar8 + 0x1a);
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
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar14 + 0x50))(plVar14);
          }
          else if (sVar11 == 0) goto LAB_0195e9ec;
          if (((piStack_68 == (int *)0x0) || (*(ushort *)((long)piStack_68 - (long)*piStack_68) < 7)
              ) || (uVar9 = (ulong)((ushort *)((long)piStack_68 - (long)*piStack_68))[3], uVar9 == 0
                   )) goto LAB_0195ec40;
          puVar7 = (uint *)((long)piStack_68 + uVar9);
          puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
          local_58[0] = "defaultEasingPosTime";
          puVar7 = bsearch(local_58,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)PTR_LAB_047d5600);
          if ((puVar7 == (uint *)0x0) || (local_70 == (int *)0x0)) goto LAB_0195ec40;
          piVar2 = (int *)((long)puVar7 + (ulong)*puVar7);
          puVar10 = (ushort *)((long)piVar2 - (long)*piVar2);
          uVar3 = *puVar10;
          if (uVar3 < 7) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13 = (int *)0x0;
            if ((ulong)puVar10[3] != 0) {
              puVar7 = (uint *)((long)piVar2 + (ulong)puVar10[3]);
              piVar13 = (int *)((long)puVar7 + (ulong)*puVar7);
            }
          }
          if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
             (uVar9 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar9 == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = (long)*(char *)((long)piVar13 + uVar9) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar9 * 8) == 4) {
            fVar16 = 0.0;
            if (uVar3 < 0xb) {
              uVar12 = 0;
            }
            else {
              uVar12 = 0;
              if ((ulong)puVar10[5] != 0) {
                uVar12 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar10[5]);
              }
              if ((0xe < uVar3) && ((ulong)puVar10[7] != 0)) {
                fVar16 = (float)*(double *)((long)piVar2 + (ulong)puVar10[7]);
              }
            }
            if ((uVar12 < *(ushort *)((long)local_70 - (long)*local_70)) &&
               (uVar9 = (ulong)*(ushort *)(((long)local_70 - (long)*local_70) + (ulong)uVar12),
               uVar9 != 0)) {
              fVar16 = *(float *)((long)local_70 + uVar9);
            }
          }
          else {
            if (uVar3 < 0xf) goto LAB_0195ec40;
            fVar16 = 0.0;
            if ((ulong)puVar10[7] != 0) {
              fVar16 = (float)*(double *)((long)piVar2 + (ulong)puVar10[7]);
            }
          }
          goto LAB_0195e994;
        }
      }
LAB_0195ec40:
      fVar16 = 0.0;
    }
LAB_0195e994:
    FUN_0195ec48(param_1,fVar16,param_2,8);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_28 != (long *)0x0) {
      lVar8 = local_28[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar11 == 0) {
LAB_0195e9ec:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x0195ea74:
  sVar11 = sVar4;
  if (sVar4 == 0) goto LAB_0195ec40;
  goto LAB_0195ea48;
}



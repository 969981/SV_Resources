/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e700ec; name: FUN_01e700ec
 */


bool FUN_01e700ec(undefined8 *param_1,long *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  short sVar9;
  ulong uVar10;
  long *plVar11;
  short *psVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  long local_70;
  long local_68;
  
  uVar10 = FUN_01e70f20(*param_1);
  if ((uVar10 & 1) != 0) {
    plVar11 = (long *)*param_2;
    bVar3 = *(byte *)(plVar11 + 0x12);
    uVar17 = (uint)bVar3;
    if (uVar17 != 0) {
      if (uVar17 == 1) {
        bVar16 = 0;
LAB_01e702d0:
        return bVar16 != 0;
      }
      uVar14 = 0;
      bVar16 = 0;
      do {
        local_68 = (**(code **)(*plVar11 + 0x68))(plVar11,uVar14);
        if (local_68 != 0) {
          piVar1 = (int *)(local_68 + 0x28);
          do {
            iVar2 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 == -1) {
LAB_01e702dc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        uVar14 = uVar14 + 1;
        uVar15 = uVar14;
        do {
          local_70 = (**(code **)(*(long *)*param_2 + 0x68))((long *)*param_2,uVar15);
          lVar7 = local_68;
          if (local_70 != 0) {
            piVar1 = (int *)(local_70 + 0x28);
            do {
              iVar2 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar2 == -1) goto LAB_01e702dc;
          }
          if ((((local_68 != 0) &&
               (uVar10 = FUN_00cf4cfc(*(undefined8 *)(local_68 + 0x70)), lVar6 = local_70,
               (uVar10 & 1) == 0)) &&
              ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) &&
             (((local_70 != 0 &&
               (uVar10 = FUN_00cf4cfc(*(undefined8 *)(local_70 + 0x70)), (uVar10 & 1) == 0)) &&
              (((*(ushort *)(*(long *)(*(long *)(lVar6 + 0x70) + 0x10) + 4) >> 2 & 1) == 0 &&
               (sVar8 = FUN_00e974e0(*(undefined8 *)(lVar7 + 0x70)), sVar8 != 0)))))) {
            sVar8 = FUN_00e974e0(*(undefined8 *)(lVar7 + 0x70));
            sVar9 = FUN_00e974e0(*(undefined8 *)(lVar6 + 0x70));
            if (sVar8 == sVar9) {
              *(undefined1 *)(param_3 + 8) = 1;
              sVar8 = FUN_00e974e0(*(undefined8 *)(lVar7 + 0x70));
              if (bVar16 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = (ulong)bVar16;
                psVar12 = (short *)(param_3 + 0x48);
                uVar13 = uVar10;
                do {
                  if (*psVar12 == sVar8) goto LAB_01e7027c;
                  uVar13 = uVar13 - 1;
                  psVar12 = psVar12 + 1;
                } while (uVar13 != 0);
              }
              bVar16 = bVar16 + 1;
              *(short *)(param_3 + uVar10 * 2 + 0x48) = sVar8;
            }
          }
LAB_01e7027c:
          FUN_01e70eb4(&local_70);
          uVar15 = uVar15 + 1;
        } while (uVar15 != bVar3);
        FUN_01e70eb4(&local_68);
        if (uVar14 == uVar17 - 1) goto LAB_01e702d0;
        plVar11 = (long *)*param_2;
      } while( true );
    }
  }
  return false;
}



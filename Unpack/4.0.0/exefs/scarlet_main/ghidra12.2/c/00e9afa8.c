/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e9afa8; name: FUN_00e9afa8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e9afa8(undefined8 param_1,ulong param_2)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  short sVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  
  plVar13 = (long *)FUN_00e9b0bc();
  if ((((*plVar13 != 0) && (*(short *)(*plVar13 + 0x1a) != 0)) && (lVar14 = *plVar13, lVar14 != 0))
     && (*(short *)(lVar14 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar14 + 0x1a);
    sVar16 = *(short *)(lVar14 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar16) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00e9b01c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e9b01c:
        bVar5 = false;
      }
      if (bVar5) {
        lVar14 = *(long *)(lVar14 + 0x10);
        if (lVar14 == 0) {
          return;
        }
        iVar2 = -(uint)((param_2 & 1) != 0);
        bVar17 = (byte)iVar2;
        bVar18 = (byte)((uint)iVar2 >> 8);
        bVar19 = (byte)((uint)iVar2 >> 0x10);
        bVar20 = (byte)((uint)iVar2 >> 0x18);
        bVar21 = (byte)_DAT_03caabb0;
        uVar6 = (ulong)_DAT_03caabb0 >> 8;
        uVar7 = (ulong)_DAT_03caabb0 >> 0x10;
        uVar8 = (ulong)_DAT_03caabb0 >> 0x18;
        uVar9 = (ulong)_DAT_03caabb0 >> 0x20;
        uVar10 = (ulong)_DAT_03caabb0 >> 0x28;
        uVar11 = (ulong)_DAT_03caabb0 >> 0x30;
        uVar12 = (ulong)_DAT_03caabb0 >> 0x38;
        *(ulong *)(lVar14 + 0x100) =
             CONCAT17((byte)((ulong)_UNK_03caabb8 >> 0x38) & bVar20,
                      CONCAT16((byte)((ulong)_UNK_03caabb8 >> 0x30) & bVar19,
                               CONCAT15((byte)((ulong)_UNK_03caabb8 >> 0x28) & bVar18,
                                        CONCAT14((byte)((ulong)_UNK_03caabb8 >> 0x20) & bVar17,
                                                 CONCAT13((byte)((ulong)_UNK_03caabb8 >> 0x18) &
                                                          bVar20,CONCAT12((byte)((ulong)
                                                  _UNK_03caabb8 >> 0x10) & bVar19,
                                                  CONCAT11((byte)((ulong)_UNK_03caabb8 >> 8) &
                                                           bVar18,(byte)_UNK_03caabb8 & bVar17))))))
                     );
        *(ulong *)(lVar14 + 0xf8) =
             CONCAT17((byte)uVar12 & bVar20,
                      CONCAT16((byte)uVar11 & bVar19,
                               CONCAT15((byte)uVar10 & bVar18,
                                        CONCAT14((byte)uVar9 & bVar17,
                                                 CONCAT13((byte)uVar8 & bVar20,
                                                          CONCAT12((byte)uVar7 & bVar19,
                                                                   CONCAT11((byte)uVar6 & bVar18,
                                                                            bVar21 & bVar17)))))));
        lVar15 = *(long *)(lVar14 + 0x70);
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar16 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar16 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00e9b0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar14 + -0x28) + 0x50))();
          return;
        }
        if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar16 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}



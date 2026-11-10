/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5bf10; name: FUN_01e5bf10
 */


undefined4 FUN_01e5bf10(long param_1,long param_2)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  short sVar9;
  undefined4 uVar10;
  long local_18;
  
  lVar8 = *(long *)(param_2 + 0x10);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e5bf84;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e5bf84:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          local_18 = *(long *)(lVar8 + 0x10) + -0x28;
          plVar6 = (long *)FUN_010fee00();
          uVar10 = 0;
          if (*plVar6 != 0) {
            piVar7 = (int *)FUN_01e5cc38();
            iVar2 = *piVar7;
            if (iVar2 == 3) {
              uVar10 = *(undefined4 *)(param_1 + 0xd4);
            }
            else if (iVar2 == 2) {
              uVar10 = *(undefined4 *)(param_1 + 0xd0);
            }
            else if (iVar2 == 1) {
              uVar10 = *(undefined4 *)(param_1 + 0xcc);
            }
          }
          goto LAB_01e5bf30;
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  local_18 = 0;
  uVar10 = 0;
LAB_01e5bf30:
  FUN_00c7f318(&local_18);
  return uVar10;
}



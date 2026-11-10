/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cbb9ac; name: FUN_00cbb9ac
 */


void FUN_00cbb9ac(long param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  short sVar9;
  long lVar10;
  
  if ((*(char *)(param_1 + 0x143) == '\0') && (*(char *)(param_1 + 0x250) != '\0')) {
    lVar10 = *(long *)(param_1 + 0x200);
    lVar6 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    if (*(char *)(lVar10 + 0x40) != '\0') {
      FUN_00cbbf98((float)((double)*(long *)(lVar6 + 8) / 1000000000.0),
                   *(undefined8 *)(lVar10 + 0x78));
    }
  }
  plVar7 = (long *)FUN_00cbbb00(param_1);
  lVar6 = *plVar7;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00cbbaa0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00cbbaa0:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar7 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
          (**(code **)(*plVar7 + 0x60))(plVar7);
          uVar8 = FUN_01e5b604(plVar7);
          if ((uVar8 & 1) == 0) {
            *(undefined4 *)(param_1 + 0x14c) = 0;
          }
          else {
            iVar3 = 99999999;
            if (*(int *)(param_1 + 0x14c) < 99999999) {
              iVar3 = *(int *)(param_1 + 0x14c) + 1;
            }
            *(int *)(param_1 + 0x14c) = iVar3;
          }
        }
        break;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  if ((*(char *)(param_1 + 0x251) == '\0') && (*(char *)(param_1 + 0x250) != '\0')) {
    if (*(long *)(param_1 + 0x200) != 0) {
      FUN_00cbc20c();
    }
    if (*(long *)(param_1 + 0x1f8) != 0) {
      FUN_00cbc1b4();
    }
  }
  *(undefined1 *)(param_1 + 0x251) = *(undefined1 *)(param_1 + 0x250);
  *(undefined1 *)(param_1 + 0x250) = 1;
  return;
}



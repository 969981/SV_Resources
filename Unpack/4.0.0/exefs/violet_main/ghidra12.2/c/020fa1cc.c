/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020fa1cc; name: FUN_020fa1cc
 */


void FUN_020fa1cc(long param_1)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  undefined8 uVar10;
  long *local_28;
  
  cVar2 = *(char *)(param_1 + 0x188);
  *(undefined1 *)(param_1 + 0x188) = 0;
  lVar6 = *(long *)(param_1 + 0x120);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_020fa238;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_020fa238:
        bVar8 = false;
      }
      if (bVar8) {
        lVar6 = *(long *)(lVar6 + 0x10);
        plVar7 = (long *)(lVar6 + -0x28);
        if (lVar6 == 0) {
          return;
        }
        local_28 = plVar7;
        uVar5 = FUN_00e640d8(&local_28);
        if ((uVar5 & 1) == 0) {
          FUN_020fa2b4(param_1,&local_28,cVar2 != '\0');
          uVar10 = *(undefined8 *)(lVar6 + 600);
          *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(lVar6 + 0x260);
          *(undefined8 *)(param_1 + 0x170) = uVar10;
          *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(lVar6 + 0x164);
          *(undefined1 *)(param_1 + 0x188) = 1;
        }
        (**(code **)(*plVar7 + 0x60))(plVar7);
        return;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}



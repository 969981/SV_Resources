/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02190e44; name: FUN_02190e44
 */


undefined8 FUN_02190e44(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  short sVar9;
  long *plVar10;
  
  lVar7 = *(long *)*param_1;
  if (**(char **)(lVar7 + 0x88) != '\0') {
    uVar5 = FUN_0219118c(*(undefined8 *)param_1[1],lVar7 + 0x60,lVar7 + 0x80);
    return uVar5;
  }
  if (*(char *)(param_1[2] + 4) == '\0') {
    lVar7 = *(long *)param_1[3];
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar9 = *(short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_02190f30;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02190f30:
          bVar4 = false;
        }
        if (bVar4) {
          if (*(long *)(lVar7 + 0x10) != 0) {
            plVar10 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
            lVar7 = FUN_02191194(plVar10);
            if (((lVar7 != 0) && (uVar6 = FUN_01e0d238(plVar10), (uVar6 & 1) != 0)) &&
               (*(char *)(lVar7 + 0x11a) != '\0')) {
              puVar8 = (undefined4 *)param_1[2];
              *puVar8 = *(undefined4 *)(lVar7 + 0x13c);
              *(undefined1 *)(puVar8 + 1) = 1;
            }
            (**(code **)(*plVar10 + 0x60))(plVar10);
            goto LAB_02190e94;
          }
          break;
        }
        sVar9 = sVar2;
      } while (sVar2 != 0);
    }
    puVar8 = (undefined4 *)param_1[2];
    *puVar8 = 0;
    *(undefined1 *)(puVar8 + 1) = 1;
  }
LAB_02190e94:
  if (*(char *)((undefined4 *)param_1[2] + 1) == '\0') {
    return 0;
  }
  uVar5 = FUN_021911b8(*(undefined4 *)param_1[2],*(undefined8 *)param_1[1],*(long *)*param_1 + 0x60)
  ;
  return uVar5;
}



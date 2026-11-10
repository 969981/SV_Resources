/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033bd290; name: FUN_033bd290
 */


void FUN_033bd290(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  void *__src;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  
  lVar11 = *(long *)(param_1 + 0x68);
  piVar12 = (int *)(lVar11 + 0x3c);
  if (*piVar12 == 0) {
    uVar10 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x20) >> 1 & 1) != 0) {
      *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfd;
    }
    lVar6 = *(long *)(lVar11 + 0x30);
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x3a);
    lVar9 = lVar6 + uVar8 * 0xf08;
    iVar1 = *(int *)(lVar9 + 0xf04);
    uVar10 = *(uint *)(lVar9 + 0xf00);
    if (iVar1 == 0) {
      __src = (void *)(lVar6 + uVar8 * 0xf08);
      uVar7 = *(int *)(lVar11 + 0x4c) * uVar10;
    }
    else {
      uVar10 = uVar10 - iVar1;
      __src = (void *)(lVar6 + uVar8 * 0xf08 + (ulong)(uint)(*(int *)(lVar11 + 0x4c) * iVar1) * 2);
      uVar7 = *(int *)(lVar11 + 0x4c) * uVar10;
    }
    memcpy(*(void **)(param_1 + 0xa8),__src,(ulong)uVar7 << 1);
    uVar7 = *(ushort *)(lVar11 + 0x3a) + 1;
    uVar2 = *(uint *)(lVar11 + 0x40);
    sVar5 = 0;
    if (uVar2 != 0) {
      sVar5 = (short)(uVar7 / uVar2);
    }
    *(short *)(lVar11 + 0x3a) = (short)uVar7 - sVar5 * (short)uVar2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = *piVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar11 = *(long *)(param_1 + 0x68);
  }
  if ((*(int *)(lVar11 + 0x28) == *(int *)(lVar11 + 0x24)) ||
     (*(uint *)(param_1 + 0x88) <= *(uint *)(param_1 + 0x7c))) {
    if (uVar10 == 0) {
      if ((*(char *)(lVar11 + 0x54) != '\0') ||
         ((*(int *)(lVar11 + 0x24) == 0 && (*(int *)(lVar11 + 0x3c) == 0)))) {
        *(undefined2 *)(param_2 + 0x12) = 0;
        *(undefined4 *)(param_2 + 0x2c) = 2;
        return;
      }
      goto LAB_033bd3bc;
    }
  }
  else {
    do {
      FUN_033bcc58(param_1);
      if (*(int *)(*(long *)(param_1 + 0x68) + 0x28) == *(int *)(*(long *)(param_1 + 0x68) + 0x24))
      break;
    } while (*(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0x88));
  }
  nn::os::SignalEvent((EventType *)(PTR_DAT_047e6970 + 0xa38));
LAB_033bd3bc:
  if (*(short *)(param_1 + 0x54) == 1) {
    uVar7 = *(uint *)(param_1 + 0x24);
  }
  else {
    uVar7 = *(int *)(param_1 + 0x38) + 1;
  }
  uVar2 = uVar7 - *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) + (uVar10 & 0xffff) <= uVar7) {
    uVar2 = uVar10;
  }
  FUN_034f9790(param_1,*(undefined8 *)(param_1 + 0xa8),uVar2,*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x25c),param_2);
  return;
}



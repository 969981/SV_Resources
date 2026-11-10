/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b047ec; name: FUN_02b047ec
 */


void FUN_02b047ec(long param_1,long param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  int *piVar12;
  long lVar13;
  uint *puVar14;
  
  if (param_2 == 0) {
    return;
  }
  lVar9 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(*(long *)(lVar9 + 0x10) + 4) >> 2 & 1) == 0) {
    sVar4 = FUN_00cf44f4();
    if (sVar4 == 0) {
      return;
    }
    lVar9 = *(long *)(param_2 + 0x70);
  }
  uVar10 = FUN_00cf44f4(lVar9);
  piVar12 = (int *)(param_1 + (uVar10 & 0xffff) * 0x18 + 0x40);
  if (*piVar12 < param_3) {
    *piVar12 = param_3;
    *(undefined1 *)(param_1 + (uVar10 & 0xffff) * 0x18 + 0x4d) = 1;
  }
  lVar9 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(*(long *)(lVar9 + 0x10) + 4) >> 2 & 1) == 0) {
    sVar4 = FUN_00cf44f4();
    if (sVar4 == 0) {
      return;
    }
    lVar9 = *(long *)(param_2 + 0x70);
  }
  puVar14 = (uint *)(param_1 + 0x4934);
  uVar10 = FUN_00cf44f4(lVar9);
  uVar5 = FUN_00cf41a8(*(undefined8 *)(param_2 + 0x70));
  FUN_02b04a10(param_1,uVar10 & 0xffffffff,uVar5);
  uVar6 = (uint)uVar10 & 0xffff;
  if (uVar6 != 0x30a) {
    if (uVar6 == 0x36b) {
      puVar14 = (uint *)(param_1 + 0x524c);
    }
    else {
      if (uVar6 != 0x3a6) goto LAB_02b048c8;
      puVar14 = (uint *)(param_1 + 0x57d4);
    }
  }
  *puVar14 = *puVar14 | 3;
LAB_02b048c8:
  uVar6 = FUN_00cec030(*(undefined8 *)(param_2 + 0x70));
  lVar9 = param_1 + (uVar10 & 0xffff) * 0x18;
  *(byte *)(lVar9 + 0x48) = *(byte *)(lVar9 + 0x48) | (byte)(1 << (ulong)(uVar6 & 0x1f));
  lVar13 = *(long *)(param_2 + 0x70);
  plVar1 = (long *)(lVar13 + 0x20);
  lVar9 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x28));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02b04910;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02b04910:
  uVar7 = FUN_0100bd94(lVar13);
  *(undefined8 *)(lVar13 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x28));
  FUN_020f6720(param_1,uVar10 & 0xffffffff,uVar7);
  uVar6 = FUN_00dbf838(*(undefined8 *)(param_2 + 0x70));
  uVar8 = FUN_00dbfb7c(*(undefined8 *)(param_2 + 0x70));
  pcVar11 = (char *)(param_1 + (uVar10 & 0xffff) * 0x18 + 0x4c);
  if (*pcVar11 == '\0') {
    *pcVar11 = (uVar6 & 0xfff0 ^ uVar6 >> 0x10 ^ uVar8 >> 0x10 ^ uVar8 & 0xfff0) < 0x10;
  }
  return;
}



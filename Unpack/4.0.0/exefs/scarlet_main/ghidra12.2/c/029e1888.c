/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e1888; name: FUN_029e1888
 */


undefined8 FUN_029e1888(long param_1,int *param_2)

{
  short *psVar1;
  uint *puVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  
  if (param_2 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x50);
    for (lVar10 = *(long *)(param_1 + 0x48); lVar10 != lVar3; lVar10 = lVar10 + 0x30) {
      lVar8 = *(long *)(lVar10 + 0x20);
      if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar8 + 0x1a);
        sVar11 = *(short *)(lVar8 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar11) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_029e1914;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_029e1914:
            bVar6 = false;
          }
          if (bVar6) {
            if (*(long *)(lVar8 + 0x10) != 0) {
              plVar12 = (long *)(*(long *)(lVar8 + 0x10) + -8);
              if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
                 (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar9 == 0)) {
                lVar8 = 0;
              }
              else {
                puVar2 = (uint *)((long)param_2 + uVar9);
                lVar8 = (long)puVar2 + (ulong)*puVar2;
              }
              FUN_029e7ec8(plVar12,lVar8);
              if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
                 (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar9 == 0)) {
                lVar8 = 0;
              }
              else {
                puVar2 = (uint *)((long)param_2 + uVar9);
                lVar8 = (long)puVar2 + (ulong)*puVar2;
              }
              FUN_029e7ff4(plVar12,lVar8);
              if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
                 (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar9 == 0)) {
                lVar8 = 0;
              }
              else {
                puVar2 = (uint *)((long)param_2 + uVar9);
                lVar8 = (long)puVar2 + (ulong)*puVar2;
              }
              FUN_029e8128(plVar12,lVar8);
              if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xb) ||
                 (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar9 == 0)) {
                lVar8 = 0;
              }
              else {
                puVar2 = (uint *)((long)param_2 + uVar9);
                lVar8 = (long)puVar2 + (ulong)*puVar2;
              }
              FUN_029e8258(plVar12,lVar8);
              (**(code **)(*plVar12 + 0x18))(plVar12);
            }
            break;
          }
          sVar11 = sVar4;
        } while (sVar4 != 0);
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}



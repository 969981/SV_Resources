/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c3efc; name: FUN_007c3efc
 */


void FUN_007c3efc(ulong param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_047d0970;
  lVar9 = *(long *)PTR_DAT_047d08a0;
  if (lVar9 == 0) {
    return;
  }
  if (*(long *)(lVar9 + 0x80) != 0) {
    puVar1 = (ulong *)(*(long *)(lVar9 + 0x80) + 0xb0);
    lVar5 = *(long *)PTR_DAT_047d0970;
    uVar6 = *puVar1;
    while( true ) {
      while (uVar6 != param_1) {
        if ((uVar6 & 0xfffffffe) != param_1) goto LAB_007c3f88;
        FUN_007ca35c(lVar5 / 100000);
        uVar6 = *puVar1;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') break;
      uVar6 = *puVar1;
    }
  }
LAB_007c3f88:
  lVar5 = lVar9 + 0x40;
  FUN_007c9e3c(lVar5);
  lVar7 = *(long *)(lVar9 + 0x30);
  if (lVar7 != lVar9 + 0x28) {
    lVar8 = *(long *)puVar4;
    do {
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x10) + 0xb0);
      do {
        if (*puVar1 != param_1) {
          if ((*puVar1 & 0xfffffffe) == param_1) {
            FUN_007c9e44(lVar5);
            FUN_007ca35c(lVar8 / 100000);
            FUN_007c9e3c(lVar5);
            lVar7 = *(long *)(lVar9 + 0x30);
            goto joined_r0x007c4008;
          }
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar7 = *(long *)(lVar7 + 8);
joined_r0x007c4008:
    } while (lVar7 != lVar9 + 0x28);
  }
  FUN_007c9e44(lVar5);
  return;
}



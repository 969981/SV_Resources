/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03232c48; name: FUN_03232c48
 */


bool FUN_03232c48(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  if (*(int *)((long)param_1 + 0xc) == 1) {
    return true;
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0x20;
  uVar5 = *(uint *)(*param_1 + 0x40);
  iVar6 = *(int *)((long)param_1 + 0x14);
  if (iVar6 < (int)(uVar5 >> 0x15)) {
LAB_03232c74:
    bVar4 = false;
    *(uint *)(param_1 + 1) = uVar5 >> 0x15;
    goto LAB_03232db0;
  }
  puVar1 = (uint *)(*param_1 + 0x40);
  uVar2 = uVar5 + 0x80 & 0x3f80;
  bVar4 = (uVar5 + 0x80 >> 7 & 0x7f) == (uVar5 & 0x7f);
  uVar7 = uVar5 + 0x200000 & 0xffe00000 | uVar2 | uVar5 & 0x1fc07f;
  if (!bVar4) {
    uVar7 = uVar2 | uVar5 & 0xffffc07f;
  }
  uVar2 = *puVar1;
  if (uVar2 == uVar5) {
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_03232ce0;
  }
  else {
    ClearExclusiveLocal();
LAB_03232ce0:
    uVar8 = 0;
    uVar5 = uVar2;
    do {
      if (uVar8 != 0x1f) {
        iVar6 = (1 << (ulong)(uVar8 & 0x1f)) + 1;
        do {
          iVar6 = iVar6 + -1;
          DataMemoryBarrier(2,2);
          Yield();
        } while (1 < iVar6);
      }
      iVar6 = *(int *)((long)param_1 + 0x14);
      if (iVar6 < (int)(uVar5 >> 0x15)) goto LAB_03232c74;
      uVar2 = uVar5 + 0x80 & 0x3f80;
      if (uVar8 < 8) {
        uVar8 = uVar8 + 1;
      }
      bVar4 = (uVar5 + 0x80 >> 7 & 0x7f) == (uVar5 & 0x7f);
      uVar7 = uVar5 + 0x200000 & 0xffe00000 | uVar2 | uVar5 & 0x1fc07f;
      if (!bVar4) {
        uVar7 = uVar2 | uVar5 & 0xffffc07f;
      }
      puVar1 = (uint *)(*param_1 + 0x40);
      uVar2 = *puVar1;
      if (uVar2 == uVar5) {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = uVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_03232d74;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_03232d74:
        bVar9 = false;
      }
      uVar5 = uVar2;
    } while (!bVar9);
  }
  if (bVar4) {
    *(undefined4 *)((long)param_1 + 0xc) = 0x10;
    bVar4 = true;
  }
  else {
    bVar4 = *(int *)((long)param_1 + 0xc) == 0x10;
  }
  *(uint *)(param_1 + 1) = uVar7 >> 0x15;
  iVar6 = *(int *)((long)param_1 + 0x14);
LAB_03232db0:
  *(int *)((long)param_1 + 0x14) = iVar6 + 1;
  return bVar4;
}



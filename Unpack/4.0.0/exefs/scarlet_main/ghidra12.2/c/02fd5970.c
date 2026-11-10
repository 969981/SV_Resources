/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fd5970; name: FUN_02fd5970
 */


void FUN_02fd5970(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  long *plVar13;
  
  if ((*(long *)(param_2 + 8) == 0) && (lVar12 = tpidr_el0, *(long *)(lVar12 + 0x1000b8) == 0)) {
    uVar5 = FUN_00e5d3b4();
    *(undefined8 *)(lVar12 + 0x1000b8) = uVar5;
  }
  plVar13 = *(long **)(param_1 + 0x10);
  puVar1 = (uint *)(plVar13 + 0x22);
  uVar2 = *(uint *)(plVar13 + 0x22);
  uVar10 = (ulong)uVar2 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar6 = *puVar1;
  if (uVar6 == uVar2) {
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar2 + 0x200 & 0xfffffe00 | puVar1[uVar10 + 1];
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      bVar9 = true;
      goto LAB_02fd59fc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar9 = false;
LAB_02fd59fc:
  if (bVar9) {
    puVar11 = puVar1 + uVar10 + 1;
  }
  else {
    do {
      uVar10 = (ulong)(uVar6 & 0x1ff);
      DataMemoryBarrier(2,3);
      uVar2 = *puVar1;
      if (uVar2 == uVar6) {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = uVar6 + 0x200 & 0xfffffe00 | *(uint *)((long)plVar13 + uVar10 * 4 + 0x114);
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02fd5a48;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02fd5a48:
        bVar9 = false;
      }
      uVar6 = uVar2;
    } while (!bVar9);
    puVar11 = (uint *)((long)plVar13 + uVar10 * 4 + 0x114);
  }
  *puVar11 = 0x1ff;
  DataMemoryBarrier(2,3);
  puVar11 = *(uint **)(*plVar13 + uVar10 * 8);
  lVar12 = *(long *)(puVar11 + 2);
  uVar8 = *(ulong *)(lVar12 + 0x7e8);
  while (plVar4 = (long *)(uVar8 & 0xfffffffffffffffc), plVar4 != (long *)0x0) {
    uVar8 = plVar4[1];
    if ((uVar8 & 3) == 0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,lVar12,uVar10);
    }
  }
  FUN_02fd48c4(param_1 + -0x20,puVar11);
  uVar2 = *puVar11;
  lVar12 = *(long *)(*(long *)(*plVar13 + (long)(int)uVar2 * 8) + 8);
  uVar10 = *(ulong *)(lVar12 + 0x7f0);
  while (plVar4 = (long *)(uVar10 & 0xfffffffffffffffc), plVar4 != (long *)0x0) {
    uVar10 = plVar4[1];
    if ((uVar10 & 3) == 0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,lVar12,uVar2);
    }
  }
  uVar6 = *(uint *)(plVar13 + 0x22);
  lVar12 = (long)(int)uVar2 * 4;
  DataMemoryBarrier(2,3);
  *(uint *)((long)plVar13 + lVar12 + 0x114) = uVar6 & 0x1ff;
  uVar7 = *puVar1;
  if (uVar7 == uVar6) {
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar6 & 0xfffffe00 | uVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    DataMemoryBarrier(2,3);
    *(uint *)((long)plVar13 + lVar12 + 0x114) = uVar7 & 0x1ff;
    uVar6 = *puVar1;
    if (uVar6 == uVar7) {
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar7 & 0xfffffe00 | uVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_02fd5b7c;
      bVar9 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02fd5b7c:
      bVar9 = false;
    }
    uVar7 = uVar6;
    if (bVar9) {
      return;
    }
  } while( true );
}



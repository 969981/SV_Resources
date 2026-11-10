/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032354c; name: FUN_0032354c
 */


long FUN_0032354c(long param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x10);
  puVar3 = *(ulong **)(lVar9 + 0xc0);
  do {
    uVar6 = *puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *puVar3 = uVar6 + 0x80;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (puVar3[1] < uVar6 + 0x80) {
    lVar4 = FUN_0038e7c0(puVar3,0x80);
    *(long *)(lVar4 + 8) = param_1;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    lVar5 = *(long *)(lVar9 + 0x120);
  }
  else {
    lVar4 = (long)puVar3 + uVar6 + 0x20;
    *(long *)((long)puVar3 + uVar6 + 0x28) = param_1;
    *(undefined8 *)((long)puVar3 + uVar6 + 0x30) = 0;
    lVar5 = *(long *)(lVar9 + 0x120);
  }
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    FUN_0033a35c();
    uVar7 = *(undefined8 *)(lVar9 + 0x120);
  }
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x10) = uVar7;
  *(undefined1 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
                    /* try { // try from 003235e0 to 003235f3 has its CatchHandler @ 00323638 */
  uVar7 = FUN_0033a31c(*(undefined8 *)(lVar9 + 0x120));
  *(undefined8 *)(lVar4 + 0x20) = uVar7;
  FUN_0038da50(lVar4,param_2);
  if ((param_3 & 1) != 0) {
    *(undefined1 **)(lVar4 + 0x60) = &LAB_003237ac;
    *(long *)(lVar4 + 0x68) = lVar4;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    *(long *)(lVar4 + 0x18) = lVar4 + 0x58;
  }
  plVar8 = *(long **)(lVar9 + 200);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = *plVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return lVar4;
}



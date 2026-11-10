/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00356a10; name: FUN_00356a10
 */


void FUN_00356a10(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  FUN_0038db40();
  uVar5 = *(ulong *)(param_1 + 0x60);
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x70) + uVar7 * 8) == param_2) goto LAB_00356ac4;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  if (uVar5 == *(ulong *)(param_1 + 0x68)) {
    uVar6 = uVar5 * 3 >> 1;
    uVar7 = uVar5 + 8;
    if (uVar5 + 8 <= uVar6) {
      uVar7 = uVar6;
    }
    *(ulong *)(param_1 + 0x68) = uVar7;
    lVar4 = FUN_0038c7f0(*(undefined8 *)(param_1 + 0x70),uVar7 << 3);
    uVar5 = *(ulong *)(param_1 + 0x60);
    *(long *)(param_1 + 0x70) = lVar4;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x70);
  }
  *(ulong *)(param_1 + 0x60) = uVar5 + 1;
  *(long *)(lVar4 + uVar5 * 8) = param_2;
  plVar1 = (long *)(param_2 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 < 1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_003576f0(param_1,0,0);
LAB_00356ac4:
  FUN_0038db60(param_1);
  return;
}



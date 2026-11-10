/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00357430; name: FUN_00357430
 */


void FUN_00357430(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  FUN_0038db40();
  if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x58)) {
    uVar5 = *(long *)(param_1 + 0x50) * 2;
    if (uVar5 < 9) {
      uVar5 = 8;
    }
    *(ulong *)(param_1 + 0x58) = uVar5;
    uVar4 = FUN_0038c7f0(*(undefined8 *)(param_1 + 0x60),uVar5 << 3);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
  }
  plVar1 = (long *)(param_2 + 8);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 < 1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = *(long *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar6 + 1;
  *(long *)(*(long *)(param_1 + 0x60) + lVar6 * 8) = param_2;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar5 = 0;
    do {
      FUN_00356a10(*(undefined8 *)(*(long *)(param_1 + 0x30) + uVar5 * 8),param_2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulong *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar5 = 0;
    do {
      FUN_00357430(*(undefined8 *)(*(long *)(param_1 + 0x48) + uVar5 * 8),param_2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulong *)(param_1 + 0x38));
  }
  FUN_0038db60(param_1);
  return;
}



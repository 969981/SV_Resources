/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f0ab0; name: FUN_002f0ab0
 */


void FUN_002f0ab0(long *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  *param_1 = (long)(PTR_DAT_047cc988 + 0x10);
                    /* try { // try from 002f0ac8 to 002f0b33 has its CatchHandler @ 002f0b38 */
  FUN_002ef4f0(param_1 + 0xc);
  uVar2 = (uint)param_1[8] & 3;
  if (1 < uVar2) {
    uVar5 = param_1[8] & 0xfffffffffffffffc;
    plVar1 = (long *)(uVar5 + 0x40);
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 + -1 == 0) {
      FUN_00376de0(uVar2,uVar5,*(undefined4 *)(uVar5 + 0x48));
    }
  }
  param_1[8] = 0;
  if ((void *)param_1[9] != (void *)0x0) {
    free((void *)param_1[9]);
    param_1[9] = 0;
  }
  auVar7 = FUN_0038dd70(1);
  *(undefined1 (*) [16])(param_1 + 10) = auVar7;
  FUN_0038db20(param_1 + 4);
  return;
}



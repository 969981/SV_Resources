/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00316090; name: FUN_00316090
 */


void FUN_00316090(uint *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  void *__ptr;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  __ptr = *(void **)(param_1 + 8);
  if (param_1[1] != 0) {
    uVar8 = 0;
    do {
      uVar6 = (ulong)param_1[6];
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = (uVar8 + *param_1) / uVar6;
      }
      uVar5 = *(ulong *)((long)__ptr + ((uVar8 + *param_1) - uVar5 * uVar6) * 8);
      uVar2 = (uint)uVar5 & 3;
      if (1 < uVar2) {
        uVar5 = uVar5 & 0xfffffffffffffffc;
        plVar1 = (long *)(uVar5 + 0x40);
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          FUN_00376de0(uVar2,uVar5,*(undefined4 *)(uVar5 + 0x48));
        }
      }
      uVar8 = uVar8 + 1;
      __ptr = *(void **)(param_1 + 8);
    } while (uVar8 < param_1[1]);
  }
  free(__ptr);
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}



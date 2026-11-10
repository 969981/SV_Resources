/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f2140; name: FUN_002f2140
 */


void FUN_002f2140(long *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_047cc998 + 0x10);
  param_1[0x10] = (long)"invalid";
  if ((void *)param_1[0x11] != (void *)0x0) {
                    /* try { // try from 002f2170 to 002f2193 has its CatchHandler @ 002f2208 */
    free((void *)param_1[0x11]);
    param_1[0x11] = 0;
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    free((void *)param_1[0x12]);
    param_1[0x12] = 0;
  }
  if ((void *)param_1[0x13] != (void *)0x0) {
    free((void *)param_1[0x13]);
    param_1[0x13] = 0;
  }
  *param_1 = (long)(PTR_DAT_047cc990 + 0x10);
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
                    /* try { // try from 002f21dc to 002f2203 has its CatchHandler @ 002f221c */
  FUN_0038db20(param_1 + 4);
  FUN_00358020(param_1 + 0xe);
  FUN_00358200();
  FUN_0034ee10(param_1 + 0xd);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00330188; name: FUN_00330188
 */


void FUN_00330188(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  
  if (4 < param_1[0x14]) {
                    /* try { // try from 003301a0 to 003301ab has its CatchHandler @ 00330270 */
    FUN_00350fd0();
  }
  FUN_00343d90(param_1[0x15]);
  puVar7 = (undefined8 *)param_1[0x13];
  if (puVar7 == (undefined8 *)0x0) {
LAB_003301cc:
    uVar4 = *param_1;
    if ((uVar4 & 1) == 0) goto LAB_003301d4;
LAB_00330204:
    puVar6 = (ulong *)param_1[1];
    if (puVar6 == (ulong *)0x0) {
      uVar4 = 0;
      goto LAB_0033025c;
    }
  }
  else {
    plVar1 = puVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 != 0) goto LAB_003301cc;
    (**(code **)*puVar7)(puVar7);
    FUN_0049e790(PTR_LAB_047cba48,puVar7);
    uVar4 = *param_1;
    if ((uVar4 & 1) != 0) goto LAB_00330204;
LAB_003301d4:
    puVar6 = param_1 + 1;
  }
  puVar6 = puVar6 + (uVar4 >> 1) * 0x12 + -1;
  lVar5 = (uVar4 >> 1) + 1;
  while (lVar5 = lVar5 + -1, lVar5 != 0) {
    uVar4 = *puVar6;
    puVar6 = puVar6 + -0x12;
                    /* try { // try from 00330230 to 00330233 has its CatchHandler @ 0033028c */
    FUN_00343d90(uVar4);
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar4 = param_1[1];
LAB_0033025c:
  FUN_0049e790(PTR_LAB_047cba48,uVar4);
  return;
}



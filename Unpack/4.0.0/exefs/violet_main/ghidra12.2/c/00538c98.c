/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00538c98; name: FUN_00538c98
 */


void FUN_00538c98(undefined8 *param_1,undefined8 *param_2,char *param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  size_t sVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  
  *param_1 = *param_2;
  lVar5 = param_2[1];
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[5] = plVar3;
  sVar4 = strlen(param_3);
  if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 00538e08 to 00538e0f has its CatchHandler @ 00538e44 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((long)param_1 + 0x11);
    *(char *)(param_1 + 2) = (char)((int)sVar4 << 1);
    if (sVar4 != 0) goto LAB_00538d4c;
  }
  else {
    uVar7 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar7,1);
    param_1[2] = uVar7 | 1;
    param_1[3] = sVar4;
    param_1[4] = pvVar6;
LAB_00538d4c:
    memcpy(pvVar6,param_3,sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
  plVar3 = (long *)FUN_01cf7e20();
  param_1[9] = plVar3;
  sVar4 = strlen(param_4);
  if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 00538e10 to 00538e17 has its CatchHandler @ 00538e18 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((long)param_1 + 0x31);
    *(char *)(param_1 + 6) = (char)((int)sVar4 << 1);
    if (sVar4 == 0) goto LAB_00538de0;
  }
  else {
    uVar7 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar7,1);
    param_1[6] = uVar7 | 1;
    param_1[7] = sVar4;
    param_1[8] = pvVar6;
  }
  memcpy(pvVar6,param_4,sVar4);
LAB_00538de0:
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
  FUN_00567e00(param_1 + 10,param_1 + 2,param_1 + 6);
  return;
}



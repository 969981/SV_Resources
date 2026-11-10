/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005c7b18; name: FUN_005c7b18
 */


void FUN_005c7b18(undefined8 *param_1,undefined8 *param_2,char *param_3,char *param_4,
                 undefined8 param_5)

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
    plVar3 = (long *)(lVar5 + 0x10);
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
                    /* try { // try from 005c7c90 to 005c7c97 has its CatchHandler @ 005c7cb0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((long)param_1 + 0x11);
    *(char *)(param_1 + 2) = (char)((int)sVar4 << 1);
    if (sVar4 != 0) goto LAB_005c7bd4;
  }
  else {
    uVar7 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar7,1);
    param_1[2] = uVar7 | 1;
    param_1[3] = sVar4;
    param_1[4] = pvVar6;
LAB_005c7bd4:
    memcpy(pvVar6,param_3,sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
  plVar3 = (long *)FUN_01cf7e20();
  param_1[9] = plVar3;
  sVar4 = strlen(param_4);
  if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 005c7c98 to 005c7c9f has its CatchHandler @ 005c7ca0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((long)param_1 + 0x31);
    *(char *)(param_1 + 6) = (char)((int)sVar4 << 1);
    if (sVar4 == 0) goto LAB_005c7c68;
  }
  else {
    uVar7 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar7,1);
    param_1[6] = uVar7 | 1;
    param_1[7] = sVar4;
    param_1[8] = pvVar6;
  }
  memcpy(pvVar6,param_4,sVar4);
LAB_005c7c68:
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 005c7c70 to 005c7c77 has its CatchHandler @ 005c7cc4 */
  FUN_005c7e84(param_1 + 10,param_5);
  return;
}



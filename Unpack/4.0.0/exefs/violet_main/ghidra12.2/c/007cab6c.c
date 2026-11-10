/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cab6c; name: FUN_007cab6c
 */


void FUN_007cab6c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  
  plVar2 = param_1 + 8;
  *param_1 = (long)(PTR_DAT_047d1158 + 0x10);
  FUN_007c9e3c(plVar2);
  plVar3 = param_1 + 5;
  for (plVar5 = (long *)param_1[6]; plVar5 != plVar3; plVar5 = (long *)plVar5[1]) {
    (**(code **)(*(long *)plVar5[2] + 0x38))((long *)plVar5[2],0);
  }
  do {
    if ((long *)param_1[6] == plVar3) {
      nn::os::YieldThread();
      break;
    }
    bVar4 = true;
    plVar5 = (long *)param_1[6];
    do {
      plVar1 = plVar5 + 1;
      bVar4 = (bool)(bVar4 & *(int *)(plVar5[2] + 0xcc) - 3U < 2);
      plVar5 = (long *)*plVar1;
    } while ((long *)*plVar1 != plVar3);
    nn::os::YieldThread();
  } while (!bVar4);
  for (plVar5 = (long *)param_1[6]; plVar5 != plVar3; plVar5 = (long *)plVar5[1]) {
    (**(code **)(*(long *)plVar5[2] + 0x40))();
  }
  *(undefined8 *)PTR_DAT_047d08a0 = 0;
  FUN_007c9e44(plVar2);
  nn::os::FreeTlsSlot((int)param_1[0x11]);
  FUN_007c9de4(plVar2);
  return;
}



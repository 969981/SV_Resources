/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00211fc0; name: FUN_00211fc0
 */


void FUN_00211fc0(undefined8 *param_1,long *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x130,8);
  puVar1 = PTR_DAT_047cbce8 + 0x10;
  plVar3[2] = 0;
  plVar3[3] = (long)param_2;
  *plVar3 = (long)puVar1;
  plVar3[1] = 0;
  FUN_006c4254(plVar3 + 4);
  plVar3[4] = (long)(PTR_DAT_047cbcf0 + 0x10);
  *(undefined4 *)(plVar3 + 6) = *param_3;
  lVar5 = *(long *)(param_3 + 4);
  lVar4 = *(long *)(param_3 + 2);
  lVar6 = *(long *)(param_3 + 6);
  plVar3[10] = *(long *)(param_3 + 8);
  plVar3[9] = lVar6;
  plVar3[8] = lVar5;
  plVar3[7] = lVar4;
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined1 *)(plVar3 + 0xb) = 0;
  if (*(char *)(param_3 + 10) != '\0') {
    plVar3[0xc] = *(long *)(param_3 + 0xc);
    lVar4 = *(long *)(param_3 + 0xe);
    plVar3[0xe] = *(long *)(param_3 + 0x10);
    plVar3[0xd] = lVar4;
    lVar4 = *(long *)(param_3 + 0x12);
    plVar2 = plVar3 + 0xd;
    plVar3[0xf] = lVar4;
    if (lVar4 == 0) {
      plVar3[0xc] = (long)plVar2;
    }
    else {
      *(long **)(*plVar2 + 0x10) = plVar2;
      *(undefined4 **)(param_3 + 0xc) = param_3 + 0xe;
      *(undefined8 *)(param_3 + 0xe) = 0;
      *(undefined8 *)(param_3 + 0x12) = 0;
    }
    *(undefined1 *)(plVar3 + 0xb) = 1;
  }
                    /* try { // try from 0021209c to 0021209f has its CatchHandler @ 002120e0 */
  FUN_00200584(plVar3 + 0x10,param_3 + 0x14);
  nn::os::InitializeMutex((MutexType *)(plVar3 + 0x1d),false,0);
  nn::os::InitializeEvent((EventType *)(plVar3 + 0x21),0,0);
  nn::os::SignalEvent((EventType *)(plVar3 + 0x21));
  *param_1 = plVar3 + 4;
  param_1[1] = plVar3;
  return;
}



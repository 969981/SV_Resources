/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00339f28; name: FUN_00339f28
 */


void FUN_00339f28(long *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  iVar1 = *(int *)(*(long *)(*param_2 + 0x10) + 0x58);
  plVar5 = (long *)param_2[8];
  if (param_2[0xb] != 0) {
    iVar1 = (iVar1 + 0xfU & 0xfffffff0) + (int)param_2[0xb];
  }
  uVar6 = (ulong)(iVar1 + 0x5f) & 0xfffffff0;
  do {
    lVar7 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar7 + uVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((ulong)plVar5[1] < uVar6 + lVar7) {
    lVar7 = FUN_0038e7c0();
  }
  else {
    lVar7 = (long)plVar5 + lVar7 + 0x20;
  }
  local_90 = (undefined8 *)*param_2;
  *param_2 = 0;
  lStack_80 = param_2[2];
  local_88 = param_2[1];
  lStack_70 = param_2[4];
  local_78 = param_2[3];
  lStack_60 = param_2[6];
  local_68 = param_2[5];
  lStack_50 = param_2[8];
  local_58 = param_2[7];
  lStack_40 = param_2[10];
  local_48 = param_2[9];
  local_38 = param_2[0xb];
                    /* try { // try from 00339fe4 to 00339ff3 has its CatchHandler @ 0033a050 */
  FUN_0033a09c(lVar7,&local_90,param_3);
  puVar4 = local_90;
  *param_1 = lVar7;
  if (local_90 != (undefined8 *)0x0) {
    plVar5 = local_90 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*local_90)(local_90);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
    }
  }
  return;
}



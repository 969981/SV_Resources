/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01810cf4; name: thunk_FUN_01810cf8
 */


void thunk_FUN_01810cf8(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar6 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar6) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01810d60;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01810d60:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar5 + 0x10) == 0) {
          return;
        }
        plVar7 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
        lVar5 = *param_2;
        if (lVar5 == 0) goto LAB_01810d8c;
        puVar8 = (undefined8 *)*param_1;
        if (*(short *)(lVar5 + 0x1a) == 0) goto LAB_01810d8c;
        psVar1 = (short *)(lVar5 + 0x1a);
        sVar6 = *(short *)(lVar5 + 0x1a);
        goto LAB_01810dcc;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  return;
LAB_01810dcc:
  sVar2 = *psVar1;
  if (sVar2 == sVar6) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_01810df0;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01810df0:
    bVar4 = false;
  }
  if (bVar4) {
    lVar5 = *(long *)(lVar5 + 0x10);
    if (lVar5 != 0) {
      FUN_01766830(lVar5 + 0xe0,*puVar8);
      FUN_017c3020(lVar5 + 0xe0,puVar8[1]);
      (**(code **)(*(long *)(lVar5 + -0x28) + 0x60))(lVar5 + -0x28);
    }
    goto LAB_01810d8c;
  }
  sVar6 = sVar2;
  if (sVar2 == 0) {
LAB_01810d8c:
    FUN_0125a850(plVar7,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x01810db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x60))(plVar7);
    return;
  }
  goto LAB_01810dcc;
}



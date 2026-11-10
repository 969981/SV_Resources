/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032260f8; name: FUN_032260f8
 */


void FUN_032260f8(undefined8 *param_1,void *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  puVar3 = PTR_DAT_047e34b8;
  *param_1 = &PTR_FUN_046aa710;
  param_1[1] = 0;
  plVar6 = (long *)((long)param_2 + (long)param_3 + -0x40);
  *plVar6 = (long)(puVar3 + 0x10);
  *(undefined8 *)((long)param_2 + (long)param_3 + -0x38) = 0xffffffff;
  *(undefined8 *)((long)param_2 + (long)param_3 + -0x30) = 1;
  *(undefined8 *)((long)param_2 + (long)param_3 + -0x28) = 0;
  *(void **)((long)param_2 + (long)param_3 + -0x20) = param_2;
  *(undefined1 *)((long)param_2 + (long)param_3 + -8) = 0;
  *(undefined8 *)((long)param_2 + (long)param_3 + -0x18) = 0;
  *(long *)((long)param_2 + (long)param_3 + -0x10) = (long)(param_3 + -0x41);
  memset(param_2,0,(long)(param_3 + -0x40));
  plVar4 = (long *)param_1[1];
  if (((plVar4 != plVar6) && (param_1[1] = plVar6, plVar4 != (long *)0x0)) && (plVar4[1] != 0)) {
    plVar6 = plVar4 + 2;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x032261a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x18))();
      return;
    }
  }
  return;
}



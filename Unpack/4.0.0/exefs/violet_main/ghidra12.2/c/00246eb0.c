/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00246eb0; name: FUN_00246eb0
 */


void FUN_00246eb0(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR_DAT_047cc0c0;
  param_1[2] = (long)(param_1 + 1);
  param_1[3] = param_2;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[1] = (long)(param_1 + 1);
  param_1[4] = *param_3;
  lVar5 = param_3[1];
  param_1[5] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  thunk_FUN_006c5174(param_1 + 4,param_1);
  return;
}



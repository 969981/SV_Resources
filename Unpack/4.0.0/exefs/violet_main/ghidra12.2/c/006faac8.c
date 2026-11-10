/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006faac8; name: FUN_006faac8
 */


void FUN_006faac8(undefined8 *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined4 local_58 [2];
  
  plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0xa8,8);
  plVar5[2] = 0;
  plVar6 = plVar5 + 1;
  *plVar6 = 0;
  puVar2 = PTR_DAT_047d0010;
  plVar5[3] = (long)param_3;
  plVar1 = plVar5 + 4;
  *plVar5 = (long)(puVar2 + 0x10);
  FUN_006c4254(plVar1);
  plVar5[4] = (long)(PTR_DAT_047d0018 + 0x10);
  nn::os::InitializeEvent(plVar5 + 6,0,0);
  plVar5[4] = (long)(PTR_DAT_047d0020 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar5 + 0xb),false,0);
  *(undefined1 *)(plVar5 + 0x14) = 0;
  *param_1 = plVar1;
  param_1[1] = plVar5;
  if (plVar5 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x148,8);
  puVar2 = PTR_DAT_047d0028 + 0x10;
  plVar6[2] = 0;
  plVar6[3] = (long)param_3;
  *plVar6 = (long)puVar2;
  plVar6[1] = 0;
  FUN_006c5398(plVar6 + 4);
  plVar6[4] = (long)(PTR_DAT_047d0030 + 0x10);
  lVar7 = (**(code **)(*param_3 + 0x10))(param_3,param_4,0x10);
  if (lVar7 == 0) {
    local_58[0] = 0x220;
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)local_58,"");
  }
  FUN_006c4058(plVar6 + 10,plVar1,0,lVar7,param_4,1);
  puVar2 = PTR_DAT_047d0038;
  *(undefined1 *)((long)plVar6 + 0x141) = 1;
  plVar6[0x24] = (long)param_3;
  plVar6[0x25] = param_4;
  plVar6[0x26] = (long)plVar1;
  plVar6[0x27] = (long)plVar5;
  plVar6[10] = (long)(puVar2 + 0x10);
  plVar6[0x23] = *param_2;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[2] = plVar6 + 4;
  param_1[3] = plVar6;
  return;
}



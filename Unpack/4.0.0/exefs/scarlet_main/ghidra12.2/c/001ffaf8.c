/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ffaf8; name: FUN_001ffaf8
 */


void FUN_001ffaf8(undefined8 *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_58 [2];
  
  plVar6 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x80,8);
  plVar6[2] = 0;
  plVar7 = plVar6 + 1;
  *plVar7 = 0;
  puVar2 = PTR_DAT_047cbb10;
  plVar6[3] = (long)param_3;
  plVar1 = plVar6 + 4;
  *plVar6 = (long)(puVar2 + 0x10);
  FUN_006c4254(plVar1);
  plVar6[4] = (long)(PTR_DAT_047cbb18 + 0x10);
  nn::os::InitializeEvent(plVar6 + 6,0,0);
  plVar6[4] = (long)(PTR_DAT_047cbb20 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
  *(undefined1 *)((long)plVar6 + 0x79) = 0;
  *param_1 = plVar1;
  param_1[1] = plVar6;
  if (plVar6 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x150,8);
  puVar2 = PTR_DAT_047cbb40 + 0x10;
  plVar7[2] = 0;
  plVar7[3] = (long)param_3;
  *plVar7 = (long)puVar2;
  plVar7[1] = 0;
  FUN_006c5398(plVar7 + 4);
  plVar7[4] = (long)(PTR_DAT_047cbb48 + 0x10);
  lVar8 = (**(code **)(*param_3 + 0x10))(param_3,param_4,0x10);
  if (lVar8 == 0) {
    local_58[0] = 0x220;
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)local_58,"");
  }
  FUN_006c4058(plVar7 + 10,plVar1,0,lVar8,param_4,1);
  puVar2 = PTR_DAT_047cbb50;
  *(undefined1 *)((long)plVar7 + 0x149) = 1;
  plVar7[0x25] = (long)param_3;
  plVar7[0x26] = param_4;
  plVar7[0x27] = (long)plVar1;
  plVar7[0x28] = (long)plVar6;
  plVar7[10] = (long)(puVar2 + 0x10);
  lVar8 = *param_2;
  lVar3 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  plVar7[0x23] = lVar8;
  plVar7[0x24] = lVar3;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[2] = plVar7 + 4;
  param_1[3] = plVar7;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028552f0; name: FUN_028552f0
 */


void FUN_028552f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long local_a0;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_28;
  
  local_60 = 0x5f3a9f86b611a6e;
  pcStack_58 = "StartupSession";
  local_50 = 0xe;
  local_48 = (long *)0x0;
  FUN_027c20b8(&local_28,&local_60,*(undefined8 *)(param_2 + 0x70));
  plVar5 = local_28;
  local_80 = 0x4009dc70b1776ef1;
  pcStack_78 = "BrowseSession";
  local_70 = 0xd;
  local_68 = (long *)0x0;
  FUN_028531f8(&local_a0,param_2,param_3);
  FUN_028532fc(param_1,plVar5,&local_80,&local_a0);
  lVar6 = local_a0;
  local_a0 = 0;
  if (lVar6 != 0) {
    FUN_02854550(auStack_98);
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}



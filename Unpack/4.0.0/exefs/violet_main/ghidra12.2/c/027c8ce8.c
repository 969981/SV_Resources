/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027c8ce8; name: FUN_027c8ce8
 */


void FUN_027c8ce8(undefined8 param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  long *local_8;
  
  local_40 = 0x584ab694d0c8f3ac;
  pcStack_38 = "LeaveSession";
  local_30 = 0xc;
  local_28 = (long *)0x0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_027c2138(&local_50,param_2 + 0x78);
  FUN_027c8e14(&local_8,&local_40,&local_50);
  local_70 = 0xc51cd822df8e33bd;
  pcStack_68 = "CleanupSession";
  local_60 = 0xe;
  local_58 = (long *)0x0;
  FUN_0186f570(param_1,local_8,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_8 != (long *)0x0) {
    lVar5 = local_8[6];
    psVar1 = (short *)(lVar5 + 0x1a);
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
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*local_8 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  FUN_027bfe38(&local_50);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}



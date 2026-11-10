/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02855504; name: FUN_02855504
 */


void FUN_02855504(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  long *local_8;
  
  local_40 = 0x584ab694d0c8f3ac;
  pcStack_38 = "LeaveSession";
  local_30 = 0xc;
  local_28 = (long *)0x0;
  FUN_0186e4b0(&local_8,&local_40);
  local_60 = 0xc51cd822df8e33bd;
  pcStack_58 = "CleanupSession";
  local_50 = 0xe;
  local_48 = (long *)0x0;
  FUN_0186f570(param_1,local_8,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
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
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}



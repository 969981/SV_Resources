/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028012b8; name: FUN_028012b8
 */


void FUN_028012b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = *param_3;
  uStack_48 = param_3[1];
  local_40 = param_3[2];
  local_38 = (long *)param_3[3];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  local_78 = (long *)*param_4;
  *param_4 = 0;
  uStack_70 = *param_3;
  local_68 = param_3[1];
  uStack_60 = param_3[2];
  local_58 = (long *)param_3[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  FUN_028022e8(param_1,param_2,&local_50,&local_78);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    lVar5 = local_78[6];
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
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f4cc44; name: FUN_01f4cc44
 */


void FUN_01f4cc44(undefined8 *param_1,long param_2,undefined8 *param_3,char *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  char local_88 [48];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  if ((*(long **)(param_2 + 0x60) == (long *)0x0) ||
     (uVar5 = (**(code **)(**(long **)(param_2 + 0x60) + 0x70))(), (uVar5 & 1) == 0)) {
    local_58 = *param_3;
    uStack_50 = param_3[1];
    local_48 = param_3[2];
    local_40 = (long *)param_3[3];
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x18))();
    }
    local_88[0] = '\0';
    cVar3 = *param_4;
    if (cVar3 != '\0') {
      memcpy((void *)((ulong)local_88 | 4),param_4 + 4,0x28);
    }
    local_88[0] = cVar3 != '\0';
    FUN_027c7190(&local_38,param_2,&local_58,local_88);
    FUN_0186e16c(param_1,param_2,&local_38);
    if (local_38 != (long *)0x0) {
      lVar6 = local_38[6];
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
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
    if (local_88[0] != '\0') {
      local_88[0] = '\0';
    }
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0186533c; name: FUN_0186533c
 */


ulong FUN_0186533c(long param_1,void *param_2,uint param_3,ulong param_4,undefined2 *param_5,
                  undefined8 param_6)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  int local_68 [4];
  undefined8 local_58;
  
  if ((param_4 & 1) == 0) {
    uVar7 = FUN_018655f8();
    return uVar7;
  }
  if (*(long *)PTR_DAT_047d0a08 == 0) {
    return 0;
  }
  local_58 = param_6;
  iVar5 = FUN_00f21480();
  if (iVar5 != 1) {
    return 0;
  }
  if (*(long *)PTR_DAT_047d0860 == 0) {
    return 0;
  }
  plVar6 = (long *)FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,DAT_0485ea68,0x7c);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  uVar7 = FUN_018654fc(param_1,&local_58,(ulong)param_3);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (0x8000 < param_3 + 2) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x140) = *param_5;
  memcpy((void *)(param_1 + 0x142),param_2,(ulong)param_3);
  plVar4 = DAT_0485e990;
  if (DAT_0485e990 != (long *)0x0) {
    if ((*(byte *)((long)DAT_0485e990 + 0x249) & 1) == 0) {
      nn::os::LockMutex((MutexType *)&DAT_0485e970);
      bVar9 = false;
      goto LAB_01865490;
    }
    DAT_0485e990 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar8 = plVar4[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar4 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
  }
  bVar9 = true;
LAB_01865490:
  (**(code **)(*plVar6 + 0x60))(local_68,plVar6,param_6,param_1 + 0x140,param_3 + 2);
  if (bVar9) {
    return (ulong)(local_68[0] == 0);
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0485e970);
  return (ulong)(local_68[0] == 0);
}



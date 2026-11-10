/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027046cc; name: FUN_027046cc
 */


void FUN_027046cc(long param_1,undefined4 param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  short sVar7;
  long *local_8;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if ((lVar4 != 0) && (*(short *)(lVar4 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar7 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0270472c;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0270472c:
        bVar6 = false;
      }
      if (bVar6) {
        plVar5 = (long *)(*(long *)(lVar4 + 0x10) + -0x28);
        if (*(long *)(lVar4 + 0x10) == 0) {
          return;
        }
        local_8 = (long *)*param_3;
        if (local_8 != (long *)0x0) {
          (**(code **)(*local_8 + 0x58))();
        }
        FUN_017392f8(plVar5,param_2,&local_8);
        if (local_8 != (long *)0x0) {
          (**(code **)(*local_8 + 0x60))();
        }
        (**(code **)(*plVar5 + 0x60))(plVar5);
        return;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}



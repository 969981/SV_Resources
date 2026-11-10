/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f20378; name: FUN_01f20378
 */


void FUN_01f20378(undefined8 param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long *local_18;
  
  FUN_019877e0(&local_18);
  plVar5 = local_18;
  local_60 = 0x5353054b174741be;
  pcStack_58 = "PassError";
  local_50 = 9;
  local_48 = (long *)0x0;
  FUN_019db778(&local_70,param_2);
  FUN_01f21614(param_1,plVar5,&local_60,&local_70);
  lVar7 = tpidr_el0;
  if (*(long *)(lVar7 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar7 + 0x30) = DAT_04859430;
  }
  plVar5 = local_68;
  local_40 = *(undefined8 *)(lVar7 + 0x30);
  local_38 = *(undefined8 *)(lVar7 + 0x38);
  *(undefined8 *)(lVar7 + 0x30) = local_70;
  *(undefined2 *)(lVar7 + 0x38) = 1;
  local_68 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    *(undefined8 *)(lVar7 + 0x30) = local_40;
    *(undefined2 *)(lVar7 + 0x38) = (undefined2)local_38;
  }
  else {
    (**(code **)(*plVar5 + 8))();
    *(undefined8 *)(lVar7 + 0x30) = local_40;
    *(undefined2 *)(lVar7 + 0x38) = (undefined2)local_38;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 8))(local_68);
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_18 != (long *)0x0) {
    lVar7 = local_18[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_18 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}



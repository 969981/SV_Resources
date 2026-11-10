/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f5bd10; name: FUN_00f5bd10
 */


void FUN_00f5bd10(long param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined2 local_48;
  
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  lVar1 = *(long *)(lVar5 + 0x30);
  uVar2 = *(undefined8 *)(lVar5 + 0x38);
  *(long *)(lVar5 + 0x30) = (long)param_2;
  *(undefined2 *)(lVar5 + 0x38) = 1;
  if (param_2 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    param_2 = DAT_04859430;
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  plVar9 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x50,8);
  puVar7 = PTR_DAT_047dd778;
  puVar6 = PTR_DAT_047dd770;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)(puVar6 + 0x10);
  plVar12 = plVar9 + 3;
  *plVar12 = (long)(puVar7 + 0x10);
  plVar9[4] = 0;
  plVar9[5] = (long)(puVar7 + 0x10);
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  if (param_3 != 0) {
    FUN_00f5de3c(param_3,plVar12,0);
  }
  plVar11 = *(long **)(param_1 + 0x128);
  *(long **)(param_1 + 0x120) = plVar12;
  *(long **)(param_1 + 0x128) = plVar9;
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 1;
    do {
      lVar10 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(long *)(lVar5 + 0x30) = lVar1;
  local_48 = (undefined2)uVar2;
  *(undefined2 *)(lVar5 + 0x38) = local_48;
  return;
}



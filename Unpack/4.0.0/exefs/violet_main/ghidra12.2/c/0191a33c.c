/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0191a33c; name: FUN_0191a33c
 */


float FUN_0191a33c(float param_1,long *param_2,long *param_3,uint param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  float fVar10;
  float fVar11;
  long *local_48;
  long *local_18;
  
  if (((DAT_04837608 & 1) == 0) &&
     (local_18 = param_2, iVar4 = __cxa_guard_acquire(&DAT_04837608), param_2 = local_18, iVar4 != 0
     )) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
    param_2 = local_18;
  }
  DAT_04837610 = DAT_048375f8;
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar9 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0191a464;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0191a464:
        bVar8 = false;
      }
      if (bVar8) {
        plVar6 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
        if (*(long *)(lVar5 + 0x10) == 0) {
          return 0.0;
        }
        lVar5 = *param_3;
        local_18 = plVar6;
        if ((lVar5 == 0) || (*(short *)(lVar5 + 0x1a) == 0)) goto LAB_0191a49c;
        psVar1 = (short *)(lVar5 + 0x1a);
        sVar9 = *(short *)(lVar5 + 0x1a);
        goto LAB_0191a4c8;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  return 0.0;
LAB_0191a4c8:
  sVar2 = *psVar1;
  if (sVar2 == sVar9) {
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_0191a4ec;
    bVar8 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0191a4ec:
    bVar8 = false;
  }
  if (bVar8) {
    plVar7 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
    if (*(long *)(lVar5 + 0x10) != 0) {
      local_48 = plVar7;
      fVar10 = (float)FUN_01e0832c(&local_48);
      if ((param_4 & 0xff) == 1) {
        fVar11 = 0.58;
      }
      else if ((param_4 & 0xff) - 3 < 3) {
        fVar11 = (float)FUN_01e0832c(&local_18);
      }
      else {
        fVar11 = 0.0;
      }
      param_1 = fVar10 + fVar11 + param_1;
      (**(code **)(*plVar7 + 0x60))(plVar7);
      goto LAB_0191a4a0;
    }
    goto LAB_0191a49c;
  }
  sVar9 = sVar2;
  if (sVar2 == 0) {
LAB_0191a49c:
    local_48 = (long *)0x0;
    param_1 = 0.0;
LAB_0191a4a0:
    (**(code **)(*plVar6 + 0x60))(plVar6);
    return param_1;
  }
  goto LAB_0191a4c8;
}



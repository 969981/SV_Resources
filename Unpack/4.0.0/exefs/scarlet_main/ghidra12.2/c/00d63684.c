/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d63684; name: FUN_00d63684
 */


void FUN_00d63684(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  short sVar9;
  long *plVar10;
  long *local_38;
  
  plVar4 = (long *)FUN_00d6431c();
  if (*plVar4 == 0) {
    return;
  }
  if (*(short *)(*plVar4 + 0x1a) == 0) {
    return;
  }
  lVar6 = *plVar4;
  if (lVar6 == 0) {
    return;
  }
  if (*(short *)(lVar6 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar6 + 0x1a);
  sVar9 = *(short *)(lVar6 + 0x1a);
  do {
    sVar2 = *psVar1;
    if (sVar2 == sVar9) {
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00d63708;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d63708:
      bVar8 = false;
    }
    if (bVar8) {
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) {
        return;
      }
      plVar10 = (long *)(lVar6 + -0x28);
      plVar4 = (long *)FUN_01e0cea0(param_1);
      if ((*plVar4 == 0) || (*(short *)(*plVar4 + 0x1a) == 0)) goto LAB_00d63754;
      lVar7 = *plVar4;
      if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) goto LAB_00d63750;
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar9 = *(short *)(lVar7 + 0x1a);
      break;
    }
    sVar9 = sVar2;
    if (sVar2 == 0) {
      return;
    }
  } while( true );
LAB_00d63778:
  sVar2 = *psVar1;
  if (sVar2 == sVar9) {
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00d6379c;
    bVar8 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00d6379c:
    bVar8 = false;
  }
  if (bVar8) {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
    local_38 = (long *)0x0;
    if (*(long *)(lVar7 + 0x10) != 0) {
      local_38 = plVar4;
      if ((((*(long *)(param_1 + 0x2c0) == 0) ||
           ((*(byte *)(*(long *)(param_1 + 0x2c0) + 0x1e8) & 1) == 0)) ||
          (*(long *)(param_1 + 0x300) == 0)) ||
         ((((*(byte *)(*(long *)(param_1 + 0x300) + 0x1e8) & 1) == 0 ||
           (*(long *)(param_1 + 0x340) == 0)) ||
          ((*(byte *)(*(long *)(param_1 + 0x340) + 0x1e8) & 1) == 0)))) {
LAB_00d6382c:
        plVar4 = local_38;
      }
      else {
        uVar5 = FUN_01e0d238(plVar4);
        if ((uVar5 & 1) != 0) {
          FUN_01e0d24c(plVar10,*(undefined8 *)(lVar6 + -0x20),&local_38);
          *(undefined1 *)(param_1 + 0x1c1) = 1;
          goto LAB_00d6382c;
        }
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x60))(plVar4);
      }
    }
    goto LAB_00d63754;
  }
  sVar9 = sVar2;
  if (sVar2 == 0) {
LAB_00d63750:
    local_38 = (long *)0x0;
LAB_00d63754:
    (**(code **)(*plVar10 + 0x60))(plVar10);
    return;
  }
  goto LAB_00d63778;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a71db0; name: FUN_01a71db0
 */


undefined8 FUN_01a71db0(undefined8 param_1)

{
  short *psVar1;
  code *pcVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  short sVar11;
  undefined1 *puVar12;
  long local_18;
  
  puVar9 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar9 == (undefined8 *)0x0) ||
     (puVar12 = (undefined1 *)*puVar9, puVar12 == (undefined1 *)0x0)) {
    if ((DAT_048317e8 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_048317e8);
      puVar12 = &DAT_048317d0;
      if (iVar7 != 0) {
        DAT_048317d0 = 0;
        DAT_048317d8 = 0;
        FUN_00100190(PTR_FUN_047d7d58,&DAT_048317d0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048317e8);
      }
    }
    else {
      puVar12 = &DAT_048317d0;
    }
  }
  uVar6 = FUN_00c92df0(param_1,2,0);
  iVar7 = FUN_00cc4dc0(param_1,3);
  if (((DAT_04831808 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04831808), iVar8 != 0)) {
    DAT_04831ec8 = '\x01';
    __cxa_guard_release(&DAT_04831808);
  }
  pcVar2 = (code *)PTR_FUN_047d7d78;
  if (DAT_04831ec8 == '\0') {
    pcVar2 = (code *)0x0;
  }
  switch(*puVar12) {
  case 0:
  case 1:
    lVar10 = *(long *)(puVar12 + 8);
    if (lVar10 == 0) {
      return 0;
    }
    break;
  case 2:
    if (*(long *)(puVar12 + 8) == 0) {
      return 0;
    }
    lVar10 = *(long *)(*(long *)(puVar12 + 8) + 0x10);
    if (lVar10 == 0) {
      return 0;
    }
    lVar10 = lVar10 + -0x28;
    break;
  case 3:
    lVar10 = *(long *)(puVar12 + 8);
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar10 + 0x1a);
      sVar11 = *(short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01a71f84;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01a71f84:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar10 + 0x10) != 0) {
            local_18 = *(long *)(lVar10 + 0x10) + -0x28;
            (*pcVar2)(local_18,uVar6,iVar7 != 0);
            goto LAB_01a71ec0;
          }
          break;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
    }
    local_18 = 0;
LAB_01a71ec0:
    FUN_01a71fc0(&local_18);
  default:
    goto switchD_01a71e44_default;
  }
  (*pcVar2)(lVar10,uVar6,iVar7 != 0);
switchD_01a71e44_default:
  return 0;
}



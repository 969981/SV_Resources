/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02198874; name: FUN_02198874
 */


void FUN_02198874(undefined1 *param_1,long *param_2,long *param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar7;
  long *plVar6;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  lVar8 = *param_2;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_021988d0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_021988d0:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          plVar10 = (long *)(*(long *)(lVar8 + 0x10) + -8);
          plVar6 = *(long **)param_2[2];
          plVar2 = (long *)((long *)param_2[2])[1];
          if (plVar6 == plVar2) goto LAB_02198968;
          goto LAB_02198914;
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  *param_1 = 0;
  return;
LAB_02198914:
  plVar7 = plVar6 + 1;
  lVar8 = *plVar6;
  plVar6 = (long *)PTR_DAT_047d8b70;
  if (*(long *)(lVar8 + 8) != 0) {
    plVar6 = (long *)(*(long *)(lVar8 + 8) + 0x30);
  }
  if (*plVar6 == *param_3) {
    if ((*(char *)(lVar8 + 0x10) == '\x05') && (*(long *)(lVar8 + 0x18) != 0)) {
      auVar11 = FUN_00c6a4a0();
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar11;
      goto LAB_0219896c;
    }
    goto LAB_02198968;
  }
  plVar6 = plVar7;
  if (plVar2 == plVar7) {
LAB_02198968:
    *param_1 = 0;
LAB_0219896c:
                    /* WARNING: Could not recover jumptable at 0x02198980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x18))(plVar10);
    return;
  }
  goto LAB_02198914;
}



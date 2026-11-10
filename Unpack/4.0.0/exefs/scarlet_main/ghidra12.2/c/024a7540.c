/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a7540; name: FUN_024a7540
 */


void FUN_024a7540(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *extraout_x1;
  undefined4 *extraout_x8;
  long lVar8;
  int iVar9;
  undefined8 unaff_x19;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_90 [128];
  
  puVar5 = auStack_90;
  switch(param_3) {
  case 0:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    break;
  case 1:
    lVar8 = param_5[1];
    if (lVar8 == 0) {
LAB_024a75d8:
      uVar6 = 0;
    }
    else {
      piVar1 = (int *)(lVar8 + 8);
      iVar9 = *(int *)(lVar8 + 8);
      do {
        if (iVar9 == 0) {
          lVar8 = 0;
          goto LAB_024a75d8;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_024a75b0;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_024a75b0:
          bVar4 = false;
        }
        iVar9 = iVar2;
      } while (!bVar4);
      uVar6 = *param_5;
    }
    *(undefined8 *)(param_1 + 2) = uVar6;
    *(long *)(param_1 + 4) = lVar8;
    *param_1 = 0;
    break;
  case 2:
    goto LAB_024a75f0;
  default:
    unaff_x30 = 0x24a75f0;
    FUN_024a6d00();
    register0x00000008 = (BADSPACEBASE *)(auStack_90 + 0x80);
    param_5 = extraout_x1;
    param_1 = extraout_x8;
    unaff_x29 = puVar5 + 0x80;
LAB_024a75f0:
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x19;
    (**(code **)(*(long *)*param_5 + 0x10))((undefined1 *)((long)register0x00000008 + -8));
    uVar6 = (**(code **)(**(long **)((long)register0x00000008 + -8) + 0x10))();
    *(undefined8 *)(param_1 + 2) = uVar6;
    plVar7 = *(long **)((long)register0x00000008 + -8);
    *param_1 = 1;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    return;
  }
  return;
}



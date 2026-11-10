/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028fac60; name: FUN_028fac60
 */


void FUN_028fac60(long param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  
  if (*(long *)(param_1 + 0x48) == *(long *)(param_1 + 0x50)) goto LAB_028fad10;
  piVar2 = (int *)(param_1 + 0x1c8);
  iVar1 = *(int *)(param_1 + 0x1c8) + 1;
  iVar4 = *piVar2;
  if (iVar4 == *(int *)(param_1 + 0x1c8)) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar7) {
      *piVar2 = iVar1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') {
      bVar7 = true;
      goto joined_r0x028facac;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar7 = false;
joined_r0x028facac:
  do {
    if (bVar7) break;
    iVar5 = *piVar2;
    iVar1 = iVar4 + 1;
    if (iVar5 == iVar4) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        bVar7 = true;
        iVar4 = iVar5;
        goto joined_r0x028facac;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    bVar7 = false;
    iVar4 = iVar5;
  } while( true );
  if ((long)iVar1 != *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3) {
    return;
  }
LAB_028fad10:
  FUN_00c49c28(param_1 + 0x1f0,param_2);
  FUN_00c49c28(param_1 + 0x290,param_2);
  puVar8 = *(undefined8 **)(param_1 + 0x80);
  puVar3 = *(undefined8 **)(param_1 + 0x88);
  if (((puVar8 != puVar3) &&
      ((**(code **)(*(long *)*puVar8 + 0x90))((long *)*puVar8,param_2), puVar8 + 1 != puVar3)) &&
     ((**(code **)(*(long *)puVar8[1] + 0x90))((long *)puVar8[1],param_2), puVar8 + 2 != puVar3)) {
    (**(code **)(*(long *)puVar8[2] + 0x90))((long *)puVar8[2],param_2);
    for (puVar8 = puVar8 + 3; puVar8 != puVar3; puVar8 = puVar8 + 1) {
      (**(code **)(*(long *)*puVar8 + 0x90))((long *)*puVar8,param_2);
    }
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_2 + 8);
  return;
}



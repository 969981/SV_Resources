/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344c5cc; name: FUN_0344c5cc
 */


void FUN_0344c5cc(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  plVar8 = puVar7 + 2;
  puVar4 = (undefined8 *)*puVar7;
  if (*plVar8 == param_2) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar5 = puVar7;
    do {
      puVar3 = puVar5;
      puVar5 = puVar4;
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      puVar4 = (undefined8 *)*puVar5;
    } while (puVar5[2] != param_2);
    plVar8 = puVar5 + 2;
    if (puVar5 != puVar7) {
      *puVar3 = puVar4;
      puVar7 = puVar5;
      goto LAB_0344c648;
    }
    puVar7 = puVar5;
  }
  *(undefined8 **)(param_1 + 0x28) = puVar4;
LAB_0344c648:
  if (*(undefined8 **)(param_1 + 0x20) == puVar7) {
    *(undefined8 **)(param_1 + 0x20) = puVar3;
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar1 = *(int *)(puVar7 + 1);
  *(int *)(puVar7 + 1) = iVar1 + -1;
  puVar2 = PTR_DAT_047e2fd0;
  if (iVar1 + -1 != 0) {
    return;
  }
  puVar4 = (undefined8 *)puVar7[3];
  if ((puVar4 != (undefined8 *)0x0) &&
     (iVar1 = *(int *)((long)puVar4 + 0x4c) + -1, *(int *)((long)puVar4 + 0x4c) = iVar1, iVar1 == 0)
     ) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(puVar2 + 0x30))(0,puVar4);
  }
  if ((long *)puVar7[4] != (long *)0x0) {
    (**(code **)(*(long *)puVar7[4] + 0x30))();
  }
  piVar6 = (int *)*plVar8;
  if ((piVar6 != (int *)0x0) && (iVar1 = *piVar6, *piVar6 = iVar1 + -1, iVar1 + -1 == 0)) {
    FUN_0344ca4c(piVar6);
    (**(code **)(puVar2 + 0x30))(0,piVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0344c720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar2 + 0x30))(0,puVar7);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034997f4; name: FUN_034997f4
 */


void FUN_034997f4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_034b2c38(*(undefined8 *)PTR_DAT_047e7040);
  }
  puVar2 = PTR_DAT_047e2fd0;
  plVar3 = *(long **)(param_1 + 0x28);
  plVar4 = plVar3;
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      *(int *)(*plVar4 + 0x84) = *(int *)(*plVar4 + 0x84) + -1;
      puVar6 = (undefined8 *)*plVar4;
      iVar1 = *(int *)((long)puVar6 + 0x74) + -1;
      *(int *)((long)puVar6 + 0x74) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*puVar6)(puVar6);
        (**(code **)(puVar2 + 0x30))(0,puVar6);
      }
      plVar3 = *(long **)(param_1 + 0x28);
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3 + *(uint *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(puVar2 + 0x30))(0,plVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x10) + -1;
    *(int *)(lVar5 + 0x10) = iVar1;
    if (iVar1 == 0) {
      FUN_034783fc(lVar5);
      (**(code **)(puVar2 + 0x30))(0,lVar5);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



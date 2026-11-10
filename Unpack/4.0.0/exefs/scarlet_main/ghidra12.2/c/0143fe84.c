/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0143fe84; name: FUN_0143fe84
 */


void FUN_0143fe84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  long local_28;
  
  iVar5 = *(int *)(param_1 + 0x9e0);
  if (iVar5 != -1) {
    puVar8 = (undefined8 *)**(long **)(param_1 + 0x8c0);
    puVar3 = (undefined8 *)(*(long **)(param_1 + 0x8c0))[1];
    if ((puVar8 != puVar3) &&
       (*(char *)(puVar8 + 4) != '\0' || *(int *)((long)puVar8 + 0x24) != iVar5)) {
      puVar7 = puVar8 + 6;
      do {
        puVar8 = puVar7;
        if (puVar3 == puVar8) {
          puVar8 = puVar3;
          goto LAB_0143ff14;
        }
        puVar7 = puVar8 + 6;
      } while ((*(char *)(puVar8 + 4) != '\0') || (*(int *)((long)puVar8 + 0x24) != iVar5));
    }
LAB_0143ff14:
    if ((puVar8 != (undefined8 *)0x0) && (puVar3 != puVar8)) {
      uVar1 = *puVar8;
      uVar4 = puVar8[1];
      uVar2 = puVar8[2];
      plVar9 = (long *)puVar8[3];
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      local_68 = &local_28;
      local_28 = 0;
      uStack_60 = uVar1;
      local_58 = uVar4;
      local_50 = (long *)uVar2;
      local_48 = plVar9;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      FUN_0116c820(param_1,&local_68,0);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      lVar6 = local_28;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      local_68 = *(long **)(lVar6 + 0x88);
      uStack_60 = *(undefined8 *)(lVar6 + 0x90);
      plVar9 = *(long **)(param_1 + 200);
      local_58 = *(undefined8 *)(lVar6 + 0x98);
      local_50 = *(long **)(lVar6 + 0xa0);
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x18))();
      }
      (**(code **)(*plVar9 + 0x70))(plVar9,&local_68,0);
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
    }
  }
  return;
}



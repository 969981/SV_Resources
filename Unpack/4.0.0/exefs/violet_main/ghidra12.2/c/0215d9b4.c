/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215d9b4; name: FUN_0215d9b4
 */


void FUN_0215d9b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined8 **local_28;
  
  if (*(int *)(param_1 + 0x9e0) != -1) {
    puVar8 = (undefined8 *)**(long **)(param_1 + 0x8c0);
    puVar3 = (undefined8 *)(*(long **)(param_1 + 0x8c0))[1];
    if ((puVar8 != puVar3) && (*(char *)(puVar8 + 4) != '\0' || *(int *)((long)puVar8 + 0x24) != -1)
       ) {
      puVar7 = puVar8 + 6;
      do {
        puVar8 = puVar7;
        if (puVar3 == puVar8) {
          puVar8 = puVar3;
          goto LAB_0215da2c;
        }
        puVar7 = puVar8 + 6;
      } while ((*(char *)(puVar8 + 4) != '\0') || (*(int *)((long)puVar8 + 0x24) != -1));
    }
LAB_0215da2c:
    if ((puVar8 != (undefined8 *)0x0) && (puVar3 != puVar8)) {
      uVar1 = *puVar8;
      uVar4 = puVar8[1];
      uVar2 = puVar8[2];
      plVar5 = (long *)puVar8[3];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      local_70 = (long **)&local_28;
      local_28 = (undefined8 **)0x0;
      uStack_68 = uVar1;
      local_60 = uVar4;
      uStack_58 = uVar2;
      local_50 = plVar5;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      FUN_0116c820(param_1,&local_70,0);
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
      ppuVar6 = local_28;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (ppuVar6 != (undefined8 **)0x0) {
        local_70 = ppuVar6;
        local_60 = CONCAT44((float)*(int *)(param_1 + 0xa38),(float)*(int *)(param_1 + 0xa34));
        uStack_58 = 0;
        FUN_0215db34(param_1,&local_70);
      }
    }
  }
  return;
}



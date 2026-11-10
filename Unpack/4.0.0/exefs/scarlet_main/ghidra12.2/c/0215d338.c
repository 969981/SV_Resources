/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215d338; name: FUN_0215d338
 */


void FUN_0215d338(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined4 local_84;
  undefined1 local_80 [16];
  long **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_28;
  
  puVar7 = (undefined8 *)**(long **)(param_1 + 0x8c0);
  puVar3 = (undefined8 *)(*(long **)(param_1 + 0x8c0))[1];
  if ((puVar7 != puVar3) && (*(char *)(puVar7 + 4) != '\0' || *(int *)((long)puVar7 + 0x24) != -1))
  {
    puVar1 = puVar7 + 6;
    do {
      puVar7 = puVar1;
      if (puVar3 == puVar7) {
        puVar7 = puVar3;
        goto LAB_0215d3a4;
      }
      puVar1 = puVar7 + 6;
    } while ((*(char *)(puVar7 + 4) != '\0') || (*(int *)((long)puVar7 + 0x24) != -1));
  }
LAB_0215d3a4:
  puVar1 = (undefined8 *)0x0;
  if (puVar3 != puVar7) {
    puVar1 = puVar7;
  }
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar8 = puVar1[2];
  plVar5 = (long *)puVar1[3];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_70 = (long **)local_80;
  local_80._0_8_ = (long *)0x0;
  uStack_68 = uVar2;
  local_60 = uVar4;
  uStack_58 = uVar8;
  local_50 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  FUN_0116c820(param_1,&local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  uVar2 = local_80._0_8_;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  local_28 = (long *)uVar2;
  uVar6 = *(undefined4 *)(param_1 + 0x9e0);
  local_80 = (**(code **)(*(long *)uVar2 + 0x70))(uVar2);
  FUN_0215ca88(param_1,uVar6,local_80,param_1 + 0x9f0,&local_70);
  uVar8 = *(undefined8 *)(param_1 + 0x900);
  auVar9 = (**(code **)(*(long *)uVar2 + 0x70))(uVar2);
  local_84 = 2;
  local_80 = auVar9;
  FUN_02154adc(uVar8,&local_28,local_80,&local_70,&DAT_03d61e94,&local_84);
  return;
}



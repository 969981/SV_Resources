/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d5dd0; name: FUN_029d5dd0
 */


void FUN_029d5dd0(long param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  long *local_70;
  long *local_60 [4];
  long *local_40;
  long local_18;
  
  lVar7 = *(long *)(param_1 + 0x168);
  if (lVar7 == 0) {
    lVar7 = *(long *)(param_1 + 8);
  }
  local_80 = 0;
  local_90 = (long *)&DAT_cbf29ce484222645;
  puStack_88 = &DAT_03c886bc;
  FUN_00ffd4c8(local_60,param_1 + 0x40,&local_90);
  piVar1 = (int *)((long)*(uint **)(param_1 + 0x1f0) + (ulong)**(uint **)(param_1 + 0x1f0));
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (4 < uVar4) {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar6 != 0) {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      piVar3 = (int *)((long)puVar2 + (ulong)*puVar2);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar6 == 0)) {
        local_18 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar3 + uVar6);
        local_18 = (long)puVar2 + (ulong)*puVar2;
      }
      FUN_00e83e2c(&local_90,local_60,&local_18,&DAT_03c886bc);
      FUN_00e84144(param_1 + 0x220,0,&local_90,0,lVar7);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      lVar5 = (long)*piVar1;
      uVar4 = *(ushort *)((long)piVar1 - lVar5);
    }
    lVar5 = -lVar5;
    if (6 < uVar4) {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 6);
      if (uVar6 != 0) {
        puVar2 = (uint *)((long)piVar1 + uVar6);
        piVar3 = (int *)((long)puVar2 + (ulong)*puVar2);
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar6 == 0)) {
          local_18 = 0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar6);
          local_18 = (long)puVar2 + (ulong)*puVar2;
        }
        FUN_00e83e2c(&local_90,local_60,&local_18,&DAT_03c886bc);
        FUN_00e84b48(param_1 + 0x260,0,&local_90,0,lVar7);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        lVar5 = -(long)*piVar1;
        uVar4 = *(ushort *)((long)piVar1 - (long)*piVar1);
      }
      if ((8 < uVar4) && (uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8), uVar6 != 0)) {
        puVar2 = (uint *)((long)piVar1 + uVar6);
        piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar6 == 0)) {
          local_18 = 0;
        }
        else {
          puVar2 = (uint *)((long)piVar1 + uVar6);
          local_18 = (long)puVar2 + (ulong)*puVar2;
        }
        FUN_00e83e2c(&local_90,local_60,&local_18,&DAT_03c886bc);
        FUN_00e84144(param_1 + 0x2a0,0,&local_90,0,lVar7);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
      }
    }
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  return;
}



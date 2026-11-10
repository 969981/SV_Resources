/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fbac5c; name: FUN_00fbac5c
 */


void FUN_00fbac5c(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 *local_88;
  char *local_80;
  undefined8 local_78;
  long *local_70;
  
  if (((*(long *)(param_1 + 0x5a0) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x5a0) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x560) == 0 || ((*(byte *)(*(long *)(param_1 + 0x560) + 0x1e8) & 1) != 0)
      ))) {
    local_e8 = *(undefined8 *)(param_1 + 0x540);
    local_e0 = *(undefined8 *)(param_1 + 0x548);
    uStack_d8 = *(undefined8 *)(param_1 + 0x550);
  }
  else {
    local_e0 = 0;
    uStack_d8 = 0;
    local_e8 = 0;
  }
  local_88 = &DAT_fbec41851566601b;
  local_80 = "values";
  local_78 = 6;
  local_70 = (long *)0x0;
  piVar2 = (int *)FUN_00efa07c(&local_e8,&local_88);
  if (piVar2 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar2;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (iVar8 != 0) {
    iVar5 = 0;
    do {
      local_88 = &DAT_fbec41851566601b;
      local_80 = "values";
      local_78 = 6;
      local_70 = (long *)0x0;
      FUN_00e90ee0(&local_100,&local_e8,&local_88,iVar5);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_88 = (undefined1 *)0x45e350da1d34436d;
      local_80 = "Type";
      local_78 = 4;
      local_70 = (long *)0x0;
      piVar2 = (int *)FUN_00d27b5c(&local_100,&local_88);
      if (((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) ||
         (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar4 == 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((long)piVar2 + uVar4);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (iVar6 != -1) {
        lVar1 = param_1 + (long)iVar6 * 0x10;
        puVar7 = (undefined8 *)(lVar1 + 0x48);
        *puVar7 = 0;
        *(undefined8 *)(lVar1 + 0x50) = 0;
        local_118 = local_100;
        uStack_110 = uStack_f8;
        local_108 = local_f0;
        local_88 = (undefined1 *)0x45e350da1d34436d;
        local_80 = "Type";
        local_78 = 4;
        local_70 = (long *)0x0;
        piVar2 = (int *)FUN_00d27b5c(&local_118,&local_88);
        if ((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) {
          uVar3 = 0;
        }
        else {
          uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
          uVar3 = 0;
          if (uVar4 != 0) {
            uVar3 = *(undefined4 *)((long)piVar2 + uVar4);
          }
        }
        *(undefined4 *)puVar7 = uVar3;
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        lVar1 = param_1 + (long)iVar6 * 0x10;
        local_88 = (undefined1 *)0x967a4ff626173b30;
        local_70 = (long *)0x0;
        local_80 = "Character";
        local_78 = 9;
        FUN_00fb4c10(auStack_a0,&local_118,&local_88);
        FUN_00fbafb0(lVar1 + 0x4c,auStack_a0);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        local_70 = (long *)0x0;
        local_88 = (undefined1 *)0x45e24506a4634ddf;
        local_80 = "Event";
        local_78 = 5;
        FUN_00fb4c10(auStack_b8,&local_118,&local_88);
        FUN_00fbafb0(lVar1 + 0x50,auStack_b8);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        local_70 = (long *)0x0;
        local_88 = (undefined1 *)0xbba050815142c8e;
        local_80 = "Camera";
        local_78 = 6;
        FUN_00fb4c10(auStack_d0,&local_118,&local_88);
        FUN_00fbafb0(lVar1 + 0x54,auStack_d0);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar8 != iVar5);
  }
  return;
}



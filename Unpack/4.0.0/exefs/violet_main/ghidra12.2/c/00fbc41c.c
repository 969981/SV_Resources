/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fbc41c; name: FUN_00fbc41c
 */


void FUN_00fbc41c(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  char *local_78;
  undefined8 local_70;
  long *local_68;
  
  if (((*(long *)(param_1 + 0x768) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x768) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x728) == 0 || ((*(byte *)(*(long *)(param_1 + 0x728) + 0x1e8) & 1) != 0)
      ))) {
    local_98 = *(undefined8 *)(param_1 + 0x708);
    local_90 = *(undefined8 *)(param_1 + 0x710);
    uStack_88 = *(undefined8 *)(param_1 + 0x718);
  }
  else {
    local_90 = 0;
    uStack_88 = 0;
    local_98 = 0;
  }
  local_80 = &DAT_fbec41851566601b;
  local_78 = "values";
  local_70 = 6;
  local_68 = (long *)0x0;
  piVar2 = (int *)FUN_00efa07c(&local_98,&local_80);
  if (piVar2 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar2;
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (iVar6 != 0) {
    iVar5 = 0;
    do {
      local_68 = (long *)0x0;
      local_80 = &DAT_fbec41851566601b;
      local_78 = "values";
      local_70 = 6;
      FUN_00e90ee0(&local_b0,&local_98,&local_80,iVar5);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      local_80 = (undefined1 *)0x8029861655f5d3d1;
      local_78 = "Category";
      local_70 = 8;
      local_68 = (long *)0x0;
      piVar2 = (int *)FUN_00d27b5c(&local_b0,&local_80);
      if (((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) ||
         (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar4 == 0)) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((long)piVar2 + uVar4);
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (iVar7 != -1) {
        lVar1 = param_1 + (long)iVar7 * 0x10;
        *(undefined8 *)(lVar1 + 0x238) = 0;
        *(undefined8 *)(lVar1 + 0x230) = 0;
        local_80 = (undefined1 *)0x8029861655f5d3d1;
        local_78 = "Category";
        local_b8 = local_a0;
        local_c8 = local_b0;
        uStack_c0 = uStack_a8;
        local_70 = 8;
        local_68 = (long *)0x0;
        piVar2 = (int *)FUN_00d27b5c(&local_c8,&local_80);
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
        *(undefined4 *)(lVar1 + 0x230) = uVar3;
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        local_68 = (long *)0x0;
        local_80 = (undefined1 *)0xfad8db7ddec98112;
        local_78 = "HeightType";
        local_70 = 10;
        piVar2 = (int *)FUN_00d27b5c(&local_c8,&local_80);
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
        lVar1 = param_1 + (long)iVar7 * 0x10;
        *(undefined4 *)(lVar1 + 0x234) = uVar3;
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        local_68 = (long *)0x0;
        local_80 = (undefined1 *)0xbe74ca322e16496b;
        local_78 = "RadiusType";
        local_70 = 10;
        piVar2 = (int *)FUN_00d27b5c(&local_c8,&local_80);
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
        *(undefined4 *)(lVar1 + 0x238) = uVar3;
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        local_80 = (undefined1 *)0x9e6462cb344310a;
        local_78 = "OffsetType";
        local_70 = 10;
        local_68 = (long *)0x0;
        piVar2 = (int *)FUN_00d27b5c(&local_c8,&local_80);
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
        *(undefined4 *)(lVar1 + 0x23c) = uVar3;
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar6 != iVar5);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf92b0; name: FUN_00cf92b0
 */


void FUN_00cf92b0(undefined1 *param_1,long param_2,long param_3)

{
  ulong *puVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  long local_68;
  long *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar6 = *(long *)(param_2 + 800);
  if (lVar6 != 0) {
    uVar13 = *(ulong *)(param_3 + 8);
    if ((*(long *)(lVar6 + 8) == 0) || ((*(byte *)(*(long *)(lVar6 + 8) + 0x1e8) & 1) == 0)) {
      piVar7 = (int *)0x0;
    }
    else {
      puVar3 = (uint *)(**(code **)(**(long **)(lVar6 + 8) + 0x70))();
      piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
    }
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar8 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar7 + uVar8);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    lVar6 = *(long *)(*(long *)(param_2 + 800) + 8);
    if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0x1e8) & 1) == 0)) {
      piVar7 = (int *)0x0;
    }
    else {
      puVar4 = (uint *)(**(code **)(**(long **)(*(long *)(param_2 + 800) + 8) + 0x70))();
      piVar7 = (int *)((long)puVar4 + (ulong)*puVar4);
    }
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 9) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[4], uVar8 == 0)) {
      lVar6 = 0;
    }
    else {
      puVar4 = (uint *)((long)piVar7 + uVar8);
      lVar6 = (long)puVar4 + (ulong)*puVar4;
    }
    puVar14 = (ulong *)(puVar3 + 1);
    uVar8 = (ulong)*puVar3;
    puVar1 = puVar14 + uVar8;
    if (uVar8 == 0) {
      puVar11 = puVar14;
    }
    else {
      puVar10 = puVar14;
      do {
        uVar12 = uVar8 >> 1;
        puVar11 = puVar10 + uVar12 + 1;
        uVar8 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
        if (uVar13 <= puVar10[uVar12]) {
          puVar11 = puVar10;
          uVar8 = uVar12;
        }
        puVar10 = puVar11;
      } while (uVar8 != 0);
    }
    if ((puVar11 != puVar1) && (*puVar11 == uVar13)) {
      puVar3 = (uint *)(lVar6 + ((ulong)((long)puVar11 - (long)puVar14) >> 3 & 0xffffffff) * 4 + 4);
      piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
      if ((6 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
         (uVar13 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar13 != 0)) {
        puVar3 = (uint *)((long)piVar7 + uVar13);
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar13 == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)((long)piVar2 + uVar13);
        }
        *(undefined8 *)(param_1 + 8) = uVar9;
        param_1[0x10] = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined1 **)(param_1 + 0x20) = &DAT_cbf29ce484222645;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined1 **)(param_1 + 0x28) = &DAT_03c886bc;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *param_1 = 1;
        if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar13 == 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = (ulong)*(uint *)((long)piVar7 + uVar13);
        }
        param_1[0x10] = 1;
        puVar3 = (uint *)(**(code **)(**(long **)(*(long *)(param_2 + 800) + 8) + 0x70))();
        piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar3 = (uint *)((long)piVar7 + (ulong)*(ushort *)((long)piVar7 + (6 - (long)*piVar7)));
        puVar3 = (uint *)((long)puVar3 + uVar13 * 4 + (ulong)*puVar3 + 4);
        local_68 = (long)puVar3 + (ulong)*puVar3;
        FUN_00cf95c4(&local_60,&local_68);
        plVar5 = *(long **)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x18) = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
        }
        plVar5 = local_60;
        local_60 = (long *)0x0;
        *(long **)(param_1 + 0x18) = plVar5;
        *(undefined8 *)(param_1 + 0x20) = uStack_58;
        plVar5 = *(long **)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x28) = local_50;
        *(undefined8 *)(param_1 + 0x30) = uStack_48;
        *(undefined8 *)(param_1 + 0x38) = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        uVar9 = local_40;
        local_40 = 0;
        *(undefined8 *)(param_1 + 0x38) = uVar9;
        *(undefined4 *)(param_1 + 0x40) = local_38;
        if (local_60 == (long *)0x0) {
          return;
        }
        (**(code **)(*local_60 + 0x20))();
        return;
      }
      *param_1 = 0;
    }
  }
  *param_1 = 0;
  return;
}



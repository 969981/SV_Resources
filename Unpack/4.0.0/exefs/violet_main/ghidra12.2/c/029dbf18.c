/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029dbf18; name: FUN_029dbf18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029dbf18(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  uint *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  ushort uVar8;
  ulong uVar9;
  
  lVar5 = *(long *)(param_3 + 0x88);
  if (lVar5 == 0) {
    piVar6 = *(int **)(param_3 + 0x40);
    if (piVar6 != (int *)0x0) goto LAB_029dbf70;
    if ((*(long *)(param_3 + 0x50) != 0) &&
       ((*(byte *)(*(long *)(param_3 + 0x50) + 0x1e8) & 1) != 0)) {
      piVar6 = (int *)FUN_029be138(*(undefined8 *)(param_3 + 0x50));
      goto LAB_029dbf70;
    }
    piVar6 = (int *)0x0;
    if (*(long *)(param_3 + 8) == 0) goto LAB_029dbf70;
    if ((*(byte *)(*(long *)(param_3 + 8) + 0x1e8) & 1) != 0) {
      piVar6 = (int *)0x0;
      if (*(long *)(param_3 + 8) == 0) goto LAB_029dbf70;
      if ((*(byte *)(*(long *)(param_3 + 8) + 0x1e8) & 1) != 0) {
        plVar3 = *(long **)(param_3 + 8);
        goto LAB_029dbf5c;
      }
    }
  }
  else if ((((*(long *)(lVar5 + 8) != 0) && ((*(byte *)(*(long *)(lVar5 + 8) + 0x1e8) & 1) != 0)) &&
           (*(long *)(lVar5 + 8) != 0)) && ((*(byte *)(*(long *)(lVar5 + 8) + 0x1e8) & 1) != 0)) {
    plVar3 = *(long **)(lVar5 + 8);
LAB_029dbf5c:
    puVar4 = (uint *)(**(code **)(*plVar3 + 0x70))();
    piVar6 = (int *)((long)puVar4 + (ulong)*puVar4);
    goto LAB_029dbf70;
  }
  piVar6 = (int *)0x0;
LAB_029dbf70:
  uVar2 = _UNK_03caa988;
  uVar1 = _DAT_03caa980;
  *(undefined8 *)(param_1 + 0x48) = _UNK_03caa988;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined2 *)(param_1 + 10) = 0xffff;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar2 = _UNK_03cabe58;
  uVar1 = _DAT_03cabe50;
  *(undefined8 *)(param_1 + 0x28) = _UNK_03cabe58;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (((piVar6 != (int *)0x0) && (6 < *(ushort *)((long)piVar6 - (long)*piVar6))) &&
     (uVar9 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar9 != 0)) {
    puVar4 = (uint *)((long)piVar6 + uVar9);
    piVar6 = (int *)((long)puVar4 + (ulong)*puVar4);
    if ((6 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
       (uVar9 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar9 != 0)) {
      puVar4 = (uint *)((long)piVar6 + uVar9);
      piVar6 = (int *)((long)puVar4 + (ulong)*puVar4);
      if (*(ushort *)((long)piVar6 - (long)*piVar6) < 5) {
        uVar8 = 0;
      }
      else {
        uVar8 = ((ushort *)((long)piVar6 - (long)*piVar6))[2];
        if ((ulong)uVar8 != 0) {
          uVar8 = (ushort)*(undefined4 *)((long)piVar6 + (ulong)uVar8);
        }
      }
      *(ushort *)(param_1 + 10) = uVar8;
      if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 7) ||
         (uVar9 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar9 == 0)) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar7 = (undefined8 *)((long)piVar6 + uVar9);
      }
      uVar1 = *puVar7;
      *(ulong *)(param_1 + 0x18) = (ulong)*(uint *)(puVar7 + 1);
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined8 *)((long)puVar7 + 0xc);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)((long)puVar7 + 0x14);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      uVar1 = *(undefined8 *)((long)puVar7 + 0x1c);
      *(ulong *)(param_1 + 0x38) = (ulong)*(uint *)((long)puVar7 + 0x24);
      *(undefined8 *)(param_1 + 0x30) = uVar1;
      memcpy((undefined8 *)(param_1 + 0x40),(undefined8 *)(param_1 + 0x10),0x30);
      return;
    }
  }
  return;
}



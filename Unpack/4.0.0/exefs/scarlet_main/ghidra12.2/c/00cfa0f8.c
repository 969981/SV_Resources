/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cfa0f8; name: FUN_00cfa0f8
 */


void FUN_00cfa0f8(undefined1 *param_1,long param_2,long param_3)

{
  int *piVar1;
  ulong *puVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  
  if (*(long *)(param_2 + 0x340) != 0) {
    uVar5 = *(ulong *)(param_3 + 8);
    puVar3 = (uint *)(**(code **)(**(long **)(*(long *)(param_2 + 0x340) + 8) + 0x70))();
    piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar1 + uVar7);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    puVar4 = (uint *)(**(code **)(**(long **)(*(long *)(param_2 + 0x340) + 8) + 0x70))();
    piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 7) {
      lVar8 = 0;
    }
    else {
      uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
      lVar8 = 0;
      if (uVar7 != 0) {
        puVar4 = (uint *)((long)piVar1 + uVar7);
        lVar8 = (long)puVar4 + (ulong)*puVar4;
      }
    }
    puVar12 = (ulong *)(puVar3 + 1);
    uVar7 = (ulong)*puVar3;
    puVar2 = puVar12 + uVar7;
    if (uVar7 == 0) {
      puVar10 = puVar12;
    }
    else {
      puVar9 = puVar12;
      do {
        uVar11 = uVar7 >> 1;
        puVar10 = puVar9 + uVar11 + 1;
        uVar7 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
        if (uVar5 <= puVar9[uVar11]) {
          puVar10 = puVar9;
          uVar7 = uVar11;
        }
        puVar9 = puVar10;
      } while (uVar7 != 0);
    }
    if ((puVar10 != puVar2) && (*puVar10 == uVar5)) {
      puVar3 = (uint *)(lVar8 + ((ulong)((long)puVar10 - (long)puVar12) >> 3 & 0xffffffff) * 4 + 4);
      piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar5 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)((long)piVar1 + uVar5);
      }
      *(undefined8 *)(param_1 + 8) = uVar6;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined1 **)(param_1 + 0x20) = &DAT_cbf29ce484222645;
      *(undefined1 **)(param_1 + 0x28) = &DAT_03c886bc;
      *(undefined8 *)(param_1 + 0x30) = 0;
      param_1[0x10] = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}



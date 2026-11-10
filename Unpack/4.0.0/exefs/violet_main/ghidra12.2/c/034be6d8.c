/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034be6d8; name: FUN_034be6d8
 */


undefined8
FUN_034be6d8(long param_1,undefined4 param_2,int param_3,undefined4 param_4,ulong param_5,
            undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9)

{
  ulong *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x28);
    if (puVar3 == (undefined8 *)0x0) goto LAB_034be840;
    *(undefined1 *)(puVar3 + 4) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0xffffffffffffffff;
    *(undefined8 **)(param_1 + 8) = puVar3;
  }
  if (*(long *)PTR_DAT_047e6fd8 == 0) {
    return 2;
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xff;
  local_60 = 0xff;
  local_58 = 0;
  if (puVar3 == (undefined8 *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(puVar3 + 3) != 0;
  }
  uVar4 = FUN_034b5ad4(*(long *)PTR_DAT_047e6fd8,param_1,param_2,param_3,param_4,
                       param_5 & 0xffffffff,param_6,param_7,param_8,param_9,&local_80,2,bVar2);
  if ((int)uVar4 != 1) {
    return uVar4;
  }
  puVar5 = *(ulong **)(param_1 + 8);
  if (puVar5 == (ulong *)0x0) {
    puVar5 = (ulong *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x28);
    if (puVar5 == (ulong *)0x0) {
LAB_034be840:
      *(undefined8 *)(param_1 + 8) = 0;
      return 2;
    }
    *(undefined1 *)(puVar5 + 4) = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = 0xffffffffffffffff;
    *(ulong **)(param_1 + 8) = puVar5;
  }
  uVar7 = 1L << (param_5 & 0x3f);
  if ((*puVar5 & uVar7) == 0) {
    *puVar5 = *puVar5 | uVar7;
    FUN_034be24c();
    lVar6 = *(long *)(param_1 + 8);
    *(undefined8 *)(lVar6 + 8) = 0xffffffffffffffff;
    if (*(uint *)(lVar6 + 0x18) != 0) {
      puVar5 = *(ulong **)(lVar6 + 0x10);
      uVar10 = (ulong)*(uint *)(lVar6 + 0x18) * 0x10 - 0x10;
      uVar7 = (uVar10 >> 4) + 1;
      uVar8 = uVar7 & 3;
      if (uVar10 < 0x30) {
        uVar7 = 0xffffffffffffffff;
      }
      else {
        lVar9 = -(uVar7 & 0x1ffffffffffffffc);
        uVar7 = 0xffffffffffffffff;
        do {
          uVar10 = *puVar5;
          *(ulong *)(lVar6 + 8) = uVar10 & uVar7;
          uVar7 = puVar5[2] & uVar10 & uVar7;
          *(ulong *)(lVar6 + 8) = uVar7;
          uVar7 = puVar5[4] & uVar7;
          *(ulong *)(lVar6 + 8) = uVar7;
          puVar1 = puVar5 + 6;
          puVar5 = puVar5 + 8;
          uVar7 = *puVar1 & uVar7;
          lVar9 = lVar9 + 4;
          *(ulong *)(lVar6 + 8) = uVar7;
        } while (lVar9 != 0);
      }
      if (uVar8 != 0) {
        lVar9 = -uVar8;
        do {
          uVar7 = *puVar5 & uVar7;
          bVar2 = lVar9 != -1;
          lVar9 = lVar9 + 1;
          *(ulong *)(lVar6 + 8) = uVar7;
          puVar5 = puVar5 + 2;
        } while (bVar2);
      }
    }
  }
  if (param_3 == 2) {
    *(undefined1 *)(*(long *)(param_1 + 8) + 0x20) = 1;
    return 1;
  }
  return 1;
}



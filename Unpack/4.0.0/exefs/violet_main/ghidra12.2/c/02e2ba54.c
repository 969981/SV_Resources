/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e2ba54; name: FUN_02e2ba54
 */


undefined8 FUN_02e2ba54(long param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined4 local_88;
  ushort uStack_84;
  undefined1 uStack_82;
  undefined1 uStack_81;
  ushort local_80;
  undefined1 local_7e;
  undefined1 uStack_7d;
  undefined2 local_7c;
  undefined1 uStack_7a;
  undefined5 uStack_79;
  undefined3 local_74;
  undefined5 uStack_71;
  undefined3 local_6c;
  undefined5 uStack_69;
  undefined3 local_64;
  undefined5 uStack_61;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined1 auStack_38 [8];
  
  if ((short)param_2[0xe2] == 0x3f3) {
    uVar2 = *(ushort *)(param_2 + 0xe3);
    uVar3 = 7;
    if (uVar2 != 3) {
      uVar3 = uVar2;
    }
    uVar1 = uVar2 + 4;
    if (2 < uVar2) {
      uVar1 = uVar3;
    }
    if (uVar2 != uVar1) {
      uVar9 = (**(code **)(*param_2 + 0x98))(param_2);
      uStack_81 = 0;
      uVar12 = uVar9 & 0xffffffff;
      local_80 = 0;
      local_7e = 0;
      local_7c = 0;
      uStack_7a = 0;
      uStack_79 = 0;
      local_74 = 0;
      uStack_71 = 0;
      local_6c = 0;
      uStack_69 = 0;
      local_64 = 0;
      uStack_61 = 0;
      local_5c = 0;
      uStack_82 = 1;
      local_88 = (int)uVar9;
      uStack_84 = uVar1;
      FUN_019079dc(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xc20),auStack_38,&local_88);
      FUN_01248470(*(undefined8 *)(param_1 + 0x20),param_2,0x17);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
      FUN_019bca0c(uVar13,uVar4);
      lVar14 = *(long *)(param_1 + 0x20);
      uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
      FUN_0129aff0(*(undefined8 *)(lVar14 + 0x18),0xbc,uVar4);
      lVar14 = param_2[9];
      puVar15 = (undefined8 *)(lVar14 + 0x28);
      plVar10 = (long *)(**(code **)*puVar15)(puVar15);
      if (((*PTR_DAT_047dcd50 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar8 != 0)) {
        uVar13 = FUN_01af5520();
        *(undefined8 *)PTR_DAT_047dcd58 = uVar13;
        __cxa_guard_release(PTR_DAT_047dcd50);
      }
      do {
        if (plVar10 == (long *)0x0) {
LAB_02e2bc70:
          FUN_029849dc(param_1,0x17,uVar12);
          return 1;
        }
        if (plVar10 == (long *)PTR_DAT_047dcd58) {
          lVar14 = *(long *)(lVar14 + 0x48);
          if (lVar14 != 0) {
            if (((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49b) >> 3 & 1) == 0) ||
               (uVar11 = FUN_01242e68(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2
                                     ), (uVar11 & 1) != 0)) {
              local_7c = 0;
              uStack_84 = 0;
              uStack_82 = 0;
              uStack_81 = 0;
              local_80 = 0;
              local_7e = 0;
              uStack_7d = 0;
              uStack_7a = 1;
              uStack_79 = 0;
              local_74 = 0;
              uStack_71 = 0;
              local_6c = 0;
              uStack_69 = 0;
              local_64 = 0;
              uStack_61 = 0;
              local_5c = 0;
              uStack_58 = 0;
              local_88 = (int)uVar9;
              uVar3 = FUN_0113b8a0(*(undefined8 *)(lVar14 + 0x70));
              if (0x136 < uVar3) {
                uVar4 = FUN_00cf44f4(*(undefined8 *)(lVar14 + 0x70));
                uVar6 = FUN_00cf41a8(*(undefined8 *)(lVar14 + 0x70));
                uVar7 = FUN_00e99784(lVar14);
                uVar3 = FUN_0143b78c(uVar4,uVar6,uVar7);
              }
              local_80 = uVar3;
              uStack_84 = (ushort)uVar9;
              uStack_82 = (undefined1)(uVar9 >> 0x10);
              uStack_81 = (undefined1)(uVar9 >> 0x18);
              local_7e = 5;
              uStack_7a = 0;
              FUN_0293ff0c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa60),auStack_38,&local_88);
            }
            else {
              FUN_014606c4(*(undefined8 *)(param_1 + 0x20),uVar12);
              uVar13 = *(undefined8 *)(param_1 + 0x20);
              uVar5 = FUN_0113b8a0(*(undefined8 *)(lVar14 + 0x70));
              if (0x136 < (uVar5 & 0xffff)) {
                uVar4 = FUN_00cf44f4(*(undefined8 *)(lVar14 + 0x70),extraout_x1,uVar5);
                uVar6 = FUN_00cf41a8(*(undefined8 *)(lVar14 + 0x70));
                uVar7 = FUN_00e99784(lVar14);
                uVar5 = FUN_0143b78c(uVar4,uVar6,uVar7);
              }
              FUN_0298db8c(uVar13,uVar12,uVar5);
              FUN_0124f1ec(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),param_2);
            }
          }
          goto LAB_02e2bc70;
        }
        plVar10 = (long *)*plVar10;
      } while( true );
    }
  }
  return 0;
}



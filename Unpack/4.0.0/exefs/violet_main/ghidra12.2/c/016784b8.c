/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016784b8; name: FUN_016784b8
 */


void FUN_016784b8(long param_1,byte *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  short sVar3;
  undefined2 uVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char cVar10;
  byte bVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  int *piVar17;
  uint *puVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined4 local_108;
  undefined2 local_104;
  undefined4 local_100;
  undefined2 local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined4 local_c0;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  byte local_90;
  undefined1 uStack_8f;
  undefined5 uStack_8e;
  undefined1 uStack_89;
  byte bStack_88;
  undefined2 uStack_87;
  undefined5 uStack_85;
  undefined8 local_80;
  undefined1 *puStack_78;
  byte local_70 [16];
  
  *param_2 = 0;
  puVar7 = PTR_DAT_047d7940;
  sVar3 = *(short *)param_3[2];
  if (((*PTR_DAT_047d7940 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar15 != 0)) {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  puVar9 = PTR_DAT_047d7950;
  puVar8 = PTR_DAT_047d7948;
  uVar16 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar16;
  piVar17 = (int *)FUN_00cf60cc(uVar16,sVar3);
  if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 0xb) ||
     (uVar19 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[5], uVar19 == 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = (uint)*(byte *)((long)piVar17 + uVar19);
  }
  lVar20 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  uVar12 = (**(code **)(*(long *)*param_3 + 0x98))();
  puVar18 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x290) + 8) + 0x50),
                                 uVar12);
  if (puVar18 == (uint *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *puVar18;
    if (4 < (int)uVar14) {
      uVar14 = 0;
    }
  }
  if (uVar14 != *(byte *)(lVar20 + 0x95)) goto LAB_01678594;
  if (sVar3 == 0x96) {
    FUN_0124e480(param_1);
    FUN_01242424(&local_110);
    plVar21 = (long *)CONCAT26(uStack_10a,CONCAT24(uStack_10c,local_110));
    (**(code **)(*plVar21 + 0x48))(plVar21,4,1);
    plVar21 = (long *)CONCAT26(uStack_10a,CONCAT24(uStack_10c,local_110));
    if (plVar21 == (long *)0x0) goto LAB_01678594;
    plVar1 = plVar21 + 5;
    do {
      iVar15 = (int)*plVar1;
      iVar6 = iVar15 + -1;
      cVar10 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  else {
    if (sVar3 != 0xa5) goto LAB_01678594;
    FUN_0124e480(param_1);
    FUN_01242424(&local_110);
    plVar21 = (long *)CONCAT26(uStack_10a,CONCAT24(uStack_10c,local_110));
    (**(code **)(*plVar21 + 0x48))(plVar21,5,1);
    plVar21 = (long *)CONCAT26(uStack_10a,CONCAT24(uStack_10c,local_110));
    if (plVar21 == (long *)0x0) goto LAB_01678594;
    plVar1 = plVar21 + 5;
    do {
      iVar15 = (int)*plVar1;
      iVar6 = iVar15 + -1;
      cVar10 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  if (iVar6 == 0) {
    (**(code **)(*plVar21 + 0x10))();
  }
  else if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
LAB_01678594:
  if (((*puVar7 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar15 != 0)) {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar16 = *(undefined8 *)puVar8;
  *(undefined8 *)puVar9 = uVar16;
  piVar17 = (int *)FUN_00cf60cc(uVar16,sVar3);
  if (((0x2e < *(ushort *)((long)piVar17 - (long)*piVar17)) &&
      (uVar19 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[0x17], uVar19 != 0)) &&
     (*(char *)((long)piVar17 + uVar19) != '\0')) {
    bVar11 = FUN_01679a58(param_1,*param_3,param_3[2],param_3[3]);
    param_2[1] = bVar11;
    if (bVar11 == 2) {
      *param_2 = 1;
      return;
    }
    if (bVar11 == 1) {
      return;
    }
    if (bVar11 == 3) {
      FUN_02933298(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[3],param_3[2]);
      return;
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  local_b8 = FUN_011afcb8(uVar16,0x9c,0xcf,0);
  local_b4 = FUN_011afcb8(uVar16,0x7e,0xcf,0);
  local_b2 = FUN_011afcb8(uVar16,0x7e,0xcf,0);
  local_b0 = FUN_011afcb8(uVar16,0x7e,0xcf,0);
  local_b6 = FUN_011afcb8(uVar16,0x8b,0xcf,0);
  lVar20 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  FUN_01678ab4(lVar20 + (ulong)*(byte *)(lVar20 + 0x938) * 0xc4 + 0x18,*param_3,param_3[3],
               *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0));
  lVar20 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  cVar10 = FUN_0167a070(*(undefined8 *)(param_1 + 0x38),param_3[1],*param_3,param_3[2],param_3[3],
                        lVar20 + (ulong)*(byte *)(lVar20 + 0x938) * 0xc4 + 0x18);
  if (cVar10 != '\0') {
    lVar20 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    FUN_0167a950(lVar20 + (ulong)*(byte *)(lVar20 + 0x938) * 0xc4 + 0x18);
  }
  local_c0 = 0;
  local_110 = 0;
  uStack_10c = 0xe;
  local_108 = 0;
  local_104 = 0xe;
  local_100 = 0;
  local_fc = 0xe;
  local_f8 = 0;
  local_f4 = 0xe;
  local_f0 = 0;
  local_ec = 0xe;
  local_e8 = 0;
  local_e4 = 0xe;
  local_e0 = 0;
  local_dc = 0xe;
  local_d8 = 0;
  local_d4 = 0xe;
  local_d0 = 0;
  local_cc = 0xe;
  local_c8 = 0;
  local_c4 = 0xe;
  local_98 = *param_3;
  local_a8 = param_3[1];
  local_a0 = param_3[2];
  uVar16 = param_3[3];
  uStack_87 = 0;
  local_90 = (byte)uVar16;
  uStack_8f = (undefined1)((ulong)uVar16 >> 8);
  uStack_8e = (undefined5)((ulong)uVar16 >> 0x10);
  uStack_89 = (undefined1)((ulong)uVar16 >> 0x38);
  local_80 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x170);
  bStack_88 = 0;
  puStack_78 = (undefined1 *)&local_110;
  FUN_0167a9bc(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1b20),local_70,&local_a8);
  if (local_70[0] == 0) {
    local_98 = param_3[2];
    local_80 = param_3[3];
    local_90 = (byte)(0x3d1 >> (ulong)(uVar13 & 0x1f)) & uVar13 < 10;
    local_a8 = *param_3;
    local_a0 = param_3[1];
    bStack_88 = (byte)&local_110;
    uStack_87 = (undefined2)((ulong)&local_110 >> 8);
    uStack_85 = (undefined5)((ulong)&local_110 >> 0x18);
    uStack_8f = (undefined1)uVar13;
    FUN_01678b8c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1be0),local_70,&local_a8);
  }
  local_a0 = param_3[1];
  local_98 = param_3[2];
  local_a8 = *param_3;
  local_90 = (byte)&local_b8;
  uStack_8f = (undefined1)((ulong)&local_b8 >> 8);
  uStack_8e = (undefined5)((ulong)&local_b8 >> 0x10);
  uStack_89 = (undefined1)((ulong)&local_b8 >> 0x38);
  bStack_88 = local_70[0] ^ 1;
  FUN_01678ce8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1c00),local_70,&local_a8);
  uVar12 = (**(code **)(*(long *)*param_3 + 0x98))();
  FUN_01678f08(*(undefined8 *)(param_1 + 0x38),uVar12,sVar3,param_3[1],0x29);
  plVar21 = (long *)*param_3;
  uVar4 = *(undefined2 *)(param_3[2] + 2);
  uVar12 = (**(code **)(*plVar21 + 0x98))(plVar21);
  uVar13 = (**(code **)(*plVar21 + 0x700))(plVar21,uVar4);
  if ((uVar13 & 0xff) < 4) {
    lVar20 = *(long *)(param_1 + 0x20);
    plVar21 = (long *)FUN_01021c94(*(undefined8 *)
                                    (*(long *)(*(long *)(lVar20 + 0x20) + 0x10) + 0x30),uVar12);
    uVar14 = (**(code **)(*plVar21 + 0x768))(plVar21,uVar13);
    iVar15 = -1;
    if (((uVar14 & 0xff) + 1 & 0x100) == 0) {
      iVar15 = (uVar14 & 0xff) + 1;
    }
    (**(code **)(*plVar21 + 0x770))(plVar21,uVar13,iVar15);
    FUN_0129aff0(*(undefined8 *)(lVar20 + 0x18),8,uVar12,uVar13 & 0xff);
  }
  local_a8 = *param_3;
  local_a0 = CONCAT71(local_a0._1_7_,1);
  local_98 = 0;
  FUN_01244df8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x400),local_70,&local_a8);
  *param_2 = local_70[0] ^ 1;
  return;
}



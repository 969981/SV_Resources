/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01529c84; name: FUN_01529c84
 */


void FUN_01529c84(long param_1,uint param_2,byte param_3,long *param_4,long param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  byte bVar19;
  byte *pbVar20;
  long *plVar21;
  ulong uVar22;
  int iVar23;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if ((param_3 & 0xfe) != 2) {
    return;
  }
  uVar14 = (**(code **)(*param_4 + 0x98))(param_4);
  bVar3 = *(byte *)(param_5 + 0x10);
  uVar22 = 0;
  bVar4 = *(byte *)(param_5 + 0x13);
  bVar19 = *(byte *)(param_5 + 0xd);
  bVar5 = *(byte *)(param_5 + 0x16);
  bVar6 = *(byte *)(param_5 + 0x19);
  iVar23 = 0;
  uVar18 = (uint)bVar19;
  bVar7 = *(byte *)(param_5 + 0x1c);
  bVar8 = *(byte *)(param_5 + 0x1f);
  bVar9 = *(byte *)(param_5 + 0x25);
  bVar10 = *(byte *)(param_5 + 0x28);
  bVar11 = *(byte *)(param_5 + 0x22);
  bVar12 = *(byte *)(param_5 + 0x2b);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  pbVar20 = (byte *)(param_5 + 0x10);
  while( true ) {
    if (bVar19 != 0) {
      bVar13 = pbVar20[-1];
      bVar19 = 0;
      if (bVar13 != 0) {
        bVar19 = 3;
      }
      if (bVar13 == 7) {
        bVar19 = 1;
      }
      bVar2 = 2;
      if (bVar13 < 8) {
        bVar2 = bVar19;
      }
      if (bVar2 == param_3) {
        uVar15 = FUN_0152a068(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),uVar22 & 0xffffffff)
        ;
        uVar16 = FUN_0128ab58(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),uVar14);
        if (((uVar16 ^ param_2) & 1) == 0) {
          *(undefined4 *)((long)&local_90 + (long)iVar23 * 4) = uVar15;
          iVar23 = iVar23 + 1;
        }
      }
    }
    if (uVar22 == 10) break;
    bVar19 = *pbVar20;
    uVar22 = uVar22 + 1;
    pbVar20 = pbVar20 + 3;
  }
  iVar1 = bVar3 + uVar18 + (uint)bVar4 + (uint)bVar5 + (uint)bVar6 + (uint)bVar7 + (uint)bVar8 +
          (uint)bVar11 + (uint)bVar9 + (uint)bVar10 + (uint)bVar12;
  if (iVar1 == 1) {
    if (iVar23 != 1) {
      return;
    }
    uVar15 = 0x23e;
    if (param_3 != 2) {
      uVar15 = 0x23f;
    }
    *(undefined8 *)(param_1 + 0x19c) = 0;
    *(undefined8 *)(param_1 + 0x184) = 0;
    *(undefined8 *)(param_1 + 0x194) = 0;
    *(undefined8 *)(param_1 + 0x18c) = 0;
    *(undefined4 *)(param_1 + 0x17c) = uVar15;
    *(undefined2 *)(param_1 + 0x180) = 0x100;
  }
  else {
    if (iVar1 == 0) {
      return;
    }
    switch(iVar23) {
    case 1:
      uVar18 = (uint)param_3;
      if (uVar18 != 2) {
        uVar18 = 6;
      }
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      *(undefined8 *)(param_1 + 400) = 0;
      *(undefined8 *)(param_1 + 0x198) = 0;
      *(undefined8 *)(param_1 + 0x188) = 0;
      *(uint *)(param_1 + 0x17c) = uVar18;
      *(undefined1 *)(param_1 + 0x180) = 0;
      *(undefined1 *)(param_1 + 0x181) = 0x12;
      *(undefined4 *)(param_1 + 0x184) = (undefined4)local_90;
      break;
    case 2:
      uVar15 = 3;
      if (param_3 != 2) {
        uVar15 = 7;
      }
      *(undefined8 *)(param_1 + 0x18c) = 0;
      *(undefined8 *)(param_1 + 0x19c) = 0;
      *(undefined8 *)(param_1 + 0x194) = 0;
      *(undefined4 *)(param_1 + 0x17c) = uVar15;
      *(undefined1 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x184) = (undefined4)local_90;
      *(undefined1 *)(param_1 + 0x181) = 0x22;
      *(undefined4 *)(param_1 + 0x188) = local_90._4_4_;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      uVar15 = 4;
      if (param_3 != 2) {
        uVar15 = 8;
      }
      *(undefined8 *)(param_1 + 400) = 0;
      *(undefined8 *)(param_1 + 0x198) = 0;
      *(undefined4 *)(param_1 + 0x17c) = uVar15;
      *(undefined1 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x184) = (undefined4)local_90;
      *(undefined4 *)(param_1 + 0x188) = local_90._4_4_;
      *(undefined1 *)(param_1 + 0x181) = 0x32;
      *(undefined4 *)(param_1 + 0x18c) = (undefined4)local_88;
      break;
    case 4:
      uVar15 = 5;
      if (param_3 != 2) {
        uVar15 = 9;
      }
      *(undefined8 *)(param_1 + 0x19c) = 0;
      *(undefined8 *)(param_1 + 0x194) = 0;
      *(undefined4 *)(param_1 + 0x17c) = uVar15;
      *(undefined1 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x184) = (undefined4)local_90;
      *(undefined4 *)(param_1 + 0x188) = local_90._4_4_;
      *(undefined4 *)(param_1 + 0x18c) = (undefined4)local_88;
      *(undefined1 *)(param_1 + 0x181) = 0x42;
      *(undefined4 *)(param_1 + 400) = local_88._4_4_;
      break;
    default:
      goto switchD_01529e2c_default;
    }
  }
  plVar21 = *(long **)(param_1 + 0x1b0);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_01529ed0:
    uVar22 = FUN_014aeb48(param_1);
    if (((uVar22 & 1) == 0) ||
       (uVar22 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar22 & 1) != 0))
    goto LAB_01529f1c;
LAB_01529eec:
    uVar17 = 1;
  }
  else {
    uVar22 = FUN_014aeb48(param_1);
    if ((((uVar22 & 1) == 0) || (uVar22 = FUN_014aeb20(param_1,1), (uVar22 & 1) == 0)) &&
       (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
      if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_01529ed0;
      goto LAB_01529eec;
    }
LAB_01529f1c:
    uVar17 = 0;
  }
  (**(code **)(*plVar21 + 0x1f8))(plVar21,uVar14,param_1 + 0x17c,uVar17,1,0,1);
switchD_01529e2c_default:
  return;
}



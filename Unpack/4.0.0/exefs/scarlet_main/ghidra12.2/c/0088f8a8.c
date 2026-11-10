/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0088f8a8; name: FUN_0088f8a8
 */


void FUN_0088f8a8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ushort uVar13;
  long local_a8 [9];
  
  *(undefined4 *)((long)param_1 + 0x6f) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar12 = param_3[1];
  uVar7 = (ulong)*(ushort *)(lVar12 + 0xe);
  if (*(ushort *)(lVar12 + 0xe) != 0) {
    uVar4 = *(uint *)(lVar12 + 0x10);
    uVar8 = 0;
    do {
      lVar9 = lVar12 + (ulong)*(uint *)(lVar12 + (ulong)uVar4 + uVar8 * 4);
      if (*(char *)(lVar9 + 0x1d) == '\0') {
        uVar7 = FUN_0088fe00(lVar9,param_2 + 0x16);
        if ((uVar7 & 1) != 0) goto LAB_0088f94c;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0xe);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  lVar9 = 0;
LAB_0088f94c:
  uVar13 = (ushort)(lVar9 != 0);
  bVar5 = (**(code **)(*param_2 + 0x50))(param_2);
  if (bVar5 != 0) {
    uVar7 = 0;
    do {
      lVar6 = (**(code **)(*param_2 + 0x58))(param_2,uVar7 & 0xffffffff);
      uVar8 = (ulong)*(ushort *)(lVar12 + 0xe);
      if (*(ushort *)(lVar12 + 0xe) != 0) {
        uVar4 = *(uint *)(lVar12 + 0x10);
        uVar10 = 0;
        uVar11 = *(undefined8 *)(lVar6 + 0x28);
        do {
          lVar6 = lVar12 + (ulong)*(uint *)(lVar12 + (ulong)uVar4 + uVar10 * 4);
          if (*(char *)(lVar6 + 0x1d) == '\x01') {
            uVar8 = FUN_0088fe00(lVar6,uVar11);
            if ((uVar8 & 1) != 0) goto LAB_0088f980;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0xe);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar8);
      }
      lVar6 = 0;
LAB_0088f980:
      local_a8[uVar7] = lVar6;
      uVar7 = uVar7 + 1;
      if (lVar6 != 0) {
        uVar13 = uVar13 + 1;
      }
    } while (uVar7 != bVar5);
  }
  if (uVar13 != 0) {
    uVar11 = *param_3;
    uVar2 = param_3[1];
    uVar1 = param_3[2];
    uVar3 = param_3[3];
    param_1[4] = lVar9;
    param_1[2] = uVar1;
    param_1[3] = uVar3;
    *param_1 = uVar11;
    param_1[1] = uVar2;
    *(byte *)((long)param_1 + 0x72) = bVar5;
    if (bVar5 != 0) {
      memcpy(param_1 + 5,local_a8,(ulong)bVar5 << 3);
    }
    *(ushort *)(param_1 + 0xe) = uVar13;
  }
  return;
}



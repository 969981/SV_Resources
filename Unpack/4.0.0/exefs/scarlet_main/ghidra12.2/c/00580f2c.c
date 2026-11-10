/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00580f2c; name: FUN_00580f2c
 */


byte * FUN_00580f2c(long param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  ulong *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
          return param_2;
        }
        auVar10 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar10._0_8_;
        if ((auVar10._8_8_ & 1) != 0) {
          return param_2;
        }
      }
      pbVar7 = param_2 + 1;
      bVar1 = *param_2;
      uVar8 = (uint)bVar1;
      if ((char)bVar1 < '\0') break;
      uVar4 = (uint)(bVar1 >> 3);
joined_r0x005811b0:
      if (uVar4 != 2) goto LAB_00580f80;
LAB_00580fe8:
      if ((uVar8 & 0xff) != 0x12) goto LAB_00581024;
      if (*(int *)(param_1 + 0x1c) == 2) {
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        bVar1 = *pbVar7;
        if (-1 < (char)bVar1) goto LAB_0058110c;
LAB_00581010:
        auVar12 = FUN_0052e5f0(pbVar7);
        if (auVar12._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        FUN_00580ac0(param_1);
        puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        *(undefined4 *)(param_1 + 0x1c) = 2;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar2 = (ulong *)*puVar2;
        }
        uVar9 = FUN_00585fb0(puVar2);
        *(undefined8 *)(param_1 + 0x10) = uVar9;
        bVar1 = *pbVar7;
        if ((char)bVar1 < '\0') goto LAB_00581010;
LAB_0058110c:
        auVar12[8] = bVar1;
        auVar12._0_8_ = pbVar7 + 1;
        auVar12._9_3_ = 0;
      }
      uVar8 = auVar12._8_4_ + (auVar12._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
      lVar3 = param_3[0xb];
      iVar6 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar8;
      *(int *)(param_3 + 0xb) = (int)lVar3 + -1;
      if ((int)lVar3 < 1) {
        return (byte *)0x0;
      }
      param_2 = (byte *)FUN_00581e94(uVar9,auVar12._0_8_,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
LAB_00581154:
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
      if ((int)param_3[10] != 0) {
        return (byte *)0x0;
      }
      uVar8 = *(int *)((long)param_3 + 0x1c) + (iVar6 - uVar8);
      *(uint *)((long)param_3 + 0x1c) = uVar8;
      *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
    }
    uVar8 = (uVar8 + (uint)*pbVar7 * 0x80) - 0x80;
    if ((char)*pbVar7 < '\0') {
      auVar10 = FUN_0052e560(param_2,uVar8);
      pbVar7 = auVar10._0_8_;
      uVar8 = auVar10._8_4_;
      if (pbVar7 == (byte *)0x0) {
        return (byte *)0x0;
      }
      uVar4 = (uint)(auVar10._8_8_ >> 3) & 0x1fffffff;
      goto joined_r0x005811b0;
    }
    pbVar7 = param_2 + 2;
    uVar4 = uVar8 >> 3;
    if (uVar4 == 2) goto LAB_00580fe8;
LAB_00580f80:
    if ((uVar4 == 1) && ((uVar8 & 0xff) == 10)) {
      if (*(int *)(param_1 + 0x1c) == 1) {
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        bVar1 = *pbVar7;
        if (-1 < (char)bVar1) goto LAB_00581090;
LAB_00580fb0:
        auVar11 = FUN_0052e5f0(pbVar7);
        if (auVar11._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        FUN_00580ac0(param_1);
        puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        *(undefined4 *)(param_1 + 0x1c) = 1;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar2 = (ulong *)*puVar2;
        }
        uVar9 = FUN_00585ef0(puVar2);
        *(undefined8 *)(param_1 + 0x10) = uVar9;
        bVar1 = *pbVar7;
        if ((char)bVar1 < '\0') goto LAB_00580fb0;
LAB_00581090:
        auVar11[8] = bVar1;
        auVar11._0_8_ = pbVar7 + 1;
        auVar11._9_3_ = 0;
      }
      uVar8 = auVar11._8_4_ + (auVar11._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
      lVar3 = param_3[0xb];
      iVar6 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar8;
      *(int *)(param_3 + 0xb) = (int)lVar3 + -1;
      if ((int)lVar3 < 1) {
        return (byte *)0x0;
      }
      param_2 = (byte *)FUN_0058195c(uVar9,auVar11._0_8_,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
      goto LAB_00581154;
    }
LAB_00581024:
    if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar8 - 1;
      return pbVar7;
    }
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) == 0) {
      lVar3 = FUN_0021d48c((ulong *)(param_1 + 8));
    }
    else {
      lVar3 = (uVar5 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_0052f000(uVar8,lVar3,pbVar7,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}



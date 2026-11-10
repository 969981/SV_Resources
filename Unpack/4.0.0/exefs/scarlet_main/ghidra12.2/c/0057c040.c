/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0057c040; name: FUN_0057c040
 */


byte * FUN_0057c040(long param_1,byte *param_2,long *param_3)

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
  undefined1 auVar13 [12];
  
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
joined_r0x0057c1dc:
      if (uVar4 != 3) goto LAB_0057c098;
LAB_0057c108:
      if ((uVar8 & 0xff) != 0x1a) goto LAB_0057c180;
      if (*(int *)(param_1 + 0x1c) == 3) {
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        bVar1 = *pbVar7;
        if (-1 < (char)bVar1) goto LAB_0057c290;
LAB_0057c130:
        auVar12 = FUN_0052e5f0(pbVar7);
        if (auVar12._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        FUN_0057bdc0(param_1);
        puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        *(undefined4 *)(param_1 + 0x1c) = 3;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar2 = (ulong *)*puVar2;
        }
        uVar9 = FUN_00585778(puVar2);
        *(undefined8 *)(param_1 + 0x10) = uVar9;
        bVar1 = *pbVar7;
        if ((char)bVar1 < '\0') goto LAB_0057c130;
LAB_0057c290:
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
      param_2 = (byte *)FUN_0057b3c0(uVar9,auVar12._0_8_,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
LAB_0057c354:
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
      goto joined_r0x0057c1dc;
    }
    pbVar7 = param_2 + 2;
    uVar4 = uVar8 >> 3;
    if (uVar4 == 3) goto LAB_0057c108;
LAB_0057c098:
    if (uVar4 == 2) {
      if ((uVar8 & 0xff) != 0x12) goto LAB_0057c180;
      if (*(int *)(param_1 + 0x1c) == 2) {
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        bVar1 = *pbVar7;
        if (-1 < (char)bVar1) goto LAB_0057c30c;
LAB_0057c16c:
        auVar13 = FUN_0052e5f0(pbVar7);
        if (auVar13._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        FUN_0057bdc0(param_1);
        puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        *(undefined4 *)(param_1 + 0x1c) = 2;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar2 = (ulong *)*puVar2;
        }
        uVar9 = FUN_005857e8(puVar2);
        *(undefined8 *)(param_1 + 0x10) = uVar9;
        bVar1 = *pbVar7;
        if ((char)bVar1 < '\0') goto LAB_0057c16c;
LAB_0057c30c:
        auVar13[8] = bVar1;
        auVar13._0_8_ = pbVar7 + 1;
        auVar13._9_3_ = 0;
      }
      uVar8 = auVar13._8_4_ + (auVar13._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
      lVar3 = param_3[0xb];
      iVar6 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar8;
      *(int *)(param_3 + 0xb) = (int)lVar3 + -1;
      if ((int)lVar3 < 1) {
        return (byte *)0x0;
      }
      param_2 = (byte *)FUN_0057b79c(uVar9,auVar13._0_8_,param_3);
joined_r0x0057c350:
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
      goto LAB_0057c354;
    }
    if ((uVar4 == 1) && ((uVar8 & 0xff) == 10)) {
      if (*(int *)(param_1 + 0x1c) == 1) {
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        bVar1 = *pbVar7;
        if (-1 < (char)bVar1) goto LAB_0057c214;
LAB_0057c0d0:
        auVar11 = FUN_0052e5f0(pbVar7);
        if (auVar11._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        FUN_0057bdc0(param_1);
        puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        *(undefined4 *)(param_1 + 0x1c) = 1;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar2 = (ulong *)*puVar2;
        }
        uVar9 = FUN_00585708(puVar2);
        *(undefined8 *)(param_1 + 0x10) = uVar9;
        bVar1 = *pbVar7;
        if ((char)bVar1 < '\0') goto LAB_0057c0d0;
LAB_0057c214:
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
      param_2 = (byte *)FUN_0057b040(uVar9,auVar11._0_8_,param_3);
      goto joined_r0x0057c350;
    }
LAB_0057c180:
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



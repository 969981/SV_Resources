/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00218604; name: FUN_00218604
 */


byte * FUN_00218604(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  byte bVar2;
  long lVar3;
  ulong *puVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  
  puVar1 = (ulong *)(param_1 + 8);
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
      bVar2 = *param_2;
      uVar8 = (uint)bVar2;
      if ((char)bVar2 < '\0') break;
      uVar5 = (uint)(bVar2 >> 3);
joined_r0x00218724:
      if (uVar5 != 2) goto LAB_0021864c;
LAB_002186a0:
      if ((uVar8 & 0xff) != 0x12) goto LAB_002186c8;
      lVar9 = *(long *)(param_1 + 0x18);
      if (lVar9 == 0) {
        puVar4 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        lVar9 = FUN_0021d1c0(puVar4);
        *(long *)(param_1 + 0x18) = lVar9;
        bVar2 = *pbVar7;
        if (-1 < (char)bVar2) goto LAB_002186c0;
LAB_002187cc:
        auVar12 = FUN_0052e5f0(pbVar7);
        if (auVar12._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        bVar2 = *pbVar7;
        if ((char)bVar2 < '\0') goto LAB_002187cc;
LAB_002186c0:
        auVar12[8] = bVar2;
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
      param_2 = (byte *)FUN_0021b86c(lVar9,auVar12._0_8_,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
LAB_00218820:
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
      uVar5 = (uint)(auVar10._8_8_ >> 3) & 0x1fffffff;
      goto joined_r0x00218724;
    }
    pbVar7 = param_2 + 2;
    uVar5 = uVar8 >> 3;
    if (uVar5 == 2) goto LAB_002186a0;
LAB_0021864c:
    if ((uVar5 == 1) && ((uVar8 & 0xff) == 10)) {
      lVar9 = *(long *)(param_1 + 0x10);
      if (lVar9 == 0) {
        puVar4 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        lVar9 = FUN_0021e87c(puVar4);
        *(long *)(param_1 + 0x10) = lVar9;
        bVar2 = *pbVar7;
        if (-1 < (char)bVar2) goto LAB_00218674;
LAB_00218750:
        auVar11 = FUN_0052e5f0(pbVar7);
        if (auVar11._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        bVar2 = *pbVar7;
        if ((char)bVar2 < '\0') goto LAB_00218750;
LAB_00218674:
        auVar11[8] = bVar2;
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
      param_2 = (byte *)FUN_0021dc98(lVar9,auVar11._0_8_,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
      goto LAB_00218820;
    }
LAB_002186c8:
    if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar8 - 1;
      return pbVar7;
    }
    if ((*puVar1 & 1) == 0) {
      lVar9 = FUN_0021d48c(puVar1);
    }
    else {
      lVar9 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_0052f000(uVar8,lVar9,pbVar7,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}



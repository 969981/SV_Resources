/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00572670; name: FUN_00572670
 */


byte * FUN_00572670(long param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  
  puVar1 = (ulong *)(param_1 + 8);
LAB_00572698:
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar13 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar13._0_8_;
      if ((auVar13._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    pbVar10 = param_2 + 1;
    bVar2 = *param_2;
    uVar11 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      uVar11 = (uVar11 + (uint)*pbVar10 * 0x80) - 0x80;
      if ((char)*pbVar10 < '\0') {
        auVar13 = FUN_0052e560(param_2,uVar11);
        pbVar10 = auVar13._0_8_;
        uVar11 = auVar13._8_4_;
        if (pbVar10 == (byte *)0x0) {
          return (byte *)0x0;
        }
        uVar7 = (uint)(auVar13._8_8_ >> 3) & 0x1fffffff;
        goto joined_r0x005728c4;
      }
      pbVar10 = param_2 + 2;
      uVar7 = uVar11 >> 3;
      if (uVar7 != 2) goto LAB_005726c0;
LAB_00572840:
      if ((uVar11 & 0xff) == 0x12) {
        lVar6 = *(long *)(param_1 + 0x28);
        if (lVar6 == 0) {
          puVar5 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) != 0) {
            puVar5 = (ulong *)*puVar5;
          }
          lVar6 = FUN_0051444c(puVar5);
          *(long *)(param_1 + 0x28) = lVar6;
          bVar2 = *pbVar10;
          if (-1 < (char)bVar2) goto LAB_00572860;
LAB_005728f0:
          auVar15 = FUN_0052e5f0(pbVar10);
          if (auVar15._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          bVar2 = *pbVar10;
          if ((char)bVar2 < '\0') goto LAB_005728f0;
LAB_00572860:
          auVar15[8] = bVar2;
          auVar15._0_8_ = pbVar10 + 1;
          auVar15._9_3_ = 0;
        }
        uVar11 = auVar15._8_4_ + (auVar15._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar11 & (int)uVar11 >> 0x1f);
        uVar4 = param_3[0xb];
        iVar9 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar11;
        *(int *)(param_3 + 0xb) = (int)uVar4 + -1;
        if ((int)uVar4 < 1) {
          return (byte *)0x0;
        }
        param_2 = (byte *)FUN_00513d54(lVar6,auVar15._0_8_,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
        *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
        if ((int)param_3[10] != 0) {
          return (byte *)0x0;
        }
        uVar11 = *(int *)((long)param_3 + 0x1c) + (iVar9 - uVar11);
        *(uint *)((long)param_3 + 0x1c) = uVar11;
        *param_3 = param_3[1] + (long)(int)(uVar11 & (int)uVar11 >> 0x1f);
        goto LAB_00572698;
      }
    }
    else {
      uVar7 = (uint)(bVar2 >> 3);
joined_r0x005728c4:
      if (uVar7 == 2) goto LAB_00572840;
LAB_005726c0:
      if ((uVar7 == 1) && ((uVar11 & 0xff) == 10)) {
        param_2 = pbVar10 + -1;
        do {
          piVar8 = *(int **)(param_1 + 0x20);
          pbVar10 = param_2 + 1;
          if (piVar8 == (int *)0x0) {
            iVar9 = *(int *)(param_1 + 0x1c);
LAB_00572738:
            FUN_00532334(param_1 + 0x10,iVar9 + 1);
            piVar8 = *(int **)(param_1 + 0x20);
            iVar9 = *piVar8;
LAB_0057274c:
            *piVar8 = iVar9 + 1;
            uVar12 = FUN_005858c0(*(undefined8 *)(param_1 + 0x10));
            iVar9 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar9 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar9 * 8 + 8) = uVar12;
            bVar2 = *pbVar10;
            if ((char)bVar2 < '\0') goto LAB_00572710;
LAB_00572784:
            auVar14[8] = bVar2;
            auVar14._0_8_ = param_2 + 2;
            auVar14._9_3_ = 0;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x18);
            iVar9 = *piVar8;
            if (iVar9 <= iVar3) {
              if (iVar9 == *(int *)(param_1 + 0x1c)) goto LAB_00572738;
              goto LAB_0057274c;
            }
            *(int *)(param_1 + 0x18) = iVar3 + 1;
            uVar12 = *(undefined8 *)(piVar8 + (long)iVar3 * 2 + 2);
            bVar2 = *pbVar10;
            if (-1 < (char)bVar2) goto LAB_00572784;
LAB_00572710:
            auVar14 = FUN_0052e5f0(pbVar10);
            if (auVar14._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar11 = auVar14._8_4_ + (auVar14._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar11 & (int)uVar11 >> 0x1f);
          uVar4 = param_3[0xb];
          iVar9 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar11;
          *(int *)(param_3 + 0xb) = (int)uVar4 + -1;
          if ((int)uVar4 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_0057c040(uVar12,auVar14._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar11 = *(int *)((long)param_3 + 0x1c) + (iVar9 - uVar11);
          *(uint *)((long)param_3 + 0x1c) = uVar11;
          pbVar10 = (byte *)(param_3[1] + (long)(int)(uVar11 & (int)uVar11 >> 0x1f));
          *param_3 = (ulong)pbVar10;
        } while ((param_2 < pbVar10) && (*param_2 == 10));
        goto LAB_00572698;
      }
    }
    if ((uVar11 == 0) || ((uVar11 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar11 - 1;
      return pbVar10;
    }
    if ((*puVar1 & 1) == 0) {
      lVar6 = FUN_0021d48c(puVar1);
    }
    else {
      lVar6 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_0052f000(uVar11,lVar6,pbVar10,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005fce00; name: FUN_005fce00
 */


/* WARNING: Removing unreachable block (ram,0x005fd0c8) */
/* WARNING: Removing unreachable block (ram,0x005fcfc8) */

byte * FUN_005fce00(long param_1,byte *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  undefined8 uVar15;
  byte *pbVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  
  puVar6 = PTR_DAT_047cba80;
  puVar1 = (undefined8 *)(param_1 + 0x28);
  puVar2 = (ulong *)(param_1 + 8);
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
          return param_2;
        }
        auVar17 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar17._0_8_;
        if ((auVar17._8_8_ & 1) != 0) {
          return param_2;
        }
      }
      pbVar13 = param_2 + 1;
      bVar3 = *param_2;
      uVar14 = (uint)bVar3;
      if (-1 < (char)bVar3) break;
      uVar14 = (uVar14 + (uint)*pbVar13 * 0x80) - 0x80;
      if ((char)*pbVar13 < '\0') {
        auVar17 = FUN_0052e560(param_2,uVar14);
        pbVar13 = auVar17._0_8_;
        uVar14 = auVar17._8_4_;
        if (pbVar13 != (byte *)0x0) {
          uVar10 = (uint)(auVar17._8_8_ >> 3) & 0x1fffffff;
          goto joined_r0x005fce60;
        }
        goto LAB_005fd16c;
      }
      pbVar13 = param_2 + 2;
      uVar10 = uVar14 >> 3;
      if (uVar10 == 2) goto LAB_005fcff0;
LAB_005fce64:
      if ((uVar10 == 1) && ((uVar14 & 0xff) == 10)) {
        param_2 = pbVar13 + -1;
        do {
          piVar11 = *(int **)(param_1 + 0x20);
          pbVar13 = param_2 + 1;
          if (piVar11 == (int *)0x0) {
            iVar12 = *(int *)(param_1 + 0x1c);
LAB_005fcedc:
            FUN_00532334(param_1 + 0x10,iVar12 + 1);
            piVar11 = *(int **)(param_1 + 0x20);
            iVar12 = *piVar11;
LAB_005fcef0:
            *piVar11 = iVar12 + 1;
            uVar15 = FUN_00615f34(*(undefined8 *)(param_1 + 0x10));
            iVar12 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar12 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar12 * 8 + 8) = uVar15;
            bVar3 = *pbVar13;
            if ((char)bVar3 < '\0') goto LAB_005fceb4;
LAB_005fcf28:
            auVar18[8] = bVar3;
            auVar18._0_8_ = param_2 + 2;
            auVar18._9_3_ = 0;
          }
          else {
            iVar4 = *(int *)(param_1 + 0x18);
            iVar12 = *piVar11;
            if (iVar12 <= iVar4) {
              if (iVar12 == *(int *)(param_1 + 0x1c)) goto LAB_005fcedc;
              goto LAB_005fcef0;
            }
            *(int *)(param_1 + 0x18) = iVar4 + 1;
            uVar15 = *(undefined8 *)(piVar11 + (long)iVar4 * 2 + 2);
            bVar3 = *pbVar13;
            if (-1 < (char)bVar3) goto LAB_005fcf28;
LAB_005fceb4:
            auVar18 = FUN_0052e5f0(pbVar13);
            if (auVar18._0_8_ == 0) goto LAB_005fd16c;
          }
          uVar14 = auVar18._8_4_ + (auVar18._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f);
          uVar5 = param_3[0xb];
          iVar12 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar14;
          *(int *)(param_3 + 0xb) = (int)uVar5 + -1;
          if ((((int)uVar5 < 1) ||
              (param_2 = (byte *)FUN_0060d4bc(uVar15,auVar18._0_8_,param_3), param_2 == (byte *)0x0)
              ) || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
          goto LAB_005fd16c;
          uVar14 = *(int *)((long)param_3 + 0x1c) + (iVar12 - uVar14);
          *(uint *)((long)param_3 + 0x1c) = uVar14;
          pbVar13 = (byte *)(param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f));
          *param_3 = (ulong)pbVar13;
        } while ((param_2 < pbVar13) && (*param_2 == 10));
      }
      else {
LAB_005fd084:
        if ((uVar14 == 0) || ((uVar14 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar14 - 1;
          return pbVar13;
        }
        if ((*puVar2 & 1) == 0) {
          lVar8 = FUN_0021d48c(puVar2);
        }
        else {
          lVar8 = (*puVar2 & 0xfffffffffffffffe) + 8;
        }
        param_2 = (byte *)FUN_0052f000(uVar14,lVar8,pbVar13,param_3);
        if (param_2 == (byte *)0x0) goto LAB_005fd16c;
      }
    }
    uVar10 = (uint)(bVar3 >> 3);
joined_r0x005fce60:
    if (uVar10 != 2) goto LAB_005fce64;
LAB_005fcff0:
    if ((uVar14 & 0xff) != 0x12) goto LAB_005fd084;
    puVar9 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
    if ((*puVar2 & 1) == 0) {
      pbVar16 = (byte *)*puVar1;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      pbVar16 = (byte *)*puVar1;
    }
    if (pbVar16 == puVar6) {
      FUN_001fcdc8(puVar1,puVar9,puVar6);
      pbVar16 = (byte *)*puVar1;
    }
    param_2 = (byte *)FUN_0052e7f0(pbVar16,pbVar13,param_3);
    uVar5 = *(ulong *)(pbVar16 + 8);
    pbVar13 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar13 = pbVar16 + 1;
      uVar5 = (ulong)(*pbVar16 >> 1);
    }
    bVar7 = FUN_0052e6b0(pbVar13,uVar5,0);
    bVar3 = bVar7 & param_2 != (byte *)0x0;
    if ((bVar7 & 1) == 0) {
      iVar12 = 2;
      if (bVar3 == 0) {
        iVar12 = 4;
      }
    }
    else {
      iVar12 = 2;
      if (bVar3 == 0) {
        iVar12 = (uint)(param_2 == (byte *)0x0) << 2;
      }
    }
  } while (iVar12 == 2);
  if (iVar12 == 4) {
LAB_005fd16c:
    param_2 = (byte *)0x0;
  }
  return param_2;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005782d0; name: FUN_005782d0
 */


/* WARNING: Removing unreachable block (ram,0x00578598) */
/* WARNING: Removing unreachable block (ram,0x00578550) */

byte * FUN_005782d0(long param_1,byte *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  undefined8 uVar16;
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
      bVar4 = *param_2;
      uVar14 = (uint)bVar4;
      if (-1 < (char)bVar4) break;
      uVar14 = (uVar14 + (uint)*pbVar13 * 0x80) - 0x80;
      if ((char)*pbVar13 < '\0') {
        auVar17 = FUN_0052e560(param_2,uVar14);
        pbVar13 = auVar17._0_8_;
        uVar14 = auVar17._8_4_;
        if (pbVar13 != (byte *)0x0) {
          uVar10 = (uint)(auVar17._8_8_ >> 3) & 0x1fffffff;
          goto joined_r0x00578330;
        }
        goto LAB_0057863c;
      }
      pbVar13 = param_2 + 2;
      uVar10 = uVar14 >> 3;
      if (uVar10 != 2) goto LAB_00578334;
LAB_005783f4:
      if ((uVar14 & 0xff) == 0x12) {
        param_2 = pbVar13 + -1;
        do {
          piVar11 = *(int **)(param_1 + 0x20);
          pbVar13 = param_2 + 1;
          if (piVar11 == (int *)0x0) {
            iVar12 = *(int *)(param_1 + 0x1c);
LAB_00578464:
            FUN_00532334(param_1 + 0x10,iVar12 + 1);
            piVar11 = *(int **)(param_1 + 0x20);
            iVar12 = *piVar11;
LAB_00578478:
            *piVar11 = iVar12 + 1;
            uVar16 = FUN_00585648(*(undefined8 *)(param_1 + 0x10));
            iVar12 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar12 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar12 * 8 + 8) = uVar16;
            bVar4 = *pbVar13;
            if ((char)bVar4 < '\0') goto LAB_0057843c;
LAB_005784b0:
            auVar18[8] = bVar4;
            auVar18._0_8_ = param_2 + 2;
            auVar18._9_3_ = 0;
          }
          else {
            iVar5 = *(int *)(param_1 + 0x18);
            iVar12 = *piVar11;
            if (iVar12 <= iVar5) {
              if (iVar12 == *(int *)(param_1 + 0x1c)) goto LAB_00578464;
              goto LAB_00578478;
            }
            *(int *)(param_1 + 0x18) = iVar5 + 1;
            uVar16 = *(undefined8 *)(piVar11 + (long)iVar5 * 2 + 2);
            bVar4 = *pbVar13;
            if (-1 < (char)bVar4) goto LAB_005784b0;
LAB_0057843c:
            auVar18 = FUN_0052e5f0(pbVar13);
            if (auVar18._0_8_ == 0) goto LAB_0057863c;
          }
          uVar14 = auVar18._8_4_ + (auVar18._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f);
          uVar3 = param_3[0xb];
          iVar12 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar14;
          *(int *)(param_3 + 0xb) = (int)uVar3 + -1;
          if ((((int)uVar3 < 1) ||
              (param_2 = (byte *)FUN_0057a2e0(uVar16,auVar18._0_8_,param_3), param_2 == (byte *)0x0)
              ) || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
          goto LAB_0057863c;
          uVar14 = *(int *)((long)param_3 + 0x1c) + (iVar12 - uVar14);
          *(uint *)((long)param_3 + 0x1c) = uVar14;
          pbVar13 = (byte *)(param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f));
          *param_3 = (ulong)pbVar13;
        } while ((param_2 < pbVar13) && (*param_2 == 0x12));
      }
      else {
LAB_00578554:
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
        if (param_2 == (byte *)0x0) goto LAB_0057863c;
      }
    }
    uVar10 = (uint)(bVar4 >> 3);
joined_r0x00578330:
    if (uVar10 == 2) goto LAB_005783f4;
LAB_00578334:
    if ((uVar10 != 1) || ((uVar14 & 0xff) != 10)) goto LAB_00578554;
    puVar9 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
    if ((*puVar2 & 1) == 0) {
      pbVar15 = (byte *)*puVar1;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      pbVar15 = (byte *)*puVar1;
    }
    if (pbVar15 == puVar6) {
      FUN_001fcdc8(puVar1,puVar9,puVar6);
      pbVar15 = (byte *)*puVar1;
    }
    param_2 = (byte *)FUN_0052e7f0(pbVar15,pbVar13,param_3);
    uVar3 = *(ulong *)(pbVar15 + 8);
    pbVar13 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar13 = pbVar15 + 1;
      uVar3 = (ulong)(*pbVar15 >> 1);
    }
    bVar7 = FUN_0052e6b0(pbVar13,uVar3,0);
    bVar4 = bVar7 & param_2 != (byte *)0x0;
    if ((bVar7 & 1) == 0) {
      iVar12 = 2;
      if (bVar4 == 0) {
        iVar12 = 4;
      }
    }
    else {
      iVar12 = 2;
      if (bVar4 == 0) {
        iVar12 = (uint)(param_2 == (byte *)0x0) << 2;
      }
    }
  } while (iVar12 == 2);
  if (iVar12 == 4) {
LAB_0057863c:
    param_2 = (byte *)0x0;
  }
  return param_2;
}



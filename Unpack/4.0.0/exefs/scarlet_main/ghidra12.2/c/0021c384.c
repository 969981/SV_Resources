/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0021c384; name: FUN_0021c384
 */


/* WARNING: Removing unreachable block (ram,0x0021c540) */

byte * FUN_0021c384(long param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  ulong *puVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  undefined1 auVar14 [16];
  
  puVar5 = PTR_DAT_047cba80;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  puVar2 = (ulong *)(param_1 + 8);
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
          return param_2;
        }
        auVar14 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar14._0_8_;
        if ((auVar14._8_8_ & 1) != 0) {
          return param_2;
        }
      }
      pbVar11 = param_2 + 1;
      bVar3 = *param_2;
      uVar12 = (uint)bVar3;
      if ((char)bVar3 < '\0') break;
      uVar9 = (uint)(bVar3 >> 3);
joined_r0x0021c584:
      if (uVar9 != 2) goto LAB_0021c3e8;
LAB_0021c45c:
      if ((uVar12 & 0xff) == 0x12) {
        if (*(int *)(param_1 + 0x1c) != 2) {
          FUN_0021c298(param_1);
          *(undefined4 *)(param_1 + 0x1c) = 2;
          *(undefined **)(param_1 + 0x10) = puVar5;
          uVar10 = *puVar2;
          goto joined_r0x0021c420;
        }
        goto LAB_0021c474;
      }
LAB_0021c4fc:
      if ((uVar12 == 0) || ((uVar12 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar12 - 1;
        return pbVar11;
      }
      if ((*puVar2 & 1) == 0) {
        lVar7 = FUN_0021d48c(puVar2);
      }
      else {
        lVar7 = (*puVar2 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_0052f000(uVar12,lVar7,pbVar11,param_3);
      if (param_2 == (byte *)0x0) goto LAB_0021c5f0;
    }
    uVar12 = (uVar12 + (uint)*pbVar11 * 0x80) - 0x80;
    if ((char)*pbVar11 < '\0') {
      auVar14 = FUN_0052e560(param_2,uVar12);
      pbVar11 = auVar14._0_8_;
      uVar12 = auVar14._8_4_;
      if (pbVar11 != (byte *)0x0) {
        uVar9 = (uint)(auVar14._8_8_ >> 3) & 0x1fffffff;
        goto joined_r0x0021c584;
      }
      goto LAB_0021c5f0;
    }
    pbVar11 = param_2 + 2;
    uVar9 = uVar12 >> 3;
    if (uVar9 == 2) goto LAB_0021c45c;
LAB_0021c3e8:
    if ((uVar9 != 1) || ((uVar12 & 0xff) != 10)) goto LAB_0021c4fc;
    if (*(int *)(param_1 + 0x1c) == 1) {
LAB_0021c474:
      puVar8 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
      if ((*puVar2 & 1) == 0) goto LAB_0021c480;
LAB_0021c424:
      puVar8 = (ulong *)*puVar8;
      pbVar13 = (byte *)*puVar1;
    }
    else {
      FUN_0021c298(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 1;
      *(undefined **)(param_1 + 0x10) = puVar5;
      uVar10 = *puVar2;
joined_r0x0021c420:
      puVar8 = (ulong *)(uVar10 & 0xfffffffffffffffe);
      if ((uVar10 & 1) != 0) goto LAB_0021c424;
LAB_0021c480:
      pbVar13 = (byte *)*puVar1;
    }
    if (pbVar13 == puVar5) {
      FUN_001fcdc8(puVar1,puVar8,puVar5);
      pbVar13 = (byte *)*puVar1;
    }
    param_2 = (byte *)FUN_0052e7f0(pbVar13,pbVar11,param_3);
    uVar10 = *(ulong *)(pbVar13 + 8);
    pbVar11 = *(byte **)(pbVar13 + 0x10);
    if ((*pbVar13 & 1) == 0) {
      pbVar11 = pbVar13 + 1;
      uVar10 = (ulong)(*pbVar13 >> 1);
    }
    bVar6 = FUN_0052e6b0(pbVar11,uVar10,0);
    bVar3 = bVar6 & param_2 != (byte *)0x0;
    if ((bVar6 & 1) == 0) {
      iVar4 = 2;
      if (bVar3 == 0) {
        iVar4 = 4;
      }
    }
    else {
      iVar4 = 2;
      if (bVar3 == 0) {
        iVar4 = (uint)(param_2 == (byte *)0x0) << 2;
      }
    }
  } while (iVar4 == 2);
  if (iVar4 == 4) {
LAB_0021c5f0:
    param_2 = (byte *)0x0;
  }
  return param_2;
}



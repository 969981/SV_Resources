/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0068e574; name: FUN_0068e574
 */


/* WARNING: Removing unreachable block (ram,0x0068e754) */

byte * FUN_0068e574(long param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  undefined *puVar8;
  byte bVar9;
  long lVar10;
  ulong *puVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 auVar16 [16];
  
  puVar8 = PTR_DAT_047cba80;
  puVar1 = (undefined8 *)(param_1 + 0x20);
  puVar2 = (ulong *)(param_1 + 8);
  puVar3 = (undefined8 *)(param_1 + 0x18);
  puVar4 = (undefined8 *)(param_1 + 0x10);
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
          return param_2;
        }
        auVar16 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar16._0_8_;
        if ((auVar16._8_8_ & 1) != 0) {
          return param_2;
        }
      }
      pbVar13 = param_2 + 1;
      bVar6 = *param_2;
      uVar14 = (uint)bVar6;
      if ((char)bVar6 < '\0') break;
      uVar12 = (uint)(bVar6 >> 3);
joined_r0x0068e778:
      if (uVar12 != 3) goto LAB_0068e5d8;
LAB_0068e644:
      if ((uVar14 & 0xff) != 0x1a) goto LAB_0068e710;
      puVar11 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
      if ((*puVar2 & 1) == 0) {
        pbVar15 = (byte *)*puVar1;
      }
      else {
        puVar11 = (ulong *)*puVar11;
        pbVar15 = (byte *)*puVar1;
      }
      if (pbVar15 == puVar8) {
        FUN_001fcdc8(puVar1,puVar11,puVar8);
        pbVar15 = (byte *)*puVar1;
      }
LAB_0068e6b0:
      param_2 = (byte *)FUN_0052e7f0(pbVar15,pbVar13,param_3);
      uVar5 = *(ulong *)(pbVar15 + 8);
      pbVar13 = *(byte **)(pbVar15 + 0x10);
      if ((*pbVar15 & 1) == 0) {
        pbVar13 = pbVar15 + 1;
        uVar5 = (ulong)(*pbVar15 >> 1);
      }
      bVar9 = FUN_0052e6b0(pbVar13,uVar5,0);
      bVar6 = bVar9 & param_2 != (byte *)0x0;
      if ((bVar9 & 1) == 0) {
        iVar7 = 2;
        if (bVar6 == 0) {
          iVar7 = 4;
        }
      }
      else {
        iVar7 = 2;
        if (bVar6 == 0) {
          iVar7 = (uint)(param_2 == (byte *)0x0) << 2;
        }
      }
      if (iVar7 != 2) {
        if (iVar7 != 4) goto LAB_0068e830;
        goto LAB_0068e820;
      }
    }
    uVar14 = (uVar14 + (uint)*pbVar13 * 0x80) - 0x80;
    if ((char)*pbVar13 < '\0') {
      auVar16 = FUN_0052e560(param_2,uVar14);
      pbVar13 = auVar16._0_8_;
      uVar14 = auVar16._8_4_;
      if (pbVar13 != (byte *)0x0) {
        uVar12 = (uint)(auVar16._8_8_ >> 3) & 0x1fffffff;
        goto joined_r0x0068e778;
      }
      break;
    }
    pbVar13 = param_2 + 2;
    uVar12 = uVar14 >> 3;
    if (uVar12 == 3) goto LAB_0068e644;
LAB_0068e5d8:
    if (uVar12 == 2) {
      if ((uVar14 & 0xff) != 0x12) goto LAB_0068e710;
      puVar11 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
      if ((*puVar2 & 1) == 0) {
        pbVar15 = (byte *)*puVar3;
      }
      else {
        puVar11 = (ulong *)*puVar11;
        pbVar15 = (byte *)*puVar3;
      }
      if (pbVar15 == puVar8) {
        FUN_001fcdc8(puVar3,puVar11,puVar8);
        pbVar15 = (byte *)*puVar3;
      }
      goto LAB_0068e6b0;
    }
    if ((uVar12 == 1) && ((uVar14 & 0xff) == 10)) {
      puVar11 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
      if ((*puVar2 & 1) == 0) {
        pbVar15 = (byte *)*puVar4;
      }
      else {
        puVar11 = (ulong *)*puVar11;
        pbVar15 = (byte *)*puVar4;
      }
      if (pbVar15 == puVar8) {
        FUN_001fcdc8(puVar4,puVar11,puVar8);
        pbVar15 = (byte *)*puVar4;
      }
      goto LAB_0068e6b0;
    }
LAB_0068e710:
    if ((uVar14 == 0) || ((uVar14 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar14 - 1;
      return pbVar13;
    }
    if ((*puVar2 & 1) == 0) {
      lVar10 = FUN_0021d48c(puVar2);
    }
    else {
      lVar10 = (*puVar2 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_0052f000(uVar14,lVar10,pbVar13,param_3);
  } while (param_2 != (byte *)0x0);
LAB_0068e820:
  param_2 = (byte *)0x0;
LAB_0068e830:
  return param_2;
}



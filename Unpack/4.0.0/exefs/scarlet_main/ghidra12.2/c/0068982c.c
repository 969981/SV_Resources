/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0068982c; name: FUN_0068982c
 */


/* WARNING: Removing unreachable block (ram,0x006898c4) */

byte * FUN_0068982c(long param_1,byte *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  ulong *puVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  
  puVar6 = PTR_DAT_047cba80;
  puVar1 = (ulong *)(param_1 + 8);
  puVar2 = (undefined8 *)(param_1 + 0x10);
LAB_0068985c:
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
    uVar11 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar11 = (uVar11 + (uint)*pbVar10 * 0x80) - 0x80;
      if (-1 < (char)*pbVar10) {
        pbVar10 = param_2 + 2;
        goto joined_r0x0068987c;
      }
      auVar14 = FUN_0052e560(param_2,uVar11);
      if (auVar14._0_8_ == 0) goto LAB_00689a0c;
    }
    else {
joined_r0x0068987c:
      auVar14._8_4_ = uVar11;
      auVar14._0_8_ = pbVar10;
    }
    uVar11 = auVar14._8_4_;
    pbVar10 = auVar14._0_8_;
    if (uVar11 == 0x12) {
      puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
      if ((*puVar1 & 1) == 0) {
        pbVar12 = (byte *)*puVar2;
      }
      else {
        puVar9 = (ulong *)*puVar9;
        pbVar12 = (byte *)*puVar2;
      }
      if (pbVar12 == puVar6) {
        FUN_001fcdc8(puVar2,puVar9,puVar6);
        pbVar12 = (byte *)*puVar2;
      }
      param_2 = (byte *)FUN_0052e7f0(pbVar12,pbVar10,param_3);
      uVar4 = *(ulong *)(pbVar12 + 8);
      pbVar10 = *(byte **)(pbVar12 + 0x10);
      if ((*pbVar12 & 1) == 0) {
        pbVar10 = pbVar12 + 1;
        uVar4 = (ulong)(*pbVar12 >> 1);
      }
      bVar7 = FUN_0052e6b0(pbVar10,uVar4,0);
      bVar3 = bVar7 & param_2 != (byte *)0x0;
      if ((bVar7 & 1) == 0) {
        iVar5 = 2;
        if (bVar3 == 0) {
          iVar5 = 4;
        }
      }
      else {
        iVar5 = 2;
        if (bVar3 == 0) {
          iVar5 = (uint)(param_2 == (byte *)0x0) << 2;
        }
      }
      if (iVar5 != 2) {
        if (iVar5 != 4) goto LAB_00689a1c;
        goto LAB_00689a0c;
      }
      goto LAB_0068985c;
    }
    if ((uVar11 == 0) || ((uVar11 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar11 - 1;
      return pbVar10;
    }
    if ((*puVar1 & 1) == 0) {
      lVar8 = FUN_0021d48c(puVar1);
    }
    else {
      lVar8 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_0052f000(uVar11,lVar8,pbVar10,param_3);
    if (param_2 == (byte *)0x0) {
LAB_00689a0c:
      param_2 = (byte *)0x0;
LAB_00689a1c:
      return param_2;
    }
  } while( true );
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00717590; name: FUN_00717590
 */


/* WARNING: Removing unreachable block (ram,0x007178a0) */

byte * FUN_00717590(long param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  int iVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  ulong *puVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 auVar14 [16];
  
  puVar4 = PTR_DAT_047cba80;
  puVar1 = (undefined8 *)(param_1 + 0x18);
  puVar2 = (ulong *)(param_1 + 8);
LAB_007175d4:
  do {
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
    pbVar10 = param_2 + 1;
    bVar5 = *param_2;
    uVar12 = (ulong)(uint)bVar5;
    if ((char)bVar5 < '\0') {
      uVar8 = ((uint)bVar5 + (uint)*pbVar10 * 0x80) - 0x80;
      uVar12 = (ulong)uVar8;
      if (-1 < (char)*pbVar10) {
        pbVar10 = param_2 + 2;
        uVar8 = uVar8 >> 3;
        goto joined_r0x0071766c;
      }
      auVar14 = FUN_0052e560(param_2,uVar12);
      if (auVar14._0_8_ == 0) goto LAB_00717bb4;
      uVar8 = (uint)(auVar14._8_8_ >> 3) & 0x1fffffff;
    }
    else {
      uVar8 = (uint)(bVar5 >> 3);
joined_r0x0071766c:
      auVar14._8_8_ = uVar12;
      auVar14._0_8_ = pbVar10;
    }
    if (uVar8 - 1 < 6) {
                    /* WARNING: Could not recover jumptable at 0x0071760c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pbVar10 = (byte *)(*(code *)(&UNK_00717610 + (ulong)(byte)(&DAT_03d0a9d0)[uVar8 - 1] * 4))();
      return pbVar10;
    }
    pbVar10 = auVar14._0_8_;
    uVar11 = auVar14._8_4_;
    if ((uVar8 == 99) && ((uVar11 & 0xff) == 0x1a)) {
      puVar7 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
      if ((*puVar2 & 1) == 0) {
        pbVar13 = (byte *)*puVar1;
      }
      else {
        puVar7 = (ulong *)*puVar7;
        pbVar13 = (byte *)*puVar1;
      }
      if (pbVar13 == puVar4) {
        FUN_001fcdc8(puVar1,puVar7,puVar4);
        pbVar13 = (byte *)*puVar1;
      }
      param_2 = (byte *)FUN_0052e7f0(pbVar13,pbVar10,param_3);
      uVar12 = *(ulong *)(pbVar13 + 8);
      pbVar10 = *(byte **)(pbVar13 + 0x10);
      if ((*pbVar13 & 1) == 0) {
        pbVar10 = pbVar13 + 1;
        uVar12 = (ulong)(*pbVar13 >> 1);
      }
      bVar5 = FUN_0052e6b0(pbVar10,uVar12,0);
      if ((bVar5 & 1) == 0) {
        iVar9 = 4;
      }
      else {
        iVar9 = (uint)(param_2 == (byte *)0x0) << 2;
      }
      iVar3 = 2;
      if ((bVar5 & param_2 != (byte *)0x0) == 0) {
        iVar3 = iVar9;
      }
      if (iVar3 != 2) {
        if (iVar3 != 4) goto LAB_00717bb8;
        goto LAB_00717bb4;
      }
      goto LAB_007175d4;
    }
    if ((uVar11 == 0) || ((uVar11 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar11 - 1;
      return pbVar10;
    }
    if ((*puVar2 & 1) == 0) {
      lVar6 = FUN_0021d48c(puVar2);
    }
    else {
      lVar6 = (*puVar2 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_0052f000(auVar14._8_8_ & 0xffffffff,lVar6,pbVar10,param_3);
    if (param_2 == (byte *)0x0) {
LAB_00717bb4:
      param_2 = (byte *)0x0;
LAB_00717bb8:
      return param_2;
    }
  } while( true );
}



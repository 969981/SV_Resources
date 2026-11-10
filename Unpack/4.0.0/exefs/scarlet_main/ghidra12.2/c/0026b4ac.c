/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026b4ac; name: FUN_0026b4ac
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_0026b4ac(long param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  uint uVar7;
  ulong uVar6;
  ulong *puVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  
  puVar4 = PTR_DAT_047cba80;
  puVar1 = (undefined8 *)(param_1 + 0x10);
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
    bVar3 = *param_2;
    auVar14[8] = bVar3;
    auVar14._0_8_ = param_2 + 1;
    auVar14._9_3_ = 0;
    if ((char)bVar3 < '\0') {
      bVar2 = param_2[1];
      if ((char)bVar2 < '\0') {
        auVar14 = FUN_0052e560(param_2);
        if (auVar14._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        auVar14._8_4_ = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
        auVar14._0_8_ = param_2 + 2;
      }
    }
    uVar7 = auVar14._8_4_;
    pbVar10 = auVar14._0_8_;
    if (uVar7 == 10) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
      puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        pbVar12 = (byte *)*puVar1;
        if (pbVar12 != puVar4) goto LAB_0026b5a8;
LAB_0026b62c:
        FUN_001fcdc8(puVar1,puVar8,puVar4);
        pbVar12 = (byte *)*puVar1;
        bVar3 = *pbVar10;
        if ((char)bVar3 < '\0') goto LAB_0026b648;
LAB_0026b5b4:
        auVar15[8] = bVar3;
        auVar15._0_8_ = pbVar10 + 1;
        auVar15._9_3_ = 0;
LAB_0026b658:
        lVar9 = auVar15._0_8_;
        lVar11 = (long)auVar15._8_4_;
        if ((param_3[1] - lVar9) + 0x10 < lVar11) {
          param_2 = (byte *)FUN_0052ddec(param_3,lVar9,auVar15._8_4_,pbVar12);
          bVar3 = *pbVar12;
        }
        else {
          FUN_0026c6b8(pbVar12,lVar9,lVar11);
          param_2 = (byte *)(lVar9 + lVar11);
          bVar3 = *pbVar12;
        }
      }
      else {
        puVar8 = (ulong *)*puVar8;
        pbVar12 = (byte *)*puVar1;
        if (pbVar12 == puVar4) goto LAB_0026b62c;
LAB_0026b5a8:
        bVar3 = *pbVar10;
        if (-1 < (char)bVar3) goto LAB_0026b5b4;
LAB_0026b648:
        auVar15 = FUN_0052e5f0(pbVar10);
        if (auVar15._0_8_ != 0) goto LAB_0026b658;
        param_2 = (byte *)0x0;
        bVar3 = *pbVar12;
      }
      if ((bVar3 & 1) == 0) {
        uVar6 = FUN_005347a4(pbVar12 + 1,bVar3 >> 1,0,"(stripped)");
      }
      else {
        uVar6 = FUN_005347a4(*(undefined8 *)(pbVar12 + 0x10),*(undefined8 *)(pbVar12 + 8),0,
                             "(stripped)");
      }
      if ((uVar6 & 1) == 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar7 == 0x12) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
      puVar5 = (undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x18);
      }
      else {
        puVar5 = (undefined8 *)*puVar5;
        lVar9 = *(long *)(param_1 + 0x18);
      }
      if (lVar9 == 0) {
        lVar9 = FUN_0026ae18(puVar5);
        *(long *)(param_1 + 0x18) = lVar9;
      }
      param_2 = (byte *)FUN_00269b74(param_3,lVar9,pbVar10);
    }
    else {
      if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar7 - 1;
        return pbVar10;
      }
      param_2 = (byte *)FUN_0052f000(uVar7,0,pbVar10,param_3);
    }
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}



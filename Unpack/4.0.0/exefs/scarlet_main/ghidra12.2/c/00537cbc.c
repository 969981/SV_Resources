/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00537cbc; name: FUN_00537cbc
 */


byte * FUN_00537cbc(long param_1,byte *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined1 auVar11 [16];
  
  puVar5 = PTR_DAT_047cba80;
  puVar1 = (ulong *)(param_1 + 8);
  plVar2 = (long *)(param_1 + 0x10);
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar11 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar11._0_8_;
      if ((auVar11._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    bVar4 = *param_2;
    auVar11[8] = bVar4;
    auVar11._0_8_ = param_2 + 1;
    auVar11._9_7_ = 0;
    if ((char)bVar4 < '\0') {
      bVar3 = param_2[1];
      if ((char)bVar3 < '\0') {
        auVar11 = FUN_0052e560(param_2);
        if (auVar11._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        auVar11._8_4_ = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        auVar11._0_8_ = param_2 + 2;
        auVar11._12_4_ = 0;
      }
    }
    pbVar10 = auVar11._0_8_;
    uVar8 = auVar11._8_4_;
    if (uVar8 == 10) {
      puVar9 = (undefined8 *)(*puVar1 & 0xfffffffffffffffe);
      if ((*puVar1 & 1) == 0) {
        puVar6 = (undefined *)*plVar2;
      }
      else {
        puVar9 = (undefined8 *)*puVar9;
        puVar6 = (undefined *)*plVar2;
      }
      if (puVar6 == puVar5) {
        FUN_001fcdc8(plVar2,puVar9,puVar5);
        puVar6 = (undefined *)*plVar2;
      }
      param_2 = (byte *)FUN_0052e7f0(puVar6,pbVar10,param_3);
    }
    else {
      if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar8 - 1;
        return pbVar10;
      }
      if ((*puVar1 & 1) == 0) {
        lVar7 = FUN_00264e54(puVar1);
      }
      else {
        lVar7 = (*puVar1 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_00515960(auVar11._8_8_ & 0xffffffff,lVar7,pbVar10,param_3);
    }
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}



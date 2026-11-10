/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e19d4; name: FUN_004e19d4
 */


byte * FUN_004e19d4(long param_1,byte *param_2,undefined8 *param_3)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  
  puVar4 = PTR_DAT_047cba80;
  uVar11 = 0;
  plVar1 = (long *)(param_1 + 0x18);
  if (param_2 < (byte *)*param_3) goto LAB_004e1a48;
LAB_004e1b6c:
  do {
    if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
LAB_004e1bdc:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar11;
      return param_2;
    }
    auVar12 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar12._0_8_;
    if ((auVar12._8_8_ & 1) != 0) goto LAB_004e1bdc;
LAB_004e1a48:
    do {
      while( true ) {
        bVar3 = *param_2;
        auVar12[8] = bVar3;
        auVar12._0_8_ = param_2 + 1;
        auVar12._9_7_ = 0;
        if ((char)bVar3 < '\0') {
          bVar2 = param_2[1];
          if ((char)bVar2 < '\0') {
            auVar12 = FUN_0052e560(param_2);
            param_2 = (byte *)0x0;
            if (auVar12._0_8_ == 0) goto LAB_004e1bdc;
          }
          else {
            auVar12._8_4_ = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
            auVar12._0_8_ = param_2 + 2;
            auVar12._12_4_ = 0;
          }
        }
        param_2 = auVar12._0_8_;
        uVar9 = (uint)(auVar12._8_8_ >> 3) & 0x1fffffff;
        uVar7 = auVar12._8_4_;
        if (uVar9 == 2) break;
        if ((uVar9 == 1) && ((uVar7 & 0xff) == 10)) {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          puVar8 = (undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
          if ((*(ulong *)(param_1 + 8) & 1) == 0) {
            puVar5 = (undefined *)*plVar1;
          }
          else {
            puVar8 = (undefined8 *)*puVar8;
            puVar5 = (undefined *)*plVar1;
          }
          if (puVar5 == puVar4) {
            FUN_001fcdc8(plVar1,puVar8,puVar4);
            puVar5 = (undefined *)*plVar1;
          }
          param_2 = (byte *)FUN_0052e7f0(puVar5,param_2,param_3);
        }
        else {
LAB_004e1afc:
          if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
            *(uint *)(param_3 + 10) = uVar7 - 1;
            goto LAB_004e1bdc;
          }
          uVar10 = *(ulong *)(param_1 + 8);
          if ((uVar10 & 1) == 0) {
            lVar6 = FUN_00264e54((ulong *)(param_1 + 8));
          }
          else {
            lVar6 = (uVar10 & 0xfffffffffffffffe) + 8;
          }
          param_2 = (byte *)FUN_00515960(auVar12._8_8_ & 0xffffffff,lVar6,param_2,param_3);
        }
joined_r0x004e1b34:
        if (param_2 == (byte *)0x0) {
          param_2 = (byte *)0x0;
          goto LAB_004e1bdc;
        }
        if ((byte *)*param_3 <= param_2) goto LAB_004e1b6c;
      }
      if ((uVar7 & 0xff) != 0x10) goto LAB_004e1afc;
      bVar3 = *param_2;
      uVar7 = (uint)bVar3;
      uVar11 = 2;
      if ((char)bVar3 < '\0') {
        uVar7 = ((uint)bVar3 + (uint)param_2[1] * 0x80) - 0x80;
        if ((char)param_2[1] < '\0') {
          auVar12 = FUN_0052e420(param_2);
          param_2 = auVar12._0_8_;
          *(bool *)(param_1 + 0x20) = auVar12._8_8_ != 0;
          goto joined_r0x004e1b34;
        }
        lVar6 = 2;
      }
      else {
        lVar6 = 1;
      }
      param_2 = param_2 + lVar6;
      *(bool *)(param_1 + 0x20) = uVar7 != 0;
    } while (param_2 < (byte *)*param_3);
  } while( true );
}



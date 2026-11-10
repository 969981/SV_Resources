/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d56460; name: FUN_00d56460
 */


undefined8 FUN_00d56460(undefined8 param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  if (param_2 == 0) {
    uVar5 = 1;
    puVar12 = *(undefined8 **)*param_3;
    uVar9 = *puVar12;
    uVar3 = puVar12[1];
    *(undefined1 *)(param_4 + 2) = *(undefined1 *)(puVar12 + 2);
    *param_4 = uVar9;
    param_4[1] = uVar3;
switchD_00d564b4_caseD_1:
    return uVar5;
  }
  uVar5 = 0;
  switch(param_2) {
  case 1:
    goto switchD_00d564b4_caseD_1;
  default:
    auVar14 = FUN_024a6cf0(0);
    puVar12 = auVar14._8_8_;
    puVar6 = auVar14._0_8_;
    uStack_38 = FUN_00d564bc;
    puVar11 = puVar6 + 2;
    uVar1 = *puVar6 ^ (int)*puVar6 >> 0x1f;
    if (uVar1 == 0) {
      uStack_68 = puVar12[3];
      uStack_60 = puVar12[4];
      uStack_58 = puVar12[5];
      uStack_50 = puVar12[6];
      uStack_80 = *puVar12;
      uStack_78 = puVar12[1];
      uStack_70 = puVar12[2];
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      uVar1 = *puVar6;
      if (uVar1 == 1) {
        puStack_48 = &uStack_80;
        puStack_40 = (undefined1 *)((long)register0x00000008 + -0x10);
        FUN_00d5a180(1,&puStack_48,puVar11);
      }
      else {
        puStack_40 = (undefined1 *)((long)register0x00000008 + -0x10);
        FUN_00d56620(uVar1,uVar1 ^ (int)uVar1 >> 0x1f,&puStack_48);
        *(undefined8 *)(puVar6 + 0xc) = uStack_58;
        *(undefined8 *)(puVar6 + 0xe) = uStack_50;
        *(undefined8 *)(puVar6 + 8) = uStack_68;
        *(undefined8 *)(puVar6 + 10) = uStack_60;
        *(undefined8 *)(puVar6 + 2) = uStack_80;
        *(undefined8 *)(puVar6 + 4) = uStack_78;
        *(undefined8 *)(puVar6 + 6) = uStack_70;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        *puVar6 = 1;
      }
      uVar7 = FUN_00d56620(1,1,&puStack_48,&uStack_80);
    }
    else {
      switch(uVar1) {
      case 1:
        puStack_40 = (undefined1 *)((long)register0x00000008 + -0x10);
        uVar7 = FUN_00d5a218(puVar11);
        uVar9 = puVar12[3];
        uVar3 = puVar12[4];
        uVar5 = puVar12[6];
        *(undefined8 *)(puVar6 + 0xc) = puVar12[5];
        *(undefined8 *)(puVar6 + 0xe) = uVar5;
        *(undefined8 *)(puVar6 + 8) = uVar9;
        *(undefined8 *)(puVar6 + 10) = uVar3;
        *(undefined8 *)(puVar6 + 2) = *puVar12;
        *(undefined8 *)(puVar6 + 4) = puVar12[1];
        *(undefined8 *)(puVar6 + 6) = puVar12[2];
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        break;
      default:
        puStack_40 = (undefined1 *)((long)register0x00000008 + -0x10);
        auVar14 = FUN_024a6cf0();
        switch(auVar14._8_8_ & 0xffffffff) {
        case 0:
          goto switchD_00d56650_caseD_0;
        case 1:
          lVar13 = *(long *)puVar11;
          if (lVar13 != 0) {
            lVar2 = *(long *)(puVar11 + 4);
            plVar4 = *(long **)(puVar11 + 6);
            *(long *)(puVar11 + 2) = lVar13;
            uVar8 = (**(code **)(*plVar4 + 0xf8))(plVar4);
            if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00d566b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (**(code **)(*plVar4 + 0x18))(plVar4,lVar13,lVar2 - lVar13,8);
              return uVar9;
            }
            uVar9 = FUN_00c48fe8(plVar4,lVar13,lVar2 - lVar13,8);
            return uVar9;
          }
switchD_00d56650_caseD_0:
          return auVar14._0_8_;
        default:
                    /* WARNING: Subroutine does not return */
          FUN_024a7530();
        }
      }
    }
    return uVar7;
  }
}



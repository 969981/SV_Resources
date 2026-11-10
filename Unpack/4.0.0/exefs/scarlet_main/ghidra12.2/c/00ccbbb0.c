/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ccbbb0; name: FUN_00ccbbb0
 */


uint * FUN_00ccbbb0(ulong param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar6 = param_2 + 2;
  uVar2 = *param_2 ^ (int)*param_2 >> 0x1f;
  if (uVar2 == 1) {
    uVar9 = (*(long *)(param_2 + 4) - *(long *)(param_2 + 2) >> 3) * -0x5555555555555555;
    uVar4 = 0;
    if (uVar9 != 0) {
      uVar4 = param_1 / uVar9;
    }
    puVar6 = (uint *)(*(long *)(param_2 + 2) + (param_1 - uVar4 * uVar9) * 0x18);
switchD_00ccbc1c_caseD_0:
    return puVar6;
  }
  switch(uVar2) {
  case 0:
    goto switchD_00ccbc1c_caseD_0;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    FUN_0270c1d0(puVar6);
  default:
    auVar10 = FUN_0270c1f0();
    lVar7 = auVar10._0_8_;
    uStack_38 = FUN_00ccbc30;
    puStack_40 = (undefined1 *)((long)register0x00000008 + -0x10);
    FUN_00ccbd54(&lStack_60,*(undefined8 *)(lVar7 + 8));
    lVar5 = lStack_60;
    lStack_60 = 0;
    puVar1 = (undefined8 *)(lVar7 + 0x98);
    lVar8 = *(long *)(lVar7 + 0x90);
    *(long *)(lVar7 + 0x90) = lVar5;
    if (lVar8 == 0) {
      *(undefined8 *)(lVar7 + 0xa0) = uStack_50;
      *(undefined8 *)(lVar7 + 0xa8) = uStack_48;
      *puVar1 = uStack_58;
      lStack_60 = 0;
    }
    else {
      FUN_0270c1fc(puVar1);
      lVar5 = lStack_60;
      *(undefined8 *)(lVar7 + 0xa0) = uStack_50;
      *(undefined8 *)(lVar7 + 0xa8) = uStack_48;
      *puVar1 = uStack_58;
      lStack_60 = 0;
      if (lVar5 != 0) {
        FUN_0270c1fc(&uStack_58);
      }
    }
    FUN_00ccbd54(&lStack_60,*(undefined8 *)(lVar7 + 8));
    lVar5 = lStack_60;
    lStack_60 = 0;
    puVar1 = (undefined8 *)(lVar7 + 0xb8);
    lVar8 = *(long *)(lVar7 + 0xb0);
    *(long *)(lVar7 + 0xb0) = lVar5;
    if (lVar8 == 0) {
      *(undefined8 *)(lVar7 + 0xc0) = uStack_50;
      *(undefined8 *)(lVar7 + 200) = uStack_48;
      *puVar1 = uStack_58;
      lStack_60 = 0;
    }
    else {
      FUN_0270c1fc(puVar1);
      lVar5 = lStack_60;
      *(undefined8 *)(lVar7 + 0xc0) = uStack_50;
      *(undefined8 *)(lVar7 + 200) = uStack_48;
      *puVar1 = uStack_58;
      lStack_60 = 0;
      if (lVar5 != 0) {
        FUN_0270c1fc(&uStack_58);
      }
    }
    uVar3 = auVar10._8_8_[1];
    *(undefined8 *)(lVar7 + 0x10) = *auVar10._8_8_;
    *(undefined8 *)(lVar7 + 0x18) = uVar3;
    FUN_00cd003c(lVar7);
    nn::os::GetSystemTick();
    puVar6 = (uint *)nn::os::ConvertToTimeSpan();
    *(uint **)(lVar7 + 0x150) = puVar6;
    return puVar6;
  }
}



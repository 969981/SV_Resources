/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c50264; name: FUN_00c50264
 */


void FUN_00c50264(long *param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar2 = *(uint *)(param_1 + 6) ^ (int)*(uint *)(param_1 + 6) >> 0x1f;
  if (uVar2 == 1) {
    uVar8 = (param_1[8] - param_1[7] >> 3) * -0x5555555555555555;
    uVar1 = *(long *)(param_1[0xe] + 0x110) + (long)param_2;
    uVar4 = 0;
    if (uVar8 != 0) {
      uVar4 = uVar1 / uVar8;
    }
    plVar7 = (long *)(param_1[7] + (uVar1 - uVar4 * uVar8) * 0x18 + 0x10);
    cVar3 = *(char *)plVar7;
  }
  else {
    switch(uVar2) {
    case 0:
      plVar7 = param_1 + 9;
      cVar3 = (char)*plVar7;
      break;
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
      FUN_0270c180();
    default:
      auVar9 = FUN_0270c190();
      uVar6 = auVar9._8_8_;
      lVar5 = auVar9._0_8_;
      if (0 < *(int *)(lVar5 + 0x428)) {
        if (*(long *)(lVar5 + 0x2e8) != 0) {
          FUN_00c59ac8(*(long *)(lVar5 + 0x2e8),uVar6);
        }
        if (*(long *)(lVar5 + 0x308) != 0) {
          FUN_00c59ac8(*(long *)(lVar5 + 0x308),uVar6);
        }
        if (*(long *)(lVar5 + 0x328) != 0) {
          FUN_00c59ac8(*(long *)(lVar5 + 0x328),uVar6);
        }
        if (*(long *)(lVar5 + 0x348) != 0) {
          FUN_00c59ac8(*(long *)(lVar5 + 0x348),uVar6);
        }
        if (*(long *)(lVar5 + 0x368) != 0) {
          FUN_00c59ac8(*(long *)(lVar5 + 0x368),uVar6);
        }
        if (*(long *)(lVar5 + 0x388) != 0) {
          FUN_00c59ac8(*(long *)(lVar5 + 0x388),uVar6);
        }
        if (*(long *)(lVar5 + 0x3a8) != 0) {
          FUN_00c59ac8(*(long *)(lVar5 + 0x3a8),uVar6);
        }
        if (*(long *)(lVar5 + 0x3c8) != 0) {
          FUN_00c59ac8(*(long *)(lVar5 + 0x3c8),uVar6);
        }
        if (*(long *)(lVar5 + 1000) != 0) {
          FUN_00c59ac8(*(long *)(lVar5 + 1000),uVar6);
        }
        if (*(long *)(lVar5 + 0x408) != 0) {
          FUN_00c59ac8(*(long *)(lVar5 + 0x408),uVar6);
          return;
        }
      }
      return;
    }
  }
  if (cVar3 == '\0') {
    return;
  }
  *(char *)plVar7 = '\0';
                    /* WARNING: Could not recover jumptable at 0x00c50300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}



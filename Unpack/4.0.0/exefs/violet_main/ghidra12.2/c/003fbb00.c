/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003fbb00; name: FUN_003fbb00
 */


undefined8 FUN_003fbb00(undefined8 param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  
  if ((((int)param_2[2] != 0) && (iVar5 = FUN_003e8f00(param_1,&DAT_03c00d64,1), iVar5 != 1)) ||
     ((iVar5 = FUN_003eb480(param_2), iVar5 != 0 &&
      (iVar5 = FUN_003e8f00(param_1,&DAT_03c2bfae,1), iVar5 != 1)))) {
    return 0;
  }
  if (0 < (int)*(uint *)(param_2 + 1)) {
    bVar4 = false;
    uVar6 = (ulong)*(uint *)(param_2 + 1);
    do {
      uVar2 = *(uint *)(*param_2 + uVar6 * 4 + -4);
      if (uVar2 >> 0x1c == 0 && !bVar4) {
        uVar3 = uVar2 >> 0x18 & 0xf;
        if (uVar3 == 0) goto LAB_003fbcb0;
LAB_003fbbdc:
        iVar5 = FUN_003e8f00(param_1,uVar3 + 0x3ce04b0,1);
        if (iVar5 != 1) {
          return 0;
        }
        uVar2 = *(uint *)(*param_2 + uVar6 * 4 + -4);
        uVar3 = uVar2 >> 0x14 & 0xf;
        if ((uVar3 | 1) == 0) goto LAB_003fbc10;
LAB_003fbcbc:
        iVar5 = FUN_003e8f00(param_1,uVar3 + 0x3ce04b0,1);
        if (iVar5 != 1) {
          return 0;
        }
        uVar2 = *(uint *)(*param_2 + uVar6 * 4 + -4);
        uVar3 = uVar2 >> 0x10 & 0xf;
        if ((uVar3 | 1) == 0) goto LAB_003fbcf0;
LAB_003fbc1c:
        iVar5 = FUN_003e8f00(param_1,uVar3 + 0x3ce04b0,1);
        if (iVar5 != 1) {
          return 0;
        }
        uVar2 = *(uint *)(*param_2 + uVar6 * 4 + -4);
        uVar3 = uVar2 >> 0xc & 0xf;
        if ((uVar3 | 1) == 0) goto LAB_003fbc50;
LAB_003fbcfc:
        iVar5 = FUN_003e8f00(param_1,uVar3 + 0x3ce04b0,1);
        if (iVar5 != 1) {
          return 0;
        }
        uVar2 = *(uint *)(*param_2 + uVar6 * 4 + -4);
        uVar3 = uVar2 >> 8 & 0xf;
        if ((uVar3 | 1) == 0) goto LAB_003fbd30;
LAB_003fbc5c:
        iVar5 = FUN_003e8f00(param_1,uVar3 + 0x3ce04b0,1);
        if (iVar5 != 1) {
          return 0;
        }
        uVar2 = *(uint *)(*param_2 + uVar6 * 4 + -4);
        uVar3 = uVar2 >> 4 & 0xf;
        if ((uVar3 | 1) == 0) goto LAB_003fbc90;
LAB_003fbd3c:
        iVar5 = FUN_003e8f00(param_1,uVar3 + 0x3ce04b0,1);
        if (iVar5 != 1) {
          return 0;
        }
        uVar3 = *(uint *)(*param_2 + uVar6 * 4 + -4) & 0xf;
        if ((uVar3 | 1) != 0) goto LAB_003fbd70;
LAB_003fbb7c:
        bVar4 = false;
      }
      else {
        iVar5 = FUN_003e8f00(param_1,(uVar2 >> 0x1c) + 0x3ce04b0,1);
        if (iVar5 != 1) {
          return 0;
        }
        uVar2 = *(uint *)(*param_2 + uVar6 * 4 + -4);
        uVar3 = uVar2 >> 0x18 & 0xf;
        if ((uVar3 | 1) != 0) goto LAB_003fbbdc;
LAB_003fbcb0:
        uVar3 = uVar2 >> 0x14 & 0xf;
        if (uVar3 != 0) goto LAB_003fbcbc;
LAB_003fbc10:
        uVar3 = uVar2 >> 0x10 & 0xf;
        if (uVar3 != 0) goto LAB_003fbc1c;
LAB_003fbcf0:
        uVar3 = uVar2 >> 0xc & 0xf;
        if (uVar3 != 0) goto LAB_003fbcfc;
LAB_003fbc50:
        uVar3 = uVar2 >> 8 & 0xf;
        if (uVar3 != 0) goto LAB_003fbc5c;
LAB_003fbd30:
        uVar3 = uVar2 >> 4 & 0xf;
        if (uVar3 != 0) goto LAB_003fbd3c;
LAB_003fbc90:
        uVar3 = uVar2 & 0xf;
        if ((uVar2 & 0xf) == 0) goto LAB_003fbb7c;
LAB_003fbd70:
        bVar4 = true;
        iVar5 = FUN_003e8f00(param_1,uVar3 + 0x3ce04b0,1);
        if (iVar5 != 1) {
          return 0;
        }
      }
      bVar1 = 1 < (long)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return 1;
}



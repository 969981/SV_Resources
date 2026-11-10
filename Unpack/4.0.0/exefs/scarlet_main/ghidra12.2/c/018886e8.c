/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018886e8; name: FUN_018886e8
 */


void FUN_018886e8(long param_1)

{
  short sVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long *plVar8;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x2ad) == '\0') {
      return;
    }
    uVar5 = FUN_01888dc8();
    if ((uVar5 & 1) == 0) {
      return;
    }
    *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x40) + '\x01';
    return;
  }
  if (*(char *)(param_1 + 0x40) != '\x01') {
    return;
  }
  plVar8 = (long *)(param_1 + 0x30);
  lVar3 = FUN_0119579c(*plVar8);
  if (lVar3 == 0) {
LAB_01888780:
    uVar2 = 0;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x70);
    if ((*(byte *)(*(long *)(lVar4 + 0x10) + 4) >> 2 & 1) == 0) {
      sVar1 = FUN_00cf44f4();
      if (sVar1 == 0) goto LAB_01888780;
      lVar4 = *(long *)(lVar3 + 0x70);
    }
    uVar2 = FUN_00e974e0(lVar4);
  }
  lVar4 = *plVar8;
  switch(*(undefined4 *)(lVar4 + 0x2c4)) {
  case 0:
    uVar5 = FUN_01889030();
    lVar4 = *plVar8;
    if ((uVar5 & 1) != 0) {
      uVar6 = 4;
      goto LAB_018889a4;
    }
    FUN_01888a50(lVar4,0);
    lVar3 = *plVar8;
    lVar4 = *(long *)(lVar3 + 0x1b8);
    if (lVar4 == 0) {
      return;
    }
    uVar7 = 6;
    break;
  case 1:
    FUN_01888a50(lVar4,0);
    FUN_018895f0(*plVar8);
    lVar3 = *plVar8;
    lVar4 = *(long *)(lVar3 + 0x1b8);
    if (lVar4 == 0) {
      return;
    }
    uVar7 = 0x19;
    break;
  case 2:
    if (lVar3 == 0) {
      return;
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
      sVar1 = FUN_00cf44f4(*(long *)(lVar3 + 0x70));
      if (sVar1 == 0) {
        return;
      }
      lVar4 = *plVar8;
    }
    FUN_01888a50(lVar4,0);
    FUN_01df20a4(param_1,lVar3);
    return;
  case 3:
    uVar5 = FUN_0188920c();
    lVar4 = *plVar8;
    if ((uVar5 & 1) == 0) {
      uVar6 = 1;
      goto LAB_018889a4;
    }
    uVar5 = FUN_01889030(lVar4);
    lVar4 = *plVar8;
    if ((uVar5 & 1) != 0) {
      uVar6 = 0xe;
      goto LAB_018889a4;
    }
    uVar5 = FUN_01df2144(lVar4);
    lVar4 = *plVar8;
    if ((uVar5 & 1) != 0) {
      uVar6 = 7;
      goto LAB_018889a4;
    }
    FUN_01ddcce4(lVar4);
    lVar4 = *plVar8;
  default:
    FUN_01888a50(lVar4,0);
    lVar3 = *plVar8;
    lVar4 = *(long *)(lVar3 + 0x1b8);
    if (lVar4 == 0) {
      return;
    }
    uVar7 = 2;
    break;
  case 4:
    FUN_01888a50(lVar4,0);
    uVar5 = FUN_01889030(*plVar8);
    lVar4 = *plVar8;
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_01df2144(lVar4);
      lVar4 = *plVar8;
      if ((uVar5 & 1) == 0) {
        lVar3 = *(long *)(lVar4 + 0x1b8);
        if (lVar3 == 0) {
          return;
        }
        uVar7 = 0x1d;
        goto LAB_01888940;
      }
      uVar6 = 8;
    }
    else {
      uVar6 = 0xf;
    }
LAB_018889a4:
    FUN_01dcddfc(lVar4,uVar6,0,1,1,0);
    return;
  case 5:
    uVar5 = FUN_0188916c();
    lVar4 = *plVar8;
    if ((uVar5 & 1) != 0) {
      lVar3 = *(long *)(lVar4 + 0x1b8);
      if (lVar3 == 0) {
        return;
      }
      uVar7 = 10;
      goto LAB_01888940;
    }
    FUN_01dcdd98();
    FUN_01ddc9d8(*(undefined8 *)(*plVar8 + 0x1a0));
    goto LAB_01888a08;
  case 6:
    uVar5 = FUN_01889974(lVar4,uVar2);
    lVar4 = *plVar8;
    if ((uVar5 & 1) != 0) {
      lVar3 = *(long *)(lVar4 + 0x1b8);
      if (lVar3 == 0) {
        return;
      }
      uVar7 = 7;
      goto LAB_01888940;
    }
    FUN_01dcddfc(lVar4,6,0,1,1,0);
LAB_01888a08:
    lVar3 = *plVar8;
    lVar4 = *(long *)(lVar3 + 0x1b8);
    if (lVar4 == 0) {
      return;
    }
    uVar7 = 0xb;
    break;
  case 8:
    FUN_01888a50(lVar4,0);
    uVar5 = FUN_01889368(*plVar8);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar3 = *plVar8;
    lVar4 = *(long *)(lVar3 + 0x1b8);
    if (lVar4 == 0) {
      return;
    }
    uVar7 = 0x12;
    break;
  case 9:
    lVar3 = *(long *)(lVar4 + 0x1b8);
    if (lVar3 == 0) {
      return;
    }
    uVar7 = 0x1a;
    goto LAB_01888940;
  case 10:
    lVar3 = *(long *)(lVar4 + 0x1b8);
    if (lVar3 == 0) {
      return;
    }
    uVar7 = 0xc;
LAB_01888940:
    *(undefined4 *)(lVar4 + 0x170) = uVar7;
    *(undefined4 *)(lVar3 + 0x30) = uVar7;
    return;
  case 0xb:
    FUN_01888a50(lVar4,0);
    lVar3 = *plVar8;
    lVar4 = *(long *)(lVar3 + 0x1b8);
    if (lVar4 == 0) {
      return;
    }
    uVar7 = 0x14;
    break;
  case 0xe:
    FUN_01888a50(lVar4,0);
    lVar3 = *plVar8;
    lVar4 = *(long *)(lVar3 + 0x1b8);
    if (lVar4 == 0) {
      return;
    }
    uVar7 = 0xc;
    break;
  case 0xf:
    FUN_01888a50(lVar4,0);
    lVar3 = *plVar8;
    lVar4 = *(long *)(lVar3 + 0x1b8);
    if (lVar4 == 0) {
      return;
    }
    uVar7 = 0x16;
  }
  *(undefined4 *)(lVar3 + 0x170) = uVar7;
  *(undefined4 *)(lVar4 + 0x30) = uVar7;
  return;
}



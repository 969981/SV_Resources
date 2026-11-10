/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b65c0; name: FUN_003b65c0
 */


undefined8 FUN_003b65c0(uint *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 6);
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_003b6600;
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x550);
  }
  else {
    lVar4 = *(long *)(lVar2 + 0x140);
  }
  if ((lVar4 != 0) && ((*param_1 >> 6 & 1) != 0)) {
    lVar3 = *(long *)(param_1 + 0xc);
    if ((lVar3 != 0) && (*(long *)(lVar4 + 0x28) == 0 && (*param_1 & 0x20) != 0)) {
      if (lVar2 == 0) {
        iVar1 = 1;
        lVar2 = *(long *)(param_1 + 8);
      }
      else {
        iVar1 = FUN_003b7dc0(lVar2,lVar3,1);
        lVar2 = *(long *)(param_1 + 8);
      }
      if (lVar2 != 0) {
        iVar1 = FUN_003b7bb0(lVar2,lVar3,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0xe);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 0x50) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = FUN_003b7dc0(*(long *)(param_1 + 6),lVar2,1);
      }
      if (*(long *)(param_1 + 8) != 0) {
        iVar1 = FUN_003b7bb0(*(long *)(param_1 + 8),lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0x10);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 0x78) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = FUN_003b7dc0(*(long *)(param_1 + 6),lVar2,1);
      }
      if (*(long *)(param_1 + 8) != 0) {
        iVar1 = FUN_003b7bb0(*(long *)(param_1 + 8),lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0x12);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 0xa0) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = FUN_003b7dc0(*(long *)(param_1 + 6),lVar2,1);
      }
      if (*(long *)(param_1 + 8) != 0) {
        iVar1 = FUN_003b7bb0(*(long *)(param_1 + 8),lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0x14);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 200) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = FUN_003b7dc0(*(long *)(param_1 + 6),lVar2,1);
      }
      if (*(long *)(param_1 + 8) != 0) {
        iVar1 = FUN_003b7bb0(*(long *)(param_1 + 8),lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0x16);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 0xf0) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = FUN_003b7dc0(*(long *)(param_1 + 6),lVar2,1);
      }
      if (*(long *)(param_1 + 8) != 0) {
        iVar1 = FUN_003b7bb0(*(long *)(param_1 + 8),lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0x18);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 0x118) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = FUN_003b7dc0(*(long *)(param_1 + 6),lVar2,1);
      }
      if (*(long *)(param_1 + 8) != 0) {
        iVar1 = FUN_003b7bb0(*(long *)(param_1 + 8),lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0x1a);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 0x140) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = FUN_003b7dc0(*(long *)(param_1 + 6),lVar2,1);
      }
      if (*(long *)(param_1 + 8) != 0) {
        iVar1 = FUN_003b7bb0(*(long *)(param_1 + 8),lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0x1c);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 0x168) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = FUN_003b7dc0(*(long *)(param_1 + 6),lVar2,1);
      }
      if (*(long *)(param_1 + 8) != 0) {
        iVar1 = FUN_003b7bb0(*(long *)(param_1 + 8),lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
  }
LAB_003b6600:
  if (*(long *)(param_1 + 0x2a) != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      if (*(long *)(param_1 + 6) == 0) {
        FUN_0047e3b0(*(long *)(param_1 + 0x2a),PTR_FUN_047cca78);
      }
      else {
        FUN_003aecc0();
      }
    }
    else {
      FUN_003aec90();
    }
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  return 1;
}



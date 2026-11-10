/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035316d0; name: FUN_035316d0
 */


ulong FUN_035316d0(long param_1,long param_2,int param_3,undefined4 *param_4,undefined8 param_5,
                  ulong param_6,long *param_7)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint local_14;
  
  lVar4 = *(long *)(param_1 + 0x108);
  uVar3 = *(uint *)(param_1 + 0x100);
  if (lVar4 == 0) {
    lVar5 = 0x7fffffffffffffff;
  }
  else {
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar3 == 1) {
        uVar7 = 0;
        lVar5 = 0;
      }
      else {
        uVar7 = 0;
        lVar5 = 0;
        do {
          plVar1 = (long *)(param_1 + uVar7 * 8);
          uVar7 = uVar7 + 2;
          lVar5 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                  *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar5;
        } while (((ulong)uVar3 & 0xfffffffe) != uVar7);
      }
      if ((uVar3 & 1) != 0) {
        lVar5 = *(long *)(*(long *)(*(long *)(param_1 + uVar7 * 8) + 8) + 0x68) + lVar5;
      }
    }
    uVar7 = *(long *)(lVar4 + 8) - (ulong)*(uint *)(*(long *)(param_1 + 0x110) + 0x88);
    lVar5 = (uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU)) + lVar5;
  }
  lVar2 = lVar5;
  if (lVar5 <= param_2) {
    lVar2 = param_2;
  }
  if (uVar3 == 0) {
    lVar8 = 0;
  }
  else {
    if (uVar3 == 1) {
      uVar7 = 0;
      lVar8 = 0;
    }
    else {
      uVar7 = 0;
      lVar8 = 0;
      do {
        plVar1 = (long *)(param_1 + uVar7 * 8);
        uVar7 = uVar7 + 2;
        lVar8 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar8;
      } while (((ulong)uVar3 & 0xfffffffe) != uVar7);
    }
    if ((uVar3 & 1) != 0) {
      lVar8 = *(long *)(*(long *)(*(long *)(param_1 + uVar7 * 8) + 8) + 0x68) + lVar8;
    }
  }
  uVar7 = ((lVar2 - lVar8) - *(long *)(lVar4 + 8)) +
          (ulong)*(uint *)(*(long *)(param_1 + 0x110) + 0x88);
  if ((*(long *)(lVar4 + 0x18) == 0) || (*(char *)(param_1 + 0x129) != '\0')) {
    *param_4 = 0;
    if ((param_3 != 0) && ((param_6 & 1) == 0)) {
      return 2;
    }
  }
  else {
    uVar7 = FUN_03524478(*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x78));
    if ((int)uVar7 != 1) {
      return uVar7;
    }
    uVar7 = (ulong)local_14;
  }
  uVar3 = *(uint *)(param_1 + 0x100);
  if (uVar3 == 0) {
    lVar4 = 0;
  }
  else {
    if (uVar3 == 1) {
      uVar6 = 0;
      lVar4 = 0;
    }
    else {
      uVar6 = 0;
      lVar4 = 0;
      do {
        plVar1 = (long *)(param_1 + uVar6 * 8);
        uVar6 = uVar6 + 2;
        lVar4 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar4;
      } while (((ulong)uVar3 & 0xfffffffe) != uVar6);
    }
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(*(long *)(param_1 + uVar6 * 8) + 8) + 0x68) + lVar4;
    }
  }
  lVar4 = (lVar4 + uVar7 + *(long *)(*(long *)(param_1 + 0x108) + 8)) -
          (ulong)*(uint *)(*(long *)(param_1 + 0x110) + 0x88);
  *param_7 = lVar4;
  if (*(char *)(param_1 + 0x128) == '\0') {
    uVar3 = 3;
    if (lVar4 <= *(long *)(param_1 + 0x120) + lVar5) {
      uVar3 = 1;
    }
    uVar7 = (ulong)uVar3;
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}



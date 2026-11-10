/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a29e0; name: FUN_003a29e0
 */


undefined8 FUN_003a29e0(long *param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = FUN_003a1e80(param_1,param_4);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (param_3 == 0) goto LAB_003a2a9c;
  if (param_1[5] == 0) {
    return 0;
  }
  if ((ulong)(param_1[4] - param_1[3]) < param_3) {
    return 0;
  }
  uVar6 = param_1[1];
  if (uVar6 == 0) {
    puVar3 = (ulong *)*param_1;
    uVar6 = *puVar3;
    if (uVar6 - param_1[3] < param_3) {
      uVar7 = param_3;
      if (param_3 <= uVar6) {
        uVar7 = uVar6;
      }
      uVar6 = uVar7 * 2;
      if (uVar6 < 0x101) {
        uVar6 = 0x100;
      }
      if ((long)uVar7 < 0) {
        uVar6 = 0xffffffffffffffff;
      }
      lVar4 = FUN_003f31c0(puVar3,uVar6);
      if (lVar4 == 0) {
        return 0;
      }
      uVar6 = param_1[1];
      if (uVar6 != 0) goto LAB_003a2a78;
      puVar3 = (ulong *)*param_1;
    }
    uVar6 = puVar3[1];
  }
LAB_003a2a78:
  lVar4 = param_1[2];
  param_1[3] = param_1[3] + param_3;
  param_1[2] = lVar4 + param_3;
  memcpy((void *)(uVar6 + lVar4),param_2,param_3);
LAB_003a2a9c:
  plVar5 = (long *)param_1[5];
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    return 0;
  }
  uVar6 = param_1[3] - plVar5[3];
  if (uVar6 == 0) {
    if ((*(uint *)(plVar5 + 4) & 1) != 0) {
      return 0;
    }
    if ((*(uint *)(plVar5 + 4) >> 1 & 1) != 0) {
      lVar11 = plVar5[2];
      lVar10 = param_1[2] - lVar11;
      if (lVar10 == plVar5[1]) {
        param_1[2] = lVar10;
        param_1[3] = param_1[3] - lVar11;
      }
      plVar5[1] = 0;
      plVar5[2] = 0;
    }
  }
  uVar7 = plVar5[2];
  if (uVar7 != 0) {
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      lVar4 = *(long *)(*param_1 + 8);
    }
    uVar8 = uVar7 - 1;
    uVar9 = uVar7 & 3;
    if (uVar9 == 0) {
      lVar4 = lVar4 + plVar5[1] + uVar8;
    }
    else {
      lVar4 = plVar5[1] + lVar4;
      do {
        *(char *)(lVar4 + -1 + uVar7) = (char)uVar6;
        uVar6 = uVar6 >> 8;
        uVar7 = uVar7 - 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      lVar4 = lVar4 + uVar7 + -1;
    }
    if (2 < uVar8) {
      do {
        uVar1 = ((uint)uVar6 & 0xff00ff00) >> 8 | ((uint)uVar6 & 0xff00ff) << 8;
        uVar6 = uVar6 >> 0x20;
        *(uint *)(lVar4 + -3) = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar7 = uVar7 - 4;
        lVar4 = lVar4 + -4;
      } while (uVar7 != 0);
    }
    if (uVar6 != 0) {
      return 0;
    }
    lVar4 = *plVar5;
  }
  param_1[5] = lVar4;
  FUN_00452f80(plVar5,"external/openssl/ssl/packet.c",0xdb);
  return 1;
}



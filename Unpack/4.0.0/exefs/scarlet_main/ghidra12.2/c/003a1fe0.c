/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a1fe0; name: FUN_003a1fe0
 */


undefined8 FUN_003a1fe0(long *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  plVar2 = (long *)param_1[5];
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  lVar6 = *plVar2;
  if (lVar6 == 0) {
    return 0;
  }
  uVar3 = param_1[3] - plVar2[3];
  if (uVar3 == 0) {
    if ((*(uint *)(plVar2 + 4) & 1) != 0) {
      return 0;
    }
    if ((*(uint *)(plVar2 + 4) >> 1 & 1) != 0) {
      lVar9 = plVar2[2];
      lVar8 = param_1[2] - lVar9;
      if (lVar8 == plVar2[1]) {
        param_1[2] = lVar8;
        param_1[3] = param_1[3] - lVar9;
      }
      plVar2[1] = 0;
      plVar2[2] = 0;
    }
  }
  uVar4 = plVar2[2];
  if (uVar4 == 0) goto LAB_003a2074;
  lVar6 = param_1[1];
  uVar5 = uVar4;
  if (lVar6 == 0) {
    lVar6 = *(long *)(*param_1 + 8);
    lVar8 = plVar2[1];
    if ((uVar4 & 3) != 0) goto LAB_003a2028;
LAB_003a20f0:
    lVar6 = lVar6 + lVar8 + (uVar4 - 1);
  }
  else {
    lVar8 = plVar2[1];
    if ((uVar4 & 3) == 0) goto LAB_003a20f0;
LAB_003a2028:
    uVar7 = uVar4 & 3;
    do {
      *(char *)(lVar8 + lVar6 + -1 + uVar5) = (char)uVar3;
      uVar3 = uVar3 >> 8;
      uVar5 = uVar5 - 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    lVar6 = lVar8 + lVar6 + uVar5 + -1;
  }
  if (2 < uVar4 - 1) {
    do {
      uVar1 = ((uint)uVar3 & 0xff00ff00) >> 8 | ((uint)uVar3 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x20;
      *(uint *)(lVar6 + -3) = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar5 = uVar5 - 4;
      lVar6 = lVar6 + -4;
    } while (uVar5 != 0);
  }
  if (uVar3 != 0) {
    return 0;
  }
  lVar6 = *plVar2;
LAB_003a2074:
  param_1[5] = lVar6;
  FUN_00452f80(plVar2,"external/openssl/ssl/packet.c",0xdb);
  return 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a2510; name: FUN_003a2510
 */


undefined8 FUN_003a2510(long *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  plVar2 = (long *)param_1[5];
  if ((plVar2 == (long *)0x0) || (*plVar2 != 0)) {
    return 0;
  }
  uVar3 = param_1[3] - plVar2[3];
  if (uVar3 == 0) {
    if ((*(uint *)(plVar2 + 4) & 1) != 0) {
      return 0;
    }
    if ((*(uint *)(plVar2 + 4) >> 1 & 1) != 0) {
      lVar8 = plVar2[2];
      lVar7 = param_1[2] - lVar8;
      if (lVar7 == plVar2[1]) {
        param_1[2] = lVar7;
        param_1[3] = param_1[3] - lVar8;
      }
      plVar2[1] = 0;
      plVar2[2] = 0;
    }
  }
  uVar4 = plVar2[2];
  lVar7 = 0;
  if (uVar4 != 0) {
    lVar7 = param_1[1];
    if (lVar7 == 0) {
      lVar7 = *(long *)(*param_1 + 8);
    }
    uVar5 = uVar4 - 1;
    uVar6 = uVar4 & 3;
    if (uVar6 == 0) {
      lVar7 = lVar7 + plVar2[1] + uVar5;
    }
    else {
      lVar7 = plVar2[1] + lVar7;
      do {
        *(char *)(lVar7 + -1 + uVar4) = (char)uVar3;
        uVar3 = uVar3 >> 8;
        uVar4 = uVar4 - 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      lVar7 = lVar7 + uVar4 + -1;
    }
    if (2 < uVar5) {
      do {
        uVar1 = ((uint)uVar3 & 0xff00ff00) >> 8 | ((uint)uVar3 & 0xff00ff) << 8;
        uVar3 = uVar3 >> 0x20;
        *(uint *)(lVar7 + -3) = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar4 = uVar4 - 4;
        lVar7 = lVar7 + -4;
      } while (uVar4 != 0);
    }
    if (uVar3 != 0) {
      return 0;
    }
    lVar7 = *plVar2;
  }
  param_1[5] = lVar7;
  FUN_00452f80(plVar2,"external/openssl/ssl/packet.c",0xdb);
  FUN_00452f80(param_1[5],"external/openssl/ssl/packet.c",0x109);
  param_1[5] = 0;
  return 1;
}



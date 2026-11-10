/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a1ca0; name: FUN_003a1ca0
 */


undefined8 FUN_003a1ca0(long *param_1,ulong param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  uVar2 = FUN_003a1e80(param_1,param_4);
  if ((((int)uVar2 != 0) && (uVar2 = 0, param_2 != 0)) && (param_1[5] != 0)) {
    if ((ulong)(param_1[4] - param_1[3]) < param_2) {
      uVar2 = 0;
    }
    else {
      if (param_1[1] == 0) {
        uVar5 = *(ulong *)*param_1;
        if (uVar5 - param_1[3] < param_2) {
          uVar7 = param_2;
          if (param_2 <= uVar5) {
            uVar7 = uVar5;
          }
          uVar5 = uVar7 * 2;
          if (uVar5 < 0x101) {
            uVar5 = 0x100;
          }
          if ((long)uVar7 < 0) {
            uVar5 = 0xffffffffffffffff;
          }
          lVar3 = FUN_003f31c0((ulong *)*param_1,uVar5);
          if (lVar3 == 0) {
            return 0;
          }
        }
      }
      if (param_3 == (long *)0x0) {
        lVar3 = param_1[2];
      }
      else {
        lVar6 = param_1[1];
        if (lVar6 == 0) {
          lVar6 = *(long *)(*param_1 + 8);
        }
        lVar3 = param_1[2];
        *param_3 = lVar6 + lVar3;
      }
      lVar6 = param_1[3] + param_2;
      plVar4 = (long *)param_1[5];
      param_1[2] = lVar3 + param_2;
      param_1[3] = lVar6;
      uVar2 = 0;
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        if (lVar8 == 0) {
          return 0;
        }
        uVar5 = lVar6 - plVar4[3];
        if (uVar5 == 0) {
          if ((*(uint *)(plVar4 + 4) & 1) != 0) {
            return 0;
          }
          if ((*(uint *)(plVar4 + 4) >> 1 & 1) != 0) {
            lVar11 = plVar4[2];
            lVar3 = (lVar3 + param_2) - lVar11;
            if (lVar3 == plVar4[1]) {
              param_1[2] = lVar3;
              param_1[3] = lVar6 - lVar11;
            }
            plVar4[1] = 0;
            plVar4[2] = 0;
          }
        }
        uVar7 = plVar4[2];
        if (uVar7 != 0) {
          lVar3 = param_1[1];
          if (lVar3 == 0) {
            lVar3 = *(long *)(*param_1 + 8);
          }
          uVar9 = uVar7 - 1;
          uVar10 = uVar7 & 3;
          if (uVar10 == 0) {
            lVar3 = lVar3 + plVar4[1] + uVar9;
          }
          else {
            lVar3 = plVar4[1] + lVar3;
            do {
              *(char *)(lVar3 + -1 + uVar7) = (char)uVar5;
              uVar5 = uVar5 >> 8;
              uVar7 = uVar7 - 1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
            lVar3 = lVar3 + uVar7 + -1;
          }
          if (2 < uVar9) {
            do {
              uVar1 = ((uint)uVar5 & 0xff00ff00) >> 8 | ((uint)uVar5 & 0xff00ff) << 8;
              uVar5 = uVar5 >> 0x20;
              *(uint *)(lVar3 + -3) = uVar1 >> 0x10 | uVar1 << 0x10;
              uVar7 = uVar7 - 4;
              lVar3 = lVar3 + -4;
            } while (uVar7 != 0);
          }
          if (uVar5 != 0) {
            return 0;
          }
          lVar8 = *plVar4;
        }
        param_1[5] = lVar8;
        FUN_00452f80(plVar4,"external/openssl/ssl/packet.c",0xdb);
        return 1;
      }
    }
  }
  return uVar2;
}



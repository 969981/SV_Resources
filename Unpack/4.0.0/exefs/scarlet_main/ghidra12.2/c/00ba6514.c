/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ba6514; name: FUN_00ba6514
 */


long * FUN_00ba6514(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  long *plVar6;
  byte *__s2;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  __s2 = (byte *)*param_2;
  bVar3 = *__s2;
  if (bVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    pbVar5 = __s2;
    do {
      pbVar5 = pbVar5 + 1;
      uVar7 = uVar7 * 5 + (ulong)bVar3;
      bVar3 = *pbVar5;
    } while (bVar3 != 0);
  }
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar8 = uVar9 - 1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar9 <= uVar7) {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar7 / uVar9;
        }
        uVar8 = uVar7 - uVar8 * uVar9;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      if (uVar4 < 2) {
        do {
          if (uVar7 == plVar6[1]) {
            iVar2 = strcmp((char *)plVar6[2],(char *)__s2);
            if (iVar2 == 0) {
              return plVar6;
            }
          }
          else if ((plVar6[1] & uVar9 - 1) != uVar8) {
            return (long *)0x0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
        return (long *)0x0;
      }
      do {
        uVar4 = plVar6[1];
        if (uVar7 == uVar4) {
          iVar2 = strcmp((char *)plVar6[2],(char *)__s2);
          if (iVar2 == 0) {
            return plVar6;
          }
        }
        else {
          if (uVar9 <= uVar4) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar4 / uVar9;
            }
            uVar4 = uVar4 - uVar1 * uVar9;
          }
          if (uVar4 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



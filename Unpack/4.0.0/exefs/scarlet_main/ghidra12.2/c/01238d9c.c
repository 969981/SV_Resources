/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01238d9c; name: FUN_01238d9c
 */


void FUN_01238d9c(uint *param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  
  uVar1 = *param_1;
  if (9 < uVar1) {
    return;
  }
  uVar2 = 1 << (ulong)(uVar1 & 0x1f);
  if ((uVar2 & 0x8c) == 0) {
    if ((uVar2 & 0x240) == 0) {
      if (uVar1 != 4) {
        return;
      }
      uVar4 = (ulong)(byte)param_2[0xb];
      if (10 < uVar4) {
        return;
      }
      cVar3 = (char)param_1[1];
      if (param_2[0xb] == 0) {
        uVar4 = 0;
      }
      else {
        pcVar5 = param_2;
        uVar6 = uVar4;
        do {
          if (*pcVar5 == cVar3) {
            return;
          }
          uVar6 = uVar6 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 != 0);
      }
    }
    else {
      uVar4 = (ulong)(byte)param_2[0xb];
      if (10 < uVar4) {
        return;
      }
      if (param_2[0xb] == 0) {
        uVar4 = 0;
      }
      else {
        pcVar5 = param_2;
        uVar6 = uVar4;
        do {
          if (*pcVar5 == '\0') goto LAB_01238e8c;
          uVar6 = uVar6 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 != 0);
      }
      param_2[uVar4] = '\0';
      uVar4 = (ulong)((byte)param_2[0xb] + 1);
      param_2[0xb] = (char)((byte)param_2[0xb] + 1);
LAB_01238e8c:
      if (10 < ((uint)uVar4 & 0xff)) {
        return;
      }
      if ((uVar4 & 0xff) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 & 0xff;
        pcVar5 = param_2;
        uVar6 = uVar4;
        do {
          if (*pcVar5 == '\x01') {
            return;
          }
          uVar6 = uVar6 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 != 0);
      }
      cVar3 = '\x01';
    }
    param_2[uVar4] = cVar3;
  }
  else {
    cVar3 = FUN_0123aecc(0,param_3,(char)param_1[1],0);
    uVar4 = (ulong)(byte)param_2[0xb];
    if (10 < uVar4) {
      return;
    }
    if (param_2[0xb] == 0) {
      uVar4 = 0;
    }
    else {
      pcVar5 = param_2;
      uVar6 = uVar4;
      do {
        if (*pcVar5 == cVar3) {
          return;
        }
        uVar6 = uVar6 - 1;
        pcVar5 = pcVar5 + 1;
      } while (uVar6 != 0);
    }
    param_2[uVar4] = cVar3;
  }
  param_2[0xb] = param_2[0xb] + '\x01';
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0fad0; name: FUN_00c0fad0
 */


void FUN_00c0fad0(byte *param_1,ulong param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  
  if ((long)param_2 < 1) {
    uVar2 = 0;
  }
  else {
    uVar5 = 0;
    uVar2 = 0;
    if (param_2 != 1) {
      do {
        pbVar3 = param_1 + uVar5;
        uVar5 = uVar5 + 2;
        uVar2 = uVar2 + (byte)(&DAT_03d5eb00)[*pbVar3] + (ulong)(byte)(&DAT_03d5eb00)[pbVar3[1]];
      } while ((param_2 & 0xfffffffffffffffe) != uVar5);
    }
    if ((param_2 & 1) != 0) {
      uVar2 = uVar2 + (byte)(&DAT_03d5eb00)[param_1[uVar5]];
    }
  }
  if (uVar2 == param_2) {
    std::string::append((char *)param_3,(ulong)param_1);
  }
  else {
    if ((*param_3 & 1) == 0) {
      uVar5 = (ulong)(*param_3 >> 1);
    }
    else {
      uVar5 = *(ulong *)(param_3 + 8);
    }
    std::string::resize((ulong)param_3,(char)uVar5 + (char)uVar2);
    if ((*param_3 & 1) == 0) {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = *(byte **)(param_3 + 0x10);
    }
    if (0 < (long)param_2) {
      pbVar3 = param_3 + uVar5;
      do {
        bVar1 = *param_1;
        uVar6 = (uint)bVar1;
        if (bVar1 < 0x22) {
          if (bVar1 == 9) {
            pbVar4 = pbVar3 + 2;
            pbVar3[0] = 0x5c;
            pbVar3[1] = 0x74;
          }
          else if (uVar6 == 10) {
            pbVar4 = pbVar3 + 2;
            pbVar3[0] = 0x5c;
            pbVar3[1] = 0x6e;
          }
          else if (uVar6 == 0xd) {
            pbVar4 = pbVar3 + 2;
            pbVar3[0] = 0x5c;
            pbVar3[1] = 0x72;
          }
          else {
LAB_00c0fc38:
            if (uVar6 - 0x20 < 0x5f) {
              pbVar4 = pbVar3 + 1;
              *pbVar3 = bVar1;
            }
            else {
              pbVar3[1] = bVar1 >> 6 | 0x30;
              pbVar3[2] = bVar1 >> 3 & 7 | 0x30;
              *pbVar3 = 0x5c;
              pbVar3[3] = bVar1 & 7 | 0x30;
              pbVar4 = pbVar3 + 4;
            }
          }
        }
        else if (uVar6 == 0x22) {
          pbVar4 = pbVar3 + 2;
          pbVar3[0] = 0x5c;
          pbVar3[1] = 0x22;
        }
        else if (uVar6 == 0x27) {
          pbVar4 = pbVar3 + 2;
          pbVar3[0] = 0x5c;
          pbVar3[1] = 0x27;
        }
        else {
          if (bVar1 != 0x5c) goto LAB_00c0fc38;
          pbVar4 = pbVar3 + 2;
          pbVar3[0] = 0x5c;
          pbVar3[1] = 0x5c;
        }
        param_2 = param_2 - 1;
        param_1 = param_1 + 1;
        pbVar3 = pbVar4;
      } while (param_2 != 0);
    }
  }
  return;
}



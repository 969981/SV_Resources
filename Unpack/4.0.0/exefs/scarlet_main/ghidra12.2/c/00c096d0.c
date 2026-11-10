/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c096d0; name: FUN_00c096d0
 */


ulong FUN_00c096d0(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 auVar7 [12];
  
  pbVar5 = (byte *)*param_1;
  pbVar6 = (byte *)param_1[1];
  iVar2 = (int)pbVar6 - (int)pbVar5;
  if ((9 < iVar2) || (0 < iVar2)) {
    if (param_2 != 0) {
      uVar1 = (param_2 + (uint)pbVar5[1] * 0x80) - 0x80;
      uVar4 = (ulong)uVar1;
      if ((char)pbVar5[1] < '\0') {
        uVar1 = (uVar1 + (uint)pbVar5[2] * 0x4000) - 0x4000;
        uVar4 = (ulong)uVar1;
        if ((char)pbVar5[2] < '\0') {
          uVar1 = (uVar1 + (uint)pbVar5[3] * 0x200000) - 0x200000;
          uVar4 = (ulong)uVar1;
          if ((char)pbVar5[3] < '\0') {
            uVar4 = (ulong)(uVar1 + (uint)pbVar5[4] * 0x10000000 + 0xf0000000);
            if ((char)pbVar5[4] < '\0') {
              if ((char)pbVar5[5] < '\0') {
                if ((char)pbVar5[6] < '\0') {
                  if ((char)pbVar5[7] < '\0') {
                    pbVar6 = pbVar5 + 9;
                    if ((char)pbVar5[8] < '\0') {
                      if ((char)*pbVar6 < '\0') {
                        return 0;
                      }
                      pbVar6 = pbVar5 + 10;
                    }
                  }
                  else {
                    pbVar6 = pbVar5 + 8;
                  }
                }
                else {
                  pbVar6 = pbVar5 + 7;
                }
              }
              else {
                pbVar6 = pbVar5 + 6;
              }
            }
            else {
              pbVar6 = pbVar5 + 5;
            }
          }
          else {
            pbVar6 = pbVar5 + 4;
          }
        }
        else {
          pbVar6 = pbVar5 + 3;
        }
      }
      else {
        pbVar6 = pbVar5 + 2;
      }
      *param_1 = (long)pbVar6;
      return uVar4;
    }
    uVar4 = 0;
    goto LAB_00c0976c;
  }
  if ((int)pbVar6 == (int)pbVar5) {
    if (((*(int *)((long)param_1 + 0x2c) < 1) && ((int)param_1[3] != (int)param_1[5])) ||
       ((int)param_1[6] <= (int)param_1[3] - *(int *)((long)param_1 + 0x2c))) goto LAB_00c09740;
LAB_00c09804:
    bVar3 = true;
LAB_00c09828:
    *(bool *)((long)param_1 + 0x24) = bVar3;
    return 0;
  }
LAB_00c09740:
  if (pbVar5 == pbVar6) {
    uVar4 = FUN_00c08eb0(param_1);
    if ((uVar4 & 1) == 0) {
      if ((int)param_1[6] <= (int)param_1[3] - *(int *)((long)param_1 + 0x2c)) {
        bVar3 = (int)param_1[5] == (int)param_1[6];
        goto LAB_00c09828;
      }
      goto LAB_00c09804;
    }
    pbVar5 = (byte *)*param_1;
    pbVar6 = (byte *)param_1[1];
  }
  if ((pbVar6 <= pbVar5) || ((char)*pbVar5 < '\0')) {
    auVar7 = FUN_00c09268(param_1);
    if ((auVar7._8_4_ & 1) == 0) {
      return 0;
    }
    return auVar7._0_8_;
  }
  uVar4 = (ulong)*pbVar5;
LAB_00c0976c:
  *param_1 = (long)(pbVar5 + 1);
  return uVar4;
}



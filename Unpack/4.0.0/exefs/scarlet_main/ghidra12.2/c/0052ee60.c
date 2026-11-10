/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052ee60; name: FUN_0052ee60
 */


byte * FUN_0052ee60(undefined8 param_1,byte *param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  
  do {
    if (param_2 < (byte *)*param_3) {
      pbVar6 = param_2 + 1;
      bVar2 = *param_2;
      pbVar3 = pbVar6;
      if ((char)bVar2 < '\0') goto LAB_0052ef14;
LAB_0052ee9c:
      uVar4 = (uint)bVar2;
    }
    else {
      uVar8 = (long)param_2 - param_3[1];
      if (uVar8 == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      if (*(int *)((long)param_3 + 0x1c) < (int)uVar8) {
        return (byte *)0x0;
      }
      uVar1 = *(undefined4 *)((long)param_3 + 0x5c);
      do {
        lVar7 = FUN_0052da24(param_3,uVar8 & 0xffffffff,uVar1);
        if (lVar7 == 0) {
          if ((int)uVar8 == 0) {
            *param_3 = param_3[1];
            *(undefined4 *)(param_3 + 10) = 1;
            return param_2;
          }
          return (byte *)0x0;
        }
        lVar5 = param_3[1];
        param_2 = (byte *)(lVar7 + (int)uVar8);
        uVar4 = *(int *)((long)param_3 + 0x1c) + ((int)lVar7 - (int)lVar5);
        uVar8 = (long)param_2 - lVar5;
        *(uint *)((long)param_3 + 0x1c) = uVar4;
      } while (-1 < (int)uVar8);
      *param_3 = lVar5 + (int)(uVar4 & (int)uVar4 >> 0x1f);
      pbVar6 = param_2 + 1;
      bVar2 = *param_2;
      pbVar3 = pbVar6;
      if (-1 < (char)bVar2) goto LAB_0052ee9c;
LAB_0052ef14:
      uVar4 = ((uint)bVar2 + (uint)param_2[1] * 0x80) - 0x80;
      pbVar3 = param_2 + 2;
      if ((char)param_2[1] < '\0') {
        uVar4 = (uVar4 + (uint)*pbVar3 * 0x4000) - 0x4000;
        if ((char)*pbVar3 < '\0') {
          uVar4 = (uVar4 + (uint)param_2[3] * 0x200000) - 0x200000;
          if ((char)param_2[3] < '\0') {
            if ((char)param_2[4] < 0) {
              return (byte *)0x0;
            }
            lVar7 = 4;
            uVar4 = uVar4 + (char)param_2[4] * 0x10000000 + 0xf0000000;
          }
          else {
            lVar7 = 3;
          }
        }
        else {
          lVar7 = 2;
        }
        pbVar3 = pbVar6 + lVar7;
      }
    }
    if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar4 - 1;
      return pbVar3;
    }
    param_2 = (byte *)FUN_0052f020(uVar4,param_1,pbVar3,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}



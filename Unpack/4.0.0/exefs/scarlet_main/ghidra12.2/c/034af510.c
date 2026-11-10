/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034af510; name: FUN_034af510
 */


void FUN_034af510(long *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 local_24;
  
  FUN_034be914(param_1 + 7);
  (**(code **)(*param_1 + 0x180))(param_1,1,1);
  (**(code **)(*param_1 + 0xe8))(0,param_1,param_2,0);
  if (param_2 < 0x14) {
    if (param_2 == 0x12) {
      lVar4 = 0xc;
    }
    else {
      if (param_2 != 0x13) {
        return;
      }
      lVar4 = 0xd;
    }
  }
  else {
    if (param_2 - 0x14U < 3) {
      lVar4 = *param_1;
      uVar8 = 0;
      goto LAB_034af618;
    }
    if (param_2 != 0x3a) {
      return;
    }
    lVar4 = 0x49;
  }
  local_24 = *(undefined4 *)((long)&DAT_048b014c + lVar4 * 4);
  pbVar5 = (byte *)param_1[0x16];
  if (pbVar5 != (byte *)0x0) {
    bVar2 = *pbVar5;
    uVar1 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar1 = 1;
    }
    uVar7 = (ulong)uVar1;
    pbVar3 = pbVar5 + ((ulong)(bVar2 + 4) & 0x1fc);
    pbVar6 = pbVar5;
    do {
      pbVar5 = pbVar3;
      pbVar6 = pbVar6 + 1;
      if ((uint)*pbVar6 == (uint)lVar4) goto LAB_034af604;
      uVar7 = uVar7 - 1;
      pbVar3 = pbVar5 + 4;
    } while (uVar7 != 0);
    pbVar5 = (byte *)0x0;
  }
LAB_034af604:
  pbVar6 = (byte *)&local_24;
  if (pbVar5 != (byte *)0x0) {
    pbVar6 = pbVar5;
  }
  uVar8 = *(undefined4 *)pbVar6;
  lVar4 = *param_1;
LAB_034af618:
                    /* WARNING: Could not recover jumptable at 0x034af638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x1f8))(uVar8,param_1,param_2,0,0);
  return;
}



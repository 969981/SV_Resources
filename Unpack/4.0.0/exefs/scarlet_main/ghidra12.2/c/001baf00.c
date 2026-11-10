/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001baf00; name: FUN_001baf00
 */


/* WARNING: Removing unreachable block (ram,0x001baf74) */

int FUN_001baf00(long param_1,ulong param_2,uint param_3,long param_4,int *param_5,int param_6)

{
  char *pcVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  ulong uVar6;
  
  if (param_3 == 0) {
switchD_001baf28_default:
    return 0;
  }
  iVar5 = *param_5;
  switch(iVar5) {
  case 0:
    pcVar4 = (char *)(param_1 + param_2);
    do {
      param_3 = param_3 - 1;
      iVar5 = param_5[(ulong)(byte)(*pcVar4 - pcVar4[-param_4]) + 1] + iVar5;
      pcVar4 = pcVar4 + 1;
    } while (param_3 != 0);
    break;
  case 1:
    if (param_3 == 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      iVar5 = (param_3 & 1) - param_3;
      do {
        pbVar3 = (byte *)(param_1 + param_2);
        param_2 = param_2 + 2;
        iVar5 = iVar5 + 2;
        iVar2 = param_5[(ulong)pbVar3[1] + 1] + param_5[(ulong)*pbVar3 + 1] + iVar2;
      } while (iVar5 != 0);
      if ((param_3 & 1) == 0) {
        return iVar2;
      }
    }
    return param_5[(ulong)*(byte *)(param_1 + param_2) + 1] + iVar2;
  case 2:
    if (param_6 == 0) {
      iVar5 = param_5[(ulong)(byte)(*(char *)(param_1 + param_2) -
                                   *(char *)(param_1 + (param_2 - param_4))) + 1];
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return iVar5;
      }
      param_2 = param_2 + 1;
    }
    else {
      iVar5 = 0;
    }
    pcVar4 = (char *)(param_1 + param_2);
    do {
      param_3 = param_3 - 1;
      iVar5 = param_5[(ulong)(byte)(*pcVar4 - pcVar4[-param_4]) + 0x101] + iVar5;
      pcVar4 = pcVar4 + 1;
    } while (param_3 != 0);
    break;
  case 3:
    iVar5 = 0;
    do {
      pcVar4 = (char *)(param_1 + param_2);
      param_3 = param_3 - 1;
      pcVar1 = (char *)((param_1 - param_4) + param_2);
      uVar6 = param_2 & 3;
      param_2 = param_2 + 1;
      iVar5 = param_5[uVar6 * 0x100 + (ulong)(byte)(*pcVar4 - *pcVar1) + 1] + iVar5;
    } while (param_3 != 0);
    break;
  case 4:
    iVar5 = 0;
    pbVar3 = (byte *)(param_1 + param_2);
    do {
      param_3 = param_3 - 1;
      iVar5 = param_5[((ulong)pbVar3[-1] & 0xf0) * 0x10 + (ulong)*pbVar3 + 1] + iVar5;
      pbVar3 = pbVar3 + 1;
    } while (param_3 != 0);
    break;
  case 5:
    iVar5 = 0;
    do {
      pcVar4 = (char *)(param_1 + param_2);
      param_3 = param_3 - 1;
      pcVar1 = (char *)((param_1 - param_4) + param_2);
      uVar6 = param_2 & 0xf;
      param_2 = param_2 + 1;
      iVar5 = param_5[uVar6 * 0x100 + (ulong)(byte)(*pcVar4 - *pcVar1) + 1] + iVar5;
    } while (param_3 != 0);
    break;
  default:
    goto switchD_001baf28_default;
  }
  return iVar5;
}



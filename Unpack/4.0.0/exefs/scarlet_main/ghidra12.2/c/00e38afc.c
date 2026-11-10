/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e38afc; name: FUN_00e38afc
 */


void FUN_00e38afc(long param_1,ushort *param_2,int param_3,int param_4,long param_5)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  short *psVar6;
  long lVar7;
  
  if (*(char *)(param_5 + 0x54) != '\0') {
    **(undefined2 **)(param_5 + 0x30) = 0;
    *(undefined2 *)(param_5 + 0x52) = 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x68) + 8) == 0) {
    if (param_3 != 0) {
      uVar4 = param_4 * 0x2983 + 0x7c89;
      do {
        if (*(char *)(param_5 + 0x54) == '\0') {
          return;
        }
        uVar2 = *param_2;
        uVar3 = *(ushort *)(param_5 + 0x52);
        uVar5 = (ulong)uVar3;
        uVar1 = uVar3 + 1;
        if (uVar1 < *(ushort *)(param_5 + 0x50)) {
          *(short *)(param_5 + 0x52) = (short)uVar1;
          *(short *)(*(long *)(param_5 + 0x30) + uVar5 * 2) = (short)(uVar2 ^ uVar4);
          uVar5 = (ulong)*(ushort *)(param_5 + 0x52);
        }
        else {
          if ((((uVar2 ^ uVar4) & 0xffff) != 0) || (uVar1 != *(ushort *)(param_5 + 0x50))) {
LAB_00e38be0:
            **(undefined2 **)(param_5 + 0x30) = 0;
            *(undefined2 *)(param_5 + 0x52) = 0;
            return;
          }
          *(ushort *)(param_5 + 0x52) = uVar3 + 1;
        }
        uVar4 = uVar4 << 3 | uVar4 >> 0xd & 7;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
        *(undefined2 *)(*(long *)(param_5 + 0x30) + uVar5 * 2) = 0;
      } while (param_3 != 0);
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (*(char *)(param_5 + 0x54) == '\0') {
        return;
      }
      uVar2 = *(ushort *)(param_5 + 0x52);
      uVar5 = (ulong)uVar2;
      uVar4 = uVar2 + 1;
      uVar3 = *param_2;
      if (uVar4 < *(ushort *)(param_5 + 0x50)) {
        *(short *)(param_5 + 0x52) = (short)uVar4;
        *(ushort *)(*(long *)(param_5 + 0x30) + uVar5 * 2) = uVar3;
        uVar5 = (ulong)*(ushort *)(param_5 + 0x52);
      }
      else {
        if ((uVar3 != 0) || (uVar4 != *(ushort *)(param_5 + 0x50))) goto LAB_00e38be0;
        *(ushort *)(param_5 + 0x52) = uVar2 + 1;
      }
      param_2 = param_2 + 1;
      *(undefined2 *)(*(long *)(param_5 + 0x30) + uVar5 * 2) = 0;
    }
  }
  if (*(char *)(param_5 + 0x54) != '\0') {
    psVar6 = *(short **)(param_5 + 0x30);
    uVar4 = 0;
    do {
      if (*psVar6 == 0) break;
      if (*psVar6 == 0x10) {
        lVar7 = (ulong)(ushort)psVar6[1] + 2;
        psVar6 = psVar6 + lVar7;
      }
      else {
        psVar6 = psVar6 + 1;
        lVar7 = 1;
      }
      uVar4 = (int)lVar7 + uVar4;
    } while (uVar4 < 0x800);
    *(short *)(param_5 + 0x52) = (short)uVar4;
  }
  return;
}



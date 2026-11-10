/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03368f38; name: FUN_03368f38
 */


void FUN_03368f38(undefined8 param_1,long param_2,byte *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *pbVar4;
  ulong *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  
  if (*(int *)(param_2 + 0x1c) == 5) {
    pbVar4 = param_3;
    if ((*param_3 & 1) == 0) {
      do {
        pbVar4 = *(byte **)(pbVar4 + 8);
      } while ((*pbVar4 & 1) == 0);
    }
    if ((*(ulong *)(pbVar4 + 0x10) & 0x1f) != 8) {
      param_3 = (byte *)0x0;
    }
    pbVar4 = param_3;
    do {
      if ((*pbVar4 >> 1 & 1) != 0) {
        puVar5 = *(ulong **)(pbVar4 + 0x18);
        goto LAB_03368ff0;
      }
      pbVar4 = *(byte **)(pbVar4 + 8);
    } while (pbVar4 != (byte *)0x0);
    puVar5 = (ulong *)0x0;
LAB_03368ff0:
    uVar6 = (uint)*puVar5;
    if ((uVar6 >> 0x14 & 1) == 0) {
      if (((*puVar5 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
      goto LAB_03369030;
      goto LAB_03368ff0;
    }
    if (puVar5 != (ulong *)0x0) {
      uVar8 = CONCAT44(uVar6,uVar6) & 0xfffff000fffff;
      uVar6 = (uint)(ushort)puVar5[(ulong)(byte)(POPCOUNT((char)uVar8) +
                                                 POPCOUNT((char)(uVar8 >> 8)) +
                                                POPCOUNT((char)(uVar8 >> 0x10))) + 2];
      goto LAB_03369034;
    }
LAB_03369030:
    uVar6 = 0;
LAB_03369034:
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar7 = 0;
      uVar3 = 5;
      do {
        uVar1 = 0;
        if ((uVar3 < 6) && ((1 << (ulong)(uVar3 & 0x1f) & 0x32U) != 0)) {
          uVar1 = *(undefined8 *)(param_2 + 0x10);
        }
        pbVar4 = param_3;
        do {
          if ((*pbVar4 >> 1 & 1) != 0) {
            uVar2 = *(undefined8 *)(pbVar4 + 0x18);
            goto LAB_0336908c;
          }
          pbVar4 = *(byte **)(pbVar4 + 8);
        } while (pbVar4 != (byte *)0x0);
        uVar2 = 0;
LAB_0336908c:
        FUN_03368f38(param_1,uVar1,uVar2,param_4,param_5 + iVar7 * uVar6,param_6);
        iVar7 = iVar7 + 1;
        if (*(int *)(param_2 + 0x18) <= iVar7) {
          return;
        }
        uVar3 = *(uint *)(param_2 + 0x1c);
      } while( true );
    }
  }
  else if (*(int *)(param_2 + 0x1c) == 3) {
    FUN_033690d4(*(undefined8 *)(param_2 + 0x10),param_4,param_5,param_6);
    return;
  }
  return;
}



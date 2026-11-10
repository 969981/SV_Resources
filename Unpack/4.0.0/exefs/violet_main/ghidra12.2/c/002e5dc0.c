/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e5dc0; name: FUN_002e5dc0
 */


/* WARNING: Removing unreachable block (ram,0x002e5e40) */

void FUN_002e5dc0(ulong param_1,long param_2,uint param_3,byte *param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  
  uVar7 = (ulong)param_3;
  if ((param_1 & 1) != 0) {
    uVar3 = (ulong)(int)param_3;
    if ((*param_4 & 1) == 0) {
      uVar5 = (ulong)(*param_4 >> 1);
      if (uVar3 <= uVar5) {
        param_4[uVar3 + 1] = 0;
        *param_4 = (byte)(param_3 << 1);
        goto joined_r0x002e5e64;
      }
    }
    else {
      uVar5 = *(ulong *)(param_4 + 8);
      if (uVar3 <= uVar5) {
        *(undefined1 *)(*(long *)(param_4 + 0x10) + uVar3) = 0;
        *(ulong *)(param_4 + 8) = uVar3;
        goto joined_r0x002e5e64;
      }
    }
    FUN_002ce498(param_4,uVar3 - uVar5,0);
joined_r0x002e5e64:
    if ((int)param_3 < 1) {
      return;
    }
    uVar3 = 0;
    do {
      pbVar6 = param_4 + 1;
      if ((*param_4 & 1) != 0) {
        pbVar6 = *(byte **)(param_4 + 0x10);
      }
      pbVar6[uVar3] = (byte)*(undefined4 *)(param_2 + uVar3 * 4);
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
    return;
  }
  uVar3 = -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2;
  if ((*param_4 & 1) == 0) {
    uVar5 = (ulong)(*param_4 >> 1);
    if (uVar5 < uVar3) goto LAB_002e5e78;
    param_4[uVar3 + 1] = 0;
    *param_4 = (byte)(param_3 << 3);
    uVar2 = param_3 << 3 & 0xff;
LAB_002e5e90:
    pbVar6 = param_4 + 1;
    if (0 < (int)param_3) goto LAB_002e5f38;
LAB_002e5e9c:
    if ((uVar2 & 1) != 0) goto LAB_002e5f5c;
LAB_002e5ea0:
    pbVar6 = pbVar6 + ~(ulong)param_4;
    pbVar4 = (byte *)(ulong)(uVar2 >> 1);
    if (pbVar6 <= pbVar4) {
      (param_4 + (long)pbVar6)[1] = 0;
      *param_4 = (byte)((int)pbVar6 << 1);
      goto LAB_002e5f88;
    }
  }
  else {
    uVar5 = *(ulong *)(param_4 + 8);
    if (uVar5 < uVar3) {
LAB_002e5e78:
      FUN_002ce498(param_4,uVar3 - uVar5,0);
      uVar2 = (uint)*param_4;
      if ((*param_4 & 1) == 0) goto LAB_002e5e90;
    }
    else {
      *(undefined1 *)(*(long *)(param_4 + 0x10) + uVar3) = 0;
      *(ulong *)(param_4 + 8) = uVar3;
      uVar2 = (uint)*param_4;
      if ((*param_4 & 1) == 0) goto LAB_002e5e90;
    }
    pbVar6 = *(byte **)(param_4 + 0x10);
    if ((int)param_3 < 1) goto LAB_002e5e9c;
LAB_002e5f38:
    do {
      iVar1 = FUN_002ea9e0(pbVar6,param_2);
      pbVar6 = pbVar6 + iVar1;
      param_2 = param_2 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    uVar2 = (uint)*param_4;
    if ((*param_4 & 1) == 0) goto LAB_002e5ea0;
LAB_002e5f5c:
    pbVar4 = *(byte **)(param_4 + 8);
    pbVar6 = pbVar6 + -*(long *)(param_4 + 0x10);
    if (pbVar6 <= pbVar4) {
      pbVar6[*(long *)(param_4 + 0x10)] = 0;
      *(byte **)(param_4 + 8) = pbVar6;
      goto LAB_002e5f88;
    }
  }
  FUN_002ce498(param_4,(long)pbVar6 - (long)pbVar4,0);
LAB_002e5f88:
                    /* try { // try from 002e5f88 to 002e5f93 has its CatchHandler @ 002e5fa4 */
  FUN_002cdbb0(param_4,0);
  return;
}



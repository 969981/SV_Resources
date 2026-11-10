/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034826d8; name: FUN_034826d8
 */


long FUN_034826d8(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = *param_2;
  if ((((uVar2 != 0) || (param_2[2] != 0)) || ((char)param_2[4] != -1)) ||
     (((char)param_2[6] != -1 || (*(long *)(param_2 + 8) != 0)))) {
    uVar6 = *(uint *)(param_1 + 0x18);
    if (uVar6 != 0) {
      iVar7 = 0;
      do {
        iVar1 = iVar7 + (uVar6 >> 1);
        uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x28 + 0x20);
        if (uVar3 == uVar2) {
          lVar4 = *(long *)(param_1 + 0x10) + (long)iVar1 * 0x28;
          goto LAB_03482794;
        }
        if (uVar3 < uVar2) {
          iVar7 = iVar1 + 1;
        }
        uVar6 = uVar6 - (uVar3 < uVar2) >> 1;
      } while (uVar6 != 0);
    }
    if (uVar2 != 0) {
      *param_2 = 0;
      uVar5 = (ulong)*(uint *)(param_1 + 0x18);
      if (*(uint *)(param_1 + 0x18) != 0) {
        do {
          uVar5 = uVar5 >> 1;
          lVar4 = *(long *)(param_1 + 0x10) + uVar5 * 0x28;
          if (*(int *)(lVar4 + 0x20) == 0) goto LAB_03482794;
        } while ((int)uVar5 != 0);
      }
    }
  }
LAB_034827a0:
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 4) = 0xff;
  *(undefined1 *)(param_2 + 6) = 0xff;
  param_2[8] = 0;
  param_2[9] = 0;
  lVar4 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    lVar4 = param_1 + 8;
  }
  return lVar4;
LAB_03482794:
  lVar4 = FUN_034827d0(lVar4,param_2 + 2);
  if (lVar4 != 0) {
    return lVar4;
  }
  goto LAB_034827a0;
}



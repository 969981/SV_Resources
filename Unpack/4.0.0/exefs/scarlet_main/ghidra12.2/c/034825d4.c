/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034825d4; name: FUN_034825d4
 */


long FUN_034825d4(long param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  uVar3 = *param_2;
  if ((((uVar3 != 0) || ((int)param_2[1] != 0)) || ((int)param_2[2] != 0)) ||
     ((((char)param_2[3] != -1 || ((char)param_2[4] != -1)) || (param_2[5] != 0)))) {
    uVar4 = *(uint *)(param_1 + 0x18);
    if (uVar4 != 0) {
      iVar5 = 0;
      do {
        iVar1 = iVar5 + (uVar4 >> 1);
        uVar6 = *(ulong *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x28 + 0x20);
        if (uVar6 == uVar3) {
          lVar2 = *(long *)(param_1 + 0x10) + (long)iVar1 * 0x28;
          goto LAB_03482698;
        }
        if (uVar6 < uVar3) {
          iVar5 = iVar1 + 1;
        }
        uVar4 = uVar4 - (uVar6 < uVar3) >> 1;
      } while (uVar4 != 0);
    }
    if (uVar3 != 0) {
      *param_2 = 0;
      uVar3 = (ulong)*(uint *)(param_1 + 0x18);
      if (*(uint *)(param_1 + 0x18) != 0) {
        do {
          uVar3 = uVar3 >> 1;
          lVar2 = *(long *)(param_1 + 0x10) + uVar3 * 0x28;
          if (*(long *)(lVar2 + 0x20) == 0) goto LAB_03482698;
        } while ((int)uVar3 != 0);
      }
    }
  }
LAB_034826a4:
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined1 *)(param_2 + 3) = 0xff;
  *(undefined1 *)(param_2 + 4) = 0xff;
  param_2[5] = 0;
  lVar2 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    lVar2 = param_1 + 8;
  }
  return lVar2;
LAB_03482698:
  lVar2 = FUN_034826d8(lVar2,param_2 + 1);
  if (lVar2 != 0) {
    return lVar2;
  }
  goto LAB_034826a4;
}



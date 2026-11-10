/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018b820c; name: FUN_018b820c
 */


void FUN_018b820c(undefined4 *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *param_2;
  uVar4 = 0xffffff85;
  if (uVar5 != (int)(short)uVar5) {
    uVar4 = 0xffffff86;
  }
  uVar1 = 0x84;
  if (uVar5 != (int)(char)uVar5) {
    uVar1 = uVar4;
  }
  if (uVar5 + 0x40 < 0xc0) {
    uVar1 = uVar5;
  }
  lVar2 = FUN_0111b030(uVar1);
  if ((ulong)param_3[1] < (ulong)(param_3[2] + lVar2)) {
    *param_1 = 0xd;
    return;
  }
  uVar4 = *param_2;
  if (uVar4 + 0x40 < 0xc0) {
    plVar3 = param_3 + 2;
    *(char *)(*param_3 + *plVar3) = (char)uVar4;
    lVar2 = *plVar3 + 1;
    *plVar3 = lVar2;
    uVar5 = *param_2;
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 0x85) {
LAB_018b8354:
      *(short *)(*param_3 + lVar2) = (short)uVar5;
      lVar2 = 2;
    }
    else {
      if (uVar4 != 0x86) {
        if (uVar4 != 0x84) goto LAB_018b82e4;
        goto LAB_018b8318;
      }
LAB_018b8388:
      *(uint *)(*param_3 + lVar2) = uVar5;
      lVar2 = 4;
    }
  }
  else {
    if (uVar4 != (int)(char)uVar4) {
      if (uVar4 != (int)(short)uVar4) {
        *(undefined1 *)(*param_3 + param_3[2]) = 0x86;
        lVar2 = param_3[2] + 1;
        param_3[2] = lVar2;
        uVar5 = *param_2;
        goto LAB_018b8388;
      }
      *(undefined1 *)(*param_3 + param_3[2]) = 0x85;
      lVar2 = param_3[2] + 1;
      param_3[2] = lVar2;
      uVar5 = *param_2;
      goto LAB_018b8354;
    }
    plVar3 = param_3 + 2;
    *(undefined1 *)(*param_3 + *plVar3) = 0x84;
    lVar2 = *plVar3 + 1;
    *plVar3 = lVar2;
    uVar5 = *param_2;
LAB_018b8318:
    *(char *)(*param_3 + lVar2) = (char)uVar5;
    lVar2 = 1;
  }
  param_3[2] = param_3[2] + lVar2;
LAB_018b82e4:
  *param_1 = 0;
  return;
}



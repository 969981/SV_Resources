/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6777c; name: FUN_01f6777c
 */


undefined8 FUN_01f6777c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 local_5c;
  undefined8 *local_58 [4];
  undefined1 auStack_38 [8];
  
  if (((*(long *)(param_1 + 0x98) == 0) ||
      (lVar6 = *(long *)(*(long *)(param_1 + 0x98) + 0x10), lVar6 == 0)) ||
     (*(int *)(param_1 + 0xc0) != 4)) {
    return 0;
  }
  plVar7 = (long *)(lVar6 + -0x28);
  FUN_016947d8(local_58);
  local_5c = 5;
  if (local_58[0] == (undefined8 *)0x0) {
    uVar4 = FUN_0111b1ec(plVar7,*(undefined8 *)(param_1 + 0x90));
    if ((uVar4 & 1) != 0) {
      uVar5 = 0;
      uVar2 = 0;
      goto LAB_01f67860;
    }
  }
  else {
    FUN_01f678f4(auStack_38,&local_5c,local_58[0] + 1);
    uVar8 = *(ushort *)(param_1 + 0xe0);
    uVar9 = 0xffffff80;
    if (0xff < uVar8) {
      uVar9 = 0xffffff81;
    }
    uVar1 = (uint)uVar8;
    if (0x7f < uVar8) {
      uVar1 = uVar9;
    }
    lVar6 = FUN_0111b030(uVar1);
    if ((ulong)(local_58[0][3] + lVar6) <= (ulong)local_58[0][2]) {
      uVar3 = *(ushort *)(param_1 + 0xe0);
      uVar8 = 0xff80;
      if (0xff < uVar3) {
        uVar8 = 0xff81;
      }
      if (0x7f < uVar3) {
        uVar3 = uVar8;
      }
      *(char *)(local_58[0][1] + local_58[0][3]) = (char)uVar3;
      lVar6 = local_58[0][3] + 1;
      local_58[0][3] = lVar6;
      if ((uVar3 & 0xff) == 0x81) {
        *(undefined2 *)(local_58[0][1] + lVar6) = *(undefined2 *)(param_1 + 0xe0);
        lVar6 = local_58[0][3] + 2;
      }
      else {
        if ((uVar3 & 0xff) != 0x80) goto LAB_01f67848;
        *(char *)(local_58[0][1] + lVar6) = (char)*(undefined2 *)(param_1 + 0xe0);
        lVar6 = local_58[0][3] + 1;
      }
      local_58[0][3] = lVar6;
    }
LAB_01f67848:
    uVar4 = FUN_0111b1ec(plVar7,*(undefined8 *)(param_1 + 0x90));
    if ((uVar4 & 1) != 0) {
      uVar5 = *local_58[0];
      uVar2 = *(undefined4 *)(local_58[0] + 3);
LAB_01f67860:
      uVar4 = (**(code **)(*plVar7 + 0x68))(plVar7,uVar5,uVar2,param_1 + 0x90);
      if ((uVar4 & 1) != 0) {
        uVar5 = 1;
        goto LAB_01f678bc;
      }
    }
  }
  uVar5 = 0;
LAB_01f678bc:
  FUN_01694aa8(local_58);
  return uVar5;
}



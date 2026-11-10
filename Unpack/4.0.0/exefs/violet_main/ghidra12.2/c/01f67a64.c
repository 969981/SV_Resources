/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f67a64; name: FUN_01f67a64
 */


undefined8 FUN_01f67a64(long param_1)

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
     (*(int *)(param_1 + 0xc0) != 3)) {
    return 0;
  }
  plVar7 = (long *)(lVar6 + -0x28);
  FUN_016947d8(local_58);
  local_5c = 3;
  if (local_58[0] == (undefined8 *)0x0) {
    uVar4 = FUN_0111b1ec(plVar7,*(undefined8 *)(param_1 + 0x90));
    uVar5 = 0;
    if ((uVar4 & 1) == 0) goto LAB_01f67bc0;
    uVar5 = 0;
    uVar2 = 0;
LAB_01f67b48:
    uVar4 = (**(code **)(*plVar7 + 0x68))(plVar7,uVar5,uVar2,param_1 + 0x90);
    if ((uVar4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xc0) = 4;
      if ((*(uint *)(param_1 + 0xc4) & 0xfffffffe) == 4) {
        *(undefined8 *)(param_1 + 0xd0) = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
        if (*(char *)(param_1 + 200) == '\0') {
          *(undefined1 *)(param_1 + 200) = 1;
        }
        nn::os::GetSystemTick();
        uVar5 = nn::os::ConvertToTimeSpan();
        *(undefined8 *)(param_1 + 0xd0) = uVar5;
      }
      uVar5 = 1;
      goto LAB_01f67bc0;
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
        if ((uVar3 & 0xff) != 0x80) goto LAB_01f67b30;
        *(char *)(local_58[0][1] + lVar6) = (char)*(undefined2 *)(param_1 + 0xe0);
        lVar6 = local_58[0][3] + 1;
      }
      local_58[0][3] = lVar6;
    }
LAB_01f67b30:
    uVar4 = FUN_0111b1ec(plVar7,*(undefined8 *)(param_1 + 0x90));
    if ((uVar4 & 1) != 0) {
      uVar5 = *local_58[0];
      uVar2 = *(undefined4 *)(local_58[0] + 3);
      goto LAB_01f67b48;
    }
  }
  uVar5 = 0;
LAB_01f67bc0:
  FUN_01694aa8(local_58);
  return uVar5;
}



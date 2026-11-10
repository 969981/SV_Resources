/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b69464; name: FUN_00b69464
 */


undefined8 FUN_00b69464(long param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  int local_6c;
  undefined8 *local_68 [4];
  undefined1 auStack_48 [8];
  
  if ((*(long *)(param_1 + 0x98) == 0) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x98) + 0x10), lVar8 == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc0) == 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc0) == 5) {
    return 0;
  }
  plVar9 = (long *)(lVar8 + -0x28);
  FUN_016947d8(local_68);
  local_6c = 4;
  if (local_68[0] != (undefined8 *)0x0) {
    FUN_01f678f4(auStack_48,&local_6c,local_68[0] + 1);
  }
  local_6c = *(ushort *)(param_1 + 0xe0) + 1;
  if (local_68[0] == (undefined8 *)0x0) {
    uVar4 = FUN_0111b1ec(plVar9,*(undefined8 *)(param_1 + 0x90));
    uVar5 = 0;
    if ((uVar4 & 1) == 0) goto LAB_00b69604;
LAB_00b69594:
    uVar5 = 0;
    uVar6 = 0;
LAB_00b6959c:
    uVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,uVar5,uVar6,param_1 + 0x90);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(param_1 + 200) != '\0') {
        *(undefined1 *)(param_1 + 200) = 0;
      }
      *(short *)(param_1 + 0xe0) = *(short *)(param_1 + 0xe0) + 1;
      *(undefined4 *)(param_1 + 0xc0) = 2;
      if (*(int *)(param_1 + 0xc4) - 3U < 3) {
        uVar6 = 2;
        if (param_2 == 0) {
          uVar6 = 3;
        }
        *(undefined4 *)(param_1 + 0xc4) = uVar6;
      }
      uVar5 = 1;
      *(short *)(param_1 + 0xe2) = *(short *)(param_1 + 0xe2) + 1;
      goto LAB_00b69604;
    }
  }
  else {
    FUN_01e62d14(auStack_48,&local_6c,local_68[0] + 1);
    sVar2 = (short)param_2;
    cVar1 = (char)param_2;
    if (param_2 + 0x40 < 0xc0) {
      uVar7 = param_2;
    }
    else if (param_2 == (int)cVar1) {
      uVar7 = 0x84;
    }
    else {
      uVar7 = 0xffffff85;
      if (param_2 != (int)sVar2) {
        uVar7 = 0xffffff86;
      }
    }
    lVar3 = FUN_0111b030(uVar7);
    lVar8 = local_68[0][3];
    if ((ulong)(lVar8 + lVar3) <= (ulong)local_68[0][2]) {
      if (param_2 + 0x40 < 0xc0) {
        *(char *)(local_68[0][1] + lVar8) = cVar1;
        uVar7 = param_2 & 0xff;
        lVar8 = local_68[0][3] + 1;
        local_68[0][3] = lVar8;
        if (uVar7 == 0x84) goto LAB_00b69660;
        if (uVar7 == 0x85) goto LAB_00b696a4;
        if (uVar7 == 0x86) goto LAB_00b696cc;
      }
      else {
        if (param_2 == (int)cVar1) {
          *(undefined1 *)(local_68[0][1] + lVar8) = 0x84;
          lVar8 = local_68[0][3] + 1;
          local_68[0][3] = lVar8;
LAB_00b69660:
          *(char *)(local_68[0][1] + lVar8) = cVar1;
          lVar8 = local_68[0][3] + 1;
        }
        else {
          lVar3 = local_68[0][1];
          if (param_2 == (int)sVar2) {
            *(undefined1 *)(lVar3 + lVar8) = 0x85;
            lVar8 = local_68[0][3] + 1;
            local_68[0][3] = lVar8;
LAB_00b696a4:
            *(short *)(local_68[0][1] + lVar8) = sVar2;
            lVar8 = local_68[0][3] + 2;
          }
          else {
            *(undefined1 *)(lVar3 + lVar8) = 0x86;
            lVar8 = local_68[0][3] + 1;
            local_68[0][3] = lVar8;
LAB_00b696cc:
            *(uint *)(local_68[0][1] + lVar8) = param_2;
            lVar8 = local_68[0][3] + 4;
          }
        }
        local_68[0][3] = lVar8;
      }
    }
    uVar4 = FUN_0111b1ec(plVar9,*(undefined8 *)(param_1 + 0x90));
    if ((uVar4 & 1) != 0) {
      if (local_68[0] == (undefined8 *)0x0) goto LAB_00b69594;
      uVar5 = *local_68[0];
      uVar6 = *(undefined4 *)(local_68[0] + 3);
      goto LAB_00b6959c;
    }
  }
  uVar5 = 0;
LAB_00b69604:
  FUN_01694aa8(local_68);
  return uVar5;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e9744; name: FUN_007e9744
 */


undefined8 FUN_007e9744(undefined8 param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_50;
  undefined4 local_48;
  
  puVar3 = PTR_DAT_047d0860;
  if (0x1b < *(uint *)(param_2 + 0x5f8)) {
    plVar4 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
    lVar5 = (**(code **)(*plVar4 + 0x68))(plVar4,param_2 + 0x628);
    if ((lVar5 == 0) || ((*(char *)(lVar5 + 0x78) == '\0' && (*(char *)(lVar5 + 0x3a) != '\x03'))))
    {
      lVar6 = FUN_01f7c4e8(*(undefined8 *)puVar3);
      if (*(long *)(lVar6 + 0x98) != 0) {
        lVar6 = FUN_01f7c4e8(*(undefined8 *)puVar3);
        uVar1 = *(ushort *)(*(long *)(lVar6 + 0x98) + 0x38);
        uVar2 = *(ushort *)(param_2 + 0xe);
        if (uVar1 == 0) goto joined_r0x007e9800;
        if (uVar2 < 2) goto LAB_007e9804;
        if (uVar1 != uVar2) goto LAB_007e986c;
        if (*(short *)(param_2 + 0x10) != 0) goto LAB_007e9818;
        goto LAB_007e9834;
      }
      uVar2 = *(ushort *)(param_2 + 0xe);
joined_r0x007e9800:
      if (1 < uVar2) goto LAB_007e986c;
LAB_007e9804:
      if ((*(short *)(param_2 + 0x10) == 0) || (*(char *)(param_2 + 0x14) == '\0')) {
LAB_007e9834:
        if (lVar5 == 0) {
          return 1;
        }
        if (*(short *)(param_2 + 0xe) == 1) {
          uVar7 = FUN_007f3ff4(lVar5 + 0x60,*(undefined2 *)(param_2 + 0x12),
                               *(undefined8 *)(lVar5 + 0x30),*(undefined2 *)(lVar5 + 0x38));
        }
        else {
          uVar7 = FUN_007f3ff4(lVar5 + 0x48,*(undefined2 *)(param_2 + 0x12),
                               *(undefined8 *)(lVar5 + 0x30),*(undefined2 *)(lVar5 + 0x38));
        }
        if ((uVar7 & 1) != 0) {
          return 1;
        }
      }
      else {
LAB_007e9818:
        plVar4 = (long *)FUN_01f7c4e8(*(undefined8 *)puVar3);
        lVar6 = (**(code **)(*plVar4 + 0x48))(plVar4,*(undefined2 *)(param_2 + 0x10));
        if (lVar6 != 0) goto LAB_007e9834;
      }
      local_50 = 0x400000000;
      goto LAB_007e9878;
    }
  }
LAB_007e986c:
  local_50 = 0x20000000;
LAB_007e9878:
  local_48 = 0;
  FUN_007e8b54(param_1,&local_50,param_2);
  return 0;
}



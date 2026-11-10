/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ddc738; name: FUN_01ddc738
 */


undefined8 FUN_01ddc738(long param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  char local_60 [4];
  int local_5c;
  uint local_58;
  
  lVar5 = *(long *)(param_1 + 0x1a0);
  if (param_2 == 0) {
    uVar7 = FUN_01dc00f4(*(undefined8 *)(lVar5 + 0x40),param_3,param_4);
    if ((uVar7 & 1) != 0) {
      return 2;
    }
    if (((*PTR_DAT_047d5ff8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d5ff8), iVar4 != 0)) {
      FUN_00100190(&LAB_00b1a5bc,PTR_DAT_047d6000,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d5ff8);
    }
    lVar6 = *(long *)PTR_DAT_047d6000;
    *(long *)PTR_DAT_047d6008 = lVar6;
    if (lVar6 == 0) {
      local_60[0] = '\0';
    }
    else {
      FUN_01a2fe88(local_60);
      if (((local_60[0] != '\0') && (local_5c == param_3)) && (local_58 == param_4)) {
        return 3;
      }
    }
    param_2 = 0;
  }
  else if (param_2 == 1) {
    if ((param_3 == 0) && (uVar10 = (uint)*(byte *)(*(long *)(lVar5 + 0x30) + 0x90), uVar10 != 0)) {
      uVar9 = 0;
      do {
        if (param_4 != uVar9) {
          lVar6 = (**(code **)(**(long **)(lVar5 + 0x30) + 0x60))(*(long **)(lVar5 + 0x30),uVar9);
          if (*(long *)(*(long *)(lVar6 + 0x70) + 8) == 0) {
            sVar2 = FUN_00f13ef0(lVar6);
            if (sVar2 != 0) goto LAB_01ddc828;
          }
          else {
            iVar4 = FUN_00ddf348();
            if (iVar4 != 0) {
LAB_01ddc828:
              uVar7 = FUN_00cf4cfc(*(undefined8 *)(lVar6 + 0x70));
              if (((uVar7 & 1) == 0) &&
                 ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0x70) + 0x10) + 4) >> 2 & 1) == 0))
              goto LAB_01ddc870;
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar10 != uVar9);
    }
    return 4;
  }
LAB_01ddc870:
  lVar5 = FUN_010f26f8(lVar5,param_2,param_3,param_4);
  uVar7 = FUN_00cf4cfc(*(undefined8 *)(lVar5 + 0x70));
  uVar1 = *(ushort *)(*(long *)(*(long *)(lVar5 + 0x70) + 0x10) + 4);
  if ((param_5 & 1) == 0) {
    if ((uVar7 & 1) != 0 || (uVar1 & 4) != 0) {
      return 1;
    }
  }
  else if ((uVar1 >> 2 & 1) != 0) {
    return 6;
  }
  uVar7 = FUN_01dc7280(uVar7,lVar5);
  if ((uVar7 & 1) == 0) {
    lVar6 = *(long *)(lVar5 + 0x70);
    if ((*(byte *)(*(long *)(lVar6 + 0x10) + 4) >> 2 & 1) == 0) {
      sVar2 = FUN_00cf44f4();
      if (sVar2 == 0) {
        return 0;
      }
      lVar6 = *(long *)(lVar5 + 0x70);
    }
    sVar2 = FUN_00cf44f4(lVar6);
    sVar3 = FUN_00cf41a8(*(undefined8 *)(lVar5 + 0x70));
    if (((sVar2 == 0x382 || sVar2 == 0x286) && ((ushort)(sVar3 - 1U) < 2)) ||
       ((uVar8 = 0, sVar2 == 800 && ((ushort)(sVar3 - 1U) < 3)))) {
      uVar8 = 7;
    }
  }
  else {
    uVar8 = 5;
  }
  return uVar8;
}



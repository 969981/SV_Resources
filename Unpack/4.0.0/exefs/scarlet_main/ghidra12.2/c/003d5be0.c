/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d5be0; name: FUN_003d5be0
 */


undefined8 FUN_003d5be0(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ushort *puVar5;
  long lVar6;
  ushort local_14 [2];
  
  if ((param_2 & 0xffff) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x550) + 0x1c) & 0x30000;
  if ((uVar1 != 0) && (lVar6 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238), lVar6 != 0)) {
    iVar2 = *(int *)(lVar6 + 0x18);
    if (iVar2 == 0x300c02c) {
      if ((param_2 & 0xffff) != 0x18) {
        return 0;
      }
    }
    else {
      if (iVar2 != 0x300c02b) {
        return 0;
      }
      if ((param_2 & 0xffff) != 0x17) {
        return 0;
      }
    }
  }
  if (param_3 != 0) {
    if (uVar1 == 0x30000) {
      lVar6 = 2;
      puVar5 = &DAT_03cdd16c;
      if ((uint)DAT_03cdd16c == (param_2 & 0xffff)) goto LAB_003d5d0c;
    }
    else if (uVar1 == 0x20000) {
      lVar6 = 1;
      puVar5 = &DAT_03cdd16e;
      if ((uint)DAT_03cdd16e == (param_2 & 0xffff)) goto LAB_003d5d0c;
    }
    else if (uVar1 == 0x10000) {
      lVar6 = 1;
      puVar5 = &DAT_03cdd16c;
      if ((uint)DAT_03cdd16c == (param_2 & 0xffff)) goto LAB_003d5d0c;
    }
    else {
      puVar5 = *(ushort **)(param_1 + 0x770);
      if (puVar5 != (ushort *)0x0) {
        lVar6 = *(long *)(param_1 + 0x768);
        if (lVar6 != 0) goto LAB_003d5cd8;
        return 0;
      }
      lVar6 = 5;
      puVar5 = &DAT_03cdd170;
      if ((uint)DAT_03cdd170 == (param_2 & 0xffff)) goto LAB_003d5d0c;
    }
    do {
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + 1;
      if (lVar6 == 0) {
        return 0;
      }
LAB_003d5cd8:
    } while ((uint)*puVar5 != (param_2 & 0xffff));
  }
LAB_003d5d0c:
  uVar3 = (ulong)((param_2 & 0xffff) - 1);
  if (0x1d < (param_2 - 1 & 0xffff)) {
    return 0;
  }
  local_14[0] = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  uVar4 = FUN_003af490(param_1,0x20006,*(undefined4 *)(&DAT_03cdd008 + uVar3 * 0xc),
                       (&DAT_03cdd004)[uVar3 * 3],local_14);
  if ((int)uVar4 != 0) {
    if ((*(int *)(param_1 + 0x38) == 0) || (lVar6 = *(long *)(param_1 + 0x778), lVar6 == 0)) {
      return 1;
    }
    puVar5 = *(ushort **)(param_1 + 0x780);
    do {
      if ((uint)*puVar5 == (param_2 & 0xffff)) {
        return 1;
      }
      uVar4 = 0;
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  return uVar4;
}



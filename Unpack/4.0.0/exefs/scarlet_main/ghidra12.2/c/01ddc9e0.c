/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ddc9e0; name: FUN_01ddc9e0
 */


undefined8 FUN_01ddc9e0(long param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ushort local_64 [2];
  char local_60 [4];
  uint local_5c;
  uint local_58;
  
  uVar5 = FUN_01195974();
  lVar11 = *(long *)(param_1 + 0x1a0);
  iVar4 = *(int *)(param_1 + 0x108);
  if (iVar4 == 0) {
    lVar6 = FUN_01195854();
    uVar9 = (uint)*(byte *)(lVar6 + 0x570);
    iVar8 = 0;
    iVar4 = *(int *)(param_1 + 0x108);
  }
  else {
    iVar8 = 1;
    if (iVar4 != 1) {
      if (iVar4 != 2) {
        uVar9 = 0xffffffff;
        iVar8 = 3;
        goto LAB_01ddca1c;
      }
      iVar8 = 2;
    }
    uVar9 = *(uint *)(param_1 + 0x2a4);
  }
LAB_01ddca1c:
  uVar12 = (uint)((ulong)uVar5 >> 0x20);
  uVar10 = uVar12;
  if (iVar4 != 2) {
    uVar10 = 1;
  }
  uVar13 = uVar12;
  if (iVar4 != 1) {
    uVar13 = uVar10;
  }
  bVar1 = *(byte *)(param_1 + 0x2d0);
  uVar10 = (int)uVar5 + uVar12 * 6;
  if (iVar4 != 0) {
    uVar10 = uVar13;
  }
  if (*(int *)(param_1 + 0x2cc) == 0) {
    if (iVar8 == 1) {
      return 5;
    }
LAB_01ddcb6c:
    if (iVar8 == 0) {
      uVar7 = FUN_01dc00f4(*(undefined8 *)(lVar11 + 0x40),uVar9,uVar10);
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
        if (((local_60[0] != '\0') && (local_5c == uVar9)) && (local_58 == uVar10)) {
          return 3;
        }
      }
      iVar8 = 0;
    }
  }
  else {
    if (iVar8 != 1) goto LAB_01ddcb6c;
    if (uVar9 != 0) {
      return 4;
    }
    if (*(int *)(param_1 + 0x2cc) == 1) {
      uVar12 = (uint)*(byte *)(*(long *)(lVar11 + 0x30) + 0x90);
      if (uVar12 == 0) {
        return 4;
      }
      uVar13 = 0;
      do {
        if (uVar10 != uVar13) {
          lVar6 = (**(code **)(**(long **)(lVar11 + 0x30) + 0x60))(*(long **)(lVar11 + 0x30),uVar13)
          ;
          if (*(long *)(*(long *)(lVar6 + 0x70) + 8) == 0) {
            sVar2 = FUN_00f13ef0(lVar6);
            if (sVar2 != 0) goto LAB_01ddcb28;
          }
          else {
            iVar4 = FUN_00ddf348();
            if (iVar4 != 0) {
LAB_01ddcb28:
              uVar7 = FUN_00cf4cfc(*(undefined8 *)(lVar6 + 0x70));
              if (((uVar7 & 1) == 0) &&
                 ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0x70) + 0x10) + 4) >> 2 & 1) == 0))
              goto LAB_01ddcb6c;
            }
          }
        }
        uVar13 = uVar13 + 1;
        if (uVar12 == uVar13) {
          return 4;
        }
      } while( true );
    }
  }
  lVar11 = FUN_010f26f8(lVar11,iVar8,uVar9,uVar10);
  uVar7 = FUN_00cf4cfc(*(undefined8 *)(lVar11 + 0x70));
  if ((uVar7 & 1) != 0) {
    return 1;
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar11 + 0x70) + 0x10) + 4) >> 2 & 1) != 0) {
    return 1;
  }
  if ((bVar1 & 1) == 0) {
LAB_01ddcc50:
    uVar5 = 0;
  }
  else {
    uVar7 = FUN_01dc7280(1,lVar11);
    if ((uVar7 & 1) == 0) {
      uVar3 = FUN_00cf44f4(*(undefined8 *)(lVar11 + 0x70));
      local_64[0] = uVar3;
      uVar7 = FUN_01dd4ff4(local_64);
      if ((((uVar7 & 1) == 0) && (uVar7 = FUN_01f6cb00(local_64), (uVar7 & 1) == 0)) &&
         (uVar3 != 0x3f3)) goto LAB_01ddcc50;
    }
    uVar5 = 7;
  }
  return uVar5;
}



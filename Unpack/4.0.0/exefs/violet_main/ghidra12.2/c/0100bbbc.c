/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0100bbbc; name: FUN_0100bbbc
 */


void FUN_0100bbbc(ushort *param_1,undefined4 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  long lVar11;
  ushort *puVar12;
  ushort *puVar13;
  
  lVar4 = DAT_048420b0;
  uVar7 = param_3;
  if ((DAT_04842108 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(&DAT_04842108);
    uVar7 = param_3 & 0xffffffff;
    if (iVar6 != 0) {
      FUN_00100190(&LAB_02b6f660,&DAT_048420f8,&PTR_LOOP_04483000,param_2);
      __cxa_guard_release(&DAT_04842108);
      uVar7 = param_3 & 0xffffffff;
    }
  }
  DAT_04842110 = DAT_048420f8;
  FUN_01054a8c(DAT_048420f8,lVar4,uVar7,param_2);
  iVar6 = 0;
  puVar9 = *(ushort **)(DAT_048420b0 + 0x30);
  uVar8 = 0xd;
  do {
    uVar3 = *puVar9;
    *param_1 = uVar3;
    if (uVar3 == 0) {
      return;
    }
    if (uVar3 == 0x10) {
      puVar12 = puVar9 + 1;
      uVar3 = *puVar12;
      uVar1 = uVar3 + 2;
      bVar5 = uVar8 < uVar1;
      uVar8 = uVar8 - uVar1;
      if (bVar5 || uVar8 == 0) {
        *param_1 = 0;
        return;
      }
      uVar10 = uVar3 + 1;
      uVar2 = uVar10 & 7;
      puVar13 = param_1 + 1;
      *puVar13 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar11 = lVar4;
          uVar10 = uVar10 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)param_1 + lVar11 + 4) = *(undefined2 *)((long)puVar9 + lVar11 + 4);
          lVar4 = lVar11 + 2;
        } while (uVar2 != 0);
        puVar13 = (ushort *)((long)param_1 + lVar11 + 4);
        puVar9 = (ushort *)((long)puVar9 + lVar11 + 2);
        puVar12 = puVar9 + 1;
        param_1 = puVar13;
      }
      if (6 < uVar3) {
        do {
          puVar13[1] = puVar9[2];
          puVar13[2] = puVar12[2];
          puVar13[3] = puVar12[3];
          puVar13[4] = puVar12[4];
          puVar13[5] = puVar12[5];
          puVar13[6] = puVar12[6];
          puVar9 = puVar12 + 7;
          puVar13[7] = *puVar9;
          puVar12 = puVar12 + 8;
          uVar10 = uVar10 - 8;
          puVar13 = puVar13 + 8;
          *puVar13 = *puVar12;
          param_1 = puVar13;
        } while (uVar10 != 0);
      }
      puVar9 = puVar12;
      iVar6 = uVar1 + iVar6;
    }
    else {
      param_1 = param_1 + 1;
      puVar9 = puVar9 + 1;
      iVar6 = iVar6 + 1;
      uVar8 = uVar8 - 1;
    }
  } while (uVar8 != 0);
  if (iVar6 != 0) {
    param_1[-1] = 0;
  }
  return;
}



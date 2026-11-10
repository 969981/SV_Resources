/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03183aa0; name: FUN_03183aa0
 */


void FUN_03183aa0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  
  lVar8 = tpidr_el0;
  lVar4 = *(long *)(lVar8 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar4;
  }
  plVar11 = *(long **)(lVar4 + 0x3e0);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
      (**(code **)(lVar8 + 0x18))("InitContext",0xb,*(undefined8 *)(lVar8 + 0x28));
    }
    puVar6 = (undefined8 *)plVar11[2];
    uVar5 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "TtInitContext";
      uVar3 = nn::os::GetSystemTick();
      puVar6[1] = uVar3;
    }
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar6 = (undefined8 *)plVar11[2];
      uVar5 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
  }
  lVar4 = *(long *)(param_1 + 0x28);
  lVar8 = *(long *)(lVar4 + 0x18);
  iVar1 = *(int *)(lVar8 + 0x68);
  iVar10 = *(int *)(lVar8 + 0x58);
  iVar2 = *(int *)(lVar8 + 0x78);
  lVar8 = (long)iVar1;
  iVar9 = (int)(lVar8 + 4);
  if ((int)(*(uint *)(lVar4 + 0x34) & 0x7fffffff) < iVar9) {
    FUN_03089140(lVar4 + 0x28,PTR_PTR_047d1a50,lVar8 + 4);
  }
  if (*(int *)(lVar4 + 0x30) != iVar9) {
    *(int *)(lVar4 + 0x30) = iVar9;
  }
  lVar12 = *(long *)(param_1 + 0x28);
  lVar4 = (long)iVar10 + 4;
  iVar10 = (int)lVar4;
  if ((int)(*(uint *)(lVar12 + 0x44) & 0x7fffffff) < iVar10) {
    FUN_03089140(lVar12 + 0x38,PTR_PTR_047d1a50,lVar4);
  }
  if (*(int *)(lVar12 + 0x40) != iVar10) {
    *(int *)(lVar12 + 0x40) = iVar10;
  }
  lVar12 = *(long *)(param_1 + 0x28);
  lVar4 = (long)iVar2 + 4;
  iVar10 = (int)lVar4;
  if ((int)(*(uint *)(lVar12 + 0x54) & 0x7fffffff) < iVar10) {
    FUN_03089140(lVar12 + 0x48,PTR_PTR_047d1a50,lVar4);
  }
  if (*(int *)(lVar12 + 0x50) != iVar10) {
    *(int *)(lVar12 + 0x50) = iVar10;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if ((int)(*(uint *)(lVar4 + 100) & 0x7fffffff) < iVar1) {
    FUN_03187e78(lVar4 + 0x58,lVar8);
  }
  iVar10 = *(int *)(lVar4 + 0x60);
  lVar12 = (long)iVar10;
  if (iVar10 < iVar1) {
    lVar7 = *(long *)(lVar4 + 0x58);
    puVar6 = (undefined8 *)(lVar7 + lVar12 * 0x70);
    *(int *)(lVar4 + 0x60) = iVar1;
    do {
      *puVar6 = 0;
      puVar6[1] = 0x8000000000000000;
      *(undefined4 *)(puVar6 + 6) = 0x7fffffff;
      *(undefined1 *)((long)puVar6 + 0x34) = 0;
      puVar6[2] = 0;
      puVar6[3] = 0x8000000000000000;
      puVar6[4] = 0;
      puVar6[5] = 0x8000000000000000;
      puVar6[7] = 0;
      puVar6[8] = 0x8000000000000000;
      puVar6 = puVar6 + 0xe;
    } while (puVar6 != (undefined8 *)(lVar7 + lVar8 * 0x70));
  }
  else if (iVar1 < iVar10) {
    *(int *)(lVar4 + 0x60) = iVar1;
    lVar4 = lVar12 * 0x70 + *(long *)(lVar4 + 0x58);
    lVar8 = lVar12 * -0x70 + lVar8 * 0x70;
    do {
      lVar4 = lVar4 + -0x70;
      FUN_031839ac(lVar4);
      lVar8 = lVar8 + 0x70;
    } while (lVar8 != 0);
  }
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar6 = (undefined8 *)plVar11[2];
      uVar5 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
    puVar6 = (undefined8 *)plVar11[2];
    uVar5 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = &DAT_03c2d363;
      uVar3 = nn::os::GetSystemTick();
      puVar6[1] = uVar3;
    }
    if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
      (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
    }
  }
  return;
}



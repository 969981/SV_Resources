/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031fa694; name: FUN_031fa694
 */


undefined1 * FUN_031fa694(long param_1,undefined1 *param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulong uVar7;
  code *pcVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  
  plVar1 = (long *)(param_1 + 0x18);
  local_58 = param_2;
  lVar4 = FUN_031fd7ec(plVar1,&local_58);
  puVar2 = PTR_DAT_047d1a08;
  if (lVar4 == 0) {
    uVar10 = 0;
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (ulong)*(uint *)(lVar4 + 4);
    uVar10 = (lVar4 - *(long *)(param_1 + 0x28)) * 0x20000000;
  }
  if ((int)(uVar7 | uVar10) < 0) {
    local_58 = (undefined1 *)0x28;
    puVar5 = (undefined1 *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    pcVar8 = *(code **)(puVar2 + 0x10);
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(puVar5,"CompiledProgram");
    }
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 0x10) = 0x8000000000000000;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined8 *)(puVar5 + 0x20) = 0x8000000000000000;
    local_58 = param_2;
    local_48 = puVar5;
    FUN_031faba8(plVar1,&local_58,&local_48);
    local_58 = (undefined1 *)0x0;
    local_50 = -0x8000000000000000;
    iVar3 = FUN_031fac3c(param_1,&local_58,param_2,param_2);
    if (iVar3 < 0) {
      local_48 = param_2;
      lVar4 = FUN_031fd7ec(plVar1,&local_48);
      if (lVar4 == 0) {
        uVar9 = 0;
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(uint *)(lVar4 + 4);
        uVar9 = ((int)lVar4 - (int)*(undefined8 *)(param_1 + 0x28)) * 0x20000000;
      }
      puVar12 = (undefined1 *)0x0;
      *(undefined8 *)(*plVar1 + ((long)((ulong)(uVar6 | uVar9) << 0x20) >> 0x1c) + 8) = 0;
      puVar11 = puVar5;
    }
    else {
      FUN_031fb210(puVar5,&local_58);
      puVar11 = (undefined1 *)0x0;
      puVar12 = puVar5;
    }
    puVar5 = local_58;
    if ((int)local_50 != 0) {
      lVar4 = (long)(int)local_50 * 0x38;
      do {
        (**(code **)(*(long *)(puVar5 + lVar4 + -0x38) + 8))();
        lVar4 = lVar4 + -0x38;
      } while (lVar4 != 0);
    }
    lVar4 = local_50;
    uVar10 = (ulong)local_50._4_4_;
    local_50 = (ulong)local_50._4_4_ << 0x20;
    if ((-1 < lVar4) && (local_58 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_58,uVar10 * 0x38);
    }
    if (puVar11 != (undefined1 *)0x0) {
      iVar3 = *(int *)(puVar11 + 0x10);
      if (iVar3 != 0) {
        iVar13 = 0;
        do {
          (**(code **)(*(long *)(*(long *)(puVar11 + 8) + (long)iVar13 * 0x38) + 8))();
          iVar13 = iVar13 + 1;
        } while (iVar3 != iVar13);
      }
      *(undefined4 *)(puVar11 + 0x20) = 0;
      if ((-1 < *(int *)(puVar11 + 0x24)) && (*(long *)(puVar11 + 0x18) != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
      }
      *(undefined8 *)(puVar11 + 0x18) = 0;
      *(undefined4 *)(puVar11 + 0x24) = 0x80000000;
      *(undefined4 *)(puVar11 + 0x10) = 0;
      if ((-1 < (int)*(uint *)(puVar11 + 0x14)) && (*(long *)(puVar11 + 8) != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                  (PTR_PTR_047d1a50,*(long *)(puVar11 + 8),(ulong)*(uint *)(puVar11 + 0x14) * 0x38);
      }
      *(undefined8 *)(puVar11 + 8) = 0;
      *(undefined4 *)(puVar11 + 0x14) = 0x80000000;
      (**(code **)(puVar2 + 8))(0,puVar11,0);
    }
  }
  else {
    puVar12 = *(undefined1 **)(*plVar1 + ((long)((uVar7 | uVar10) << 0x20) >> 0x1c) + 8);
  }
  return puVar12;
}



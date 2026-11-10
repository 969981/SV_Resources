/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031fa91c; name: FUN_031fa91c
 */


undefined1 * FUN_031fa91c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  uint uVar6;
  code *pcVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  plVar1 = (long *)(param_1 + 0x38);
  local_60 = param_2;
  uStack_58 = param_3;
  lVar4 = FUN_031fdaac(plVar1,&local_60);
  puVar2 = PTR_DAT_047d1a08;
  if (lVar4 == 0) {
    uVar9 = 0;
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(uint *)(lVar4 + 4);
    uVar9 = ((int)lVar4 - (int)*(undefined8 *)(param_1 + 0x48)) * 0x20000000;
  }
  if ((int)(uVar6 | uVar9) < 0) {
    local_70 = (undefined1 *)0x28;
    puVar5 = (undefined1 *)(**(code **)PTR_DAT_047d1a08)(0,&local_70,0);
    pcVar7 = *(code **)(puVar2 + 0x10);
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(puVar5,"CompiledProgram");
    }
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 0x10) = 0x8000000000000000;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined8 *)(puVar5 + 0x20) = 0x8000000000000000;
    local_70 = puVar5;
    FUN_031fb3b4(plVar1,&local_60,&local_70);
    local_70 = (undefined1 *)0x0;
    local_68 = -0x8000000000000000;
    iVar3 = FUN_031fac3c(param_1,&local_70,param_2,param_3);
    if (iVar3 < 0) {
      lVar4 = FUN_031fdaac(plVar1,&local_60);
      if (lVar4 == 0) {
        uVar9 = 0;
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(uint *)(lVar4 + 4);
        uVar9 = ((int)lVar4 - (int)*(undefined8 *)(param_1 + 0x48)) * 0x20000000;
      }
      puVar11 = (undefined1 *)0x0;
      *(undefined8 *)(*plVar1 + (long)(int)(uVar6 | uVar9) * 0x18 + 0x10) = 0;
      puVar10 = puVar5;
    }
    else {
      FUN_031fb210(puVar5,&local_70);
      puVar10 = (undefined1 *)0x0;
      puVar11 = puVar5;
    }
    puVar5 = local_70;
    if ((int)local_68 != 0) {
      lVar4 = (long)(int)local_68 * 0x38;
      do {
        (**(code **)(*(long *)(puVar5 + lVar4 + -0x38) + 8))();
        lVar4 = lVar4 + -0x38;
      } while (lVar4 != 0);
    }
    lVar4 = local_68;
    uVar8 = (ulong)local_68._4_4_;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    if ((-1 < lVar4) && (local_70 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_70,uVar8 * 0x38);
    }
    if (puVar10 != (undefined1 *)0x0) {
      iVar3 = *(int *)(puVar10 + 0x10);
      if (iVar3 != 0) {
        iVar12 = 0;
        do {
          (**(code **)(*(long *)(*(long *)(puVar10 + 8) + (long)iVar12 * 0x38) + 8))();
          iVar12 = iVar12 + 1;
        } while (iVar3 != iVar12);
      }
      *(undefined4 *)(puVar10 + 0x20) = 0;
      if ((-1 < *(int *)(puVar10 + 0x24)) && (*(long *)(puVar10 + 0x18) != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
      }
      *(undefined8 *)(puVar10 + 0x18) = 0;
      *(undefined4 *)(puVar10 + 0x24) = 0x80000000;
      *(undefined4 *)(puVar10 + 0x10) = 0;
      if ((-1 < (int)*(uint *)(puVar10 + 0x14)) && (*(long *)(puVar10 + 8) != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                  (PTR_PTR_047d1a50,*(long *)(puVar10 + 8),(ulong)*(uint *)(puVar10 + 0x14) * 0x38);
      }
      *(undefined8 *)(puVar10 + 8) = 0;
      *(undefined4 *)(puVar10 + 0x14) = 0x80000000;
      (**(code **)(puVar2 + 8))(0,puVar10,0);
    }
  }
  else {
    puVar11 = *(undefined1 **)(*plVar1 + (long)(int)(uVar6 | uVar9) * 0x18 + 0x10);
  }
  return puVar11;
}



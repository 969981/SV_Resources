/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ecbe8; name: FUN_004ecbe8
 */


void FUN_004ecbe8(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  long *local_68;
  
  puVar4 = PTR_DAT_047cd750;
  puVar3 = PTR_LAB_047cd728;
  lVar7 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar7 + 0x20);
  if (0 < *(int *)(lVar9 + 0x68)) {
    lVar10 = 0;
    uVar8 = *(undefined8 *)(lVar7 + 0x10);
    lVar11 = 0;
    while( true ) {
      lVar1 = *(long *)(lVar9 + 0x28) + lVar10;
      iVar2 = *(int *)(*(long *)(lVar7 + 0x28) + lVar11 * 4);
      puVar5 = *(ulong **)(lVar1 + 0x30);
      if (puVar5 != (ulong *)0x0) {
        puStack_80 = puVar3;
        local_88 = lVar1;
        if (*puVar5 != 0xffffffffffffffff) {
          local_70 = &puStack_80;
          local_68 = &local_88;
          local_78 = &local_70;
          std::__call_once(puVar5,&local_78,(_func_void_void_ptr *)&LAB_004ed5a0);
        }
      }
      if ((*(int *)(puVar4 + (ulong)*(uint *)(lVar1 + 0x38) * 4) == 10) &&
         (*(int *)(lVar1 + 0x3c) != 3)) {
        uVar6 = FUN_004a5124(lVar1);
        uVar6 = FUN_004ebcc8(uVar8,uVar6);
        *(undefined8 *)(param_1 + iVar2) = uVar6;
      }
      lVar11 = lVar11 + 1;
      if (*(int *)(lVar9 + 0x68) <= lVar11) break;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar10 = lVar10 + 0x98;
    }
  }
  return;
}



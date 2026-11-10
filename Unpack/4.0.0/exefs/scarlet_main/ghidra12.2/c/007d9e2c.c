/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d9e2c; name: FUN_007d9e2c
 */


void FUN_007d9e2c(undefined8 param_1,int *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  
  puVar3 = PTR_DAT_047d0868;
  *(int *)(PTR_DAT_047d0868 + 0x3a8) = *param_2;
  uVar6 = FUN_00794af4(param_2);
  *(undefined4 *)(puVar3 + 0x3ac) = uVar6;
  puVar2 = PTR_DAT_047d0860;
  if (*param_2 == 0) {
    lVar7 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
    lVar7 = *(long *)(lVar7 + 0x98);
    if (lVar7 != 0) {
      puVar3[0x3c0] = *(undefined1 *)(lVar7 + 0xf0);
      *(undefined2 *)(puVar3 + 0x3c2) = *(undefined2 *)(lVar7 + 0x38);
      puVar4 = PTR_DAT_047d0a08;
      uVar5 = FUN_00d0ca58(*(undefined8 *)PTR_DAT_047d0a08);
      lVar10 = *(long *)puVar4;
      puVar3[0x3a6] = uVar5;
      uVar8 = (**(code **)(**(long **)(lVar10 + 0x18) + 0x160))();
      if ((uVar8 & 1) != 0) {
        plVar9 = (long *)FUN_01f7c4e8(*(undefined8 *)puVar2);
        uVar11 = 0;
        iVar12 = 0;
        do {
          lVar10 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar11);
          if (lVar10 != 0 && lVar7 != lVar10) {
            if (iVar12 < 0xf) {
              *(undefined2 *)(puVar3 + (long)iVar12 * 2 + 0x3cc) = *(undefined2 *)(lVar10 + 0x38);
            }
            iVar12 = iVar12 + 1;
          }
          uVar1 = uVar11 & 0xff;
          uVar11 = uVar11 + 1;
        } while (uVar1 < 0x17);
        puVar3[0x3ea] = (char)iVar12;
        return;
      }
    }
  }
  return;
}



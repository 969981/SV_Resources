/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034eaf24; name: FUN_034eaf24
 */


void FUN_034eaf24(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  
  FUN_034eb100(param_1,1);
  puVar7 = PTR_DAT_047e6cb8;
  lVar3 = *(long *)(*(long *)(*param_1 + 8) + 0x28);
  if ((*(long *)(*(long *)(*param_1 + 8) + 0x30) == 0) && (*(long *)PTR_DAT_047e6cb8 == 0)) {
    plVar8 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)puVar7 = 0;
    }
    else {
      *plVar8 = (long)(PTR_DAT_047e6e40 + 0x10);
      plVar8[1] = 0;
      puVar1 = PTR_DAT_047e6958;
      lVar10 = *(long *)(PTR_DAT_047e6958 + 8);
      plVar8[2] = 0;
      plVar8[3] = lVar10;
      plVar2 = (long *)(puVar1 + 0x10);
      if (*(long *)(puVar1 + 0x10) != 0) {
        plVar2 = (long *)(lVar10 + 0x10);
      }
      *plVar2 = (long)plVar8;
      *(long **)(puVar1 + 8) = plVar8;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      puVar1 = PTR_DAT_047e6e48 + 0x10;
      plVar8[8] = 0;
      plVar8[9] = 0;
      *plVar8 = (long)puVar1;
      plVar8[0xc] = 0;
      plVar8[0xd] = 0;
      plVar8[0x12] = 0;
      plVar8[0x13] = 0;
      plVar8[0x16] = 0;
      plVar8[0x17] = 0;
      plVar8[0x1a] = 0;
      plVar8[0x1b] = 0;
      *(long **)puVar7 = plVar8;
      *(undefined2 *)(plVar8 + 0x1c) = 0x101;
    }
  }
  FUN_034eb46c(param_1,lVar3,param_1 + 2);
  FUN_034eb100(param_1,1);
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 != 0xffffffff) {
    uVar5 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
    if (uVar5 != 0) {
      lVar10 = *(long *)(*param_1 + 0x20);
      lVar11 = *(long *)(lVar10 + (ulong)uVar4 * 0x78 + 0x60);
      uVar6 = 0;
      uVar9 = (uint)lVar11;
      if (uVar5 != 0) {
        uVar6 = uVar9 / uVar5;
      }
      for (plVar8 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                              (ulong)(uVar9 - uVar6 * uVar5) * 8); plVar8 != (long *)0x0;
          plVar8 = (long *)*plVar8) {
        if (plVar8[1] == lVar11) {
          if ((plVar8[2] != 0) && (*(long *)(plVar8[2] + 0x40) != 0)) {
            fVar12 = *(float *)((long)param_1 + 0x44);
            if (3.4028235e+38 <= fVar12) {
              fVar12 = 0.0;
            }
            FUN_034eb9c8(fVar12,(int)param_1[9],*param_1,lVar10 + (ulong)uVar4 * 0x78);
          }
          break;
        }
      }
    }
  }
  *(byte *)(lVar3 + 0x54) = *(byte *)(lVar3 + 0x54) & 0xfe;
  if ((long *)param_1[6] != (long *)0x0) {
    *(undefined4 *)(param_1 + 7) = 0;
    if (param_1 + 2 != (long *)param_1[6]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
    }
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  return;
}



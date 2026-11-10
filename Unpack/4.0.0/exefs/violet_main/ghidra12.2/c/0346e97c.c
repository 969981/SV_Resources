/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346e97c; name: FUN_0346e97c
 */


undefined8 FUN_0346e97c(long param_1,ulong param_2,void *param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  
  puVar5 = PTR_DAT_047e6cb8;
  plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x30);
  if ((plVar6 == (long *)0x0) && (plVar6 = *(long **)PTR_DAT_047e6cb8, plVar6 == (long *)0x0)) {
    plVar6 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
    *plVar6 = (long)(PTR_DAT_047e6e40 + 0x10);
    plVar6[1] = 0;
    puVar1 = PTR_DAT_047e6958;
    lVar9 = *(long *)(PTR_DAT_047e6958 + 8);
    plVar6[2] = 0;
    plVar6[3] = lVar9;
    plVar3 = (long *)(puVar1 + 0x10);
    if (*(long *)(puVar1 + 0x10) != 0) {
      plVar3 = (long *)(lVar9 + 0x10);
    }
    *plVar3 = (long)plVar6;
    *(long **)(puVar1 + 8) = plVar6;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    puVar1 = PTR_DAT_047e6e48 + 0x10;
    plVar6[8] = 0;
    plVar6[9] = 0;
    *plVar6 = (long)puVar1;
    plVar6[0xc] = 0;
    plVar6[0xd] = 0;
    plVar6[0x12] = 0;
    plVar6[0x13] = 0;
    plVar6[0x16] = 0;
    plVar6[0x17] = 0;
    plVar6[0x1a] = 0;
    plVar6[0x1b] = 0;
    *(long **)puVar5 = plVar6;
    *(undefined2 *)(plVar6 + 0x1c) = 0x101;
  }
  uVar7 = *(uint *)(plVar6 + 0x1b);
  if (uVar7 != 0) {
    iVar8 = 0;
    do {
      iVar2 = iVar8 + (uVar7 >> 1);
      uVar10 = *(ulong *)(plVar6[0x1a] + (long)iVar2 * 8);
      if (uVar10 == param_2) {
        uVar7 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
        if (uVar7 == 0) {
          return 2;
        }
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = (uint)param_2 / uVar7;
        }
        plVar6 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                           (ulong)((uint)param_2 - uVar4 * uVar7) * 8);
        while( true ) {
          if (plVar6 == (long *)0x0) {
            return 2;
          }
          if (plVar6[1] == param_2) break;
          plVar6 = (long *)*plVar6;
        }
        if (plVar6[2] == 0) {
          return 2;
        }
        lVar9 = *(long *)(plVar6[2] + 0x40);
        if (lVar9 == 0) {
          return 2;
        }
        memcpy(param_3,(void *)(lVar9 + 0x60),0x29);
        return 1;
      }
      if (uVar10 < param_2) {
        iVar8 = iVar2 + 1;
      }
      uVar7 = uVar7 - (uVar10 < param_2) >> 1;
    } while (uVar7 != 0);
  }
  return 2;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c7cd4; name: FUN_034c7cd4
 */


void FUN_034c7cd4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  long *plVar10;
  ulong *puVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  
  puVar8 = PTR_DAT_047e6cb8;
  puVar7 = PTR_DAT_047e6958;
  puVar6 = PTR_DAT_047e2fd0;
  lVar14 = *(long *)(PTR_DAT_047e6f98 + 0x10);
  if (lVar14 != 0) {
    puVar1 = PTR_DAT_047e6e40 + 0x10;
    puVar2 = PTR_DAT_047e6e48 + 0x10;
    do {
      plVar10 = *(long **)(*(long *)(lVar14 + 8) + 0x30);
      if ((plVar10 == (long *)0x0) && (plVar10 = *(long **)puVar8, plVar10 == (long *)0x0)) {
        plVar10 = (long *)(**(code **)(puVar6 + 0x10))(4,0xf0);
        if (plVar10 == (long *)0x0) {
          *(undefined8 *)puVar8 = 0;
        }
        else {
          *plVar10 = (long)puVar1;
          plVar10[1] = 0;
          lVar12 = *(long *)(puVar7 + 8);
          plVar10[2] = 0;
          plVar10[3] = lVar12;
          plVar5 = (long *)(puVar7 + 0x10);
          if (*(long *)(puVar7 + 0x10) != 0) {
            plVar5 = (long *)(lVar12 + 0x10);
          }
          *plVar5 = (long)plVar10;
          *(long **)(puVar7 + 8) = plVar10;
          *(int *)puVar7 = *(int *)puVar7 + 1;
          *plVar10 = (long)puVar2;
          plVar10[8] = 0;
          plVar10[9] = 0;
          plVar10[0xc] = 0;
          plVar10[0xd] = 0;
          plVar10[0x12] = 0;
          plVar10[0x13] = 0;
          plVar10[0x16] = 0;
          plVar10[0x17] = 0;
          plVar10[0x1a] = 0;
          plVar10[0x1b] = 0;
          *(long **)puVar8 = plVar10;
          *(undefined2 *)(plVar10 + 0x1c) = 0x101;
        }
      }
      if (*(uint *)(param_2 + 0x18) != 0) {
        puVar11 = *(ulong **)(param_2 + 0x10);
        puVar3 = puVar11 + *(uint *)(param_2 + 0x18);
        puVar13 = (ulong *)plVar10[0x1a];
        puVar4 = puVar13 + *(uint *)(plVar10 + 0x1b);
        do {
          if (puVar13 == puVar4) break;
          if (*puVar11 == *puVar13) {
            *(byte *)(lVar14 + 0x54) = *(byte *)(lVar14 + 0x54) | 1;
            break;
          }
          puVar9 = puVar11 + 1;
          if (*puVar13 <= *puVar11) {
            puVar13 = puVar13 + 1;
            puVar9 = puVar11;
          }
          puVar11 = puVar9;
        } while (puVar11 != puVar3);
      }
      lVar14 = *(long *)(lVar14 + 0x10);
    } while (lVar14 != 0);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e67f4; name: FUN_002e67f4
 */


void FUN_002e67f4(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined *puVar3;
  long *plVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  
  if (0x10fffe < (int)param_2) {
    return;
  }
  if ((int)param_2 < 0x7a) {
    if ((int)param_2 < 0x61) {
      param_1[1] = 0;
      if ((int)param_2 < 0x5a) {
        if ((int)param_2 < 0x41) {
          *param_1 = 0;
          puVar5 = *(uint **)(param_1 + 6);
          puVar3 = PTR_LAB_047cba48;
        }
        else {
          *param_1 = *param_1 & 0x3ffffffU >> (ulong)(0x5a - param_2 & 0x1f);
          puVar5 = *(uint **)(param_1 + 6);
          puVar3 = PTR_LAB_047cba48;
        }
        goto joined_r0x002e6880;
      }
    }
    else {
      param_1[1] = param_1[1] & 0x3ffffffU >> (ulong)(0x7a - param_2 & 0x1f);
    }
  }
  puVar5 = *(uint **)(param_1 + 6);
  puVar3 = PTR_LAB_047cba48;
joined_r0x002e6880:
  PTR_LAB_047cba48 = puVar3;
  if (puVar5 != (uint *)0x0) {
    puVar1 = param_1 + 6;
    do {
      puVar8 = puVar5;
      puVar13 = puVar1;
      do {
        puVar2 = puVar8;
        if ((int)puVar8[8] <= (int)param_2) {
          puVar2 = puVar13;
        }
        puVar8 = *(uint **)(puVar8 + (ulong)((int)puVar8[8] <= (int)param_2) * 2);
        puVar13 = puVar2;
      } while (puVar8 != (uint *)0x0);
      if (puVar2 == puVar1) {
        return;
      }
      if (0x10ffff < (int)puVar2[7]) {
        return;
      }
      uVar12 = *(ulong *)(puVar2 + 7);
      plVar4 = *(long **)(puVar2 + 2);
      if (*(long **)(puVar2 + 2) == (long *)0x0) {
        puVar8 = puVar2 + 4;
        plVar9 = *(long **)puVar8;
        if ((uint *)*plVar9 != puVar2) {
          do {
            lVar10 = *(long *)puVar8;
            puVar8 = (uint *)(lVar10 + 0x10);
            plVar9 = *(long **)puVar8;
          } while (*plVar9 != lVar10);
        }
      }
      else {
        do {
          plVar9 = plVar4;
          plVar4 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      if (*(uint **)(param_1 + 4) == puVar2) {
        *(long **)(param_1 + 4) = plVar9;
      }
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
      FUN_01336080(puVar5,puVar2);
      FUN_0049e790(puVar3,puVar2);
      iVar11 = (int)uVar12;
      uVar7 = ~(uint)(uVar12 >> 0x20) + iVar11 + param_1[2];
      param_1[2] = uVar7;
      if (iVar11 <= (int)param_2) {
        puVar5 = puVar1;
        if (*(uint **)puVar1 == (uint *)0x0) {
          puVar8 = puVar1;
LAB_002e69f0:
          lVar10 = *(long *)puVar5;
        }
        else {
          puVar8 = *(uint **)puVar1;
          while( true ) {
            while ((int)puVar8[7] <= (int)param_2) {
              if (iVar11 <= (int)puVar8[8]) goto LAB_002e69f0;
              puVar5 = puVar8 + 2;
              if (*(uint **)puVar5 == (uint *)0x0) goto LAB_002e69f0;
              puVar8 = *(uint **)puVar5;
            }
            puVar5 = puVar8;
            if (*(uint **)puVar8 == (uint *)0x0) break;
            puVar8 = *(uint **)puVar8;
          }
          lVar10 = *(long *)puVar8;
        }
        if (lVar10 == 0) {
          puVar6 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
          *(ulong *)((long)puVar6 + 0x1c) = uVar12 & 0xffffffff | (ulong)param_2 << 0x20;
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = puVar8;
          *(undefined8 **)puVar5 = puVar6;
          if (**(long **)(param_1 + 4) != 0) {
            *(long *)(param_1 + 4) = **(long **)(param_1 + 4);
            puVar6 = *(undefined8 **)puVar5;
          }
          FUN_010108e0(*(undefined8 *)(param_1 + 6),puVar6);
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
          uVar7 = param_1[2];
        }
        param_1[2] = ((param_2 + 1) - iVar11) + uVar7;
      }
      puVar5 = *(uint **)puVar1;
    } while (puVar5 != (uint *)0x0);
  }
  return;
}



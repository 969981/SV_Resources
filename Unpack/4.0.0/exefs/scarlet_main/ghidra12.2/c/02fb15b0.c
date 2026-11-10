/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fb15b0; name: FUN_02fb15b0
 */


void FUN_02fb15b0(ushort *param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ushort *puVar11;
  uint *puVar12;
  ushort *puVar13;
  ushort *local_410 [64];
  ushort *local_210 [64];
  
  if (param_2 < 2) {
    return;
  }
  local_410[0] = param_1 + (ulong)(param_2 - 1) * 6;
  uVar9 = 0;
  local_210[0] = param_1;
LAB_02fb15f4:
  lVar10 = (long)(int)uVar9;
LAB_02fb15f8:
  puVar11 = local_410[0];
LAB_02fb15fc:
  local_410[0] = puVar11;
  puVar12 = (uint *)(param_1 +
                    (((long)local_410[0] - (long)param_1 >> 2) * -0x5555555555555555 >> 1) * 6);
  uVar3 = puVar12[2];
  uVar9 = *puVar12;
  uVar2 = puVar12[1];
  puVar11 = local_410[0];
  puVar13 = param_1;
LAB_02fb1620:
  while( true ) {
    bVar6 = uVar9 >> 0x10 <= (uint)puVar13[1];
    if ((((uint)puVar13[1] == uVar9 >> 0x10) &&
        (bVar6 = (uVar9 & 0xffff) <= (uint)*puVar13, (uint)*puVar13 == (uVar9 & 0xffff))) &&
       (bVar6 = uVar3 <= *(uint *)(puVar13 + 4), *(uint *)(puVar13 + 4) == uVar3)) {
      bVar6 = uVar2 <= *(uint *)(puVar13 + 2);
    }
    if (bVar6) break;
    puVar13 = puVar13 + 6;
  }
  do {
    bVar7 = uVar9 >> 0x10 <= (uint)puVar11[1];
    bVar6 = (uint)puVar11[1] == uVar9 >> 0x10;
    if (bVar6) {
      bVar7 = (uVar9 & 0xffff) <= (uint)*puVar11;
      bVar6 = (uint)*puVar11 == (uVar9 & 0xffff);
      if (!bVar6) goto LAB_02fb1658;
      bVar6 = *(uint *)(puVar11 + 4) <= uVar3;
      if (uVar3 == *(uint *)(puVar11 + 4)) {
        bVar6 = *(uint *)(puVar11 + 2) <= uVar2;
      }
      if (bVar6) break;
    }
    else {
LAB_02fb1658:
      if (!bVar7 || bVar6) break;
    }
    puVar11 = puVar11 + -6;
  } while( true );
  if (puVar13 <= puVar11) {
    if (puVar13 != puVar11) {
      uVar8 = *(undefined8 *)puVar11;
      *(undefined4 *)puVar11 = *(undefined4 *)puVar13;
      *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar13 + 2);
      uVar4 = *(undefined4 *)(puVar11 + 4);
      *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(puVar13 + 4);
      *(undefined8 *)puVar13 = uVar8;
      *(undefined4 *)(puVar13 + 4) = uVar4;
    }
    puVar11 = puVar11 + -6;
    puVar13 = puVar13 + 6;
  }
  if (puVar11 < puVar13) goto code_r0x02fb16d8;
  goto LAB_02fb1620;
code_r0x02fb16d8:
  if (puVar11 <= param_1) {
    param_1 = puVar13;
    if (puVar13 < local_410[0]) goto LAB_02fb15f8;
    uVar9 = (int)lVar10 - 1;
    if ((int)lVar10 < 1) {
      return;
    }
    param_1 = local_210[uVar9];
    local_410[0] = local_410[uVar9];
    goto LAB_02fb15f4;
  }
  if (puVar13 < local_410[0]) goto code_r0x02fb16e8;
  goto LAB_02fb15fc;
code_r0x02fb16e8:
  puVar1 = puVar11;
  puVar5 = param_1;
  if ((long)local_410[0] - (long)puVar13 <= (long)puVar11 - (long)param_1) {
    puVar1 = local_410[0];
    puVar5 = puVar13;
    local_410[0] = puVar11;
    puVar13 = param_1;
  }
  local_210[lVar10] = puVar13;
  local_410[lVar10] = local_410[0];
  lVar10 = lVar10 + 1;
  param_1 = puVar5;
  local_410[0] = puVar1;
  goto LAB_02fb15f8;
}



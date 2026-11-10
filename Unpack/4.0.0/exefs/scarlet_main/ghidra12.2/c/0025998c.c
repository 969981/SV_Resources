/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025998c; name: FUN_0025998c
 */


void FUN_0025998c(undefined8 *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  size_t sVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  byte bVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *local_48;
  
  pbVar8 = (byte *)*param_3;
  pbVar9 = *(byte **)(pbVar8 + 0x10);
  bVar4 = *pbVar8;
  if ((bVar4 & 1) == 0) {
    pbVar9 = pbVar8 + 1;
  }
  bVar11 = *pbVar9;
  if (bVar11 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    pbVar12 = pbVar9;
    do {
      pbVar12 = pbVar12 + 1;
      lVar10 = lVar10 * 5 + (ulong)bVar11;
      bVar11 = *pbVar12;
    } while (bVar11 != 0);
  }
  uVar14 = *(long *)(param_2 + 8) - 1U & *(long *)(param_2 + 0x10) + lVar10;
  lVar10 = *(long *)(param_2 + 0x20);
  puVar13 = *(undefined8 **)(lVar10 + uVar14 * 8);
  if (puVar13 != (undefined8 *)0x0) {
    if (puVar13 == *(undefined8 **)(lVar10 + (uVar14 ^ 1) * 8)) {
      uVar14 = uVar14 & 0xfffffffffffffffe;
      lVar10 = *(long *)(lVar10 + uVar14 * 8);
      puVar13 = (undefined8 *)(lVar10 + 8);
      local_48 = param_3;
      puVar6 = (undefined8 *)FUN_00259b80(lVar10,&local_48,*puVar13,puVar13);
      if (puVar13 != puVar6) {
        puVar13 = (undefined8 *)puVar6[4];
        pbVar8 = (byte *)*local_48;
        pbVar9 = (byte *)*puVar13;
        bVar4 = *pbVar9;
        uVar7 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar7 = *(ulong *)(pbVar9 + 8);
        }
        bVar11 = *pbVar8;
        uVar2 = (ulong)(bVar11 >> 1);
        if ((bVar11 & 1) != 0) {
          uVar2 = *(ulong *)(pbVar8 + 8);
        }
        sVar3 = uVar7;
        if (uVar2 <= uVar7) {
          sVar3 = uVar2;
        }
        if (sVar3 == 0) {
LAB_00259b54:
          if (uVar2 < uVar7) goto LAB_00259b5c;
        }
        else {
          pbVar12 = *(byte **)(pbVar8 + 0x10);
          if ((bVar11 & 1) == 0) {
            pbVar12 = pbVar8 + 1;
          }
          pbVar8 = *(byte **)(pbVar9 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar8 = pbVar9 + 1;
          }
          iVar5 = memcmp(pbVar12,pbVar8,sVar3);
          if (iVar5 == 0) goto LAB_00259b54;
          if (iVar5 < 0) goto LAB_00259b5c;
        }
        if (param_4 != (long *)0x0) {
          *param_4 = (long)puVar6;
          puVar13 = (undefined8 *)puVar6[4];
        }
LAB_00259b48:
        *param_1 = puVar13;
        param_1[1] = param_2;
        param_1[2] = uVar14;
        goto LAB_00259b64;
      }
    }
    else {
      sVar3 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar3 = *(size_t *)(pbVar8 + 8);
      }
      do {
        pbVar8 = (byte *)*puVar13;
        bVar4 = *pbVar8;
        uVar7 = (ulong)(bVar4 >> 1);
        sVar1 = uVar7;
        if ((bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar8 + 8);
        }
        if (sVar1 == sVar3) {
          pbVar12 = *(byte **)(pbVar8 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar12 = pbVar8 + 1;
          }
          if ((bVar4 & 1) == 0) {
            if (sVar3 == 0) goto LAB_00259b48;
            pbVar12 = pbVar9;
            while (pbVar8 = pbVar8 + 1, *pbVar8 == *pbVar12) {
              uVar7 = uVar7 - 1;
              pbVar12 = pbVar12 + 1;
              if (uVar7 == 0) goto LAB_00259b48;
            }
          }
          else if ((sVar3 == 0) || (iVar5 = memcmp(pbVar12,pbVar9,sVar3), iVar5 == 0))
          goto LAB_00259b48;
        }
        puVar13 = (undefined8 *)puVar13[2];
      } while (puVar13 != (undefined8 *)0x0);
    }
  }
LAB_00259b5c:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_00259b64:
  param_1[3] = uVar14;
  return;
}



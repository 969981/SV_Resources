/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03418260; name: FUN_03418260
 */


void FUN_03418260(uint param_1,uint param_2,undefined2 param_3,long param_4,long *param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  
  uVar11 = param_2;
  if ((param_2 & 0xffff) <= (param_1 & 0xffff)) {
    uVar11 = param_1;
    param_1 = param_2;
  }
  uVar3 = *(uint *)(param_5 + 1);
  lVar5 = *param_5;
  if (uVar3 == 0) {
    uVar10 = *(uint *)((long)param_5 + 0xc);
    if (lVar5 != 0) {
      uVar16 = 0;
      if (uVar10 == 0) goto LAB_0341832c;
      goto LAB_03418364;
    }
    if (uVar10 != 0) {
      puVar8 = (uint *)0x0;
      *(undefined4 *)(param_5 + 1) = 1;
      goto LAB_03418470;
    }
    lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,0x18);
    if (lVar5 == 0) goto LAB_0341846c;
    uVar3 = *(uint *)(param_5 + 1);
    *(uint *)(param_5 + 1) = uVar3 + 1;
    *(undefined4 *)((long)param_5 + 0xc) = 1;
    puVar8 = (uint *)(lVar5 + (ulong)uVar3 * 0x18);
    *param_5 = lVar5;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[0] = 0xffffffff;
    puVar8[1] = 0xffffffff;
    puVar8[2] = 0;
    puVar8[3] = 0;
LAB_03418460:
    *puVar8 = param_1 & 0xffff | uVar11 << 0x10;
  }
  else {
    uVar6 = 0;
    uVar10 = uVar3;
    do {
      iVar7 = uVar6 + (uVar10 >> 1);
      uVar2 = param_1 & 0xffff;
      uVar4 = *(uint *)(lVar5 + (long)iVar7 * 0x18);
      if ((uVar2 == (uVar4 & 0xffff)) && (uVar4 >> 0x10 == (uVar11 & 0xffff))) {
        puVar8 = (uint *)(lVar5 + (long)iVar7 * 0x18);
        goto LAB_03418470;
      }
      bVar1 = uVar4 >> 0x10 < (uVar11 & 0xffff);
      if (uVar2 != (uVar4 & 0xffff)) {
        bVar1 = (uVar4 & 0xffff) < uVar2;
      }
      if (bVar1 != 0) {
        uVar6 = iVar7 + 1;
      }
      uVar10 = uVar10 - bVar1 >> 1;
    } while (uVar10 != 0);
    uVar10 = *(uint *)((long)param_5 + 0xc);
    uVar16 = (ulong)uVar6;
    if (uVar3 < uVar10) {
LAB_03418364:
      if (uVar3 < uVar10) {
        puVar14 = (undefined8 *)(lVar5 + (ulong)*(uint *)(param_5 + 1) * 0x18);
        *(uint *)(param_5 + 1) = *(uint *)(param_5 + 1) + 1;
        *puVar14 = 0xffffffffffffffff;
        puVar14[1] = 0;
        puVar14[2] = 0;
        lVar5 = *param_5;
        puVar12 = (undefined8 *)(lVar5 + uVar16 * 0x18);
        if (puVar12 < puVar14) {
          do {
            puVar15 = puVar14 + -3;
            puVar14[2] = puVar14[-1];
            *puVar14 = *puVar15;
            puVar14[1] = puVar14[-2];
            lVar5 = *param_5;
            puVar12 = (undefined8 *)(lVar5 + uVar16 * 0x18);
            puVar14 = puVar15;
          } while (puVar12 < puVar15);
        }
        if (lVar5 == 0) {
          puVar8 = (uint *)0x0;
          goto LAB_03418470;
        }
        lVar5 = lVar5 + uVar16 * 0x18;
        *puVar12 = 0xffffffffffffffff;
        *(undefined8 *)(lVar5 + 8) = 0;
        *(undefined8 *)(lVar5 + 0x10) = 0;
        if (*param_5 == 0) {
          puVar8 = (uint *)0x0;
          goto LAB_03418470;
        }
        puVar8 = (uint *)(*param_5 + uVar16 * 0x18);
        goto LAB_03418460;
      }
    }
    else {
      if (uVar10 == 0) {
LAB_0341832c:
        uVar10 = 0;
        iVar7 = 1;
      }
      else {
        iVar7 = uVar10 + (uVar10 >> 1);
      }
      uVar10 = iVar7 + uVar10;
      lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,lVar5,(ulong)uVar10 * 0x18);
      if (lVar5 != 0) {
        *param_5 = lVar5;
        *(uint *)((long)param_5 + 0xc) = uVar10;
        goto LAB_03418364;
      }
    }
LAB_0341846c:
    puVar8 = (uint *)0x0;
  }
LAB_03418470:
  if ((short)puVar8[1] == -1) {
    *(undefined2 *)(puVar8 + 1) = param_3;
    *(long *)(puVar8 + 2) = param_4;
  }
  else if (*(long *)(puVar8 + 2) == param_4) {
    uVar11 = *(uint *)(param_5 + 1);
    puVar9 = (uint *)(*param_5 + (ulong)uVar11 * 0x18 + -0x18);
    if (puVar8 < puVar9) {
      do {
        puVar13 = puVar8 + 6;
        *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar8 + 10);
        *(undefined8 *)puVar8 = *(undefined8 *)puVar13;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 8);
        puVar8 = puVar13;
      } while (puVar13 < puVar9);
      uVar11 = *(uint *)(param_5 + 1);
    }
    *(uint *)(param_5 + 1) = uVar11 - 1;
  }
  else {
    *(undefined2 *)((long)puVar8 + 6) = param_3;
    *(long *)(puVar8 + 4) = param_4;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03483884; name: FUN_03483884
 */


void FUN_03483884(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  bool bVar16;
  
  if (DAT_048afd98 == (undefined8 *)0x0) {
    return;
  }
  puVar13 = (undefined8 *)0x0;
  puVar14 = DAT_048afd98;
LAB_034838c4:
  iVar3 = *(int *)(puVar14 + 2);
  bVar16 = false;
  puVar10 = puVar14;
  puVar15 = puVar13;
  do {
    puVar8 = puVar10;
    if (((*(ushort *)((long)puVar8 + 0x14) & 0x1fe) == 0) &&
       ((lVar4 = puVar8[1], (*(byte *)(lVar4 + 700) >> 4 & 1) == 0 ||
        (*(int *)(lVar4 + 0x318) != -1)))) {
      lVar4 = *(long *)(lVar4 + 0x250);
      if (lVar4 != 0) {
        iVar2 = FUN_03509914(lVar4);
        if (iVar2 == 0x3f) {
LAB_03483998:
          bVar16 = true;
          goto LAB_0348399c;
        }
        plVar11 = &DAT_048afd88;
        lVar9 = 0;
        do {
          lVar12 = lVar9;
          lVar9 = *plVar11;
          plVar11 = (long *)(lVar9 + 0x60);
        } while (lVar9 != 0 && lVar4 != lVar9);
        if (lVar9 != 0) {
          puVar10 = &DAT_048afd88;
          if (DAT_048afd88 != lVar9) {
            puVar10 = (undefined8 *)(lVar12 + 0x60);
          }
          *puVar10 = *(undefined8 *)(lVar9 + 0x60);
          if (DAT_048afd80 == lVar9) {
            DAT_048afd80 = lVar12;
          }
        }
        if (iVar2 == 1) {
          iVar2 = FUN_034ee030(lVar4);
          if (iVar2 == 0x3f) goto LAB_03483998;
          if (iVar2 != 2) {
            *(ushort *)((long)puVar8 + 0x14) = *(ushort *)((long)puVar8 + 0x14) | 0x100;
            goto LAB_0348399c;
          }
        }
        else {
          FUN_03483f78(lVar4,1);
        }
      }
      puVar13 = &DAT_048afd98;
      if (DAT_048afd98 != puVar8) {
        puVar13 = puVar15;
      }
      *puVar13 = *puVar8;
      if (DAT_048afda0 == puVar8) {
        DAT_048afda0 = puVar15;
      }
      if ((puVar8 < DAT_048afdb0) || (DAT_048afdb0 + (ulong)DAT_048afdb8 * 3 <= puVar8)) {
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar8);
      }
      else {
        *puVar8 = DAT_048afda8;
        DAT_048afda8 = puVar8;
      }
      DAT_048afdbc = DAT_048afdbc + -1;
      puVar13 = (undefined8 *)0x0;
      puVar14 = DAT_048afd98;
      goto joined_r0x03483b54;
    }
LAB_0348399c:
    puVar10 = (undefined8 *)*puVar8;
  } while ((puVar10 != (undefined8 *)0x0) && (puVar15 = puVar8, iVar3 == *(int *)(puVar10 + 2)));
  if (!bVar16) {
    uVar1 = *(ushort *)((long)puVar14 + 0x14);
    uVar5 = (uint)uVar1;
    if ((uVar1 >> 8 & 1) != 0) {
      lVar4 = *(long *)(puVar14[1] + 0x250);
      goto LAB_03483b70;
    }
    if ((uVar1 & 0xfe) == 0) {
      lVar4 = 0;
      goto LAB_03483b70;
    }
    lVar9 = puVar14[1];
    uVar6 = (uint)uVar1;
    if (*(uint *)(PTR_DAT_047e71f0 + 8) != 0) {
      plVar11 = *(long **)PTR_DAT_047e71f0;
      lVar12 = (ulong)*(uint *)(PTR_DAT_047e71f0 + 8) << 3;
      if ((uVar6 & 0xff) == 4) {
        do {
          lVar4 = *plVar11;
          if (((*(long *)(lVar4 + 0x118) != 0) &&
              (*(long *)(*(long *)(lVar4 + 0x118) + 0x18) == lVar9)) ||
             ((*(long *)(lVar4 + 0x120) != 0 &&
              (*(long *)(*(long *)(lVar4 + 0x120) + 0x18) == lVar9)))) goto LAB_03483b5c;
          plVar11 = plVar11 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
      else {
        do {
          lVar4 = *plVar11;
          if ((*(long *)(lVar4 + 0x118) != 0) &&
             (*(long *)(*(long *)(lVar4 + 0x118) + 0x18) == lVar9)) goto LAB_03483b5c;
          plVar11 = plVar11 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
    }
    lVar4 = *(long *)(lVar9 + 0x250);
    if ((lVar4 != 0) &&
       (((*(long *)(lVar4 + 0x118) != 0 && (*(long *)(*(long *)(lVar4 + 0x118) + 0x18) == lVar9)) ||
        ((uVar6 & 0xff) == 4)))) goto LAB_03483b70;
    goto switchD_03483ba4_default;
  }
  do {
    puVar13 = puVar14;
    puVar14 = (undefined8 *)*puVar13;
    if (puVar14 == (undefined8 *)0x0) {
      return;
    }
  } while (iVar3 == *(int *)(puVar14 + 2));
  goto joined_r0x03483b54;
LAB_03483b5c:
  if (*(int *)(lVar4 + 0x130) != 0) {
    uVar5 = uVar6 | 0x100;
    *(short *)((long)puVar14 + 0x14) = (short)uVar5;
  }
  if (lVar4 != 0) {
LAB_03483b70:
    if ((uVar5 >> 8 & 1) == 0) {
      puVar13 = puVar14;
      puVar14 = (undefined8 *)*puVar14;
      goto joined_r0x03483b54;
    }
    switch(uVar5 & 0xff) {
    case 0:
      if (*(int *)(lVar4 + 0x130) == 0) {
        FUN_0350f720(*(undefined8 *)(lVar4 + 0x118));
        uVar7 = 1;
      }
      else {
        if (*(int *)(lVar4 + 0x130) == 2) break;
LAB_03483bb8:
        if (*(long *)(lVar4 + 0x118) != 0) {
          lVar9 = *(long *)(*(long *)(lVar4 + 0x118) + 0x18);
          goto LAB_03483cb8;
        }
LAB_03483cc4:
        uVar7 = 2;
      }
      *(undefined4 *)(lVar4 + 0x130) = uVar7;
      break;
    case 1:
      if (*(int *)(lVar4 + 0x130) == 0) {
        FUN_0350f720(*(undefined8 *)(lVar4 + 0x118));
        uVar7 = 1;
      }
      else {
        if (*(int *)(lVar4 + 0x130) == 2) goto switchD_03483ba4_caseD_2;
        if (*(long *)(lVar4 + 0x118) != 0) {
          lVar9 = *(long *)(*(long *)(lVar4 + 0x118) + 0x18);
          *(byte *)(lVar9 + 0x2ba) = *(byte *)(lVar9 + 0x2ba) & 0x87;
        }
        uVar7 = 2;
      }
      *(undefined4 *)(lVar4 + 0x130) = uVar7;
    case 2:
switchD_03483ba4_caseD_2:
      FUN_03509a78(lVar4);
      break;
    case 3:
      FUN_03509b90(lVar4);
      break;
    case 4:
      lVar9 = puVar14[1];
      plVar11 = *(long **)(lVar4 + 0x118);
      if ((plVar11 == (long *)0x0) || (plVar11[3] != lVar9)) {
        plVar11 = *(long **)(lVar4 + 0x120);
        if ((plVar11 != (long *)0x0) && (plVar11[3] == lVar9)) {
          (**(code **)(*plVar11 + 0x60))(plVar11,0);
          puVar10 = *(undefined8 **)(lVar4 + 0x120);
          if (puVar10 != (undefined8 *)0x0) {
            (**(code **)*puVar10)(puVar10);
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar10);
          }
          *(undefined8 *)(lVar4 + 0x120) = 0;
        }
      }
      else {
        if ((*(byte *)(plVar11 + 4) & 1) == 0) {
LAB_03483cb8:
          *(byte *)(lVar9 + 0x2ba) = *(byte *)(lVar9 + 0x2ba) & 0x87;
          goto LAB_03483cc4;
        }
        iVar3 = (**(code **)(*plVar11 + 0x90))();
        if (iVar3 != 1) goto LAB_03483bb8;
      }
      break;
    case 5:
      FUN_0350b010(lVar4);
    }
  }
switchD_03483ba4_default:
  puVar15 = (undefined8 *)*puVar14;
  puVar10 = &DAT_048afd98;
  if (DAT_048afd98 != puVar14) {
    puVar10 = puVar13;
  }
  *puVar10 = puVar15;
  if (DAT_048afda0 == puVar14) {
    DAT_048afda0 = puVar13;
  }
  if ((puVar14 < DAT_048afdb0) || (DAT_048afdb0 + (ulong)DAT_048afdb8 * 3 <= puVar14)) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar14);
  }
  else {
    *puVar14 = DAT_048afda8;
    DAT_048afda8 = puVar14;
  }
  DAT_048afdbc = DAT_048afdbc + -1;
  puVar14 = puVar15;
joined_r0x03483b54:
  if (puVar14 == (undefined8 *)0x0) {
    return;
  }
  goto LAB_034838c4;
}



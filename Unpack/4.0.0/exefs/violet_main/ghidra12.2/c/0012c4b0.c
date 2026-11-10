/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0012c4b0; name: FUN_0012c4b0
 */


ulong FUN_0012c4b0(long param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  long *plVar16;
  long lVar17;
  
  lVar12 = *(long *)(param_1 + 0x88);
  puVar9 = (undefined8 *)0x0;
  *(byte *)(lVar12 + 9) = *(byte *)(lVar12 + 9) | 0x20;
  switch(*(undefined1 *)(lVar12 + 8)) {
  case 5:
    puVar9 = (undefined8 *)(lVar12 + 0x30);
    break;
  case 6:
  case 0x26:
    puVar9 = (undefined8 *)(lVar12 + 0x10);
    break;
  case 7:
    puVar9 = (undefined8 *)(lVar12 + 0x20);
    break;
  case 8:
    puVar9 = (undefined8 *)(lVar12 + 0x48);
    break;
  case 10:
    puVar9 = (undefined8 *)(lVar12 + 0x78);
  }
  *(undefined8 *)(param_1 + 0x88) = *puVar9;
  uVar3 = 0;
  switch(*(undefined1 *)(lVar12 + 8)) {
  case 5:
    lVar17 = *(long *)(lVar12 + 0x28);
    if (lVar17 == 0) {
LAB_0012c9f0:
      bVar7 = *(byte *)(lVar12 + 0xb);
      lVar17 = *(long *)(lVar12 + 0x18);
      uVar2 = FUN_0013c280(lVar12);
      if (uVar2 != 0) {
        lVar13 = 0;
        do {
          if (((*(byte *)(*(long *)(lVar12 + 0x10) + lVar13 + 8) >> 6 & 1) != 0) &&
             ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x10) + lVar13) + 9) & 0x18) != 0)) {
            FUN_00129df0(param_1);
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar2 * 0x10 != lVar13);
      }
      for (plVar16 = *(long **)(lVar12 + 0x18);
          plVar16 < (long *)(lVar17 + (long)(1 << (ulong)(bVar7 & 0x1f)) * 0x18);
          plVar16 = plVar16 + 3) {
        uVar2 = (uint)*(byte *)(plVar16 + 1);
        if ((*(byte *)(plVar16 + 1) & 0xf) == 0) {
          if ((*(byte *)((long)plVar16 + 9) >> 6 & 1) != 0) {
            *(undefined1 *)((long)plVar16 + 9) = 0xb;
          }
        }
        else {
          if (((*(byte *)((long)plVar16 + 9) >> 6 & 1) != 0) &&
             ((*(byte *)(plVar16[2] + 9) & 0x18) != 0)) {
            FUN_00129df0(param_1);
            uVar2 = (uint)*(byte *)(plVar16 + 1);
          }
          if (((uVar2 >> 6 & 1) != 0) && ((*(byte *)(*plVar16 + 9) & 0x18) != 0)) {
            FUN_00129df0(param_1);
          }
        }
      }
      bVar7 = *(byte *)(lVar12 + 9) & 7;
      if (bVar7 == 6) {
        bVar7 = *(byte *)(lVar12 + 9) ^ 2;
LAB_0012cbc8:
        *(byte *)(lVar12 + 9) = bVar7;
      }
      else if (bVar7 == 5) {
        puVar9 = (undefined8 *)0x0;
        switch(*(undefined1 *)(lVar12 + 8)) {
        case 5:
          puVar9 = (undefined8 *)(lVar12 + 0x30);
          break;
        case 6:
        case 0x26:
          puVar9 = (undefined8 *)(lVar12 + 0x10);
          break;
        case 7:
          puVar9 = (undefined8 *)(lVar12 + 0x20);
          break;
        case 8:
          puVar9 = (undefined8 *)(lVar12 + 0x48);
          break;
        case 10:
          puVar9 = (undefined8 *)(lVar12 + 0x78);
        }
        *puVar9 = *(undefined8 *)(param_1 + 0x90);
LAB_0012cbbc:
        *(long *)(param_1 + 0x90) = lVar12;
LAB_0012cbc0:
        bVar7 = *(byte *)(lVar12 + 9) & 199;
        goto LAB_0012cbc8;
      }
      iVar8 = *(int *)(lVar12 + 0xc);
      iVar11 = 0;
      if (*(long *)(lVar12 + 0x20) != 0) {
LAB_0012cbd8:
        iVar11 = 2 << (ulong)(*(byte *)(lVar12 + 0xb) & 0x1f);
      }
    }
    else {
      if ((*(byte *)(lVar17 + 10) >> 3 & 1) == 0) {
        plVar16 = (long *)FUN_0013dec0(lVar17,3,*(undefined8 *)(param_1 + 0x130));
        lVar17 = *(long *)(lVar12 + 0x28);
        if (lVar17 != 0) goto LAB_0012c984;
      }
      else {
        plVar16 = (long *)0x0;
LAB_0012c984:
        if ((*(byte *)(lVar17 + 9) & 0x18) != 0) {
          FUN_00129df0(param_1);
        }
      }
      if ((plVar16 == (long *)0x0) || ((*(byte *)(plVar16 + 1) & 0xf) != 4)) goto LAB_0012c9f0;
      lVar17 = *plVar16;
      pcVar4 = strchr((char *)(lVar17 + 0x18),0x6b);
      pcVar5 = strchr((char *)(lVar17 + 0x18),0x76);
      if (pcVar5 == (char *)0x0 && pcVar4 == (char *)0x0) goto LAB_0012c9f0;
      if (pcVar4 == (char *)0x0) {
        bVar1 = *(int *)(lVar12 + 0xc) != 0;
        if (*(byte *)(lVar12 + 0xb) != 0x1f) {
          plVar16 = *(long **)(lVar12 + 0x18);
          plVar10 = plVar16 + (long)(1 << (ulong)(*(byte *)(lVar12 + 0xb) & 0x1f)) * 3;
          do {
            if ((*(byte *)(plVar16 + 1) & 0xf) == 0) {
              if ((*(byte *)((long)plVar16 + 9) >> 6 & 1) != 0) {
                *(undefined1 *)((long)plVar16 + 9) = 0xb;
              }
            }
            else {
              if (((*(byte *)((long)plVar16 + 9) >> 6 & 1) != 0) &&
                 ((*(byte *)(plVar16[2] + 9) & 0x18) != 0)) {
                FUN_00129df0(param_1);
              }
              if (!bVar1) {
                if (((*(byte *)(plVar16 + 1) >> 6 & 1) != 0) && (lVar17 = *plVar16, lVar17 != 0)) {
                  if ((*(byte *)(lVar17 + 8) & 0xf) == 4) {
                    if ((*(byte *)(lVar17 + 9) & 0x18) != 0) {
                      FUN_00129df0(param_1);
                    }
                  }
                  else if ((*(byte *)(lVar17 + 9) & 0x18) != 0) {
                    bVar1 = true;
                    goto LAB_0012cc78;
                  }
                }
                bVar1 = false;
              }
            }
LAB_0012cc78:
            plVar16 = plVar16 + 3;
          } while (plVar16 < plVar10);
        }
        if ((bVar1) && (*(char *)(param_1 + 0x65) == '\x02')) {
          *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(param_1 + 0x98);
          *(long *)(param_1 + 0x98) = lVar12;
          goto LAB_0012cbc0;
        }
        *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(param_1 + 0x90);
        goto LAB_0012cbbc;
      }
      if (pcVar5 != (char *)0x0) {
        *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(param_1 + 0xa8);
        *(long *)(param_1 + 0xa8) = lVar12;
        goto LAB_0012cbc0;
      }
      FUN_0012cd10(param_1,lVar12,0);
      iVar8 = *(int *)(lVar12 + 0xc);
      if (*(long *)(lVar12 + 0x20) != 0) goto LAB_0012cbd8;
      iVar11 = 0;
    }
    uVar3 = (ulong)(iVar8 + iVar11 + 1);
    break;
  case 6:
    if ((*(long *)(lVar12 + 0x18) != 0) && ((*(byte *)(*(long *)(lVar12 + 0x18) + 9) & 0x18) != 0))
    {
      FUN_00129df0(param_1);
    }
    uVar3 = (ulong)*(byte *)(lVar12 + 10);
    if (*(byte *)(lVar12 + 10) != 0) {
      uVar14 = 0;
      do {
        lVar17 = *(long *)(lVar12 + 0x20 + uVar14 * 8);
        if ((lVar17 != 0) && ((*(byte *)(lVar17 + 9) & 0x18) != 0)) {
          FUN_00129df0(param_1);
          uVar3 = (ulong)*(byte *)(lVar12 + 10);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar3);
    }
    goto LAB_0012c740;
  case 7:
    if ((*(long *)(lVar12 + 0x18) != 0) && ((*(byte *)(*(long *)(lVar12 + 0x18) + 9) & 0x18) != 0))
    {
      FUN_00129df0(param_1);
    }
    uVar3 = (ulong)*(ushort *)(lVar12 + 10);
    if (*(ushort *)(lVar12 + 10) != 0) {
      uVar14 = 0;
      pbVar15 = (byte *)(lVar12 + 0x30);
      do {
        if (((*pbVar15 >> 6 & 1) != 0) && ((*(byte *)(*(long *)(pbVar15 + -8) + 9) & 0x18) != 0)) {
          FUN_00129df0(param_1);
          uVar3 = (ulong)*(ushort *)(lVar12 + 10);
        }
        uVar14 = uVar14 + 1;
        pbVar15 = pbVar15 + 0x10;
      } while (uVar14 < uVar3);
    }
    bVar7 = *(byte *)(lVar12 + 9) & 7;
    if (bVar7 == 6) {
      *(byte *)(lVar12 + 9) = *(byte *)(lVar12 + 9) ^ 2;
    }
    else if (bVar7 == 5) {
      puVar9 = (undefined8 *)0x0;
      switch(*(undefined1 *)(lVar12 + 8)) {
      case 5:
        puVar9 = (undefined8 *)(lVar12 + 0x30);
        break;
      case 6:
      case 0x26:
        puVar9 = (undefined8 *)(lVar12 + 0x10);
        break;
      case 7:
        puVar9 = (undefined8 *)(lVar12 + 0x20);
        break;
      case 8:
        puVar9 = (undefined8 *)(lVar12 + 0x48);
        break;
      case 10:
        puVar9 = (undefined8 *)(lVar12 + 0x78);
      }
      *puVar9 = *(undefined8 *)(param_1 + 0x90);
      *(long *)(param_1 + 0x90) = lVar12;
      *(byte *)(lVar12 + 9) = *(byte *)(lVar12 + 9) & 199;
      uVar3 = (ulong)*(ushort *)(lVar12 + 10);
    }
    uVar3 = uVar3 + 1;
    break;
  case 8:
    plVar16 = *(long **)(lVar12 + 0x30);
    if (((*(byte *)(lVar12 + 9) & 6) != 0) || (*(char *)(param_1 + 0x65) == '\0')) {
      *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(param_1 + 0x90);
      *(long *)(param_1 + 0x90) = lVar12;
      *(byte *)(lVar12 + 9) = *(byte *)(lVar12 + 9) & 199;
    }
    if (plVar16 == (long *)0x0) {
      uVar3 = 1;
    }
    else {
      plVar10 = *(long **)(lVar12 + 0x10);
      for (; plVar16 < plVar10; plVar16 = plVar16 + 2) {
        if (((*(byte *)(plVar16 + 1) >> 6 & 1) != 0) && ((*(byte *)(*plVar16 + 9) & 0x18) != 0)) {
          FUN_00129df0(param_1);
          plVar10 = *(long **)(lVar12 + 0x10);
        }
      }
      for (lVar17 = *(long *)(lVar12 + 0x38); lVar17 != 0; lVar17 = *(long *)(lVar17 + 0x18)) {
        if ((*(byte *)(lVar17 + 9) & 0x18) != 0) {
          FUN_00129df0(param_1,lVar17);
        }
      }
      if (*(char *)(param_1 + 0x65) == '\x02') {
        if (plVar16 < (long *)(*(long *)(lVar12 + 0x28) + 0x50U)) {
          do {
            *(undefined1 *)(plVar16 + 1) = 0;
            plVar16 = plVar16 + 2;
          } while (plVar16 < (long *)(*(long *)(lVar12 + 0x28) + 0x50U));
        }
        if ((*(long *)(lVar12 + 0x50) == lVar12) && (*(long *)(lVar12 + 0x38) != 0)) {
          *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)(param_1 + 0xf8);
          *(long *)(param_1 + 0xf8) = lVar12;
        }
      }
      else if (*(char *)(param_1 + 0x6b) == '\0') {
        FUN_00126f10(lVar12);
      }
      uVar3 = (*(long *)(lVar12 + 0x28) - *(long *)(lVar12 + 0x30)) * 0x10000000 + 0x100000000 >>
              0x20;
    }
    break;
  case 10:
    if ((*(long *)(lVar12 + 0x70) != 0) && ((*(byte *)(*(long *)(lVar12 + 0x70) + 9) & 0x18) != 0))
    {
      FUN_00129df0(param_1);
    }
    iVar8 = *(int *)(lVar12 + 0x14);
    if (0 < iVar8) {
      lVar13 = 0;
      lVar17 = 0;
      do {
        if (((*(byte *)(*(long *)(lVar12 + 0x38) + lVar13 + 8) >> 6 & 1) != 0) &&
           ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + lVar13) + 9) & 0x18) != 0)) {
          FUN_00129df0(param_1);
          iVar8 = *(int *)(lVar12 + 0x14);
        }
        lVar17 = lVar17 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar17 < iVar8);
    }
    iVar8 = *(int *)(lVar12 + 0x10);
    if (0 < iVar8) {
      lVar13 = 0;
      lVar17 = 0;
      do {
        lVar6 = *(long *)(*(long *)(lVar12 + 0x50) + lVar13);
        if ((lVar6 != 0) && ((*(byte *)(lVar6 + 9) & 0x18) != 0)) {
          FUN_00129df0(param_1);
          iVar8 = *(int *)(lVar12 + 0x10);
        }
        lVar17 = lVar17 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar17 < iVar8);
    }
    iVar8 = *(int *)(lVar12 + 0x20);
    if (0 < iVar8) {
      lVar17 = 0;
      do {
        lVar13 = *(long *)(*(long *)(lVar12 + 0x48) + lVar17 * 8);
        if ((lVar13 != 0) && ((*(byte *)(lVar13 + 9) & 0x18) != 0)) {
          FUN_00129df0(param_1);
          iVar8 = *(int *)(lVar12 + 0x20);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < iVar8);
    }
    iVar11 = *(int *)(lVar12 + 0x24);
    if (0 < iVar11) {
      lVar13 = 0;
      lVar17 = 0;
      do {
        lVar6 = *(long *)(*(long *)(lVar12 + 0x68) + lVar13);
        if ((lVar6 != 0) && ((*(byte *)(lVar6 + 9) & 0x18) != 0)) {
          FUN_00129df0(param_1);
          iVar11 = *(int *)(lVar12 + 0x24);
        }
        lVar17 = lVar17 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar17 < iVar11);
      iVar8 = *(int *)(lVar12 + 0x20);
    }
    uVar3 = (ulong)(iVar8 + iVar11 + *(int *)(lVar12 + 0x14) + *(int *)(lVar12 + 0x10) + 1);
    break;
  case 0x26:
    uVar3 = (ulong)*(byte *)(lVar12 + 10);
    if (*(byte *)(lVar12 + 10) != 0) {
      uVar14 = 0;
      pbVar15 = (byte *)(lVar12 + 0x28);
      do {
        if (((*pbVar15 >> 6 & 1) != 0) && ((*(byte *)(*(long *)(pbVar15 + -8) + 9) & 0x18) != 0)) {
          FUN_00129df0(param_1);
          uVar3 = (ulong)*(byte *)(lVar12 + 10);
        }
        uVar14 = uVar14 + 1;
        pbVar15 = pbVar15 + 0x10;
      } while (uVar14 < uVar3);
    }
LAB_0012c740:
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}



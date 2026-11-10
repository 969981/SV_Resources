/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0012cd10; name: FUN_0012cd10
 */


undefined8 FUN_0012cd10(long param_1,long param_2,int param_3)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  uVar5 = FUN_0013c280(param_2);
  uVar8 = 1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f);
  if (uVar5 == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = 0;
    uVar10 = 0;
    do {
      if (((*(byte *)(*(long *)(param_2 + 0x10) + lVar12 + 8) >> 6 & 1) != 0) &&
         ((*(byte *)(*(long *)(*(long *)(param_2 + 0x10) + lVar12) + 9) & 0x18) != 0)) {
        FUN_00129df0(param_1);
        uVar10 = 1;
      }
      lVar12 = lVar12 + 0x10;
    } while ((ulong)uVar5 * 0x10 != lVar12);
  }
  uVar5 = uVar8 - 1;
  if (uVar8 == 0 || uVar5 == 0) {
    uVar8 = 1;
  }
  uVar13 = (ulong)uVar8;
  if (param_3 == 0) {
    lVar12 = 0;
    bVar4 = false;
    bVar3 = false;
    do {
      lVar14 = *(long *)(param_2 + 0x18);
      lVar1 = lVar14 + lVar12;
      bVar7 = *(byte *)(lVar1 + 8);
      uVar8 = (uint)bVar7;
      if ((bVar7 & 0xf) == 0) {
        if ((*(byte *)(lVar1 + 9) >> 6 & 1) != 0) {
          *(undefined1 *)(lVar1 + 9) = 0xb;
        }
      }
      else {
        if (((*(byte *)(lVar1 + 9) >> 6 & 1) != 0) && (lVar6 = *(long *)(lVar1 + 0x10), lVar6 != 0))
        {
          if ((*(byte *)(lVar6 + 8) & 0xf) == 4) {
            if ((*(byte *)(lVar6 + 9) & 0x18) != 0) {
              FUN_00129df0(param_1);
              uVar8 = (uint)*(byte *)(lVar1 + 8);
            }
          }
          else if ((*(byte *)(lVar6 + 9) & 0x18) != 0) {
            if (((bVar7 >> 6 & 1) != 0) && ((*(byte *)(*(long *)(lVar14 + lVar12) + 9) & 0x18) != 0)
               ) {
              bVar3 = true;
            }
            bVar4 = true;
            goto LAB_0012cea8;
          }
        }
        if (((uVar8 >> 6 & 1) != 0) && ((*(byte *)(*(long *)(lVar14 + lVar12) + 9) & 0x18) != 0)) {
          FUN_00129df0(param_1);
          uVar10 = 1;
        }
      }
LAB_0012cea8:
      lVar12 = lVar12 + 0x18;
    } while (uVar13 * 0x18 != lVar12);
  }
  else {
    bVar3 = false;
    bVar4 = false;
    do {
      plVar11 = (long *)(*(long *)(param_2 + 0x18) + (ulong)uVar5 * 0x18);
      bVar7 = *(byte *)(plVar11 + 1);
      uVar8 = (uint)bVar7;
      bVar2 = *(byte *)((long)plVar11 + 9);
      if ((bVar7 & 0xf) == 0) {
        if ((bVar2 >> 6 & 1) != 0) {
          *(byte *)((long)plVar11 + 9) = 0xb;
        }
      }
      else {
        if (((bVar2 >> 6 & 1) != 0) &&
           (lVar12 = *(long *)(*(long *)(param_2 + 0x18) + (ulong)uVar5 * 0x18 + 0x10), lVar12 != 0)
           ) {
          if ((*(byte *)(lVar12 + 8) & 0xf) == 4) {
            if ((*(byte *)(lVar12 + 9) & 0x18) != 0) {
              FUN_00129df0(param_1);
              uVar8 = (uint)*(byte *)(plVar11 + 1);
            }
          }
          else if ((*(byte *)(lVar12 + 9) & 0x18) != 0) {
            if (((bVar7 >> 6 & 1) != 0) && ((*(byte *)(*plVar11 + 9) & 0x18) != 0)) {
              bVar3 = true;
            }
            bVar4 = true;
            goto LAB_0012cdd0;
          }
        }
        if (((uVar8 >> 6 & 1) != 0) && ((*(byte *)(*plVar11 + 9) & 0x18) != 0)) {
          FUN_00129df0(param_1);
          uVar10 = 1;
        }
      }
LAB_0012cdd0:
      uVar13 = uVar13 - 1;
      uVar5 = uVar5 - 1;
    } while (uVar13 != 0);
  }
  if (*(char *)(param_1 + 0x65) == '\0') {
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x90);
LAB_0012cf74:
    *(long *)(param_1 + 0x90) = param_2;
  }
  else if (bVar3) {
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0xa0);
    *(long *)(param_1 + 0xa0) = param_2;
  }
  else {
    if (!bVar4) {
      bVar7 = *(byte *)(param_2 + 9) & 7;
      if (bVar7 == 6) {
        bVar7 = *(byte *)(param_2 + 9) ^ 2;
        goto LAB_0012cf98;
      }
      if (bVar7 != 5) {
        return uVar10;
      }
      puVar9 = (undefined8 *)0x0;
      switch(*(undefined1 *)(param_2 + 8)) {
      case 5:
        puVar9 = (undefined8 *)(param_2 + 0x30);
        break;
      case 6:
      case 0x26:
        puVar9 = (undefined8 *)(param_2 + 0x10);
        break;
      case 7:
        puVar9 = (undefined8 *)(param_2 + 0x20);
        break;
      case 8:
        puVar9 = (undefined8 *)(param_2 + 0x48);
        break;
      case 10:
        puVar9 = (undefined8 *)(param_2 + 0x78);
      }
      *puVar9 = *(undefined8 *)(param_1 + 0x90);
      goto LAB_0012cf74;
    }
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0xa8);
    *(long *)(param_1 + 0xa8) = param_2;
  }
  bVar7 = *(byte *)(param_2 + 9) & 199;
LAB_0012cf98:
  *(byte *)(param_2 + 9) = bVar7;
  return uVar10;
}



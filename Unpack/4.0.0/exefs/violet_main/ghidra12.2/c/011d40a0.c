/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011d40a0; name: FUN_011d40a0
 */


undefined8 FUN_011d40a0(long param_1,char param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x290) + 8);
  uVar5 = FUN_00f7e2a0(*(undefined4 *)(lVar7 + 0x36c),*(undefined1 *)(lVar7 + 0x370),0);
  if ((((uVar5 & 1) == 0) ||
      ((char)((2 < *(uint *)(*(long *)(*(long *)(param_1 + 0x290) + 8) + 0x36c)) * '\x02') !=
       param_2)) || (lVar7 = *(long *)(param_1 + 0x30), *(char *)(lVar7 + 0x58) == '\0')) {
LAB_011d418c:
    lVar7 = *(long *)(*(long *)(param_1 + 0x290) + 8);
    uVar5 = FUN_00f7e2a0(*(undefined4 *)(lVar7 + 0x36c),*(undefined1 *)(lVar7 + 0x370),1);
    if ((uVar5 & 1) != 0) {
      cVar8 = '\x01';
      if (2 < *(uint *)(*(long *)(*(long *)(param_1 + 0x290) + 8) + 0x36c)) {
        cVar8 = '\x02';
      }
      if ((cVar8 == param_2) && (lVar7 = *(long *)(param_1 + 0x30), *(char *)(lVar7 + 0x90) != '\0')
         ) {
        bVar3 = (**(code **)(**(long **)(lVar7 + 0x60) + 0x208))();
        bVar3 = bVar3 & 1;
        if (1 < *(byte *)(lVar7 + 0x90)) {
          bVar4 = (**(code **)(**(long **)(lVar7 + 0x68) + 0x208))();
          bVar3 = bVar3 + (bVar4 & 1);
          if (2 < *(byte *)(lVar7 + 0x90)) {
            bVar4 = (**(code **)(**(long **)(lVar7 + 0x70) + 0x208))();
            bVar3 = bVar3 + (bVar4 & 1);
            if (3 < *(byte *)(lVar7 + 0x90)) {
              lVar9 = 0xf;
              do {
                bVar4 = (**(code **)(**(long **)(lVar7 + lVar9 * 8) + 0x208))();
                bVar3 = bVar3 + (bVar4 & 1);
                uVar5 = lVar9 - 0xb;
                lVar9 = lVar9 + 1;
              } while (uVar5 < *(byte *)(lVar7 + 0x90));
            }
          }
        }
        if (bVar3 != 0) goto LAB_011d4174;
      }
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x290) + 8);
    uVar5 = FUN_00f7e2a0(*(undefined4 *)(lVar7 + 0x36c),*(undefined1 *)(lVar7 + 0x370),2);
    if ((uVar5 & 1) != 0) {
      iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0x290) + 8) + 0x36c);
      if ((iVar2 == 2) || (iVar2 == 1)) {
        cVar8 = '\0';
      }
      else {
        cVar8 = '\x02';
      }
      if ((cVar8 == param_2) && (lVar7 = *(long *)(param_1 + 0x30), *(char *)(lVar7 + 200) != '\0'))
      {
        bVar3 = (**(code **)(**(long **)(lVar7 + 0x98) + 0x208))();
        bVar3 = bVar3 & 1;
        if (1 < *(byte *)(lVar7 + 200)) {
          bVar4 = (**(code **)(**(long **)(lVar7 + 0xa0) + 0x208))();
          bVar3 = bVar3 + (bVar4 & 1);
          if (2 < *(byte *)(lVar7 + 200)) {
            bVar4 = (**(code **)(**(long **)(lVar7 + 0xa8) + 0x208))();
            bVar3 = bVar3 + (bVar4 & 1);
            if (3 < *(byte *)(lVar7 + 200)) {
              lVar9 = 0x16;
              do {
                bVar4 = (**(code **)(**(long **)(lVar7 + lVar9 * 8) + 0x208))();
                bVar3 = bVar3 + (bVar4 & 1);
                uVar5 = lVar9 - 0x12;
                lVar9 = lVar9 + 1;
              } while (uVar5 < *(byte *)(lVar7 + 200));
            }
          }
        }
        if (bVar3 != 0) goto LAB_011d4174;
      }
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x290) + 8);
    uVar5 = FUN_00f7e2a0(*(undefined4 *)(lVar7 + 0x36c),*(undefined1 *)(lVar7 + 0x370),3);
    if ((uVar5 & 1) != 0) {
      iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0x290) + 8) + 0x36c);
      cVar8 = '\x01';
      if (iVar2 != 1) {
        cVar8 = '\x02';
      }
      cVar1 = '\0';
      if (iVar2 != 2) {
        cVar1 = cVar8;
      }
      if ((cVar1 == param_2) &&
         (lVar7 = *(long *)(param_1 + 0x30), *(char *)(lVar7 + 0x100) != '\0')) {
        bVar3 = (**(code **)(**(long **)(lVar7 + 0xd0) + 0x208))();
        bVar3 = bVar3 & 1;
        if (1 < *(byte *)(lVar7 + 0x100)) {
          bVar4 = (**(code **)(**(long **)(lVar7 + 0xd8) + 0x208))();
          bVar3 = bVar3 + (bVar4 & 1);
          if (2 < *(byte *)(lVar7 + 0x100)) {
            bVar4 = (**(code **)(**(long **)(lVar7 + 0xe0) + 0x208))();
            bVar3 = bVar3 + (bVar4 & 1);
            if (3 < *(byte *)(lVar7 + 0x100)) {
              lVar9 = 0x1d;
              do {
                bVar4 = (**(code **)(**(long **)(lVar7 + lVar9 * 8) + 0x208))();
                bVar3 = bVar3 + (bVar4 & 1);
                uVar5 = lVar9 - 0x19;
                lVar9 = lVar9 + 1;
              } while (uVar5 < *(byte *)(lVar7 + 0x100));
            }
          }
        }
        if (bVar3 != 0) goto LAB_011d4174;
      }
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x290) + 8);
    uVar5 = FUN_00f7e2a0(*(undefined4 *)(lVar7 + 0x36c),*(undefined1 *)(lVar7 + 0x370),4);
    if ((((uVar5 & 1) != 0) &&
        ((char)((*(int *)(*(long *)(*(long *)(param_1 + 0x290) + 8) + 0x36c) != 2) * '\x02') ==
         param_2)) && (lVar7 = *(long *)(param_1 + 0x30), *(char *)(lVar7 + 0x138) != '\0')) {
      bVar3 = (**(code **)(**(long **)(lVar7 + 0x108) + 0x208))();
      bVar3 = bVar3 & 1;
      if (1 < *(byte *)(lVar7 + 0x138)) {
        bVar4 = (**(code **)(**(long **)(lVar7 + 0x110) + 0x208))();
        bVar3 = bVar3 + (bVar4 & 1);
        if (2 < *(byte *)(lVar7 + 0x138)) {
          bVar4 = (**(code **)(**(long **)(lVar7 + 0x118) + 0x208))();
          bVar3 = bVar3 + (bVar4 & 1);
          if (3 < *(byte *)(lVar7 + 0x138)) {
            lVar9 = 0x24;
            do {
              bVar4 = (**(code **)(**(long **)(lVar7 + lVar9 * 8) + 0x208))();
              bVar3 = bVar3 + (bVar4 & 1);
              uVar5 = lVar9 - 0x20;
              lVar9 = lVar9 + 1;
            } while (uVar5 < *(byte *)(lVar7 + 0x138));
          }
        }
      }
      if (bVar3 != 0) goto LAB_011d4174;
    }
    uVar6 = 1;
  }
  else {
    bVar3 = (**(code **)(**(long **)(lVar7 + 0x28) + 0x208))();
    bVar3 = bVar3 & 1;
    if (1 < *(byte *)(lVar7 + 0x58)) {
      bVar4 = (**(code **)(**(long **)(lVar7 + 0x30) + 0x208))();
      bVar3 = bVar3 + (bVar4 & 1);
      if (2 < *(byte *)(lVar7 + 0x58)) {
        bVar4 = (**(code **)(**(long **)(lVar7 + 0x38) + 0x208))();
        bVar3 = bVar3 + (bVar4 & 1);
        if (3 < *(byte *)(lVar7 + 0x58)) {
          lVar9 = 8;
          do {
            bVar4 = (**(code **)(**(long **)(lVar7 + lVar9 * 8) + 0x208))();
            bVar3 = bVar3 + (bVar4 & 1);
            uVar5 = lVar9 - 4;
            lVar9 = lVar9 + 1;
          } while (uVar5 < *(byte *)(lVar7 + 0x58));
        }
      }
    }
    if (bVar3 == 0) goto LAB_011d418c;
LAB_011d4174:
    uVar6 = 0;
  }
  return uVar6;
}



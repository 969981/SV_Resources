/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03414e04; name: FUN_03414e04
 */


void FUN_03414e04(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  puVar2 = PTR_DAT_047e2fd0;
  for (plVar6 = (long *)param_1[0x10]; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    if (*(char *)((long)plVar6 + 0x3c) != '\0') {
      for (lVar7 = plVar6[6]; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x48)) {
        if (*(short *)(lVar7 + 0x36) != 0) {
          lVar8 = 0;
          uVar9 = 0;
          do {
            lVar5 = *(long *)(lVar7 + 0x28) + lVar8;
            if (*(long *)(lVar5 + 0x38) != 0) {
              *(undefined4 *)(lVar5 + 0x40) = 0;
              (**(code **)(puVar2 + 0x30))(10);
              *(undefined8 *)(lVar5 + 0x38) = 0;
              *(undefined4 *)(lVar5 + 0x44) = 0;
            }
            *(undefined1 *)(lVar5 + 0x48) = 0;
            if (*(long *)(lVar5 + 0x50) != 0) {
              *(undefined4 *)(lVar5 + 0x58) = 0;
              (**(code **)(puVar2 + 0x30))(10);
              *(undefined8 *)(lVar5 + 0x50) = 0;
              *(undefined4 *)(lVar5 + 0x5c) = 0;
            }
            *(undefined1 *)(lVar5 + 0x60) = 0;
            uVar9 = uVar9 + 1;
            lVar8 = lVar8 + 0x80;
          } while (uVar9 < *(ushort *)(lVar7 + 0x36));
        }
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 != 0) {
    lVar7 = *(long *)param_1[3];
    if (lVar7 == 0) {
      uVar9 = 0;
      do {
        if (uVar3 - 1 == uVar9) goto LAB_03415000;
        uVar9 = uVar9 + 1;
        lVar7 = ((long *)param_1[3])[uVar9 & 0xffffffff];
      } while (lVar7 == 0);
    }
    else {
      uVar9 = 0;
    }
    do {
      if (*(char *)(lVar7 + 0x60) == '\0') {
        if (*(uint *)(lVar7 + 0x58) != 0) {
          plVar6 = *(long **)(lVar7 + 0x50);
          lVar8 = (ulong)*(uint *)(lVar7 + 0x58) << 3;
          do {
            if ((*(char *)(*plVar6 + 0x60) != '\0') ||
               ((lVar5 = *(long *)(*plVar6 + 0xa8), lVar5 != 0 && (*(char *)(lVar5 + 0x3c) != '\0'))
               )) goto LAB_03414f08;
            plVar6 = plVar6 + 1;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
      else {
LAB_03414f08:
        FUN_03423fa8(lVar7);
        if ((*(char *)(lVar7 + 0x660) != '\0') && (*(int *)(lVar7 + 0x58) != 0)) {
          lVar8 = **(long **)(lVar7 + 0x50);
          if (*(int *)(lVar7 + 0x58) == 1) {
            lVar5 = 0;
            if (lVar8 == 0) goto LAB_03414fec;
LAB_03414f38:
            lVar8 = *(long *)(lVar8 + 0xa8);
            if (lVar5 == 0) goto LAB_03414ff4;
LAB_03414f40:
            lVar5 = *(long *)(lVar5 + 0xa8);
          }
          else {
            lVar5 = (*(long **)(lVar7 + 0x50))[1];
            if (lVar8 != 0) goto LAB_03414f38;
LAB_03414fec:
            lVar8 = 0;
            if (lVar5 != 0) goto LAB_03414f40;
LAB_03414ff4:
            lVar5 = 0;
          }
          if (lVar8 != 0) {
            FUN_03425624(lVar8,lVar7,1,lVar5 == lVar8);
          }
          if ((lVar5 != 0) && (lVar5 != lVar8)) {
            FUN_03425624(lVar5,lVar7,0,1);
          }
        }
      }
      lVar7 = *(long *)(lVar7 + 0x70);
      if (lVar7 == 0) {
        uVar3 = *(uint *)(param_1 + 4);
        do {
          uVar1 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar1;
          if (uVar3 <= uVar1) goto LAB_03415000;
          lVar7 = *(long *)(param_1[3] + (ulong)uVar1 * 8);
        } while (lVar7 == 0);
      }
    } while( true );
  }
LAB_03415000:
  if ((int)param_1[1] != 0) {
    lVar7 = *(long *)*param_1;
    if (lVar7 == 0) {
      uVar9 = 0;
      do {
        if ((int)param_1[1] - 1 == uVar9) goto LAB_034150d8;
        uVar9 = uVar9 + 1;
        lVar7 = ((long *)*param_1)[uVar9 & 0xffffffff];
      } while (lVar7 == 0);
    }
    else {
      uVar9 = 0;
    }
    do {
      do {
        if ((*(char *)(lVar7 + 0x60) != '\0') ||
           ((*(long *)(lVar7 + 0xa8) != 0 && (*(char *)(*(long *)(lVar7 + 0xa8) + 0x3c) != '\0'))))
        {
          uVar3 = *(uint *)(param_1 + 7);
          if (uVar3 != 0) {
            uVar1 = 0;
            uVar4 = (uint)*(long *)(lVar7 + 0xb0);
            if (uVar3 != 0) {
              uVar1 = uVar4 / uVar3;
            }
            for (plVar6 = *(long **)(param_1[6] + (ulong)(uVar4 - uVar1 * uVar3) * 8);
                plVar6 != (long *)0x0; plVar6 = (long *)plVar6[8]) {
              if (*plVar6 == *(long *)(lVar7 + 0xb0)) {
                if (*(short *)((long)plVar6 + 0x32) != 0) {
                  FUN_0341efac(lVar7);
                  goto LAB_034150a8;
                }
                break;
              }
            }
          }
          FUN_0341f140(lVar7);
LAB_034150a8:
          *(undefined1 *)(lVar7 + 0x60) = 0;
        }
        lVar7 = *(long *)(lVar7 + 0x78);
      } while (lVar7 != 0);
      do {
        uVar3 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar3;
        if (*(uint *)(param_1 + 1) <= uVar3) {
          uVar3 = *(uint *)(param_1 + 4);
          goto LAB_034150d8;
        }
        lVar7 = *(long *)(*param_1 + (ulong)uVar3 * 8);
      } while (lVar7 == 0);
    } while( true );
  }
LAB_034150d8:
  if (uVar3 == 0) {
LAB_03415138:
    for (plVar6 = (long *)param_1[0x10]; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      *(undefined1 *)((long)plVar6 + 0x3c) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x8c) = 0;
    return;
  }
  lVar7 = *(long *)param_1[3];
  if (lVar7 == 0) {
    uVar9 = 0;
    do {
      if (uVar3 - 1 == uVar9) goto LAB_03415138;
      uVar9 = uVar9 + 1;
      lVar7 = ((long *)param_1[3])[uVar9 & 0xffffffff];
    } while (lVar7 == 0);
  }
  else {
    uVar9 = 0;
  }
  do {
    do {
      *(undefined1 *)(lVar7 + 0x60) = 0;
      lVar7 = *(long *)(lVar7 + 0x70);
    } while (lVar7 != 0);
    do {
      uVar3 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar3;
      if (*(uint *)(param_1 + 4) <= uVar3) goto LAB_03415138;
      lVar7 = *(long *)(param_1[3] + (ulong)uVar3 * 8);
    } while (lVar7 == 0);
  } while( true );
}



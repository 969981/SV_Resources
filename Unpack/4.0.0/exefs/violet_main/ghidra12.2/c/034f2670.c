/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f2670; name: FUN_034f2670
 */


void FUN_034f2670(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  if (DAT_048b0840 != 0) {
    plVar4 = DAT_048b0838;
    if ((param_1 & 1) == 0) {
      do {
        lVar2 = *plVar4;
        *(undefined4 *)(lVar2 + 0x184) = 0x2c;
        (**(code **)(**(long **)(lVar2 + 0x118) + 0xf0))();
        if (*(int *)(lVar2 + 0x130) == 1) {
          FUN_03509cdc(lVar2,lVar2 + 0x158);
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != DAT_048b0838 + DAT_048b0840);
    }
    else {
      do {
        lVar2 = *plVar4;
        *(undefined4 *)(lVar2 + 0x184) = 0x2c;
        (**(code **)(**(long **)(lVar2 + 0x118) + 0xf0))();
        if ((*(int *)(lVar2 + 0x130) == 1) &&
           (uVar1 = FUN_03509cdc(lVar2,lVar2 + 0x158), (uVar1 & 1) != 0)) {
          *(undefined2 *)(lVar2 + 0x16a) = 0;
          *(undefined8 *)(lVar2 + 0x16c) = 0;
          *(undefined4 *)(lVar2 + 0x174) = 0xffffffff;
          *(undefined4 *)(lVar2 + 0x184) = 0x2b;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != DAT_048b0838 + DAT_048b0840);
    }
    if (DAT_048b0840 != 0) {
      uVar1 = 0;
      uVar5 = (ulong)DAT_048b0840;
      do {
        lVar2 = DAT_048b0838[uVar1];
        if (*(int *)(lVar2 + 0x184) == 0x2b) {
          FUN_034f1dbc(lVar2,lVar2 + 0x158);
          if (*(int *)(lVar2 + 0x184) == 0x2e) {
            *(undefined4 *)(*(long *)(lVar2 + 8) + 0x114) = 0x42ca0000;
          }
          else {
            for (lVar3 = *(long *)(lVar2 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
              if ((~*(byte *)(lVar3 + 0x1d8) & 3) != 0) {
                FUN_03505910(*(undefined8 *)(lVar3 + 0x198),lVar3);
              }
            }
            (**(code **)(*(long *)(lVar2 + 0x68) + 0x18))((long *)(lVar2 + 0x68));
            for (lVar2 = *(long *)(lVar2 + 0x28); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
              if (*(int *)(lVar2 + 0x188) != 0) {
                lVar3 = *(long *)(lVar2 + 0x180);
                do {
                  *(undefined8 *)(lVar3 + 0x18) = 0;
                  lVar3 = lVar3 + 0x158;
                } while (lVar3 != *(long *)(lVar2 + 0x180) + (ulong)*(uint *)(lVar2 + 0x188) * 0x158
                        );
              }
            }
          }
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 != uVar5);
    }
  }
  return;
}



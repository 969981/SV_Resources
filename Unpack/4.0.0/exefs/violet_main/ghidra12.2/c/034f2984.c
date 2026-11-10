/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f2984; name: FUN_034f2984
 */


void FUN_034f2984(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if (DAT_048b0840 != 0) {
    plVar6 = DAT_048b0838;
    do {
      lVar5 = *plVar6;
      if (*(int *)(lVar5 + 0x184) != 0x2c) {
        if (*(int *)(lVar5 + 0x184) == 0x2e) {
          *(undefined4 *)(*(long *)(lVar5 + 8) + 0x114) = 0x42ca0000;
        }
        else {
          (**(code **)(*(long *)(lVar5 + 0x68) + 0x18))((long *)(lVar5 + 0x68));
          for (lVar1 = *(long *)(lVar5 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
            if (*(int *)(lVar1 + 0x188) != 0) {
              lVar3 = *(long *)(lVar1 + 0x180);
              do {
                *(undefined8 *)(lVar3 + 0x18) = 0;
                lVar3 = lVar3 + 0x158;
              } while (lVar3 != *(long *)(lVar1 + 0x180) + (ulong)*(uint *)(lVar1 + 0x188) * 0x158);
            }
          }
        }
      }
      FUN_034f07d4(lVar5,lVar5 + 0x158);
      if (*(int *)(lVar5 + 0x130) == 2) {
        plVar4 = DAT_048b0838 + ((ulong)DAT_048b0840 - 1);
        plVar7 = plVar6;
        if (plVar6 < plVar4) {
          do {
            plVar2 = plVar7 + 1;
            *plVar7 = *plVar2;
            plVar7 = plVar2;
          } while (plVar2 < plVar4);
        }
        DAT_048b0840 = DAT_048b0840 - 1;
        FUN_03483f78(lVar5,0);
      }
      else {
        plVar6 = plVar6 + 1;
      }
    } while (DAT_048b0838 + DAT_048b0840 != plVar6);
  }
  return;
}



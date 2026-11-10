/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033ae0a4; name: FUN_033ae0a4
 */


undefined8 FUN_033ae0a4(ulong *param_1,ulong *param_2)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  short *psVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  short *psVar8;
  long *plVar9;
  long *plVar10;
  
LAB_033ae0b8:
  do {
    uVar2 = *param_1;
    puVar6 = param_1;
    if ((uVar2 & 1) == 0) {
      puVar5 = param_1;
      do {
        puVar5 = (ulong *)puVar5[1];
      } while ((*puVar5 & 1) == 0);
      if ((param_1 != (ulong *)0x0) && ((puVar5[2] & 0x1f) == 7)) goto LAB_033ae184;
      if ((uVar2 & 1) == 0) {
        do {
          puVar6 = (ulong *)puVar6[1];
        } while ((*puVar6 & 1) == 0);
      }
    }
    else if ((param_1 != (ulong *)0x0) && ((param_1[2] & 0x1f) == 7)) {
LAB_033ae184:
      if (param_1 == param_2) {
        return 0;
      }
      plVar10 = (long *)0x0;
      plVar9 = (long *)0x0;
      puVar6 = (ulong *)0x0;
      do {
        plVar9 = plVar9 + 1;
        puVar5 = puVar6;
        if (plVar10 <= plVar9) {
          if (puVar6 == param_1) {
            return 0;
          }
          psVar4 = (short *)0x0;
          puVar5 = (ulong *)0x0;
          puVar7 = param_1;
          do {
            uVar3 = (uint)*puVar7;
            if ((uVar3 >> 0x17 & 1) != 0) {
              uVar2 = CONCAT44(uVar3,uVar3) & 0x7fffff007fffff;
              psVar8 = (short *)puVar7[(ulong)(byte)(POPCOUNT((char)uVar2) +
                                                     POPCOUNT((char)(uVar2 >> 8)) +
                                                    POPCOUNT((char)(uVar2 >> 0x10))) + 2];
              if (psVar8 != (short *)0x0) {
                if ((int)psVar8[1] + (int)*psVar8 != 0) {
                  psVar4 = psVar8;
                  puVar5 = puVar7;
                }
              }
            }
            puVar7 = (ulong *)puVar7[1];
          } while (puVar7 != puVar6);
          if (puVar5 == (ulong *)0x0) {
            return 0;
          }
          plVar9 = (long *)(psVar4 + 4);
          plVar10 = plVar9 + (long)psVar4[1] + (long)*psVar4;
        }
        uVar3 = (uint)*(undefined8 *)*plVar9;
        if ((uVar3 >> 0x11 & 1) == 0) {
          uVar1 = 0;
        }
        else {
          uVar2 = CONCAT44(uVar3,uVar3) & 0x1ffff0001ffff;
          uVar1 = *(ushort *)
                   (*plVar9 +
                   (ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8)) +
                                POPCOUNT((char)(uVar2 >> 0x10))) * 8 + 0x12);
        }
        puVar6 = puVar5;
        if (((uVar1 & 0x30) != 0) && (uVar2 = FUN_033ae0a4(*plVar9,param_1), (uVar2 & 1) != 0)) {
          return 1;
        }
      } while( true );
    }
    if (param_1 == (ulong *)0x0) {
      return 0;
    }
    if ((puVar6[2] & 0x1f) != 8) {
      return 0;
    }
    puVar6 = param_1;
    if (((uint)uVar2 >> 1 & 1) == 0) {
      do {
        puVar6 = (ulong *)puVar6[1];
        if (puVar6 == (ulong *)0x0) {
          return 1;
        }
      } while (((byte)*puVar6 >> 1 & 1) == 0);
    }
    if (puVar6[3] == 0) {
      return 1;
    }
    if (((uint)uVar2 >> 1 & 1) == 0) {
      do {
        param_1 = (ulong *)param_1[1];
        if (param_1 == (ulong *)0x0) goto LAB_033ae0b8;
      } while (((byte)*param_1 >> 1 & 1) == 0);
    }
    param_1 = (ulong *)param_1[3];
  } while( true );
}



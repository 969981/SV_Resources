/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031da9a0; name: FUN_031da9a0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_031da9a0(ulong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  short *psVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
LAB_031da9c8:
  if (param_1 == (ulong *)0x0) {
    return 0;
  }
  uVar10 = *param_1;
  uVar8 = (uint)uVar10;
  puVar5 = param_1;
  if ((uVar10 & 1) == 0) {
    do {
      puVar5 = (ulong *)puVar5[1];
    } while ((*puVar5 & 1) == 0);
  }
  if ((puVar5[2] & 0x1f) == 8) {
    puVar5 = param_1;
    if ((uVar10 & 1) == 0) {
      do {
        puVar5 = (ulong *)puVar5[1];
        if (puVar5 == (ulong *)0x0) goto LAB_031daa24;
      } while ((*puVar5 & 1) == 0);
    }
    iVar1 = (int)(puVar5[2] >> 8);
    if (iVar1 != 0) {
      if ((uVar8 >> 1 & 1) == 0) goto LAB_031daafc;
      goto LAB_031dab0c;
    }
  }
LAB_031daa24:
  if ((uVar8 >> 0x17 & 1) != 0) {
    uVar7 = CONCAT44(uVar8,uVar8) & 0x7fffff007fffff;
    psVar6 = (short *)param_1[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8)) +
                                           POPCOUNT((char)(uVar7 >> 0x10))) + 2];
    if ((psVar6 != (short *)0x0) && ((long)*psVar6 != 0)) {
      puVar5 = *(ulong **)(psVar6 + (long)*psVar6 * 4);
      uVar10 = *puVar5;
      uVar8 = (uint)uVar10;
      if ((uVar8 >> 0x11 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar8 & 0x1ffff;
        uVar3 = (uint)(ushort)puVar5[(ulong)(byte)(POPCOUNT((char)uVar3) +
                                                   POPCOUNT((char)(uVar3 >> 8)) +
                                                  POPCOUNT((char)(uVar3 >> 0x10))) + 2];
      }
      goto joined_r0x031dab40;
    }
  }
  if ((((uVar8 >> 0xe & 1) == 0) ||
      (uVar7 = CONCAT44(uVar8,uVar8) & 0x3fff00003fff,
      (undefined8 *)param_1[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))) + 2]
      == (undefined8 *)0x0)) ||
     (iVar1 = (int)*(undefined8 *)
                    param_1[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))) + 2]
     , iVar1 == 0)) {
    uVar7 = 0;
    puVar5 = param_1;
    if ((uVar8 >> 0x15 & 1) != 0) goto LAB_031daa98;
    do {
      uVar9 = 0;
      while( true ) {
        uVar7 = uVar9 | uVar7;
        if (((uVar10 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0)) {
          param_1 = (ulong *)param_1[1];
          if (((uint)uVar7 >> 7 & 1) != 0) {
            if (param_1 == (ulong *)0x0) {
              iVar1 = 0;
            }
            else {
              iVar1 = FUN_031da9a0(param_1,param_2);
            }
            return ((param_2 + iVar1) - 1 & -param_2) + param_2;
          }
          goto LAB_031da9c8;
        }
        uVar10 = *puVar5;
        if (((uint)uVar10 >> 0x15 & 1) == 0) break;
LAB_031daa98:
        uVar9 = CONCAT44((int)uVar10,(int)uVar10) & 0x1fffff001fffff;
        uVar9 = puVar5[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                                    POPCOUNT((char)(uVar9 >> 0x10))) + 2];
      }
    } while( true );
  }
  iVar2 = 0;
  if (param_1[1] != 0) {
    iVar2 = FUN_031da9a0(param_1[1],param_2);
  }
  uVar7 = 0;
  if ((uVar8 >> 0x15 & 1) != 0) goto LAB_031dab9c;
  do {
    uVar9 = 0;
    while( true ) {
      uVar7 = uVar9 | uVar7;
      if (((uVar10 & 1) != 0) || (param_1 = (ulong *)param_1[1], param_1 == (ulong *)0x0)) {
        uVar3 = 0;
        if ((uVar7 & 0x80) != 0) {
          uVar3 = param_2;
        }
        uVar4 = ((param_2 + iVar2) - 1 & -param_2) + iVar1 * param_2;
        goto LAB_031dabe4;
      }
      uVar10 = *param_1;
      if (((uint)uVar10 >> 0x15 & 1) == 0) break;
LAB_031dab9c:
      uVar8 = (uint)uVar10 & 0x1fffff;
      uVar9 = param_1[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                                   POPCOUNT((char)(uVar8 >> 0x10))) + 2];
    }
  } while( true );
  while (((byte)*param_1 >> 1 & 1) == 0) {
LAB_031daafc:
    param_1 = (ulong *)param_1[1];
    if (param_1 == (ulong *)0x0) {
      puVar5 = (ulong *)0x0;
      goto LAB_031dac2c;
    }
  }
LAB_031dab0c:
  puVar5 = (ulong *)param_1[3];
LAB_031dac2c:
  do {
    uVar8 = (uint)*puVar5;
    if ((uVar8 >> 0x14 & 1) != 0) {
      uVar3 = 0;
      if (puVar5 != (ulong *)0x0) {
        uVar8 = uVar8 & 0xfffff;
        uVar3 = (uint)(ushort)puVar5[(ulong)(byte)(POPCOUNT((char)uVar8) +
                                                   POPCOUNT((char)(uVar8 >> 8)) +
                                                  POPCOUNT((char)(uVar8 >> 0x10))) + 2];
      }
      goto LAB_031dac70;
    }
    if ((*puVar5 & 1) != 0) {
      uVar3 = 0;
      goto LAB_031dac70;
    }
    puVar5 = (ulong *)puVar5[1];
    if (puVar5 == (ulong *)0x0) {
      uVar3 = 0;
LAB_031dac70:
      return uVar3 * iVar1;
    }
  } while( true );
joined_r0x031dab40:
  if ((uVar8 >> 0x14 & 1) != 0) {
    uVar4 = 0;
    if (puVar5 != (ulong *)0x0) {
      uVar8 = uVar8 & 0xfffff;
      uVar4 = (uint)(ushort)puVar5[(ulong)(byte)(POPCOUNT((char)uVar8) +
                                                 POPCOUNT((char)(uVar8 >> 8)) +
                                                POPCOUNT((char)(uVar8 >> 0x10))) + 2];
    }
LAB_031dabe4:
    return uVar4 + uVar3;
  }
  if ((uVar10 & 1) != 0) {
    uVar4 = 0;
    goto LAB_031dabe4;
  }
  puVar5 = (ulong *)puVar5[1];
  uVar4 = 0;
  if (puVar5 == (ulong *)0x0) goto LAB_031dabe4;
  uVar10 = *puVar5;
  uVar8 = (uint)uVar10;
  goto joined_r0x031dab40;
}



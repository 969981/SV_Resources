/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031dad84; name: FUN_031dad84
 */


undefined8 FUN_031dad84(long param_1,ulong *param_2,int param_3)

{
  int iVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  puVar2 = param_2;
  while( true ) {
    uVar3 = (uint)*puVar2;
    if ((uVar3 >> 0x16 & 1) != 0) break;
    if (((*puVar2 & 1) != 0) || (puVar2 = (ulong *)puVar2[1], puVar2 == (ulong *)0x0))
    goto LAB_031dade8;
  }
  if (puVar2 != (ulong *)0x0) {
    uVar4 = CONCAT44(uVar3,uVar3) & 0x3fffff003fffff;
    pcVar6 = (code *)puVar2[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8)) +
                                         POPCOUNT((char)(uVar4 >> 0x10))) + 2];
    if (pcVar6 != (code *)0x0) goto LAB_031dae34;
  }
LAB_031dade8:
  puVar2 = param_2;
  while (uVar4 = *puVar2, ((uint)uVar4 >> 6 & 1) == 0) {
    if ((uVar4 & 1) != 0) {
      return 0x80040200;
    }
    puVar2 = (ulong *)puVar2[1];
    if (puVar2 == (ulong *)0x0) {
      return 0x80040200;
    }
  }
  if (puVar2 == (ulong *)0x0) {
    return 0x80040200;
  }
  pcVar6 = (code *)puVar2[(ulong)(byte)POPCOUNT((byte)uVar4 & 0x3f) + 2];
  if (pcVar6 == (code *)0x0) {
    return 0x80040200;
  }
LAB_031dae34:
  if (param_2 == (ulong *)PTR_DAT_047ddc28) {
LAB_031daf74:
    if (0 < param_3) {
      puVar2 = param_2;
      while( true ) {
        uVar3 = (uint)*puVar2;
        if ((uVar3 >> 0x14 & 1) != 0) break;
        if (((*puVar2 & 1) != 0) || (puVar2 = (ulong *)puVar2[1], puVar2 == (ulong *)0x0))
        goto LAB_031dafc0;
      }
      if (puVar2 != (ulong *)0x0) {
        uVar4 = CONCAT44(uVar3,uVar3) & 0xfffff000fffff;
        uVar4 = (ulong)(ushort)puVar2[(ulong)(byte)(POPCOUNT((char)uVar4) +
                                                    POPCOUNT((char)(uVar4 >> 8)) +
                                                   POPCOUNT((char)(uVar4 >> 0x10))) + 2];
        goto LAB_031dafc4;
      }
LAB_031dafc0:
      uVar4 = 0;
LAB_031dafc4:
      do {
        uVar7 = *(undefined8 *)(param_1 + 8);
        (*pcVar6)(param_1,param_2,1);
        *(undefined8 *)(param_1 + 8) = uVar7;
        param_1 = uVar4 + param_1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else {
    puVar2 = param_2;
    do {
      uVar3 = (uint)*puVar2;
      if ((uVar3 >> 0xd & 1) != 0) {
        puVar5 = (ulong *)0x0;
        if (puVar2 != (ulong *)0x0) {
          uVar4 = CONCAT44(uVar3,uVar3) & 0x1fff00001fff;
          puVar5 = puVar2 + (ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8))) + 2;
        }
        goto LAB_031dae8c;
      }
      if ((*puVar2 & 1) != 0) {
        puVar5 = (ulong *)0x0;
        goto LAB_031dae8c;
      }
      puVar2 = (ulong *)puVar2[1];
    } while (puVar2 != (ulong *)0x0);
    puVar5 = (ulong *)0x0;
LAB_031dae8c:
    puVar2 = (ulong *)PTR_DAT_047ddc28;
LAB_031dae94:
    uVar3 = (uint)*puVar2;
    if ((uVar3 >> 0xd & 1) == 0) goto code_r0x031dae9c;
    if ((puVar2 != (ulong *)0x0) && (puVar5 != (ulong *)0x0)) {
      uVar4 = CONCAT44(uVar3,uVar3) & 0x1fff00001fff;
      while( true ) {
        DataMemoryBarrier(2,1);
        uVar3 = (uint)puVar2[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8))) + 2
                            ];
        if (((DAT_04884450 & 1) == 0) || ((((uint)*puVar5 ^ uVar3) & 3) == 0)) break;
        DataMemoryBarrier(2,2);
        Yield();
      }
      iVar1 = (int)(*puVar5 >> 0x11);
      if ((iVar1 < (int)(puVar2[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8)))
                                + 2] >> 0x11)) || ((int)(uVar3 >> 2 & 0x7fff) < iVar1))
      goto LAB_031daf44;
      goto LAB_031daf74;
    }
LAB_031daf14:
    puVar2 = (ulong *)PTR_DAT_047ddc28;
    do {
      if ((*puVar2 & 1) != 0) break;
      puVar2 = (ulong *)puVar2[1];
    } while (puVar2 != (ulong *)0x0);
    if (param_2 != (ulong *)0x0) {
      puVar5 = param_2;
      do {
        if (puVar5 == puVar2) goto LAB_031daf74;
        puVar5 = (ulong *)puVar5[1];
      } while (puVar5 != (ulong *)0x0);
    }
LAB_031daf44:
    (*pcVar6)(param_1,param_2,param_3);
  }
  return 0;
code_r0x031dae9c:
  if (((*puVar2 & 1) != 0) || (puVar2 = (ulong *)puVar2[1], puVar2 == (ulong *)0x0))
  goto LAB_031daf14;
  goto LAB_031dae94;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c6414; name: FUN_031c6414
 */


void FUN_031c6414(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *local_38;
  ulong *local_18;
  
  puVar1 = (undefined8 *)*param_1;
  puVar7 = (ulong *)param_1[1];
  if (puVar7 != (ulong *)PTR_DAT_047e5958) {
    local_18 = puVar7;
    while( true ) {
      uVar4 = (uint)*local_18;
      if ((uVar4 >> 0xd & 1) != 0) break;
      if (((*local_18 & 1) != 0) || (local_18 = (ulong *)local_18[1], local_18 == (ulong *)0x0))
      goto LAB_031c6488;
    }
    if (local_18 != (ulong *)0x0) {
      uVar3 = CONCAT44(uVar4,uVar4) & 0x1fff00001fff;
      local_18 = local_18 + (ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8))) + 2;
      goto LAB_031c6490;
    }
LAB_031c6488:
    local_18 = (ulong *)0x0;
LAB_031c6490:
    local_38 = (ulong *)PTR_DAT_047e5958;
    while( true ) {
      uVar4 = (uint)*local_38;
      if ((uVar4 >> 0xd & 1) != 0) break;
      if (((*local_38 & 1) != 0) || (local_38 = (ulong *)local_38[1], local_38 == (ulong *)0x0))
      goto LAB_031c64ec;
    }
    if (local_38 != (ulong *)0x0) {
      uVar3 = CONCAT44(uVar4,uVar4) & 0x1fff00001fff;
      local_38 = local_38 + (ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8))) + 2;
      if (local_18 == (ulong *)0x0) goto LAB_031c64f0;
      FUN_031dd354(&local_18,&local_38);
      goto LAB_031c6520;
    }
LAB_031c64ec:
    local_38 = (ulong *)0x0;
LAB_031c64f0:
    puVar2 = (ulong *)PTR_DAT_047e5958;
    do {
      if ((*puVar2 & 1) != 0) break;
      puVar2 = (ulong *)puVar2[1];
    } while (puVar2 != (ulong *)0x0);
    if (puVar7 != (ulong *)0x0) {
      puVar5 = puVar7;
      do {
        if (puVar5 == puVar2) break;
        puVar5 = (ulong *)puVar5[1];
      } while (puVar5 != (ulong *)0x0);
    }
  }
LAB_031c6520:
  uVar3 = 0;
  do {
    uVar4 = (uint)*puVar7;
    if ((uVar4 >> 0x15 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = CONCAT44(uVar4,uVar4) & 0x1fffff001fffff;
      uVar6 = puVar7[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8)) +
                                  POPCOUNT((char)(uVar6 >> 0x10))) + 2];
    }
    uVar3 = uVar6 | uVar3;
  } while (((*puVar7 & 1) == 0) && (puVar7 = (ulong *)puVar7[1], puVar7 != (ulong *)0x0));
  if ((uVar3 & 8) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  FUN_031c6afc(param_2,*puVar1,*(int *)(puVar1 + 1) - (int)*puVar1);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034ad64; name: FUN_0034ad64
 */


void FUN_0034ad64(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_0038db40();
  lVar2 = *(long *)(param_1 + 0x38);
  lVar1 = lVar2 + 1;
  *(long *)(param_1 + 0x38) = lVar1;
  *(long *)(param_2 + 0x18) = lVar1;
  puVar4 = (undefined8 *)(param_1 + 0x28);
  puVar5 = (undefined8 *)*puVar4;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = puVar4;
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 0x28);
    while( true ) {
      while (lVar1 < (long)puVar5[4]) {
        puVar4 = puVar5;
        if ((undefined8 *)*puVar5 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)*puVar5;
          goto joined_r0x0034ae2c;
        }
        puVar5 = (undefined8 *)*puVar5;
      }
      if (lVar2 < (long)puVar5[4]) break;
      puVar4 = puVar5 + 1;
      if ((undefined8 *)*puVar4 == (undefined8 *)0x0) break;
      puVar5 = (undefined8 *)*puVar4;
    }
  }
  puVar3 = (undefined8 *)*puVar4;
joined_r0x0034ae2c:
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    puVar3[4] = *(undefined8 *)(param_2 + 0x18);
    puVar3[5] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = puVar5;
    *puVar4 = puVar3;
    if (**(long **)(param_1 + 0x20) == 0) {
      puVar4 = puVar3;
    }
    else {
      *(long *)(param_1 + 0x20) = **(long **)(param_1 + 0x20);
      puVar4 = (undefined8 *)*puVar4;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x28),puVar4);
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  }
  puVar3[5] = param_2;
                    /* try { // try from 0034ae50 to 0034ae57 has its CatchHandler @ 0034ae68 */
  FUN_0038db60(param_1);
  return;
}



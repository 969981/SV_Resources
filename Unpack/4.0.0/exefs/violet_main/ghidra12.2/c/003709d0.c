/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003709d0; name: FUN_003709d0
 */


void FUN_003709d0(ulong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long *plVar6;
  
  if (DAT_047f0f30 == '\x01') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1 = param_1 & 0xffffffff;
  puVar5 = &DAT_047f0f40 + param_1 * 3;
  uVar3 = *puVar5;
  uVar4 = *(ulong *)(&DAT_047f0f48 + param_1 * 0x18);
  plVar6 = &DAT_047f0f38 + param_1 * 3;
  if (uVar4 == uVar3) {
    uVar4 = uVar4 * 3;
    uVar3 = 8;
    if (0xf < uVar4) {
      uVar3 = uVar4 >> 1;
    }
    *(ulong *)(&DAT_047f0f48 + param_1 * 0x18) = uVar3;
    lVar2 = FUN_0038c7f0(*plVar6,uVar3 << 5);
    *plVar6 = lVar2;
    uVar3 = *puVar5;
  }
  else {
    lVar2 = *plVar6;
  }
  puVar1 = (undefined8 *)(lVar2 + uVar3 * 0x20);
  *puVar5 = uVar3 + 1;
  puVar1[3] = uVar3 + 1;
  *(undefined4 *)(puVar1 + 2) = param_2;
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



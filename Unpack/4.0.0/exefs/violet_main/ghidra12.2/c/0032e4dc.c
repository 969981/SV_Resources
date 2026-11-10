/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032e4dc; name: FUN_0032e4dc
 */


void FUN_0032e4dc(void)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  puVar2 = DAT_047ef4b0;
  puVar1 = PTR_LAB_047cba48;
  if (DAT_047ef4b0 == (ulong *)0x0) {
    DAT_047ef4b0 = (ulong *)0x0;
    return;
  }
  uVar5 = *DAT_047ef4b0;
  uVar3 = uVar5 & 1;
  if ((uVar5 & 1) == 0) {
    puVar4 = DAT_047ef4b0 + 1;
    if (uVar5 >> 1 == 0 || puVar4 == (ulong *)0x0) goto LAB_0032e580;
  }
  else {
    puVar4 = (ulong *)DAT_047ef4b0[1];
    if (uVar5 >> 1 == 0 || puVar4 == (ulong *)0x0) goto LAB_0032e580;
  }
  uVar3 = uVar5 >> 1;
  do {
    uVar5 = uVar3 - 1;
    puVar6 = (undefined8 *)puVar4[uVar3 - 1];
    puVar4[uVar3 - 1] = 0;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      FUN_0049e790(puVar1,puVar6);
    }
    uVar3 = uVar5;
  } while (uVar5 != 0);
  uVar3 = *puVar2 & 1;
LAB_0032e580:
  if (uVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48,puVar2[1]);
  }
  FUN_0049e790(PTR_LAB_047cba48,puVar2);
  DAT_047ef4b0 = (ulong *)0x0;
  return;
}



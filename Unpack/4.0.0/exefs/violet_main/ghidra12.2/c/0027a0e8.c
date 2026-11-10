/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0027a0e8; name: FUN_0027a0e8
 */


void FUN_0027a0e8(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  *param_1 = 0;
  if (lVar5 == 0) {
    return;
  }
  if ((char)param_1[2] == '\0') goto LAB_0027a190;
  if ((*(ulong *)(lVar5 + 0x38) & 1) == 0) {
    lVar3 = lVar5 + 0x40;
LAB_0027a128:
    uVar4 = *(ulong *)(lVar5 + 0x38) >> 1;
    puVar2 = (undefined8 *)(lVar3 + uVar4 * 0x90 + -8);
    lVar3 = uVar4 + 1;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
      uVar1 = *puVar2;
      puVar2 = puVar2 + -0x12;
                    /* try { // try from 0027a14c to 0027a14f has its CatchHandler @ 0027a1a8 */
      FUN_00343d90(uVar1);
    }
    if ((*(byte *)(lVar5 + 0x38) & 1) != 0) {
      uVar1 = *(undefined8 *)(lVar5 + 0x40);
      goto LAB_0027a16c;
    }
  }
  else {
    lVar3 = *(long *)(lVar5 + 0x40);
    if (lVar3 != 0) goto LAB_0027a128;
    uVar1 = 0;
LAB_0027a16c:
    FUN_0049e790(PTR_LAB_047cba48,uVar1);
  }
  if ((*(byte *)(lVar5 + 0x20) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar5 + 0x30));
  }
LAB_0027a190:
  FUN_0049e790(PTR_LAB_047cba48,lVar5);
  return;
}



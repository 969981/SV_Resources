/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016b0268; name: FUN_016b0268
 */


void FUN_016b0268(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  (*(undefined8 **)(param_1 + 0x78))[1] = **(undefined8 **)(param_1 + 0x78);
  plVar1 = *(long **)(param_1 + 0x78);
  lVar2 = plVar1[1] - *plVar1;
  lVar3 = lVar2 >> 4;
  if ((ulong)(lVar3 * -0x2c8590b21642c859) < 0x80) {
    FUN_016b0614(plVar1,lVar3 * 0x2c8590b21642c859 + 0x80);
  }
  else if (lVar2 != 0xb800) {
    plVar1[1] = *plVar1 + 0xb800;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x40) =
       *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x38);
  lVar2 = *(long *)(param_1 + 0x78);
  lVar3 = *(long *)(lVar2 + 0x38);
  lVar4 = *(long *)(lVar2 + 0x40) - lVar3;
  lVar5 = lVar4 >> 4;
  if ((ulong)(lVar5 * -0x2c8590b21642c859) < 0x80) {
    FUN_016b0614((long *)(lVar2 + 0x38),lVar5 * 0x2c8590b21642c859 + 0x80);
  }
  else if (lVar4 != 0xb800) {
    *(long *)(lVar2 + 0x40) = lVar3 + 0xb800;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x78) =
       *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x70);
  lVar2 = *(long *)(param_1 + 0x78);
  lVar3 = *(long *)(lVar2 + 0x70);
  lVar4 = *(long *)(lVar2 + 0x78) - lVar3;
  lVar5 = lVar4 >> 4;
  if ((ulong)(lVar5 * -0x2c8590b21642c859) < 0x80) {
    FUN_016b0614((long *)(lVar2 + 0x70),lVar5 * 0x2c8590b21642c859 + 0x80);
  }
  else if (lVar4 != 0xb800) {
    *(long *)(lVar2 + 0x78) = lVar3 + 0xb800;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xb0) =
       *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa8);
  lVar2 = *(long *)(param_1 + 0x78);
  lVar3 = *(long *)(lVar2 + 0xa8);
  lVar4 = *(long *)(lVar2 + 0xb0) - lVar3;
  lVar5 = lVar4 >> 4;
  if ((ulong)(lVar5 * -0x2c8590b21642c859) < 0x80) {
    FUN_016b0614((long *)(lVar2 + 0xa8),lVar5 * 0x2c8590b21642c859 + 0x80);
  }
  else if (lVar4 != 0xb800) {
    *(long *)(lVar2 + 0xb0) = lVar3 + 0xb800;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xe8) =
       *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xe0);
  lVar2 = *(long *)(param_1 + 0x78);
  lVar3 = *(long *)(lVar2 + 0xe0);
  lVar4 = *(long *)(lVar2 + 0xe8) - lVar3;
  lVar5 = lVar4 >> 4;
  if ((ulong)(lVar5 * -0x2c8590b21642c859) < 0x80) {
    FUN_016b0614((long *)(lVar2 + 0xe0),lVar5 * 0x2c8590b21642c859 + 0x80);
  }
  else if (lVar4 != 0xb800) {
    *(long *)(lVar2 + 0xe8) = lVar3 + 0xb800;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x120) =
       *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x118);
  lVar2 = *(long *)(param_1 + 0x78);
  lVar3 = *(long *)(lVar2 + 0x120) - *(long *)(lVar2 + 0x118);
  lVar4 = lVar3 >> 4;
  if ((ulong)(lVar4 * -0x2c8590b21642c859) < 0x80) {
    FUN_016b0614(lVar2 + 0x118,lVar4 * 0x2c8590b21642c859 + 0x80);
  }
  else if (lVar3 != 0xb800) {
    *(long *)(lVar2 + 0x120) = *(long *)(lVar2 + 0x118) + 0xb800;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x158) =
       *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x150);
  lVar2 = *(long *)(param_1 + 0x78);
  lVar3 = *(long *)(lVar2 + 0x158) - *(long *)(lVar2 + 0x150);
  lVar4 = lVar3 >> 4;
  if ((ulong)(lVar4 * -0x2c8590b21642c859) < 0x80) {
    FUN_016b0614(lVar2 + 0x150,lVar4 * 0x2c8590b21642c859 + 0x80);
  }
  else if (lVar3 != 0xb800) {
    *(long *)(lVar2 + 0x158) = *(long *)(lVar2 + 0x150) + 0xb800;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x78) + 400) =
       *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x188);
  lVar2 = *(long *)(param_1 + 0x78);
  lVar3 = *(long *)(lVar2 + 400) - *(long *)(lVar2 + 0x188);
  lVar4 = lVar3 >> 4;
  if ((ulong)(lVar4 * -0x2c8590b21642c859) < 0x80) {
    FUN_016b0614(lVar2 + 0x188,lVar4 * 0x2c8590b21642c859 + 0x80);
  }
  else if (lVar3 != 0xb800) {
    *(long *)(lVar2 + 400) = *(long *)(lVar2 + 0x188) + 0xb800;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1c8) =
       *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1c0);
  lVar2 = *(long *)(param_1 + 0x78);
  lVar3 = *(long *)(lVar2 + 0x1c8) - *(long *)(lVar2 + 0x1c0);
  lVar4 = lVar3 >> 4;
  if ((ulong)(lVar4 * -0x2c8590b21642c859) < 0x80) {
    FUN_016b0614(lVar2 + 0x1c0,lVar4 * 0x2c8590b21642c859 + 0x80);
  }
  else if (lVar3 != 0xb800) {
    *(long *)(lVar2 + 0x1c8) = *(long *)(lVar2 + 0x1c0) + 0xb800;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x200) =
       *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1f8);
  lVar2 = *(long *)(param_1 + 0x78);
  lVar3 = *(long *)(lVar2 + 0x200) - *(long *)(lVar2 + 0x1f8);
  lVar4 = lVar3 >> 4;
  if ((ulong)(lVar4 * -0x2c8590b21642c859) < 0x80) {
    FUN_016b0614(lVar2 + 0x1f8,lVar4 * 0x2c8590b21642c859 + 0x80);
    return;
  }
  if (lVar3 != 0xb800) {
    *(long *)(lVar2 + 0x200) = *(long *)(lVar2 + 0x1f8) + 0xb800;
  }
  return;
}



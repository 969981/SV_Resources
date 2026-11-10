/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0068ee2c; name: FUN_0068ee2c
 */


void FUN_0068ee2c(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  
  puVar1 = PTR_DAT_047cba80;
  if (param_2 == param_1) {
    return;
  }
  pbVar3 = *(byte **)(param_1 + 0x10);
  if (pbVar3 == PTR_DAT_047cba80) {
LAB_0068ee54:
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 == puVar1) goto LAB_0068ee8c;
LAB_0068ee80:
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_0068ee8c;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = *(byte **)(param_1 + 0x20);
  }
  else {
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_0068ee54;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 != puVar1) goto LAB_0068ee80;
LAB_0068ee8c:
    pbVar3 = *(byte **)(param_1 + 0x20);
  }
  if (pbVar3 != puVar1) {
    if ((*pbVar3 & 1) != 0) {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      uVar2 = *(ulong *)(param_1 + 8);
      goto joined_r0x0068eedc;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  uVar2 = *(ulong *)(param_1 + 8);
joined_r0x0068eedc:
  if ((uVar2 & 1) == 0) {
    FUN_0068ec6c();
    return;
  }
  uVar2 = uVar2 & 0xfffffffffffffffe;
  if ((*(byte *)(uVar2 + 8) & 1) == 0) {
    *(undefined2 *)(uVar2 + 8) = 0;
    FUN_0068ec6c();
    return;
  }
  **(undefined1 **)(uVar2 + 0x18) = 0;
  *(undefined8 *)(uVar2 + 0x10) = 0;
  FUN_0068ec6c();
  return;
}



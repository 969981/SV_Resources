/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f799c8; name: FUN_01f799c8
 */


void FUN_01f799c8(char *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == '\0') {
    *(undefined **)(param_1 + 8) = PTR_DAT_047cfc88 + 0x10;
    FUN_01cfa5b0(param_1 + 0x10,param_2 + 8);
    FUN_01cfa5b0(param_1 + 0x30,param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    *param_1 = '\x01';
    return;
  }
  FUN_01f7b408(param_1,param_2);
  return;
}



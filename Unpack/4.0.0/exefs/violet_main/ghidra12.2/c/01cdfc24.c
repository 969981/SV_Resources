/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cdfc24; name: FUN_01cdfc24
 */


void FUN_01cdfc24(char *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_0481b830;
  puVar1 = (undefined8 *)FUN_01ce0ae0(param_2);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined8 *)(*(long *)(param_1 + 8) - ((ulong)~uVar2 & 1)) = *puVar1;
  }
  return;
}



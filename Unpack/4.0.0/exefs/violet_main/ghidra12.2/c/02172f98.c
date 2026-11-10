/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02172f98; name: FUN_02172f98
 */


ushort FUN_02172f98(long param_1,char *param_2,char *param_3)

{
  ushort uVar1;
  
  if (((*param_2 == *param_3) && (param_2[1] == param_3[1])) && (param_2[2] == param_3[2])) {
    uVar1 = (ushort)(param_2[3] != param_3[3]);
  }
  else {
    uVar1 = 1;
  }
  *(ushort *)(param_1 + 0x114) =
       *(ushort *)(param_1 + 0x114) & 0xfffb | (*(ushort *)(param_1 + 0x114) >> 2 & 1 | uVar1) << 2;
  return uVar1;
}



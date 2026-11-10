/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0187a19c; name: FUN_0187a19c
 */


ushort FUN_0187a19c(ushort *param_1,undefined1 param_2)

{
  switch(param_2) {
  case 0:
    return *param_1;
  case 1:
    return (ushort)(byte)param_1[1];
  case 2:
    return (ushort)*(byte *)((long)param_1 + 3);
  case 3:
    return (ushort)(byte)param_1[2];
  case 4:
    return (ushort)*(byte *)((long)param_1 + 5);
  case 5:
    return (ushort)(byte)param_1[3];
  default:
    return 10;
  }
}



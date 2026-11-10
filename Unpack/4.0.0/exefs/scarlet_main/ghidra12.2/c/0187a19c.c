/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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



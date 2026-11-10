/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0109e358; name: FUN_0109e358
 */


short * FUN_0109e358(short *param_1,ushort *param_2,ushort *param_3)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_0109e33c();
  if (cVar1 == '\x02') {
    *param_2 = *param_2 & 0xfffc;
    *param_3 = *param_3 | 3;
  }
  else {
    if (cVar1 == '\x01') {
      bVar2 = (byte)param_2[1] & 0xe7 | 4;
    }
    else {
      if (cVar1 != '\0') goto LAB_0109e3d4;
      bVar2 = (byte)param_2[1] & 0xe3;
    }
    *(byte *)(param_2 + 1) = bVar2;
    *(byte *)(param_3 + 1) = (byte)param_3[1] | 0x1c;
  }
LAB_0109e3d4:
  if (*param_1 == 0x10) {
    param_1 = param_1 + (ulong)(ushort)param_1[1] + 2;
  }
  return param_1;
}



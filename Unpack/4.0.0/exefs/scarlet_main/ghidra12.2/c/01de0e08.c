/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01de0e08; name: FUN_01de0e08
 */


ulong FUN_01de0e08(ulong param_1,char *param_2)

{
  char *pcVar1;
  char *__format;
  int iVar2;
  uint uVar3;
  
  if (param_2 == (char *)0x0) {
    return param_1;
  }
  iVar2 = FUN_014a24ec();
  pcVar1 = "L_box_change_00/L_icon_box_16_%02d";
  if (iVar2 != 1) {
    pcVar1 = "L_box_change_00/L_icon_box_32_%02d";
  }
  __format = "L_box_change_00/L_icon_box_08_%02d";
  if (iVar2 != 0) {
    __format = pcVar1;
  }
  uVar3 = snprintf(param_2,0x40,__format,param_1 & 0xffffffff);
  return (ulong)uVar3;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e94d28; name: FUN_01e94d28
 */


void FUN_01e94d28(undefined4 *param_1,ushort *param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  
  uVar1 = *param_2;
  uVar3 = 0xff84;
  if (uVar1 != (short)(char)uVar1) {
    uVar3 = 0xff85;
  }
  if (0xbf < (ushort)(uVar1 + 0x40)) {
    uVar1 = uVar3;
  }
  *(char *)(*param_3 + param_3[2]) = (char)uVar1;
  param_3[2] = param_3[2] + 1;
  if ((uVar1 & 0xff) == 0x85) {
    *(ushort *)(*param_3 + param_3[2]) = *param_2;
    lVar2 = 2;
  }
  else {
    if ((uVar1 & 0xff) != 0x84) goto LAB_01e94db8;
    *(char *)(*param_3 + param_3[2]) = (char)*param_2;
    lVar2 = 1;
  }
  param_3[2] = param_3[2] + lVar2;
LAB_01e94db8:
  *param_1 = 0;
  return;
}



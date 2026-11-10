/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f46890; name: FUN_00f46890
 */


void FUN_00f46890(int *param_1,long param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  int local_18 [2];
  
  FUN_00f46950(local_18);
  if (local_18[0] != 0) {
    *param_1 = local_18[0];
    return;
  }
  uVar1 = *(ushort *)(param_2 + 0x8c);
  uVar3 = 0xff80;
  if (0xff < uVar1) {
    uVar3 = 0xff81;
  }
  if (0x7f < uVar1) {
    uVar1 = uVar3;
  }
  *(char *)(*param_3 + param_3[2]) = (char)uVar1;
  lVar2 = param_3[2] + 1;
  param_3[2] = lVar2;
  if ((uVar1 & 0xff) == 0x81) {
    *(undefined2 *)(*param_3 + lVar2) = *(undefined2 *)(param_2 + 0x8c);
    lVar2 = param_3[2] + 2;
  }
  else {
    if ((uVar1 & 0xff) != 0x80) goto LAB_00f46904;
    *(char *)(*param_3 + lVar2) = (char)*(undefined2 *)(param_2 + 0x8c);
    lVar2 = param_3[2] + 1;
  }
  param_3[2] = lVar2;
LAB_00f46904:
  *param_1 = 0;
  return;
}



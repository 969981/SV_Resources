/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078c8b4; name: FUN_0078c8b4
 */


void FUN_0078c8b4(long *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0078cdf4();
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_0078ce3c(param_1);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*param_1 + 0x10))(param_1,0);
      iVar1 = (int)param_1[0xb];
      goto joined_r0x0078c904;
    }
    *(undefined1 *)(param_1 + 9) = 1;
    do {
      FUN_00792f30(param_1,5);
      uVar2 = FUN_0078cdf4(param_1);
    } while ((uVar2 & 1) != 0);
  }
  iVar1 = (int)param_1[0xb];
joined_r0x0078c904:
  if (iVar1 == 1) {
    FUN_0078cc00(param_1 + 0xb);
  }
  FUN_0078cac8(param_1 + 0xb);
  param_1[0x11] = 0;
  return;
}



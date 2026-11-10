/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f7d748; name: FUN_00f7d748
 */


int FUN_00f7d748(undefined8 param_1,char *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  
  uVar2 = FUN_00f7e27c();
  uVar3 = FUN_00f7d7d8(uVar2,0);
  if ((uVar3 & 1) == 0) {
    iVar4 = 2;
    bVar1 = true;
  }
  else {
    bVar1 = *param_2 == '\0';
    iVar4 = (uint)bVar1 << 1;
  }
  uVar2 = FUN_00f7e27c(param_1);
  uVar3 = FUN_00f7d7d8(uVar2,1);
  if ((uVar3 & 1) != 0) {
    if (param_2[1] != '\0') {
      iVar4 = 1;
    }
    if (!(bool)(bVar1 | param_2[1] == '\0')) {
      iVar4 = 2;
    }
  }
  return iVar4;
}



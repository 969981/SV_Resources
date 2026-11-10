/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045b6c0; name: FUN_0045b6c0
 */


undefined8 FUN_0045b6c0(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_48 [2];
  long local_40;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_0047e650(&DAT_047f19c8,&LAB_0045b650);
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_047f19cc == 0) {
    return 0;
  }
  FUN_0047e5c0(DAT_047f19d8);
  local_48[0] = param_2 & 0xffff7fff;
  local_40 = param_1;
  lVar2 = FUN_00451a40(DAT_047f19e8,local_48);
  if (lVar2 != 0) {
    if ((param_2 >> 0xf & 1) != 0) {
LAB_0045b774:
      uVar3 = *(undefined8 *)(lVar2 + 0x10);
      goto LAB_0045b778;
    }
    iVar1 = 0xb;
    do {
      if (*(int *)(lVar2 + 4) == 0) goto LAB_0045b774;
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) break;
      local_40 = *(long *)(lVar2 + 0x10);
      lVar2 = FUN_00451a40(DAT_047f19e8,local_48);
    } while (lVar2 != 0);
  }
  uVar3 = 0;
LAB_0045b778:
  FUN_0047e600(DAT_047f19d8);
  return uVar3;
}



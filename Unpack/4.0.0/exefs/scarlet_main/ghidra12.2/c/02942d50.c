/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02942d50; name: FUN_02942d50
 */


undefined8 FUN_02942d50(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  iVar2 = FUN_0154b6c8(*param_1);
  if ((iVar2 == 0) &&
     (puVar3 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                     (*(long *)(*(long *)(param_1[1] + 0x290) + 8) + 0x50),param_2),
     puVar3 != (uint *)0x0)) {
    uVar1 = *puVar3;
    if (4 < (int)uVar1) {
      uVar1 = 0;
    }
    if ((uVar1 & 0xff | 2) == 3) {
      return 1;
    }
  }
  return 0;
}



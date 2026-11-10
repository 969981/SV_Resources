/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293d9d0; name: FUN_0293d9d0
 */


void FUN_0293d9d0(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar3 = (int *)FUN_011e2dd4(*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 8) + 0x50));
  if (piVar3 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *piVar3;
    if (4 < iVar1) {
      iVar1 = 0;
    }
  }
  uVar4 = FUN_00f7e3c8(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),iVar1);
  uVar2 = FUN_0293da50(param_1,param_2);
  FUN_0293daa4(uVar4,uVar2);
  return;
}



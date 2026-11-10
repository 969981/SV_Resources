/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293fe68; name: FUN_0293fe68
 */


void FUN_0293fe68(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01582534();
  lVar2 = FUN_015d9a7c(uVar1,*param_3,*(undefined4 *)(param_3 + 4));
  if (lVar2 == 0) {
    return;
  }
  FUN_02984930(lVar2,param_3 + 8);
  uVar1 = FUN_01245ab0(param_1);
  FUN_0129aff0(uVar1,0x48,*(undefined4 *)(param_3 + 4),*param_3,*(undefined4 *)(param_3 + 8));
  return;
}



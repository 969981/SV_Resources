/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ca1c4; name: FUN_007ca1c4
 */


void FUN_007ca1c4(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  nn::os::SetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_047d08a0 + 0x88),param_1);
  uVar1 = *(undefined4 *)PTR_DAT_047d0968;
  iVar2 = nn::os::GetCurrentCoreNumber();
  nn::os::SetTlsValue(uVar1,(long)(iVar2 + 1));
  *(int *)(param_1 + 200) = (int)*(undefined8 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xcc) = 1;
  FUN_007ca9bc(param_1);
  *(undefined4 *)(param_1 + 0xcc) = 3;
  return;
}



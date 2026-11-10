/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034726fc; name: FUN_034726fc
 */


void FUN_034726fc(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_03471aac();
  FUN_034af510(param_1,param_2,param_3);
  uVar2 = FUN_03471aac(param_1);
  if ((((uVar1 & 1) != (uVar2 & 1)) && (*(long *)(param_1 + 0x90) != 0)) &&
     (*(int *)PTR_DAT_047e7008 != 2)) {
    *(undefined4 *)PTR_DAT_047e7008 = 2;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02989d68; name: FUN_02989d68
 */


uint FUN_02989d68(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0124e480();
  uVar1 = thunk_FUN_01972c08(uVar3,param_3,0x1d);
  uVar2 = FUN_02989db8(param_1,param_2,uVar1);
  return uVar2 & 1;
}



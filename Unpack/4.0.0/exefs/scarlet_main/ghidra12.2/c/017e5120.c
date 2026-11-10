/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e5120; name: FUN_017e5120
 */


void FUN_017e5120(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_24 [4];
  
  uVar2 = FUN_01497d84();
  uVar3 = FUN_014f5f08(param_1);
  uVar1 = FUN_00f7d58c(uVar2,uVar3,local_24);
  uVar2 = FUN_01497d84(param_1);
  FUN_00f7d570(uVar2,uVar1,local_24[0],0);
  return;
}



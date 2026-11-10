/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022335a0; name: FUN_022335a0
 */


undefined8 FUN_022335a0(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  uVar3 = FUN_0299d96c(*(undefined8 *)(param_1 + 0x240),param_2,param_3 & 1);
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  puVar1 = (undefined8 *)(param_1 + 0x200);
  bVar2 = (param_3 & 1) == 0;
  if (bVar2) {
    puVar5 = (undefined1 *)0x0;
    param_1 = 0;
  }
  else {
    puVar5 = &LAB_0299bb60;
  }
  uVar4 = FUN_0299da2c(*puVar1,param_2,!bVar2,puVar5,param_1);
  return uVar4;
}



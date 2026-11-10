/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0274175c; name: FUN_0274175c
 */


void FUN_0274175c(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)FUN_00ccbb30();
  uVar2 = *(undefined8 *)(param_1 + 0x84);
  uVar3 = *(undefined8 *)(param_1 + 0x94);
  uVar4 = *(undefined8 *)(param_1 + 0x7c);
  puVar1[2] = *(undefined8 *)(param_1 + 0x8c);
  puVar1[3] = uVar3;
  *puVar1 = uVar4;
  puVar1[1] = uVar2;
  FUN_00ccbb18(param_1,param_2);
  return;
}



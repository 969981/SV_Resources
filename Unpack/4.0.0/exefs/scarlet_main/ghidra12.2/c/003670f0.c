/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003670f0; name: FUN_003670f0
 */


void FUN_003670f0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (param_2 < 0x18) {
    uVar3 = 0;
    puVar1 = (undefined8 *)0x0;
    puVar2 = param_1;
  }
  else {
    puVar1 = (undefined8 *)FUN_0038c780(param_2 + 0x30);
    puVar1[5] = 1;
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = puVar1 + 5;
    uVar3 = param_2 & 0xffffffffffffff00;
    puVar1[2] = puVar1;
    puVar1[3] = &LAB_00368360;
    puVar1[4] = puVar1;
    puVar2 = puVar1 + 6;
  }
  param_1[2] = puVar2;
  *param_1 = puVar1;
  param_1[1] = uVar3 | param_2 & 0xff;
  return;
}



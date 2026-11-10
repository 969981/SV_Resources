/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089e1b8; name: FUN_0089e1b8
 */


void FUN_0089e1b8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + 0x60);
  FUN_00fab5bc();
  puVar1 = PTR_DAT_047d2328 + 0x10;
  param_1[0xc] = lVar2;
  param_1[0xd] = 0;
  *param_1 = (long)puVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 2;
  FUN_008987d8(param_1,param_2,param_3,param_4,param_5,param_6);
  (**(code **)(*param_1 + 0xd0))(param_1,param_2);
  return;
}



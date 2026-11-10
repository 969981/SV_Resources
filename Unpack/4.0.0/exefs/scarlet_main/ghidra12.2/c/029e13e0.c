/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e13e0; name: FUN_029e13e0
 */


undefined4 FUN_029e13e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_3 != (undefined8 *)0x0) {
    lVar2 = param_3[1] - (long)*param_3;
    puVar1 = &DAT_0486b038;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_3;
    }
    uVar3 = FUN_029e14f0(param_1,puVar1,lVar2 >> 2);
  }
  uVar3 = FUN_029e1630(param_1,param_2,uVar3);
  return uVar3;
}



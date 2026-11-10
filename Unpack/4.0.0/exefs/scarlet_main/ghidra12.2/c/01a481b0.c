/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a481b0; name: FUN_01a481b0
 */


undefined4
FUN_01a481b0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_5 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_5[1] - (long)*param_5;
    puVar1 = &DAT_0486a150;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_5;
    }
    uVar3 = FUN_028ff748(param_1,puVar1,lVar2 >> 2);
  }
  if (param_6 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar2 = param_6[1] - (long)*param_6;
    puVar1 = &DAT_0486a151;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_6;
    }
    uVar4 = FUN_028ff880(param_1,puVar1,lVar2 >> 2);
  }
  uVar3 = FUN_01a487c0(param_1,param_2,param_3,param_4,uVar3,uVar4);
  return uVar3;
}



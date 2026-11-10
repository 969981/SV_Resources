/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023030bc; name: FUN_023030bc
 */


undefined1  [16] FUN_023030bc(long *param_1,code *param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (*param_1 == 0) {
    uVar3 = 0x40490fdb00000000;
    uVar1 = 0x40490fdb;
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(*param_1 + ((long)param_3 >> 1)));
    }
    puVar2 = (undefined8 *)(*param_2)();
    uVar3 = *puVar2;
    uVar1 = *(undefined4 *)(puVar2 + 1);
  }
  auVar4._8_4_ = uVar1;
  auVar4._0_8_ = uVar3;
  auVar4._12_4_ = 0;
  return auVar4;
}



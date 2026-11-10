/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024ac31c; name: FUN_024ac31c
 */


void FUN_024ac31c(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bad_alloc abStack_38 [8];
  
  *param_1 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(long *)*param_4 + 0x10))((long *)*param_4,0x28,8);
  *param_1 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    (**(code **)(*param_3 + 0x18))(param_3,param_2,1,0x10);
    std::bad_alloc::bad_alloc(abStack_38);
    FUN_00fb9b60(abStack_38);
    std::bad_alloc::~bad_alloc(abStack_38);
  }
  else {
    uVar2 = *param_4;
    *puVar1 = &DAT_045bc038;
    puVar1[1] = 0x100000001;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[4] = uVar2;
  }
  return;
}



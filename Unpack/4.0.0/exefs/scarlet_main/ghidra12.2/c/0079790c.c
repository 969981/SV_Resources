/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079790c; name: FUN_0079790c
 */


void FUN_0079790c(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 auStack_50 [32];
  
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x10))();
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1 + 1,0x40);
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_3,param_4);
    (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,auStack_50);
    (**(code **)(*(long *)*param_1 + 0x10))();
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1 + 9,0x40);
    plVar2 = (long *)*param_1;
    uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2,auStack_50,uVar1);
    (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,param_2);
  }
  return;
}



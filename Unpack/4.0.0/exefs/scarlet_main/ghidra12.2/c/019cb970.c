/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019cb970; name: FUN_019cb970
 */


void FUN_019cb970(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    FUN_007e510c(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = PTR_DAT_047d0860;
  FUN_007ecc70(*(long *)PTR_DAT_047d0860 + 0x10);
  if (*(long *)puVar1 != 0) {
    FUN_007f6ea4();
  }
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    FUN_007cfec4(*(undefined8 *)(param_1 + 0x40));
  }
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    FUN_007d0994(*(undefined8 *)(param_1 + 0x48));
  }
  plVar2 = *(long **)(param_1 + 0x50);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    (**(code **)(**(long **)(param_1 + 0x50) + 0x38))();
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x38))();
  }
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    FUN_007cf7d4(*(undefined8 *)(param_1 + 0x38));
  }
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    FUN_007e510c(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  }
  if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_0078f57c(*(undefined8 *)PTR_DAT_047d0900);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  memset((void *)(param_1 + 0x88),0,0x20);
  *(undefined4 *)(param_1 + 0x45c) = 0;
  memset((void *)(param_1 + 0x460),0,0x10);
  *(undefined1 *)(param_1 + 0x470) = 0;
  return;
}



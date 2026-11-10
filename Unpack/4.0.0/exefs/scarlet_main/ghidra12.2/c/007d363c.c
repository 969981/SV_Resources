/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d363c; name: FUN_007d363c
 */


void FUN_007d363c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x788);
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    *(undefined8 *)(param_1 + 0x788) = 0;
  }
  FUN_007e573c(param_1 + 0x180);
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_007dda3c();
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    FUN_01913dc4(*(long *)PTR_DAT_047d0860 + 0x10);
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x178);
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_007bfaa0(puVar2);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_007bfaa0(puVar2);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_007bfaa0(puVar2);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_007bfaa0(puVar2);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xc0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_007bfaa0(puVar2);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 200);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_007bfaa0(puVar2);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xd0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_007bfaa0(puVar2);
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  return;
}



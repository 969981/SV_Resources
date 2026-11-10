/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dfcea4; name: FUN_00dfcea4
 */


void FUN_00dfcea4(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  
  (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,1);
  uVar2 = *(int *)((long)param_1 + 0x2c) - 1;
  plVar3 = (long *)*param_1;
  if (2 < uVar2) {
    uVar2 = FUN_00dfcf48(plVar3);
    uVar2 = uVar2 & 1;
  }
  (**(code **)(*plVar3 + 0xb8))(*(undefined4 *)(param_1 + 5),plVar3,uVar2);
  uVar2 = *(int *)((long)param_1 + 0x2c) - 1;
  if (uVar2 < 3) {
    bVar1 = (uVar2 & 7) == 0;
  }
  else {
    bVar1 = FUN_00dfcf48(*param_1);
    bVar1 = bVar1 ^ 1;
  }
  *(byte *)((long)param_1 + 0x31) = bVar1 & 1;
  if ((undefined1 *)param_1[7] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[7] = 1;
  }
  return;
}



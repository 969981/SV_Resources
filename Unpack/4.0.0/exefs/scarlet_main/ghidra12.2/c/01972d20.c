/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01972d20; name: FUN_01972d20
 */


void FUN_01972d20(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  uVar3 = (**(code **)(*(long *)*param_3 + 0x220))((long *)*param_3,0xf);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(param_3 + 1) != '\0') {
      uVar4 = FUN_01243584(param_1);
      uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
      uVar2 = (**(code **)(*(long *)*param_3 + 0x98))();
      FUN_0167eba0(uVar4,uVar1,0x11d,uVar2);
    }
    *param_2 = 1;
  }
  return;
}



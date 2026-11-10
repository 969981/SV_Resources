/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b0dcf4; name: FUN_00b0dcf4
 */


void FUN_00b0dcf4(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *local_48 [4];
  undefined4 local_28 [2];
  
  if (*(char *)(param_2 + 0xd) != '\x01') {
    return;
  }
  FUN_016947d8(local_48);
  local_28[0] = 5;
  FUN_00b0f234(local_48,local_28);
  FUN_00b0fb70(local_48,param_2);
  piVar1 = (int *)(param_1 + 0xb8);
  *piVar1 = *piVar1 + 1;
  if (local_48[0] == (undefined8 *)0x0) {
    plVar2 = *(long **)(param_1 + 0x70);
  }
  else {
    FUN_01e62d14(local_28,piVar1,local_48[0] + 1);
    plVar2 = *(long **)(param_1 + 0x70);
    if (local_48[0] != (undefined8 *)0x0) {
      uVar3 = *local_48[0];
      uVar4 = *(undefined4 *)(local_48[0] + 3);
      goto LAB_00b0dd88;
    }
  }
  uVar3 = 0;
  uVar4 = 0;
LAB_00b0dd88:
  (**(code **)(*plVar2 + 0x70))(plVar2,uVar3,uVar4);
  FUN_01694aa8(local_48);
  return;
}



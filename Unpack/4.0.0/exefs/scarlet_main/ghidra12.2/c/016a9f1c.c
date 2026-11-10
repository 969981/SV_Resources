/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a9f1c; name: FUN_016a9f1c
 */


void FUN_016a9f1c(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [24];
  
  puVar6 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = *(undefined2 *)(puVar6 + 3);
    uVar4 = *(undefined2 *)((long)puVar6 + 0x1a);
    FUN_00c4e5a0(auStack_58,0);
    (**(code **)*puVar6)(puVar6);
    uVar5 = FUN_00c4e564(plVar1);
    if ((uVar5 & 1) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar2,uVar3,uVar4);
    }
    else {
      FUN_00c48fe8(plVar1,uVar2,uVar3,uVar4);
    }
    FUN_00c4e70c(auStack_58);
  }
  return;
}



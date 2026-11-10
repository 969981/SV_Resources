/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb4044; name: FUN_01eb4044
 */


void FUN_01eb4044(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  FUN_015c5144();
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (puVar1 = *(undefined8 **)(param_1 + 8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    plVar5 = *(long **)(param_1 + 0x50);
    uVar4 = *puVar1;
    uVar3 = FUN_00c4e564(plVar5);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5,uVar4,0xff0,8);
    }
    else {
      FUN_00c48fe8(plVar5,uVar4,0xff0,8);
    }
  }
  FUN_01eb50f8(param_1);
  return;
}



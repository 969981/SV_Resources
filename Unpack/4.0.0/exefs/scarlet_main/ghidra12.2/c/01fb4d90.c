/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb4d90; name: FUN_01fb4d90
 */


void FUN_01fb4d90(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_1[2] != 0) {
    lVar3 = *param_1;
    plVar1 = (long *)param_1[1];
    *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = *plVar1;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar5 = (long *)plVar1[1];
      FUN_014f0470(plVar1 + 2);
      plVar4 = (long *)param_1[3];
      uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,plVar1,0xd0,0x10);
        plVar1 = plVar5;
      }
      else {
        FUN_00c48fe8(plVar4,plVar1,0xd0,0x10);
        plVar1 = plVar5;
      }
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0219d3a0; name: FUN_0219d3a0
 */


void FUN_0219d3a0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  plVar1 = (long *)param_1[1];
  uVar2 = param_1[2];
  uVar3 = *(undefined2 *)(param_1 + 3);
  uVar4 = *(undefined2 *)((long)param_1 + 0x1a);
  FUN_00c4e5a0(auStack_58,0);
  (**(code **)*param_1)(param_1);
  uVar5 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00c4e600();
    if (0 < *(int *)(lVar6 + 0x12c8)) {
      FUN_00c48fe8(plVar1,uVar2,uVar3,uVar4);
      goto LAB_0219d414;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,uVar2,uVar3,uVar4);
LAB_0219d414:
  FUN_00c4e70c(auStack_58);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0104328c; name: FUN_0104328c
 */


void FUN_0104328c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [24];
  
  puVar5 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  FUN_00c4e5a0(auStack_48,0);
  (**(code **)*puVar5)(puVar5);
  plVar1 = (long *)param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar5,uVar2,uVar6);
  }
  else {
    FUN_00c48fe8(plVar1,puVar5,uVar2,uVar6);
  }
  FUN_00c4e70c(auStack_48);
  return;
}



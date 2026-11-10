/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020da548; name: FUN_020da548
 */


void FUN_020da548(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  FUN_013e5380();
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (puVar1 = *(undefined8 **)(param_1 + 8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    plVar6 = *(long **)(param_1 + 0x50);
    uVar5 = *puVar1;
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,0x1000,0x10);
    }
    else {
      FUN_00c48fe8(plVar6,uVar5,0x1000,0x10);
    }
  }
  FUN_020da740(param_1);
  return;
}



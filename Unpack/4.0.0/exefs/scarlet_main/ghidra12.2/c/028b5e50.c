/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b5e50; name: FUN_028b5e50
 */


undefined4 FUN_028b5e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_48 [2];
  
  if (*(long *)(param_1 + 0x58) == 0) {
    puVar3 = operator_new(0x20);
    puVar3[2] = 0;
    puVar3[3] = param_1;
    puVar3[1] = 0;
    *puVar3 = puVar3 + 1;
    *(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  local_48[0] = FUN_01571da0(param_1,param_2,param_3);
  lVar5 = *(long *)(param_1 + 0x58);
  lVar4 = FUN_028b8008(lVar5,local_48);
  if (lVar5 + 8 == lVar4) {
    FUN_028b8094(lVar5,local_48,local_48);
  }
  else {
    *(ulong *)(param_1 + 0x30) =
         *(long *)(param_1 + 0x30) +
         (ulong)(uint)((((int)uVar2 + *(int *)(param_1 + 0x20)) -
                       ((int)uVar6 + (int)uVar1 + (int)*(long *)(param_1 + 0x30))) +
                      *(int *)(param_1 + 0x28));
    local_48[0] = *(undefined4 *)(lVar4 + 0x1c);
  }
  return local_48[0];
}



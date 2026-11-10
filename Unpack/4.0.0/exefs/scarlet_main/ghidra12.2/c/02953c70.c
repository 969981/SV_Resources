/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02953c70; name: FUN_02953c70
 */


undefined8 FUN_02953c70(long param_1,ulong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 local_48 [6];
  
  bVar1 = FUN_02943c80(param_1,param_2,local_48);
  uVar2 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2 & 0xffffffff);
  if (bVar1 != 0) {
    uVar5 = (ulong)bVar1;
    puVar6 = local_48;
    do {
      uVar3 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),*puVar6);
      uVar4 = FUN_02953d10(param_1,uVar2,uVar3);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
  }
  return 0;
}



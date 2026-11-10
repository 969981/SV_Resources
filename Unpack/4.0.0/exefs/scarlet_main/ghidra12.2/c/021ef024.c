/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021ef024; name: FUN_021ef024
 */


undefined8 FUN_021ef024(long *param_1,short param_2)

{
  short sVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x68))(param_1,0);
  if ((((((lVar2 == 0) || (uVar3 = FUN_00cf4cfc(*(undefined8 *)(lVar2 + 0x70)), (uVar3 & 1) != 0))
        || ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x70) + 0x10) + 4) >> 2 & 1) != 0)) ||
       (sVar1 = FUN_00cf44ec(lVar2), sVar1 != param_2)) &&
      (((lVar2 = (**(code **)(*param_1 + 0x68))(param_1,1), lVar2 == 0 ||
        (uVar3 = FUN_00cf4cfc(*(undefined8 *)(lVar2 + 0x70)), (uVar3 & 1) != 0)) ||
       (((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x70) + 0x10) + 4) >> 2 & 1) != 0 ||
        (sVar1 = FUN_00cf44ec(lVar2), sVar1 != param_2)))))) &&
     (((((lVar2 = (**(code **)(*param_1 + 0x68))(param_1,2), lVar2 == 0 ||
         (uVar3 = FUN_00cf4cfc(*(undefined8 *)(lVar2 + 0x70)), (uVar3 & 1) != 0)) ||
        (((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x70) + 0x10) + 4) >> 2 & 1) != 0 ||
         (sVar1 = FUN_00cf44ec(lVar2), sVar1 != param_2)))) &&
       (((((lVar2 = (**(code **)(*param_1 + 0x68))(param_1,3), lVar2 == 0 ||
           (uVar3 = FUN_00cf4cfc(*(undefined8 *)(lVar2 + 0x70)), (uVar3 & 1) != 0)) ||
          ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x70) + 0x10) + 4) >> 2 & 1) != 0)) ||
         (sVar1 = FUN_00cf44ec(lVar2), sVar1 != param_2)) &&
        (((lVar2 = (**(code **)(*param_1 + 0x68))(param_1,4), lVar2 == 0 ||
          (uVar3 = FUN_00cf4cfc(*(undefined8 *)(lVar2 + 0x70)), (uVar3 & 1) != 0)) ||
         (((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x70) + 0x10) + 4) >> 2 & 1) != 0 ||
          (sVar1 = FUN_00cf44ec(lVar2), sVar1 != param_2)))))))) &&
      (((lVar2 = (**(code **)(*param_1 + 0x68))(param_1,5), lVar2 == 0 ||
        (uVar3 = FUN_00cf4cfc(*(undefined8 *)(lVar2 + 0x70)), (uVar3 & 1) != 0)) ||
       (((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x70) + 0x10) + 4) >> 2 & 1) != 0 ||
        (sVar1 = FUN_00cf44ec(lVar2), sVar1 != param_2)))))))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



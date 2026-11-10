/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00359e70; name: FUN_00359e70
 */


void FUN_00359e70(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *local_70;
  long local_68;
  undefined8 *puStack_60;
  
  puVar3 = PTR_FUN_047cce58;
  if (param_2 == 0) {
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar4 = 0;
      do {
        lVar5 = *(long *)(param_1 + 0x40);
        uVar1 = *(undefined8 *)(param_1 + 0x50);
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        local_70 = (undefined8 *)FUN_0038c780(lVar5 + 0x40);
        local_70[5] = 1;
        *(undefined4 *)(local_70 + 1) = 3;
        *local_70 = local_70 + 5;
        puStack_60 = local_70 + 8;
        local_70[2] = local_70;
        local_70[3] = puVar3;
        local_70[4] = local_70;
        local_70[6] = uVar2;
        local_70[7] = lVar5;
        local_68 = lVar5;
        FUN_00368650(uVar1,&local_70);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ulong *)(param_1 + 0x48));
    }
    param_2 = 0;
  }
  else if (4 < param_2) {
    param_2 = FUN_00350fb0(param_2);
  }
  (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_2);
  if (4 < param_2) {
    FUN_00350fd0(param_2);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b9ad0; name: FUN_003b9ad0
 */


undefined8 FUN_003b9ad0(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  if ((param_2 != 0) && (*(long *)(param_2 + 0x150) != 0)) {
    if (param_3 != 0) {
      FUN_0047e5e0(*(undefined8 *)(param_1 + 0x378));
    }
    lVar3 = FUN_00451a40(*(undefined8 *)(param_1 + 0x28),param_2);
    if (lVar3 == 0) {
      lVar3 = 0;
      bVar6 = true;
      *(undefined4 *)(param_2 + 0x1b0) = 1;
    }
    else {
      lVar3 = FUN_00451820(*(undefined8 *)(param_1 + 0x28),lVar3);
      puVar4 = *(undefined8 **)(lVar3 + 0x210);
      if ((puVar4 == (undefined8 *)0x0) ||
         (puVar5 = *(undefined8 **)(lVar3 + 0x208), puVar5 == (undefined8 *)0x0)) {
        bVar6 = false;
        *(undefined4 *)(param_2 + 0x1b0) = 1;
      }
      else {
        puVar1 = (undefined8 *)(param_1 + 0x40);
        puVar2 = (undefined8 *)(param_1 + 0x38);
        if (puVar4 == puVar1) {
          if (puVar5 == puVar2) {
            *puVar2 = 0;
            *(undefined8 *)(param_1 + 0x40) = 0;
          }
          else {
            *puVar1 = puVar5;
            puVar5[0x42] = puVar1;
          }
        }
        else if (puVar5 == puVar2) {
          *puVar2 = puVar4;
          puVar4[0x41] = puVar2;
        }
        else {
          puVar4[0x41] = puVar5;
          *(undefined8 **)(*(long *)(lVar3 + 0x208) + 0x210) = puVar4;
        }
        bVar6 = false;
        *(long *)(lVar3 + 0x208) = 0;
        *(undefined8 *)(lVar3 + 0x210) = 0;
        *(undefined4 *)(param_2 + 0x1b0) = 1;
      }
    }
    if (param_3 != 0) {
      FUN_0047e600(*(undefined8 *)(param_1 + 0x378));
    }
    if (*(code **)(param_1 + 0x60) != (code *)0x0) {
      (**(code **)(param_1 + 0x60))(param_1,param_2);
    }
    if (!bVar6) {
      FUN_003b8e30(lVar3);
      return 1;
    }
  }
  return 0;
}



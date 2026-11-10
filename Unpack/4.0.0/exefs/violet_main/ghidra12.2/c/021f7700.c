/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f7700; name: FUN_021f7700
 */


undefined8 FUN_021f7700(undefined8 param_1,undefined2 *param_2,uint *param_3,undefined8 param_4)

{
  ushort uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  short local_48;
  ushort local_46;
  undefined2 local_44;
  byte local_42;
  
  uVar3 = FUN_00cf44ec(param_4);
  uVar4 = FUN_00cf41a0(param_4);
  *param_2 = (short)uVar3;
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  uVar6 = FUN_00cf4bf4(param_4);
  if (((uVar6 & 1) != 0) && (bVar2 = FUN_00cf4838(uVar3,uVar4), bVar2 != 0)) {
    uVar7 = 0;
    do {
      FUN_00cf5114(&local_48,param_4,uVar7);
      uVar5 = FUN_00e9980c(param_4);
      uVar1 = local_46;
      if (((local_42 <= uVar5) && (local_48 == 0x2c)) &&
         (uVar5 = FUN_021f15ac(param_4), uVar1 <= uVar5)) {
        *param_2 = local_44;
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar7;
        }
        return 1;
      }
      uVar7 = uVar7 + 1;
    } while (bVar2 != uVar7);
  }
  return 0;
}



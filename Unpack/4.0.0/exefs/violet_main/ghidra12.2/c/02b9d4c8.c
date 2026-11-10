/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9d4c8; name: FUN_02b9d4c8
 */


undefined1  [16] FUN_02b9d4c8(undefined1 param_1 [16],undefined1 (*param_2) [16])

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = a64_TBL(ZEXT816(0),*param_2,DAT_03cb56c8);
  uVar6 = a64_TBL(ZEXT816(0),*param_2,DAT_03cb54d8);
  uVar8 = a64_TBL(ZEXT816(0),param_1,DAT_03cb5488);
  uVar7 = a64_TBL(ZEXT816(0),*param_2,DAT_03cb5488);
  uVar9 = a64_TBL(ZEXT816(0),param_1,DAT_03cb54c0);
  uVar2 = a64_TBL(ZEXT816(0),*param_2,DAT_03cb54c0);
  uVar4 = a64_TBL(ZEXT816(0),param_1,DAT_03cb56c8);
  uVar1 = a64_TBL(ZEXT816(0),param_1,DAT_03cb54d8);
  auVar3._0_4_ = (float)uVar5 * (float)uVar8 - (float)uVar7 * (float)uVar4;
  auVar3._4_4_ = (float)((ulong)uVar5 >> 0x20) * (float)((ulong)uVar8 >> 0x20) -
                 (float)((ulong)uVar7 >> 0x20) * (float)((ulong)uVar4 >> 0x20);
  auVar3._12_4_ =
       (float)((ulong)uVar6 >> 0x20) * (float)((ulong)uVar9 >> 0x20) -
       (float)((ulong)uVar2 >> 0x20) * (float)((ulong)uVar1 >> 0x20);
  auVar3._8_4_ = (float)uVar6 * (float)uVar9 - (float)uVar2 * (float)uVar1;
  return auVar3;
}



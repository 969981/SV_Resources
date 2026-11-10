/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291b17c; name: FUN_0291b17c
 */


bool FUN_0291b17c(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_28 [8];
  
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  uVar2 = FUN_0154b6d4(*(undefined8 *)(param_1 + 0x48));
  uVar3 = FUN_0291b234(*(undefined8 *)(param_1 + 0x48));
  uVar5 = FUN_00f7e284(*(undefined8 *)(param_1 + 0x48));
  uVar6 = FUN_00f7e27c(*(undefined8 *)(param_1 + 0x48));
  uVar4 = (**(code **)(**(long **)(param_1 + 0x60) + 0x98))();
  uVar4 = FUN_010e161c(uVar6,uVar4);
  FUN_011e244c(auStack_28,2,uVar4);
  cVar1 = FUN_010e171c(auStack_28,uVar2,uVar3,uVar5,&local_58);
  return cVar1 != '\0';
}



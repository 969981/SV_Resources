/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cf87d8; name: FUN_01cf87d8
 */


void FUN_01cf87d8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  long *plStack_38;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = FUN_01cf7688(param_4);
  FUN_01cfaba8(&local_50,param_3,uVar1,uVar2,uVar3);
  FUN_01cfa550(param_1,&local_50);
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  return;
}



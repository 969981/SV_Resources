/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298b538; name: FUN_0298b538
 */


void FUN_0298b538(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  
  FUN_01246154(auStack_48);
  FUN_01582534(param_1);
  FUN_0158253c();
  iVar1 = FUN_0124a08c();
  uVar2 = (undefined4)(0x30a03080307 >> (((ulong)(iVar1 - 5U) & 3) << 4));
  if (2 < (iVar1 - 5U & 0xff)) {
    uVar2 = 0x237;
  }
  FUN_02943244(auStack_48,1,uVar2);
  uVar3 = FUN_01243584(param_1);
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0124b0ac(uVar3,uVar2,auStack_48);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124b454; name: FUN_0124b454
 */


void FUN_0124b454(long param_1,long *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined2 local_68 [2];
  undefined4 local_64;
  undefined4 uStack_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 auStack_18 [8];
  
  uVar3 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((uVar3 & 1) == 0) && (uVar3 = (**(code **)(*param_2 + 0x200))(param_2), (uVar3 & 1) == 0)) {
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    local_5c = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_60 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_64 = uVar2;
    uVar1 = (**(code **)(*param_2 + 0x140))(param_2);
    local_68[0] = FUN_02944940(uVar1,0x10);
    local_58 = 0x8200c9;
    uStack_54 = uVar2;
    uVar4 = FUN_0293dd44(*(undefined8 *)(param_1 + 0x78));
    FUN_0293dd4c(uVar4,auStack_18,local_68);
  }
  return;
}



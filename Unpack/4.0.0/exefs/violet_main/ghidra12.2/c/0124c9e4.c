/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124c9e4; name: FUN_0124c9e4
 */


void FUN_0124c9e4(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined2 local_74;
  undefined1 local_72;
  undefined2 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  long local_66;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  byte local_38 [8];
  
  uVar4 = (**(code **)(*param_2 + 0x200))(param_2);
  if ((uVar4 & 1) == 0) {
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar2 = (**(code **)(*param_2 + 0x240))(param_2,0x2b);
    local_38[0] = 0;
    iVar3 = (**(code **)(*param_2 + 0x280))(param_2,2);
    if (0 < iVar3) {
      local_66 = 0x1000000000000;
      local_a4 = 1;
      local_74 = 0xff02;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_9c = 0;
      local_94 = 0;
      local_8c = 0;
      local_84 = 0;
      local_7c = 0;
      local_5c = 0;
      local_54 = 0;
      local_4c = 0;
      local_44 = 0;
      local_3c = 0;
      local_72 = 6;
      local_a8 = uVar2;
      local_a0 = uVar1;
      FUN_01251258(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xe20),local_38,&local_a8);
    }
    iVar3 = (**(code **)(*param_2 + 0x280))(param_2,4);
    if (0 < iVar3) {
      local_a4 = 1;
      local_74 = 0xff04;
      local_3c = 0;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_7c = 0;
      local_84 = 0;
      local_8c = 0;
      local_94 = 0;
      local_9c = 0;
      local_5c = 0;
      local_54 = 0;
      local_4c = 0;
      local_44 = 0;
      local_72 = 6;
      local_66 = (ulong)(local_38[0] ^ 1) << 0x30;
      local_a8 = uVar2;
      local_a0 = uVar1;
      FUN_01251258(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xe20),local_38,&local_a8);
    }
  }
  return;
}



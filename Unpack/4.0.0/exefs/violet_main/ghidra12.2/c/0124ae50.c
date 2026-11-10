/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124ae50; name: FUN_0124ae50
 */


void FUN_0124ae50(long param_1,long *param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined2 local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_63;
  undefined8 local_5b;
  undefined8 local_53;
  undefined7 local_4b;
  undefined1 uStack_44;
  undefined7 uStack_43;
  undefined1 auStack_38 [8];
  
  plVar5 = (long *)FUN_0124acbc();
  uVar2 = (**(code **)(*plVar5 + 0x68))(plVar5,PTR_DAT_047e25c8);
  plVar5 = (long *)FUN_0124acbc(param_1);
  uVar3 = (**(code **)(*plVar5 + 0x68))(plVar5,PTR_DAT_047e25d0);
  iVar4 = FUN_0297db10(param_1,uVar2,uVar3);
  if (iVar4 != 0) {
    sVar1 = (**(code **)(*param_2 + 0x230))(param_2);
    if (sVar1 == 0) {
      uVar2 = *param_3;
      local_88 = (**(code **)(*param_2 + 0x98))(param_2);
      local_68 = 0x1000000;
      local_64 = 1;
      local_63 = 0;
      local_5b = 0;
      local_53 = 0;
      local_4b = 0;
      uStack_44 = 0;
      uStack_43 = 0;
      local_80 = 2;
      uStack_84 = local_88;
      local_78 = FUN_029616b0(uVar2,iVar4);
      uVar6 = FUN_01a042e4(*(undefined8 *)(param_1 + 0x78));
      FUN_01a042ec(uVar6,auStack_38,&local_88);
    }
  }
  return;
}



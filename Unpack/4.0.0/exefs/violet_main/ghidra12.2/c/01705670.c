/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01705670; name: FUN_01705670
 */


bool FUN_01705670(long param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  char local_58 [8];
  long *local_50;
  undefined1 local_48;
  undefined1 local_47;
  
  uVar2 = (**(code **)(*param_2 + 0x700))(param_2,param_3);
  if ((uVar2 & 0xff) == 4) {
    bVar1 = false;
  }
  else {
    local_47 = FUN_01705888(*(undefined8 *)(param_1 + 0x38),param_2,uVar2,param_3,param_4);
    local_48 = (undefined1)uVar2;
    local_58[0] = '\0';
    local_50 = param_2;
    FUN_01705774(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x5a0),local_58,&local_50);
    lVar5 = *(long *)(param_1 + 0x20);
    uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
    plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 0x30),
                                  uVar3);
    (**(code **)(*plVar4 + 0x6e0))(plVar4,uVar2);
    FUN_0129aff0(*(undefined8 *)(lVar5 + 0x18),7,uVar3,uVar2 & 0xff);
    bVar1 = local_58[0] != '\0';
  }
  return bVar1;
}



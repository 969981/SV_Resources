/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029861e8; name: FUN_029861e8
 */


undefined8 FUN_029861e8(long param_1,long *param_2,long *param_3,undefined4 param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [4];
  undefined1 local_44 [4];
  
  uVar3 = FUN_02986068(param_1,param_3);
  uVar4 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
  FUN_01253868(uVar4,uVar3,local_44,auStack_48);
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  local_44[0] = FUN_01689a40(param_1,uVar3);
  if ((param_5 & 1) == 0) {
    bVar1 = (**(code **)(*param_2 + 0x118))(param_2);
    bVar2 = (**(code **)(*param_3 + 0x118))(param_3);
    if (bVar1 < bVar2) {
      return 0;
    }
  }
  FUN_02986388(param_1,param_3,param_4);
  FUN_012529f0(*(undefined8 *)(param_1 + 0x20),local_44[0]);
  return 1;
}



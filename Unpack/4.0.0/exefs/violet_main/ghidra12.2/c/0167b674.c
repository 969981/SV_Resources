/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0167b674; name: FUN_0167b674
 */


undefined8 FUN_0167b674(undefined8 param_1,long *param_2,long *param_3,short *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar3 = (**(code **)(*param_3 + 0x300))(param_3,0xb);
  if (((uVar3 & 1) == 0) || (uVar3 = thunk_FUN_0167fc44(*param_4), (uVar3 & 1) == 0)) {
    uVar3 = (**(code **)(*param_3 + 0x300))(param_3,7);
    if ((uVar3 & 1) != 0) {
      if (*param_4 == 0x14f) {
        return 1;
      }
      if (*param_4 == 0xd4) {
        return 1;
      }
    }
    uVar3 = (**(code **)(*param_3 + 0x300))(param_3,0xe);
    if (((uVar3 & 1) == 0) || (*param_4 != 0x149)) {
      uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
      uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
      uVar3 = (**(code **)(*param_3 + 0x300))(param_3,0x10);
      if (((uVar3 & 1) == 0) ||
         (((char)param_4[9] == '\0' || (uVar3 = FUN_016c04a4(param_1,uVar1,uVar2), (uVar3 & 1) != 0)
          ))) {
        return 0;
      }
    }
  }
  return 1;
}



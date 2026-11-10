/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0273a860; name: FUN_0273a860
 */


void FUN_0273a860(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 ***local_68;
  undefined8 ***pppuStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  local_48 = *(undefined8 *)(param_1 + 0x20);
  local_68 = &local_68;
  local_38 = 0;
  local_58 = 0;
  uStack_40 = 0;
  pppuStack_60 = local_68;
  if (param_1 != *(long *)(param_1 + 8)) {
    lVar3 = *(long *)(param_1 + 8);
    do {
      uVar1 = FUN_00d8a5bc(*param_2,lVar3 + 0x28);
      lVar2 = *(long *)(lVar3 + 8);
      if ((uVar1 & 1) == 0) {
        for (; param_1 != lVar2; lVar2 = *(long *)(lVar2 + 8)) {
          uVar1 = FUN_00d8a5bc(*param_2,lVar2 + 0x28);
          if ((uVar1 & 1) != 0) {
            FUN_0273b098(&local_68,&local_68,param_1,lVar3,lVar2);
            lVar2 = *(long *)(lVar2 + 8);
            goto LAB_0273a8b8;
          }
        }
        FUN_0273b098(&local_68,&local_68,param_1,lVar3,lVar2);
      }
LAB_0273a8b8:
      lVar3 = lVar2;
    } while (param_1 != lVar2);
  }
  FUN_02739de4(&local_68);
  return;
}



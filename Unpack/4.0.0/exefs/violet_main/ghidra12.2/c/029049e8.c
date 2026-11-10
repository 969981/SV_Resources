/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029049e8; name: FUN_029049e8
 */


undefined1 FUN_029049e8(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  byte local_58;
  undefined1 local_38 [8];
  
  FUN_01077c04(param_1[1],*param_1);
  lVar5 = 0;
  lVar4 = *(long *)(param_1[5] + 0x10);
  *(undefined8 *)(lVar4 + 0x68) = 0;
  do {
    uVar1 = (&DAT_03d6abe6)[lVar5];
    puVar2 = (undefined1 *)FUN_010af09c(lVar4);
    lVar5 = lVar5 + 4;
    *puVar2 = uVar1;
  } while (lVar5 != 0x340);
  local_58 = param_3 & 1;
  local_60 = param_2;
  uVar3 = FUN_02942134(*(undefined8 *)(param_1[5] + 0x130));
  FUN_0294213c(uVar3,local_38,&local_60);
  return local_38[0];
}



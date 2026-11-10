/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a0150; name: FUN_028a0150
 */


void FUN_028a0150(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_48;
  
  lVar2 = *(long *)(param_1 + 0x20);
  local_48 = param_5;
  if (lVar2 == 0) {
    FUN_028a0234(&local_48,param_1,param_2);
    lVar1 = param_2 + 0x10;
  }
  else {
    lVar1 = FUN_0175c820(param_1,lVar2,param_4,param_2);
    FUN_028a0234(&local_48,param_1,lVar1);
    lVar1 = FUN_0175c820(param_1,param_4,lVar2 + *(long *)(param_1 + 0x28) * 0x10,lVar1 + 0x10);
    for (lVar3 = *(long *)(param_1 + 0x28); lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_0175be68(lVar2);
      lVar2 = lVar2 + 0x10;
    }
    FUN_0175c66c(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(long *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = lVar1 - param_2 >> 4;
  return;
}



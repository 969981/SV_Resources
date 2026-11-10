/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015f1168; name: FUN_015f1168
 */


void FUN_015f1168(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long local_60;
  undefined1 auStack_58 [24];
  
  lVar1 = FUN_015f11fc(param_1 + 0xd8);
  if (lVar1 == 0) {
    FUN_015f1310(&local_60,*(undefined8 *)(param_1 + 0x70),(undefined8 *)(param_1 + 0x70),param_3,
                 param_3 + 8,param_3 + 0x10);
    FUN_015f1444(param_1 + 0xd8,param_2,&local_60);
    lVar1 = local_60;
    local_60 = 0;
    if (lVar1 != 0) {
      FUN_015f28f4(auStack_58);
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007dc628; name: FUN_007dc628
 */


undefined8 FUN_007dc628(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined4 local_40 [4];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x68) == 0) {
    local_40[0] = 0;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
    FUN_00cbd7c0(auStack_30,local_40);
    FUN_0078cb28(uVar1,auStack_30);
  }
  else {
    FUN_00cbd7c0(auStack_50);
    FUN_0078cb94(uVar1,auStack_50);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 1;
}



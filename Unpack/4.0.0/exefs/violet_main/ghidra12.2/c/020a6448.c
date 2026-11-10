/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020a6448; name: FUN_020a6448
 */


void FUN_020a6448(long param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  long *local_30;
  long local_28;
  
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = &DAT_cbf29ce484222645;
  *(undefined1 *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = 1;
  local_60 = 0xad9ec36635be7448;
  pcStack_58 = "SetAttributeTypeKey";
  local_50 = 0x13;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar2 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = uVar2;
  }
  local_60 = 0xc9a86610728c6034;
  pcStack_58 = "IsFavoritePlace";
  local_50 = 0xf;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    bVar1 = FUN_014c001c();
    *(byte *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = bVar1 & 1;
  }
  return;
}



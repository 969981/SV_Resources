/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018fde90; name: FUN_018fde90
 */


void FUN_018fde90(void)

{
  undefined2 uVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined2 local_18;
  undefined2 local_16;
  
  local_20 = DAT_0485ea98;
  local_16 = 1;
  uVar1 = 0x10;
  if (DAT_0485ea40 != 2) {
    uVar1 = 10;
  }
  local_18 = 0x18;
  if (DAT_0485ea40 != 1) {
    local_18 = uVar1;
  }
  FUN_018fe060(auStack_30);
  FUN_018fdf30(auStack_40);
  FUN_018ff39c(auStack_30,auStack_40);
  FUN_018fe128(auStack_40,&local_20);
  FUN_018ff39c(auStack_30,auStack_40);
  FUN_018fdfc0(auStack_40);
  FUN_018ff39c(auStack_30,auStack_40);
  return;
}



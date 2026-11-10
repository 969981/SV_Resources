/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02980e44; name: FUN_02980e44
 */


void FUN_02980e44(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 local_60 [16];
  undefined1 auStack_8 [8];
  
  FUN_01249604(auStack_70);
  local_6c = 8;
  local_68 = FUN_014616e4(*(undefined8 *)(param_1 + 8));
  local_60 = FUN_0123e080(0);
  uVar1 = FUN_0123dfc4(*(undefined8 *)(param_1 + 0x78));
  FUN_01254148(uVar1,auStack_8,auStack_70);
  return;
}



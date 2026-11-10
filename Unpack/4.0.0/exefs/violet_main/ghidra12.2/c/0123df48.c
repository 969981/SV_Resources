/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123df48; name: FUN_0123df48
 */


void FUN_0123df48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  char local_68;
  undefined1 local_67;
  undefined1 local_60 [16];
  
  FUN_0124e480();
  local_68 = FUN_014616e4();
  if (local_68 != '\0') {
    FUN_01249604(auStack_70);
    local_6c = 8;
    local_67 = 1;
    local_60 = FUN_0123e080(0);
    FUN_01461214(param_1);
    uVar1 = FUN_0123dfc4();
    FUN_01254148(uVar1,auStack_78,auStack_70);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01313fec; name: FUN_01313fec
 */


void FUN_01313fec(long param_1,undefined8 param_2)

{
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined1 auStack_48 [24];
  
  local_68 = 0xa004f7da31286203;
  pcStack_60 = "Trigger";
  local_58 = 7;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_48,param_2,&local_68);
  FUN_010657f0(param_1,auStack_48);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  local_68 = 0xdcedcd940a38d88a;
  pcStack_60 = "SuccessAction";
  local_58 = 0xd;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_80,param_2,&local_68);
  FUN_010656b0(param_1 + 8,auStack_80);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  local_68 = 0x174825e2442f1fc3;
  pcStack_60 = "FailureAction";
  local_58 = 0xd;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_98,param_2,&local_68);
  FUN_00d99870(param_1 + 0x20,auStack_98);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}



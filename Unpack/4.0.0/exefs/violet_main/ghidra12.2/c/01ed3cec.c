/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ed3cec; name: FUN_01ed3cec
 */


void FUN_01ed3cec(long param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  ulong uVar2;
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    local_b0 = FUN_01eda074;
    local_a8 = FUN_00b2369c;
    local_98 = &LAB_00b236ac;
    local_a0 = &LAB_00b236a0;
    alStack_90[0] = param_1;
    uVar2 = FUN_01ed9990(param_2,param_3,&local_b0);
    pcVar1 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = (undefined1 *)0x0;
      local_98 = (undefined1 *)0x0;
      local_b0 = (code *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar1)(alStack_90);
    }
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
  }
  return;
}



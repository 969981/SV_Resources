/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001261b0; name: FUN_001261b0
 */


void FUN_001261b0(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined2 local_6c [30];
  
  if (param_3 == 0) {
    local_6c[0] = 0x3f;
  }
  else {
    if (*(char *)(param_3 + 8) == '\x04') {
      uVar1 = (ulong)*(byte *)(param_3 + 0xb);
    }
    else {
      uVar1 = *(ulong *)(param_3 + 0x10);
    }
    FUN_0012e8d0(local_6c,param_3 + 0x18,uVar1);
  }
  FUN_0012e860(param_1,"%s:%d: %s",local_6c,param_4,param_2);
  return;
}



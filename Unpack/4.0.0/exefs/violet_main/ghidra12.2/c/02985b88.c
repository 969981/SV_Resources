/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02985b88; name: FUN_02985b88
 */


void FUN_02985b88(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)((long)param_2 + 0x21) == '\x01') {
    uVar1 = FUN_01243584();
    FUN_02984e48(uVar1,*param_2,0x35f);
    return;
  }
  return;
}



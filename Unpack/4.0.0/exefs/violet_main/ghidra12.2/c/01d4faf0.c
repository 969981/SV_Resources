/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d4faf0; name: FUN_01d4faf0
 */


void FUN_01d4faf0(undefined1 *param_1,long param_2)

{
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [56];
  
  *param_1 = 1;
  FUN_01d4b330(auStack_a0);
  FUN_01d4b330(auStack_68,param_2 + 0x38);
  FUN_01d4fc74(param_1 + 8,auStack_a0);
  FUN_01433e94(auStack_a0);
  return;
}



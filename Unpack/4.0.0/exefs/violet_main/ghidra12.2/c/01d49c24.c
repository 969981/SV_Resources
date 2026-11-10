/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d49c24; name: FUN_01d49c24
 */


void FUN_01d49c24(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [56];
  
  uVar2 = (uint)DAT_04830fc8;
  lVar1 = FUN_01d4b2a0(param_2);
  FUN_01d4b330(auStack_a0,lVar1);
  FUN_01d4b330(auStack_68,lVar1 + 0x38);
  FUN_01d4b514(param_1,-((ulong)~uVar2 & 1),auStack_a0);
  FUN_01433e94(auStack_a0);
  return;
}



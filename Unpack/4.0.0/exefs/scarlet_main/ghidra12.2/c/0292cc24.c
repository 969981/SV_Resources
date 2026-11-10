/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292cc24; name: FUN_0292cc24
 */


undefined8 FUN_0292cc24(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  memcpy(auStack_78,(void *)(param_1 + 0x28),0x48);
  *param_2 = uVar1;
  param_2[1] = 0;
  memcpy(param_2 + 2,auStack_78,0x48);
  *(undefined2 *)(param_2 + 0xb) = *(undefined2 *)(param_1 + 0x10);
  *(undefined2 *)((long)param_2 + 0x5a) = *(undefined2 *)(param_1 + 0x12);
  *(undefined2 *)((long)param_2 + 0x5c) = *(undefined2 *)(param_1 + 0x14);
  return 0x5e;
}



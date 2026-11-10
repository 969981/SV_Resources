/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ddef7c; name: FUN_00ddef7c
 */


void FUN_00ddef7c(long *param_1,undefined8 *param_2,long param_3)

{
  undefined1 auStack_60 [64];
  
  *param_1 = (long)(param_1 + 2);
  param_1[1] = *(long *)(param_3 + 8);
  (**(code **)PTR_DAT_047d28f8)(auStack_60,*param_2);
  FUN_008f16b4(auStack_60,param_3);
  (**(code **)PTR_DAT_047d2900)(*param_1,auStack_60);
  *(byte *)((long)param_1 + 0x111) = *(byte *)((long)param_1 + 0x111) & 0xfe;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return;
}



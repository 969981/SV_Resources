/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe00ec; name: FUN_00fe00ec
 */


byte FUN_00fe00ec(long param_1,long *param_2,uint param_3)

{
  byte bVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_18;
  
  bVar1 = 0;
  if (*param_2 != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      bVar1 = 0;
    }
    else {
      local_18 = 0;
      local_38 = 0;
      FUN_0167119c(*param_2,&local_18,&local_38,0);
      local_50 = local_18;
      uStack_48 = local_38;
      local_40 = 0x4200000025;
      bVar1 = FUN_00fe064c(*(undefined8 *)(param_1 + 0x28),param_2,&local_50,param_3 & 1);
      *(byte *)(param_1 + 0x40) = bVar1 & 1;
    }
  }
  return bVar1 & 1;
}



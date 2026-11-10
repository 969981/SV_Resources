/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c7484; name: FUN_008c7484
 */


undefined8
FUN_008c7484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  char acStack_98 [72];
  
  nn::util::SNPrintf(acStack_98,0x47,"%s_%d",param_7,(ulong)*(uint *)(param_6 + 4));
  uVar1 = *(ushort *)(param_6 + 10) - 1;
  if (uVar1 < 3) {
    uVar2 = *(undefined4 *)(&DAT_03d0fe8c + (long)(short)uVar1 * 4);
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x154) = uVar2;
  FUN_008c6998(param_1 + 0x20,param_2,param_3,param_5,param_4,param_8,0,0);
  FUN_008c7164(param_1,param_3,param_5);
  return 1;
}



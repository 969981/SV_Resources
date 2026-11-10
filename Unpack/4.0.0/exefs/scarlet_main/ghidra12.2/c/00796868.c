/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00796868; name: FUN_00796868
 */


void FUN_00796868(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_0284e338(param_1);
  iVar2 = memcmp((void *)(param_2 + 0xc),&DAT_03d0b5ef,0xc);
  if (iVar2 == 0) {
    memcpy(&local_30,(void *)(param_2 + 8),4);
    uVar1 = ((uint)local_30 & 0xff00ff00) >> 8 | ((uint)local_30 & 0xff00ff) << 8;
    FUN_0284e360(param_1,uVar1 >> 0x10 | uVar1 << 0x10);
  }
  else {
    local_30 = 0;
    uStack_28 = 0;
    memcpy(&local_30,(void *)(param_2 + 8),0x10);
    FUN_0078a208(param_1,local_30,uStack_28);
  }
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  return;
}



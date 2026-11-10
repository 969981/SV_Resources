/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007968fc; name: FUN_007968fc
 */


void FUN_007968fc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  size_t __n;
  uint local_40 [4];
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar2 = FUN_0078a34c(param_2);
  if ((uVar2 & 1) == 0) {
    local_40[0] = 0;
    FUN_0078a244(&local_30,param_2,local_40);
    uVar1 = (local_40[0] & 0xff00ff00) >> 8 | (local_40[0] & 0xff00ff) << 8;
    __n = 4;
    local_30 = CONCAT44(local_30._4_4_,uVar1 >> 0x10 | uVar1 << 0x10);
  }
  else {
    local_30 = 0;
    uStack_28 = 0;
    FUN_0078a390(local_40,param_2,&local_30);
    __n = 0x10;
  }
  memcpy((void *)(param_1 + 8),&local_30,__n);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e73a40; name: FUN_01e73a40
 */


ulong FUN_01e73a40(long param_1,void *param_2)

{
  size_t __n;
  byte local_50;
  undefined7 uStack_4f;
  size_t local_48;
  void *pvStack_40;
  long *local_38;
  
  FUN_01e73af4(&local_50,param_1 + 0x40,"RentalTeamBinary");
  if ((local_50 & 1) == 0) {
    __n = (size_t)(local_50 >> 1);
    if (local_50 >> 1 != 0) {
      memcpy(param_2,(void *)((ulong)&local_50 | 1),__n);
    }
  }
  else {
    if (local_48 - 1 < 0x84e) {
      memcpy(param_2,pvStack_40,local_48);
      __n = local_48;
    }
    else {
      __n = 0;
    }
    (**(code **)(*local_38 + 0x18))
              (local_38,pvStack_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  return __n & 0xffffffff;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a05ef8; name: FUN_02a05ef8
 */


void FUN_02a05ef8(undefined1 *param_1,long param_2)

{
  byte local_40;
  undefined7 uStack_3f;
  long local_38;
  void *pvStack_30;
  long *local_28;
  
  FUN_01e73af4(&local_40,param_2 + 400,"Rewards");
  if ((local_40 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    if (local_38 == 0xa0) {
      memcpy(param_1 + 4,pvStack_30,0xa0);
    }
    *param_1 = local_38 == 0xa0;
    (**(code **)(*local_28 + 0x18))
              (local_28,pvStack_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  return;
}



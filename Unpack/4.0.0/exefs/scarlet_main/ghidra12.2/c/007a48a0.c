/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a48a0; name: FUN_007a48a0
 */


void FUN_007a48a0(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (param_3 != 0) {
    *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_3 + 5);
    *(undefined1 *)(param_2 + 0xe) = *(undefined1 *)(param_3 + 6);
    memcpy((void *)(param_2 + 0xf),(void *)(param_3 + 7),0x10);
    if (0x16 < param_4) {
      local_30[0] = 0;
      goto LAB_007a48fc;
    }
  }
  local_30[0] = 0x10407;
LAB_007a48fc:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}



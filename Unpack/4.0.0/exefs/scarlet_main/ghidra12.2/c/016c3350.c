/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c3350; name: FUN_016c3350
 */


void FUN_016c3350(long param_1,undefined8 param_2)

{
  long lVar1;
  long local_30;
  undefined8 local_28;
  
  lVar1 = *(long *)(param_1 + 0xb0);
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x24a) & 1) != 0)) {
    local_30 = param_1;
    FUN_016c3454(&local_28,param_2,&local_30);
    FUN_016c33d4((long *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = local_28;
    FUN_012e43f8(local_28,"save hashdb",0xffffffff,0x10);
    return;
  }
  return;
}



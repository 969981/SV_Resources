/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015b83cc; name: FUN_015b83cc
 */


void FUN_015b83cc(long param_1)

{
  snprintf((char *)(param_1 + 8),0x20,"HiddenItemInfo_Manual_%d",0);
  memset((void *)(param_1 + 0x28),0x80,0x80);
  FUN_015b85dc(param_1,0);
  snprintf((char *)(param_1 + 0xa8),0x20,"HiddenItemInfo_Manual_%d",1);
  memset((void *)(param_1 + 200),0x80,0x80);
  FUN_015b85dc(param_1,1);
  snprintf((char *)(param_1 + 0x148),0x20,"HiddenItemInfo_Manual_%d",2);
  memset((void *)(param_1 + 0x168),0x80,0x80);
  FUN_015b85dc(param_1,2);
  snprintf((char *)(param_1 + 0x1e8),0x20,"HiddenItemInfo_Manual_%d",3);
  memset((void *)(param_1 + 0x208),0x80,0x80);
  FUN_015b85dc(param_1,3);
  snprintf((char *)(param_1 + 0x288),0x20,"HiddenItemInfo_Manual_%d",4);
  memset((void *)(param_1 + 0x2a8),0x80,0x80);
  FUN_015b85dc(param_1,4);
  snprintf((char *)(param_1 + 0x328),0x20,"HiddenItemInfo_Manual_%d",5);
  memset((void *)(param_1 + 0x348),0x80,0x80);
  FUN_015b85dc(param_1,5);
  snprintf((char *)(param_1 + 0x3c8),0x20,"HiddenItemInfo_Manual_%d",6);
  memset((void *)(param_1 + 1000),0x80,0x80);
  FUN_015b85dc(param_1,6);
  snprintf((char *)(param_1 + 0x468),0x20,"HiddenItemInfo_Manual_%d",7);
  memset((void *)(param_1 + 0x488),0x80,0x80);
  FUN_015b85dc(param_1,7);
  snprintf((char *)(param_1 + 0x508),0x20,"HiddenItemInfo_Manual_%d",8);
  memset((void *)(param_1 + 0x528),0x80,0x80);
  FUN_015b85dc(param_1,8);
  snprintf((char *)(param_1 + 0x5a8),0x20,"HiddenItemInfo_Manual_%d",9);
  memset((void *)(param_1 + 0x5c8),0x80,0x80);
  FUN_015b85dc(param_1,9);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a0514; name: FUN_007a0514
 */


ulong FUN_007a0514(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  uint local_60 [4];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_00796a24(param_2);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00796988(param_2);
    return uVar1;
  }
  FUN_00796868(auStack_40,param_2);
  uVar1 = FUN_0078b1a8(auStack_40);
  FUN_0284e3d4(auStack_40);
  if ((uVar1 & 1) == 0) {
    local_50 = 0;
    uStack_48 = 0;
    FUN_00796868(auStack_40,param_2);
    FUN_0078a390(local_60,auStack_40,&local_50);
    FUN_0284e3d4(auStack_40);
    uVar1 = FUN_007938a0(&uStack_48);
    return uVar1;
  }
  local_60[0] = 0;
  FUN_00796868(auStack_40,param_2);
  FUN_0078a244(&local_50,auStack_40,local_60);
  FUN_0284e3d4(auStack_40);
  return (ulong)local_60[0];
}



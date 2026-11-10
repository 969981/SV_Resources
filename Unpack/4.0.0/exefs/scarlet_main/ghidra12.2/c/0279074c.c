/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0279074c; name: FUN_0279074c
 */


void FUN_0279074c(long param_1)

{
  uint uVar1;
  long local_28;
  
  uVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x98)) {
  case 2:
    break;
  case 3:
  case 4:
    FUN_0278e49c(param_1);
    uVar1 = 1;
    break;
  case 5:
    uVar1 = FUN_027907f4(param_1);
    FUN_02790874(&local_28,param_1,~uVar1 & 1);
    FUN_0186e1d8(param_1 + 0x1d0,0);
    uVar1 = (uint)(local_28 == 0);
    *(long *)(param_1 + 0x1d0) = local_28;
    if (local_28 == 0) {
      FUN_0278e49c(param_1);
    }
    break;
  default:
    goto switchD_02790788_default;
  }
  *(uint *)(param_1 + 0x98) = uVar1;
switchD_02790788_default:
  return;
}



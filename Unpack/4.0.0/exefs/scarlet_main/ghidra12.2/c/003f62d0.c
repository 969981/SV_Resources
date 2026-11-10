/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f62d0; name: FUN_003f62d0
 */


undefined8 FUN_003f62d0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_28 [3];
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  local_28[1] = 0;
  local_28[0] = param_2;
  lVar1 = FUN_00451a40(*(undefined8 *)(param_1 + 0x10),local_28);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}



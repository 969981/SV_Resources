/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c6260; name: FUN_001c6260
 */


undefined8 FUN_001c6260(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_8;
  int local_4;
  
  local_8 = 4;
  local_4 = 0;
  iVar1 = nnsocketGetSockOpt(param_1,0xffff,0x1007,&local_4,&local_8);
  if (iVar1 != 0) {
    local_4 = nnsocketGetLastErrno();
  }
  uVar2 = 1;
  if ((local_4 != 0) && (local_4 != 0x6a)) {
    uVar2 = 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_4;
  }
  return uVar2;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035b5b0; name: FUN_0035b5b0
 */


bool FUN_0035b5b0(undefined8 param_1)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)PTR_DAT_047cce70 == 0) {
    local_4 = 0;
    iVar1 = nnsocketSetSockOpt(param_1,0x29,0x1b,&local_4,4);
    return iVar1 == 0;
  }
  local_8 = 1;
  nnsocketSetSockOpt(param_1,0x29,0x1b,&local_8,4);
  return false;
}



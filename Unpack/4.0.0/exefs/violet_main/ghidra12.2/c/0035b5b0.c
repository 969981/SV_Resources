/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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



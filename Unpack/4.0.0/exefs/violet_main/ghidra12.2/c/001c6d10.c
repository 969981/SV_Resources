/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c6d10; name: FUN_001c6d10
 */


void FUN_001c6d10(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [128];
  undefined4 local_4;
  
  uVar3 = *param_1;
  local_4 = 1;
  iVar1 = nnsocketSetSockOpt(param_2,0xffff,0x800,&local_4,4);
  if (iVar1 < 0) {
    uVar2 = nnsocketGetLastErrno();
    uVar2 = FUN_001e0bc8(uVar2,auStack_a0,0x80);
    FUN_001db818(uVar3,"Could not set SO_NOSIGPIPE: %s\n",uVar2);
  }
  return;
}



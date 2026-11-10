/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d93f4; name: FUN_021d93f4
 */


bool FUN_021d93f4(long param_1,ulong param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong local_18;
  
  if (DAT_0485942c == '\x01') {
    local_18 = param_2;
    lVar2 = FUN_026f74e0(*(undefined8 *)(param_1 + 0x88),param_1 + 0x80,&local_18);
    if ((param_1 + 0x80 == lVar2) || (param_2 < *(ulong *)(lVar2 + 0x20))) {
      bVar1 = false;
    }
    else {
      bVar1 = param_2 + param_3 <= *(ulong *)(lVar2 + 0x20) + (ulong)*(uint *)(lVar2 + 0x28);
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



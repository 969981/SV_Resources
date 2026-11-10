/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0086f828; name: FUN_0086f828
 */


void FUN_0086f828(long param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x18);
  lVar3 = *plVar2;
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + (long)plVar2;
  }
  *(undefined4 *)(lVar1 + (ulong)param_2 * 0x30 + 0x28) = param_3;
  return;
}



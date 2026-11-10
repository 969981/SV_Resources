/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020f6ebc; name: FUN_020f6ebc
 */


void FUN_020f6ebc(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined6 uStack_40;
  undefined2 local_3a;
  undefined6 uStack_38;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_047d3a88 + 8);
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    uStack_38 = 0;
    uStack_40 = 0;
    local_3a = 0;
    lVar1 = FUN_019c9f30(&uStack_40,7,param_2 + 0x847,7);
    if (lVar1 != 0) {
      *(undefined2 *)((long)&uStack_40 + (lVar1 - (ulong)(lVar1 == 7)) * 2) = 0;
    }
    FUN_01e72ebc(param_1,lVar2,&uStack_40);
  }
  return;
}



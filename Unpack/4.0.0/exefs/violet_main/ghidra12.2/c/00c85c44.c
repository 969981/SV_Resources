/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c85c44; name: FUN_00c85c44
 */


void FUN_00c85c44(ulong param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x30) + 0x58);
  if ((param_3 == 0x3f) &&
     (param_1 = param_1 & 0xffffffff, *(char *)(*(long *)(param_2 + 0x30) + 0xde4) != '\0')) {
    param_1 = 0;
  }
  if (*(char *)(lVar2 + 0x32) != '\0') {
    lVar1 = *(long *)(lVar2 + (long)param_3 * 8 + 0xb0);
    while (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + 0x1d0);
      FUN_008e5924(param_1,lVar2,lVar1,2);
      lVar1 = lVar3;
    }
  }
  return;
}



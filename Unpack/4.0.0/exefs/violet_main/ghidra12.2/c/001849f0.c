/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001849f0; name: FUN_001849f0
 */


void FUN_001849f0(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  
  puVar2 = PTR_DAT_047cb918;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = 0x40000000 / param_2;
  }
  lVar3 = 0;
  do {
    iVar4 = *(int *)(puVar2 + (ulong)(*(int *)(param_1 + lVar3 * 4) * uVar1 >> 0x11) * 4) >> 5;
    if (0xaff < iVar4) {
      iVar4 = 0xb00;
    }
    *(short *)(param_3 + lVar3 * 2) = (short)iVar4;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x100);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ee320; name: FUN_008ee320
 */


void FUN_008ee320(code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_047d26f0;
  puVar1 = PTR_DAT_047d26e8;
  if (0 < *(int *)PTR_DAT_047d26f0) {
    lVar3 = 0;
    lVar4 = 0x28;
    do {
      (*param_1)(*(long *)puVar1 + lVar4,*(long *)puVar1 + lVar4 + 8,param_2);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0xa8;
    } while (lVar3 < *(int *)puVar2);
  }
  return;
}



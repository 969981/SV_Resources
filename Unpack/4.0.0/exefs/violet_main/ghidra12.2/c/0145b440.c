/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0145b440; name: FUN_0145b440
 */


void FUN_0145b440(long param_1,uint param_2,void *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_88 [88];
  
  lVar2 = *(long *)(param_1 + 0x58);
  memcpy(auStack_88,param_3,0x58);
  lVar1 = lVar2 + (ulong)param_2 * 0x58;
  *(undefined1 *)(lVar2 + (ulong)param_2 + 0x8c8) = 1;
  memcpy((void *)(lVar1 + 0x8e0),auStack_88,0x58);
  *(undefined **)(lVar1 + 0x8e0) = PTR_LAB_047d2690;
  return;
}


